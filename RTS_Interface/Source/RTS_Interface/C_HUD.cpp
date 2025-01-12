// Fill out your copyright notice in the Description page of Project Settings.

#include "C_HUD.h"
#include "RTS_InterfacePlayerController.h"
#include "C_Game/C_Unit/Selection_Pawn.h"
AC_HUD::AC_HUD()
{
}

void AC_HUD::BeginPlay()
{
	Super::BeginPlay();
	RTS_Controller = Cast<ARTS_InterfacePlayerController>(GetOwningPlayerController());
	if (RTS_Controller->IsValidLowLevel() == false) {
		UE_LOG(LogTemp, Error, TEXT("controleraweoijalskd"));
	}
}

void AC_HUD::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

}

void AC_HUD::DrawHUD()
{
	Super::DrawHUD();
	if (bIsDrawing == true) {
		CurrentMousePos = FVector2D(RTS_Controller->ReturnMousePos()[0] - StartMousePos.X, RTS_Controller->ReturnMousePos()[1] - StartMousePos.Y);
		FLinearColor DrawColor(0.3f, 1.0f, 0.3f, 0.4f);
		DrawRect(DrawColor, StartMousePos.X, StartMousePos.Y, CurrentMousePos.X, CurrentMousePos.Y);
	}
}

void AC_HUD::OpenClick(FVector2D _StartMousePos)
{
	StartMousePos = _StartMousePos;
	bIsDrawing = true;
}

void AC_HUD::EndClick()
{
	//GetActorsInSelectionRectangle(StartMousePos, CurrentMousePos, SelectedActors);
	bIsDrawing = false;
	FInputModeGameOnly GameOnly;
	RTS_Controller->SetInputMode(GameOnly);
}
