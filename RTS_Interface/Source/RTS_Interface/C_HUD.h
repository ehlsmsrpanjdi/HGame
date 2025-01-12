// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "C_HUD.generated.h"

/**
 * 
 */
UCLASS()
class RTS_INTERFACE_API AC_HUD : public AHUD
{
	GENERATED_BODY()
	friend class ARTS_InterfacePlayerController;
public:
	AC_HUD();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float _DeltaTime) override;
	virtual void DrawHUD() override;
	void OpenClick(FVector2D _StartMousePos);
	void HoldClick(FVector2D _CurrentMousePos);
	void EndClick();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector2D StartMousePos;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector2D CurrentMousePos;



protected:
	UPROPERTY()
	bool bIsDrawing = false;
	UPROPERTY()
	bool bEndDrawing = false;
	UPROPERTY()
	TObjectPtr<class ARTS_InterfacePlayerController> RTS_Controller = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<class UC_SelectAreaWidget> AreaWidgetClass;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<class UC_SelectAreaWidget> AreaWidget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TArray<class ASelection_Unit*> Selected_Units;
};
