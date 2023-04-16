// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAIController.h"

void AEntityAIController::BeginPlay() {
	Super::BeginPlay();
	
	
	if (AIBehavior != NULL) {
		RunBehaviorTree(AIBehavior);
		
	}

}

void AEntityAIController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	//GetBlackboardComponent()->SetValueAsVector(TEXT("playerLocation"), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
}