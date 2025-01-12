// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_Instance.generated.h"

/**
 * 
 */
UCLASS()
class RTS_INTERFACE_API UC_Instance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	TObjectPtr<class AC_GameState> GetGameState();
	TObjectPtr<class AC_GameState> G_State = nullptr;

	void AddBaseUnit(class ASelection_Unit* _Actor);
	TArray<class ASelection_Unit*>& GetBaseUnit();
};
