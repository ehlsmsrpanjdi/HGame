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
	friend class UC_Instance;
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class ASelection_Unit*> All_Bast_Unit;
};
