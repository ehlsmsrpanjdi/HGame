// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "YgamePlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class AYgamePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AYgamePlayerController();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	UInputAction* OnClick = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	UInputAction* ROnClick = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	UInputAction* UpWheel = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	UInputAction* DownWheel = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	UInputMappingContext* MainContext = nullptr;

protected:
	/** True if the controlled character should navigate to the mouse cursor. */

	virtual void SetupInputComponent() override;

	// To add mapping context
	virtual void BeginPlay();

	void OnPossess(APawn* PawnToPossess);

	void RClick_Start();
	void RClick_Triger();
	void RClick_Complete();

	void Wheel_Up();
	void Wheel_Down();
	void Wheel_End();

	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	float MoveSpeed = 600.f;

	UPROPERTY()
	float WheelTime = 0.0f;

	UPROPERTY()
	TObjectPtr<class ACameraPawn> Main_Body = nullptr;
	UPROPERTY()
	class UFloatingPawnMovement* FloatingMovement = nullptr;
};


