// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningPawn.h"

// Sets default values
ALightningPawn::ALightningPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALightningPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightningPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALightningPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

