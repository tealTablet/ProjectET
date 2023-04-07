// Fill out your copyright notice in the Description page of Project Settings.


#include "AIController/ETAIController.h"
#include "Character/ETAICharacter.h"
#include <BehaviorTree/BehaviorTree.h>

AETAIController::AETAIController()
{
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
}

void AETAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	AETAICharacter* AICharacter = Cast<AETAICharacter>(InPawn);

	if (AICharacter && AICharacter->AIBehaviorTree)
	{
		 InitializeBlackboard(*BlackboardComp, *AICharacter->AIBehaviorTree->BlackboardAsset);
		 TargetKeyID = BlackboardComp->GetKeyID("Target");
		 BehaviorComp->StartTree(*AICharacter->AIBehaviorTree);
	}
}

void AETAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
