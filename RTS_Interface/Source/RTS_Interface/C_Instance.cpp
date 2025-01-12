// Fill out your copyright notice in the Description page of Project Settings.

#include "C_Instance.h"
#include "C_Game/C_Unit/Selection_Unit.h"
#include "C_GameState.h"

TObjectPtr<AC_GameState> UC_Instance::GetGameState()
{
    if (G_State == nullptr) {
        G_State = Cast<AC_GameState>(GetWorld()->GetGameState());
    }
    return G_State;
}

void UC_Instance::AddBaseUnit(ASelection_Unit* _Actor)
{
    GetGameState()->All_Bast_Unit.Add(_Actor);
}

TArray<class ASelection_Unit*>& UC_Instance::GetBaseUnit()
{
    return GetGameState()->All_Bast_Unit;
}
