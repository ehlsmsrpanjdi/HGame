// Copyright Epic Games, Inc. All Rights Reserved.

#include "YgamePlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "YgameCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "CameraPawn/CameraPawn.h"
#include <GameFramework/FloatingPawnMovement.h>

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AYgamePlayerController::AYgamePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
}

void AYgamePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	int32 x, y;
	GetViewportSize(x, y);
	ViewPortSize = FVector2D(x, y);
}

void AYgamePlayerController::OnPossess(APawn* PawnToPossess)
{
	Super::OnPossess(PawnToPossess);
	Main_Body = Cast<ACameraPawn>(PawnToPossess);
	if (!Main_Body->IsValidLowLevel()) {
		UE_LOG(LogTemp, Error, TEXT("Possess Error"));
	}
	FloatingMovement = Cast<UFloatingPawnMovement>(Main_Body->GetMovementComponent());
}
void AYgamePlayerController::RClick_Start()
{
	StopMovement();
}

void AYgamePlayerController::RClick_Triger()
{
	FHitResult Hit;

	if (true == GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit)) {
		Location = Hit.Location;
	}
	//FVector Direction = (Location - Main_Body->GetActorLocation()).GetSafeNormal();
	//FVector Velocity = Direction * MoveSpeed;  // MoveSpeed는 원하는 이동 속도
	//FloatingMovement->Velocity = Velocity;
}

void AYgamePlayerController::RClick_Complete()
{
	//FVector Direction = (Location - Main_Body->GetActorLocation()).GetSafeNormal();
	//FVector Velocity = Direction * MoveSpeed;  // MoveSpeed는 원하는 이동 속도
	//FloatingMovement->Velocity = Velocity;
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this,
		FXCursor, Location, FRotator::ZeroRotator,
		FVector(1.f, 1.f, 1.f), true, true,
		ENCPoolMethod::None, true);
}

void AYgamePlayerController::Wheel_Up()
{
	Main_Body->CameraZoom(100.f);
}

void AYgamePlayerController::Wheel_Down()
{
	Main_Body->CameraZoom(-100.f);
}

void AYgamePlayerController::Wheel_End()
{
	WheelTime = 0.0f;
}

void AYgamePlayerController::RollLeft()
{
	//Main_Body->
}

void AYgamePlayerController::RollRight()
{
}

void AYgamePlayerController::Mouse_Move()
{
	float MouseX, MouseY;
	if (GetMousePosition(MouseX, MouseY))
	{
		MP = FVector2D(MouseX, MouseY) / ViewPortSize;
		UE_LOG(LogTemp, Display, TEXT("%s"), *FText::FromString(MP.ToString()).ToString());
		if (MP.X>= 0.95) {
			FloatingMovement->Velocity = FVector(FloatingMovement->Velocity.Y, MoveSpeed, 0.f);
		}
		else if (MP.X <= 0.05) {
			FloatingMovement->Velocity = FVector(FloatingMovement->Velocity.Y , -MoveSpeed, 0.f);
		}
		else {
			FloatingMovement->Velocity = FVector(FloatingMovement->Velocity.X, 0.f,0.f);
		}
		if (MP.Y >= 0.95) {
			FloatingMovement->Velocity = FVector(-MoveSpeed, FloatingMovement->Velocity.X, 0.f);

		}
		else if (MP.Y <= 0.05) {
			FloatingMovement->Velocity = FVector(MoveSpeed, FloatingMovement->Velocity.X , 0.f);
			//FloatingMovement->Velocity = FVector(600.f, 0.f, 0.f);
		}
		else {
			FloatingMovement->Velocity = FVector(0.f, FloatingMovement->Velocity.Y, 0.f);
		}
	}
}



void AYgamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (OnClick->IsValidLowLevel()) {
		UE_LOG(LogTemp, Display, TEXT("Click"));
	}
	if (MainContext->IsValidLowLevel()) {
		UE_LOG(LogTemp, Display, TEXT("Mapping"));
	}
	UEnhancedInputLocalPlayerSubsystem* EIS = Cast<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()->GetSubsystem< UEnhancedInputLocalPlayerSubsystem>());

	if (EIS->IsValidLowLevel()) {
		EIS->AddMappingContext(MainContext, 0);
	}

	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent);

	EIC->BindAction(ROnClick, ETriggerEvent::Started, this, &AYgamePlayerController::RClick_Start);
	EIC->BindAction(ROnClick, ETriggerEvent::Triggered, this, &AYgamePlayerController::RClick_Triger);
	EIC->BindAction(ROnClick, ETriggerEvent::Completed, this, &AYgamePlayerController::RClick_Complete);

	EIC->BindAction(UpWheel, ETriggerEvent::Triggered, this, &AYgamePlayerController::Wheel_Up);
	EIC->BindAction(UpWheel, ETriggerEvent::Completed, this, &AYgamePlayerController::Wheel_End);

	EIC->BindAction(DownWheel, ETriggerEvent::Triggered, this, &AYgamePlayerController::Wheel_Down);
	EIC->BindAction(DownWheel, ETriggerEvent::Completed, this, &AYgamePlayerController::Wheel_End);

	EIC->BindAction(RightWheel, ETriggerEvent::Triggered, this, &AYgamePlayerController::RollRight);
	EIC->BindAction(LeftWheel, ETriggerEvent::Triggered, this, &AYgamePlayerController::RollLeft);

	EIC->BindAction(IA_Mouse, ETriggerEvent::Triggered, this, &AYgamePlayerController::Mouse_Move);


}
