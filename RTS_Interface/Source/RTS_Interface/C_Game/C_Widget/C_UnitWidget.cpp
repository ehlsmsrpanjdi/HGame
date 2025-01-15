// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Widget/C_UnitWidget.h"
#include "../C_Unit/Selection_Unit.h"
#include "Engine/Texture2D.h"
#include "GameFramework/PlayerController.h"
#include "../../C_HUD.h"
void UC_UnitWidget::NativeConstruct()
{
	Super::NativeConstruct();
    SetIsFocusable(true);
	Unit_Image->SetDesiredSizeOverride(ImageSize);
	SetPadding(3.0f);
    MyHUD = Cast<AC_HUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

void UC_UnitWidget::SetUnit(ASelection_Unit* _Unit)
{
	Widget_Unit = _Unit;
	Unit_Image->SetBrushFromTexture(Widget_Unit->Unit_Image);
}

FReply UC_UnitWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
    if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        MyHUD->WidgetClick(Widget_Unit);
        return FReply::Handled();
    }

    // 이벤트를 처리하지 않고 전달
    return FReply::Unhandled();
}

void UC_UnitWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    Widget_Unit->WidgetHover(true);
}

void UC_UnitWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
    Widget_Unit->WidgetHover(false);
}
