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
}

void AYgamePlayerController::OnPossess(APawn* PawnToPossess)
{
	Main_Body = PawnToPossess;
	if (!Main_Body->IsValidLowLevel()) {
		UE_LOG(LogTemp, Error, TEXT("Possess Error"));
	}
	FloatingMovement = Cast<UFloatingPawnMovement>(Main_Body->GetMovementComponent());
}

void AYgamePlayerController::Click_Start()
{
	UE_LOG(LogTemp, Display, TEXT("ClickStart"));
	StopMovement();
}

void AYgamePlayerController::Click_Triger()
{
	UE_LOG(LogTemp, Display, TEXT("Click_Triger"));
	FHitResult Hit;

	if (true == GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit)) {
		Location = Hit.Location;
	}

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Location);



}

void AYgamePlayerController::Click_Complete()
{
	UE_LOG(LogTemp, Display, TEXT("Click_Complete"));
	FVector Direction = (Location - Main_Body->GetActorLocation()).GetSafeNormal();
	FVector Velocity = Direction * MoveSpeed;  // MoveSpeed는 원하는 이동 속도
	FloatingMovement->Velocity = Velocity;
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, Location, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
}

void AYgamePlayerController::Click_Cancel()
{
	UE_LOG(LogTemp, Display, TEXT("Click_Cancel"));
	StopMovement();
}

void AYgamePlayerController::RClick_Start()
{
}

void AYgamePlayerController::RClick_Triger()
{
	UE_LOG(LogTemp, Display, TEXT("RClick_Triger"));
	FHitResult Hit;

	if (true == GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit)) {
		Location = Hit.Location;
	}

	APawn* Body = GetPawn();

	if (Body->IsValidLowLevel()) {
		FVector WorldDirection = (Location - Body->GetActorLocation()).GetSafeNormal();
		Body->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AYgamePlayerController::RClick_Complete()
{
}

void AYgamePlayerController::RClick_Cancel()
{
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

	//UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent);
	//EIC->BindAction(OnClick, ETriggerEvent::Started, this, &AYgamePlayerController::Click_Start);
	//EIC->BindAction(OnClick, ETriggerEvent::Triggered, this, &AYgamePlayerController::Click_Triger);
	//EIC->BindAction(OnClick, ETriggerEvent::Completed, this, &AYgamePlayerController::Click_Complete);
	//EIC->BindAction(OnClick, ETriggerEvent::Canceled, this, &AYgamePlayerController::Click_Cancel);

	//EIC->BindAction(ROnClick, ETriggerEvent::Started, this, &AYgamePlayerController::RClick_Start);
	//EIC->BindAction(ROnClick, ETriggerEvent::Triggered, this, &AYgamePlayerController::RClick_Triger);
	//EIC->BindAction(ROnClick, ETriggerEvent::Completed, this, &AYgamePlayerController::RClick_Complete);
	//EIC->BindAction(ROnClick, ETriggerEvent::Canceled, this, &AYgamePlayerController::RClick_Cancel);
}
