// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Unit/Selection_Pawn.h"

// Sets default values
ASelection_Pawn::ASelection_Pawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DSelection = CreateDefaultSubobject<UDecalComponent>("Decal");
	UCapsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule");
	USKeletal = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal");
	DSelection->SetupAttachment(UCapsule);
	USKeletal->SetupAttachment(UCapsule);
}

// Called when the game starts or when spawned
void ASelection_Pawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASelection_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASelection_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

