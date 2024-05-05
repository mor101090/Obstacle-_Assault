// Fill out your copyright notice in the Description page of Project Settings.


#include "Moving_Platform.h"

// Sets default values
AMoving_Platform::AMoving_Platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoving_Platform::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMoving_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



// Move platform forward
	// Get current location
FVector CurrentLocation = GetActorLocation();
	// Add vector to that location
CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
	// Set the location 
SetActorLocation(CurrentLocation);
// Send platform back if gone to far
	// Check how far we've moved
	// Reverse direction of motion if gone to far

}