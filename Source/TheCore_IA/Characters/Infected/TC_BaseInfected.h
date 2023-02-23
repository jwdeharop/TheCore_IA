// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TC_BaseInfected.generated.h"

class UBehaviorTree;
class USplineComponent;

UCLASS()
class THECORE_IA_API ATC_BaseInfected : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
		UBehaviorTree* BehaviorTree = nullptr;
	UPROPERTY(EditAnywhere, Category = "Patrol")
		USplineComponent* SplineComponent = nullptr;

	ATC_BaseInfected();

	virtual void Tick(float DeltaTime) override;
	void FillSplinePoints();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
		TArray<FVector> SplinePoints;
};