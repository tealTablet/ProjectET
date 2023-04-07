// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/GameStateBase.h>
#include <ETGameState.generated.h>

/**
 * 맵이 로드되도 사라지지 않는다.
 */
UCLASS()
class PROJECTET_API AETGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	//Object Function
	//Actor Function

	//Property
	//GameMode// 서버가 부여한 게임모드
	//AuthorityGameMode //권한 없는 클라는 null
	//PlayerList
	//SpectorClass
};
