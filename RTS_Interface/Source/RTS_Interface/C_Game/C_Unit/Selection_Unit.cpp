// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Unit/Selection_Unit.h"
#include "../../C_Instance.h"
#include "../C_Widget/C_UnitWidget.h"
#include "../../C_GameState.h"
// Sets default values
ASelection_Unit::ASelection_Unit()
{
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetReceivesDecals(false);
	DSelection = CreateDefaultSubobject<UDecalComponent>("Decal");
	DSelection->SetupAttachment(GetCapsuleComponent());
	DSelection->DecalSize = FVector(40.f, 80.f, 80.f);
	DSelection->SetWorldRotation(FRotator(0.0f, 90.f, 0.f));
}

// Called when the game starts or when spawned
void ASelection_Unit::BeginPlay()
{
	Super::BeginPlay();
	UC_Instance* Inst = Cast<UC_Instance>(GetGameInstance());
	if (true == Inst->IsValidLowLevel()) {
		Inst->AddBaseUnit(this);
	}
	Unit_Widget = CreateWidget<UC_UnitWidget>(GetWorld(), Unit_Widget_Class);
	if (Unit_Widget->IsValidLowLevel() == true) {
		Unit_Widget->SetUnit(this);
	}

}

// Called every frame
void ASelection_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (UnitType == EUnitType::None) {
		UE_LOG(LogTemp, Warning, TEXT("Not Set UnitType"));
	}
}

// Called to bind functionality to input
void ASelection_Unit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASelection_Unit::IsSelected(bool _IsOn)
{
	DSelection->SetVisibility(_IsOn);
}

