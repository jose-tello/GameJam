// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldSlab.h"

// Sets default values
AWorldSlab::AWorldSlab()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldSlab::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldSlab::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

