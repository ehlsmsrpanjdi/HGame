// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "C_UnitWidget.generated.h"

/**
 * 
 */
UCLASS()
class RTS_INTERFACE_API UC_UnitWidget : public UUserWidget
{
	GENERATED_BODY()
	friend class ASelection_Unit;
public:
	virtual void NativeConstruct() override;

	void SetUnit(class ASelection_Unit* _Unit);
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget))
	TObjectPtr<UImage> Unit_Image = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<class ASelection_Unit> Widget_Unit = nullptr;


	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent);
	UPROPERTY()
	FVector2D ImageSize = FVector2D(150.f, 150.f);

	UPROPERTY()
	TObjectPtr<class AC_HUD> MyHUD = nullptr;
};
