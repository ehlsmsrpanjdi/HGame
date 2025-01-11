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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TArray<class ASelection_Pawn*> SelectedActors;

private:
	UPROPERTY()
	bool bIsDrawing = false;
	UPROPERTY()
	TObjectPtr<class ARTS_InterfacePlayerController> RTS_Controller = nullptr;
};
