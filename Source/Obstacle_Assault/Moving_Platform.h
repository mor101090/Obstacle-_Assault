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

	UPROPERTY(EDITAnywhere)
	int32 MyInt = 99;

	
	UPROPERTY(EDITAnywhere)
	int32 InputA = 0;

	UPROPERTY(EDITAnywhere)
	int32 InputB = 0;

	UPROPERTY(EDITAnywhere)
	int32 APlusB = 0;

	UPROPERTY(EDITAnywhere)
	float InputFloatA = 0;

	UPROPERTY(EDITAnywhere)
	float InputFloatB = 0;

	
	UPROPERTY(EDITAnywhere)
	float APlusBFloat = 0;

	

		UPROPERTY (EDITANYWHERE)
			float MyFloat = 5.99;

			UPROPERTY (EditANYWHERE)
			bool MyBool = true;

};
