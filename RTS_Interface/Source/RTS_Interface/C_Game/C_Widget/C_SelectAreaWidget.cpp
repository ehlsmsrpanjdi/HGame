// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Widget/C_SelectAreaWidget.h"
#include "Components/CanvasPanelSlot.h"
void UC_SelectAreaWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UCanvasPanelSlot* HSlot = Cast<UCanvasPanelSlot>(HorizontalBox->Slot);
	if (true == HSlot->IsValidLowLevel()) {
		HSlot->SetAnchors(FAnchors(0.5f, 1.0f, 0.5f, 1.0f));
		HSlot->SetPosition(FVector2D(-HorizentalSize.X/2.f, -HorizentalSize.Y * 2));
		HSlot->SetSize(HorizentalSize);
	}
}

void UC_SelectAreaWidget::AddWidget(UUserWidget* _Widget)
{
	HorizontalBox->AddChildToHorizontalBox(_Widget);
}

void UC_SelectAreaWidget::RemoveWidget(UUserWidget* _Widget)
{
	HorizontalBox->RemoveChild(_Widget);
}

void UC_SelectAreaWidget::RemoveAll()
{
	HorizontalBox->ClearChildren();
}


