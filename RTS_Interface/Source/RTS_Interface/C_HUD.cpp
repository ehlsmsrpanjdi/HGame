// Fill out your copyright notice in the Description page of Project Settings.


#include "C_HUD.h"

AC_HUD::AC_HUD()
{
}

void AC_HUD::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("BeginPlayasdfasdfasdfasdf"));
}

void AC_HUD::OnClick_Implementation()
{
	UE_LOG(LogTemp, Display, TEXT("sfadafddfas"));
}
