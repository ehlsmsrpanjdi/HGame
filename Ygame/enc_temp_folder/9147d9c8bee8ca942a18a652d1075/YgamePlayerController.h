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
	UInputMappingContext* MainContext = nullptr;

protected:
	/** True if the controlled character should navigate to the mouse cursor. */

	virtual void SetupInputComponent() override;

	// To add mapping context
	virtual void BeginPlay();

	void OnPossess(APawn* PawnToPossess);

	void Click_Start();
	void Click_Triger();
	void Click_Complete();
	void Click_Cancel();

	void RClick_Start();
	void RClick_Triger();
	void RClick_Complete();
	void RClick_Cancel();

	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	float MoveSpeed = 600.f;
	UPROPERTY()
	TObjectPtr<APawn> Main_Body = nullptr;
	UPROPERTY()
	class UFloatingPawnMovement* FloatingMovement = nullptr;
};


