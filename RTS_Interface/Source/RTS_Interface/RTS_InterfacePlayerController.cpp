// Copyright Epic Games, Inc. All Rights Reserved.

#include "RTS_InterfacePlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "RTS_InterfaceCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "C_HUD.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ARTS_InterfacePlayerController::ARTS_InterfacePlayerController()
{
	bShowMouseCursor = true;
	//DefaultMouseCursor = EMouseCursor::Default;
}

void ARTS_InterfacePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	GetViewportSize(ViewSize[0], ViewSize[1]);
	RTS_HUD = Cast<AC_HUD>(GetHUD());
	if (RTS_HUD->IsValidLowLevel() == false) {
		//UE_LOG(LogTemp, Warning, TEXT("HUD ÀÌ»óÇÔ"));
	}
}

void ARTS_InterfacePlayerController::GetMousePos(float _DeltaTime)
{
	GetMousePosition(MLocation[0], MLocation[1]);
	float fx = MLocation[0] / ViewSize[0];
	float fy = MLocation[1] / ViewSize[1];
	if (fx > 0.94) {
		Move(FVector(0.f, MouseSensetive * _DeltaTime, 0.f));
	}
	else if (fx < 0.06) {
		Move(FVector(0.f, -MouseSensetive * _DeltaTime, 0.f));
	}
	if (fy > 0.94) {
		Move(FVector(-MouseSensetive * _DeltaTime, 0.f, 0.f));
	}
	else if (fy < 0.06) {
		Move(FVector(MouseSensetive * _DeltaTime, 0.f, 0.f));
	}
}

void ARTS_InterfacePlayerController::ZoomIn()
{
	float ftime = GetWorld()->GetDeltaSeconds();
	Move(FVector(0.f, 0.f, MouseSensetive * 1.5f * ftime));
}

void ARTS_InterfacePlayerController::ZoomOut()
{
	float ftime = GetWorld()->GetDeltaSeconds();
	Move(FVector(0.f, 0.f, MouseSensetive * -1.5f * ftime));
}

void ARTS_InterfacePlayerController::LOpenClick()
{
	RTS_HUD->OpenClick(FVector2D(MLocation[0], MLocation[1]));
	UE_LOG(LogTemp, Display, TEXT("Click"));
}

void ARTS_InterfacePlayerController::LHoldClick()
{
	RTS_HUD->HoldClick(FVector2D(MLocation[0], MLocation[1]));
	UE_LOG(LogTemp, Display, TEXT("OnClick"));
}

void ARTS_InterfacePlayerController::LEndClick()
{
	RTS_HUD->EndClick();
}

void ARTS_InterfacePlayerController::Move(FVector _Vec)
{
	GetPawn()->AddActorLocalOffset(_Vec);
}

void ARTS_InterfacePlayerController::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);
	GetMousePos(_DeltaTime);
}

void ARTS_InterfacePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(Input_mc, 0);
		UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(InputComponent);
		Input->BindAction(Input_WheelUp, ETriggerEvent::Triggered, this, &ARTS_InterfacePlayerController::ZoomIn);
		Input->BindAction(Input_WheelDown, ETriggerEvent::Triggered, this, &ARTS_InterfacePlayerController::ZoomOut);
		Input->BindAction(Input_LeftClick, ETriggerEvent::Started, this, &ARTS_InterfacePlayerController::LOpenClick);
		Input->BindAction(Input_LeftClick, ETriggerEvent::Ongoing, this, &ARTS_InterfacePlayerController::LHoldClick);
		Input->BindAction(Input_LeftClick, ETriggerEvent::Completed, this, &ARTS_InterfacePlayerController::LEndClick);
	}
}
