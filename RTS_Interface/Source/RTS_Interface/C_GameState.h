// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "C_GameState.generated.h"

/**
 * 
 */
UCLASS()
class RTS_INTERFACE_API AC_GameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintCallable, EditAnywhere)
	TArray<class ASelection_Unit*> Selected_Units;
};
