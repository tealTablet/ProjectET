// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/PlayerState.h>
#include <ETPlayerState.generated.h>

/**
 * 플레이어 상태는 서버(또는 독립 실행형 게임)의 모든 플레이어에 대해 생성됩니다.
 * 플레이어 상태는 모든 클라이언트에 복제되며 플레이어 이름, 점수 등과 같은 플레이어에 대한 네트워크 게임 관련 정보를 포함합니다.
 */
UCLASS()
class PROJECTET_API AETPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
#pragma region Object

#pragma endregion
#pragma region Actor

#pragma endregion
	//float GetScore();
	//void SetScore(float Score);
	//int32 GetPlayerID();
	//void SetPlayerID(int32 PlayerID);

	//SetPlayerName();
	//GetPlayerName();
	//int32 StartTime()
	//UniqueID
	//bisABot
	//bisSpector
	//bisOnlySpector
	//bisInactive
};
