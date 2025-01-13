// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Widget/C_UnitWidget.h"
#include "../C_Unit/Selection_Unit.h"
#include "Engine/Texture2D.h"
void UC_UnitWidget::NativeConstruct()
{
	Super::NativeConstruct();
    SetIsFocusable(true);
	Unit_Image->SetDesiredSizeOverride(ImageSize);
	SetPadding(3.0f);
}

void UC_UnitWidget::SetUnit(ASelection_Unit* _Unit)
{
	Widget_Unit = _Unit;
	Unit_Image->SetBrushFromTexture(Widget_Unit->Unit_Image);
}

FReply UC_UnitWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        // 마우스 왼쪽 버튼 클릭 시 동작
        UE_LOG(LogTemp, Warning, TEXT("Left Mouse Button Clicked on Widget"));

        // 이벤트를 처리하고 소비
        return FReply::Handled();
    }

    // 이벤트를 처리하지 않고 전달
    return FReply::Unhandled();
}
