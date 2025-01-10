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
}

void ARTS_InterfacePlayerController::GetMousePos()
{
	GetMousePosition(MLocation[0], MLocation[1]);
	float fx = MLocation[0] / ViewSize[0];
	float fy = MLocation[1] / ViewSize[1];
	float ftime = GetWorld()->GetDeltaSeconds();
	if (fx > 0.94) {
		Move(FVector(0.f, 600.f * ftime, 0.f));
	}
	else if (fx < 0.06) {
		Move(FVector(0.f, -600.f * ftime, 0.f));
	}
	if (fy > 0.94) {
		Move(FVector(-600.f * ftime, 0.f, 0.f));
	}
	else if (fy < 0.06) {
		Move(FVector(600.f * ftime, 0.f, 0.f));
	}
}

void ARTS_InterfacePlayerController::Move(FVector _Vec)
{
	GetPawn()->AddActorLocalOffset(_Vec);
}

void ARTS_InterfacePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	//// Add Input Mapping Context
	//if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	//{
	//	Subsystem->AddMappingContext(Input_mc, 0);
	//	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(Subsystem);
	//	Input->BindAction(Input_WheelUp, ETriggerEvent::Triggered, this, &ARTS_InterfacePlayerController::SomeCallbackFunc);
	//}
}

	//// Add Input Mapping Context
	//if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	//{
	//	Subsystem->AddMappingContext(DefaultMappingContext, 0);
	//}

	//// Set up action bindings
	//if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	//{
	//	// Setup mouse input events
	//	EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ARTS_InterfacePlayerController::OnInputStarted);
	//	EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ARTS_InterfacePlayerController::OnSetDestinationTriggered);
	//	EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ARTS_InterfacePlayerController::OnSetDestinationReleased);
	//	EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &ARTS_InterfacePlayerController::OnSetDestinationReleased);

	//	// Setup touch input events
	//	EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Started, this, &ARTS_InterfacePlayerController::OnInputStarted);
	//	EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Triggered, this, &ARTS_InterfacePlayerController::OnTouchTriggered);
	//	EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Completed, this, &ARTS_InterfacePlayerController::OnTouchReleased);
	//	EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Canceled, this, &ARTS_InterfacePlayerController::OnTouchReleased);
	//}
	//else
	//{
	//	UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	//}

