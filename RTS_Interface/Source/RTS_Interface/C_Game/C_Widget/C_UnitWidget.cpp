// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Widget/C_UnitWidget.h"
#include "../C_Unit/Selection_Unit.h"
#include "Engine/Texture2D.h"
void UC_UnitWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UC_UnitWidget::SetUnit(ASelection_Unit* _Unit)
{
	Widget_Unit = _Unit;
	Unit_Image->SetBrushFromTexture(Widget_Unit->Unit_Image);
}
