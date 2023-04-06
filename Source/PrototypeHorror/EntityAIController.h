// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

#include "EntityAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEHORROR_API AEntityAIController : public AAIController
{
	GENERATED_BODY()
public:
	void Tick(float DeltaSeconds);
protected:
	void BeginPlay();
private:
	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* AIBehavior;

	
	
	
}; 
