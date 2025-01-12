// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Unit/Selection_Unit.h"
#include "../C_Instance.h"
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
	GetWorld()->GetGameState();
}

// Called every frame
void ASelection_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

