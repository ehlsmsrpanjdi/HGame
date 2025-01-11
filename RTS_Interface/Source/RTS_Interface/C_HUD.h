// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "C_Game/Interface/WidgetInterface.h"
#include "C_HUD.generated.h"

/**
 * 
 */
UCLASS()
class RTS_INTERFACE_API AC_HUD : public AHUD, public IWidgetInterface
{
	GENERATED_BODY()
	
public:
	AC_HUD();
protected:
	virtual void BeginPlay() override;
	virtual void OnClick_Implementation() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector2D StartMousePos;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector2D CurrentMousePos;
};
