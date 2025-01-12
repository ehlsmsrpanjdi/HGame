// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Instance.h"
#include "C_GameState.h"

TObjectPtr<AC_GameState> UC_Instance::GetGameState()
{
    if (G_State == nullptr) {
        G_State = Cast<AC_GameState>(GetWorld()->GetGameState());
    }
    return G_State;
}
