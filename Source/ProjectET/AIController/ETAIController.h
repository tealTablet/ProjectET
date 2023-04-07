// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <AIController.h>
#include <BehaviorTree/BehaviorTreeComponent.h>
#include <BehaviorTree/BlackboardComponent.h>
#include "ETAIController.generated.h"

/**
 * BlackBorad 모든 AI들이 공유하는 정보
 * BehaviorTree 해당정보를 통해 컨트롤러
 * Root(Start)
 * 
 * Sequence(실패할때까지 왼쪽에서 오른쪽으로 실행)-> 전부다 성공해야 성공
 * Selector(성공할때까지 오른쪽에서 왼쪽으로 실행)-> 하나만 성공해도 성공
 * SimpleParallel(Task와 노드 동시에 병렬실행)
 * 
 * Decorator 해당노드가 실행될때 조건체크(실행될때만 체크)
 * Service 해당노드가 실행중일때 주기적으로 실행
 * Task 실행
 * 
 */
UCLASS()
class PROJECTET_API AETAIController : public AAIController
{
	GENERATED_BODY()
public:

private:
	UBehaviorTreeComponent* BehaviorComp;
	UBlackboardComponent* BlackboardComp;
public:
	AETAIController();

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
	FBlackboard::FKey TargetKeyID;
};
