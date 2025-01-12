// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Widget/C_SelectAreaWidget.h"

void UC_SelectAreaWidget::AddWidget(UUserWidget* _Widget)
{
	HorizontalBox->AddChildToHorizontalBox(_Widget);
}

void UC_SelectAreaWidget::RemoveWidget(UUserWidget* _Widget)
{
	HorizontalBox->RemoveChild(_Widget);
}
