// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moving_Platform.generated.h"

UCLASS()
class OBSTACLE_ASSAULT_API AMoving_Platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoving_Platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FVector PlatformVelocity = FVector(100, 0, 0);
	UPROPERTY(VisibleAnywhere)
	float DistanceMoved = -1;

		FVector StartLocation;

		

};
