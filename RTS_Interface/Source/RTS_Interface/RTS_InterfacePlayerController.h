// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include <InputAction.h>
#include "RTS_InterfacePlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ARTS_InterfacePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ARTS_InterfacePlayerController();


protected:
	virtual void Tick(float _DeltaTime) override;
	virtual void SetupInputComponent() override;
	virtual void BeginPlay();

	UFUNCTION(BlueprintCallable)
	void GetMousePos(float _DeltaTime);
	void ZoomIn();
	void ZoomOut();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = true))
	TObjectPtr<UInputMappingContext> Input_mc;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = true))
	TObjectPtr<UInputAction> Input_WheelUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = true))
	TObjectPtr<UInputAction> Input_WheelDown;


	//void SomeCallbackFunc(const FInputActionInstance& Instance)
	//{
	//	FVector VectorValue = Instance.GetValue().Get<FVector>();
	//	// 여기서 멋진 작업을 수행하세요!
	//}
private:
	UPROPERTY()
	double MLocation[2];
	UPROPERTY()
	int32 ViewSize[2];
	virtual void Move(FVector _Vec);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = true))
	float MouseSensetive = 600.f;
};


