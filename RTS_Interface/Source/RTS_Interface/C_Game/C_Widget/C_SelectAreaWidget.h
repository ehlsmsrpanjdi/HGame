// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/CanvasPanel.h>
#include <Components/HorizontalBox.h>
#include "C_SelectAreaWidget.generated.h"

/**
 * 
 */


UCLASS()
class RTS_INTERFACE_API UC_SelectAreaWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;


	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* CanvasPanel;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox;

	UFUNCTION()
	void AddWidget(UUserWidget* _Widget);

	UFUNCTION()
	void RemoveWidget(UUserWidget* _Widget);
	UPROPERTY()
	FVector2D HorizentalSize = FVector2D(1500.f,150.f);
};
