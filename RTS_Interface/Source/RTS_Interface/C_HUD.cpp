// Fill out your copyright notice in the Description page of Project Settings.

#include "C_HUD.h"
#include "RTS_InterfacePlayerController.h"
#include "C_Game/C_Unit/Selection_Unit.h"
#include "C_Game/C_Widget/C_SelectAreaWidget.h"
#include "C_Game/C_Widget/C_UnitWidget.h"
#include "C_Instance.h"
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
	AreaWidget = CreateWidget<UC_SelectAreaWidget>(GetWorld(), AreaWidgetClass);
	if (AreaWidget->IsValidLowLevel() == true) {
		AreaWidget->AddToViewport();
	}
	FInputModeGameAndUI GameAndUI;
	GameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	RTS_Controller->SetInputMode(GameAndUI);

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
	if (bEndDrawing == true) {
		bEndDrawing = false;
		Cast<UC_Instance>(GetGameInstance())->GetBaseUnit();
		for (ASelection_Unit* Unit : Selected_Units) {
			Unit->IsSelected(false);
			AreaWidget->RemoveWidget(Unit->Unit_Widget);
		}
		Selected_Units.Empty();

		GetActorsInSelectionRectangle(StartMousePos, CurrentMousePos + StartMousePos, Selected_Units, false, true);

		for (ASelection_Unit* Unit: Selected_Units) {
			Unit->IsSelected(true);
			AreaWidget->AddWidget(Unit->Unit_Widget);
		}
	}
}

void AC_HUD::OpenClick(FVector2D _StartMousePos)
{
	StartMousePos = _StartMousePos;
	bIsDrawing = true;

	FInputModeGameAndUI GameAndUI;
	GameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	RTS_Controller->SetInputMode(GameAndUI);

}

void AC_HUD::EndClick()
{
	bIsDrawing = false;
	bEndDrawing = true;
	FInputModeGameAndUI GameAndUI;
	GameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	RTS_Controller->SetInputMode(GameAndUI);

}
