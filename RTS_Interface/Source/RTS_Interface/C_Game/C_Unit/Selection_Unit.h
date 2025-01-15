// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Texture2D.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/Material.h"
#include "Selection_Unit.generated.h"


UENUM(BlueprintType) // �� �ɼ��� ����ϸ� �������Ʈ���� ����� �� ����
enum class EUnitType : uint8
{
	None UMETA(DisplayName = "None"),       // ����
	Unit UMETA(DisplayName = "Unit"),       // �̵����� ����
	Building UMETA(DisplayName = "Building"),   // �ǹ�
};

UCLASS()
class RTS_INTERFACE_API ASelection_Unit : public ACharacter
{
	GENERATED_BODY()
	friend class UC_UnitWidget;
public:
	// Sets default values for this character's properties
	ASelection_Unit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void IsSelected(bool _IsOn);
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TObjectPtr<UC_UnitWidget> Unit_Widget = nullptr;

	UFUNCTION()
	void WidgetHover(bool _Hover);
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UDecalComponent> DSelection = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UTexture2D> Unit_Image = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<UC_UnitWidget> Unit_Widget_Class = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	EUnitType UnitType = EUnitType::None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UMaterial> NormalMaterial = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UMaterial> SelectionMaterial = nullptr;
};

