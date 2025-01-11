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

void AC_HUD::DrawHUD()
{
	Super::DrawHUD();
	if (bIsDrawing == true) {
		FLinearColor DrawColor(0.3f, 1.0f, 0.3f, 0.4f);
		DrawRect(DrawColor, StartMousePos.X, StartMousePos.Y, CurrentMousePos.X, CurrentMousePos.Y);
	}
}

void AC_HUD::OpenClick(FVector2D _StartMousePos)
{
	StartMousePos = _StartMousePos;
	bIsDrawing = true;
}

void AC_HUD::HoldClick(FVector2D _CurrentMousePos)
{
	CurrentMousePos = _CurrentMousePos - StartMousePos;
}

void AC_HUD::EndClick()
{
	GetActorsInSelectionRectangle(StartMousePos, CurrentMousePos, SelectedActors);
	bIsDrawing = false;
}
