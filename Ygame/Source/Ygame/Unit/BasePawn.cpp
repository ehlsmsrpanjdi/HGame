// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "GameFramework/FloatingPawnMovement.h"
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PM_Component = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PMcomponent"));

}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
	

}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

