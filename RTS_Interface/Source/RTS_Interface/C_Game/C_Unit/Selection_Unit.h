// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Texture2D.h"
#include "Components/SkeletalMeshComponent.h"
#include "Selection_Unit.generated.h"


UENUM(BlueprintType) // 이 옵션을 사용하면 블루프린트에서 사용할 수 있음
enum class EUnitType : uint8
{
	None UMETA(DisplayName = "None"),       // 미정
	Unit UMETA(DisplayName = "Unit"),       // 이동가능 유닛
	Building UMETA(DisplayName = "Building"),   // 건물
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
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UDecalComponent> DSelection = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TObjectPtr<UTexture2D> Unit_Image = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<UC_UnitWidget> Unit_Widget_Class = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	EUnitType UnitType = EUnitType::None;
};

