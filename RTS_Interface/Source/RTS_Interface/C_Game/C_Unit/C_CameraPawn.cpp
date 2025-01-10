// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Game/C_Unit/C_CameraPawn.h"

// Sets default values
AC_CameraPawn::AC_CameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_CameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_CameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_CameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

