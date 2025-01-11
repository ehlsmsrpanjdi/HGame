// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Unit/Selection_Unit.h"

// Sets default values
ASelection_Unit::ASelection_Unit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASelection_Unit::BeginPlay()
{
	Super::BeginPlay();
	
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

