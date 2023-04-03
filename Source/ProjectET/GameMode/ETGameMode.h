// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/GameModeBase.h>
#include <ETGameMode.generated.h>

/**
 * 
 */
UCLASS()
class PROJECTET_API AETGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
#pragma region Object
	AETGameMode();

	virtual void PostInitProperties() override;

	virtual void PostReinitProperties() override;

	virtual void BeginDestroy() override;

	virtual void FinishDestroy() override;
#pragma endregion
#pragma region  Actor
	/** 이 액터에 대한 재생이 시작될 때 재정의 가능한 기본 이벤트입니다. */
	virtual void BeginPlay() override;

	/** 이 액터의 모든 프레임에서 호출되는 함수입니다. 이 함수를 재정의하여 모든 프레임에서 실행될 사용자 지정 논리를 구현합니다. 
	* 함수가 호출되기위해서는 생성자에서 PrimaryActorTick.bCanEverTick을 true 해야한다.
	*/
	virtual void Tick(float DeltaSeconds) override;

	/** 이 액터가 레벨에서 제거될 때마다 호출되는 재정의 가능한 함수 */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Components 배열의 모든 구성요소가 등록되기 전에 호출되며, 에디터와 게임 플레이 중에 모두 호출됩니다.*/
	virtual void PreInitializeComponents() override;

	/** Components 배열의 모든 구성요소가 등록된 후 호출되며, 에디터와 게임 플레이 중에 호출됩니다.*/
	virtual void PostInitializeComponents() override;

	/** 이 액터가 게임플레이 도중이나 에디터에서 명시적으로 파괴될 때 호출되며, 레벨 스트리밍이나 게임플레이 종료 중에는 호출되지 않습니다.*/
	virtual void Destroyed() override;

	
#pragma endregion
#pragma region GameModeBase
	/** */
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	/** */
	virtual void InitGameState() override;

	/** */
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	/** */
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	/** */
	virtual void PostLogin(APlayerController* NewPlayer) override;

	/** */
	virtual void Logout(AController* Exiting) override;

	/** */
	virtual void StartPlay() override;

	/** */
	virtual void RestartPlayer(AController* NewPlayer) override;

	/** */
	virtual void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) override;
#pragma endregion
	/*
	virtual bool HasMatchStarted() const override;
	virtual bool HasMatchEnded() const override;
	virtual int32 GetNumPlayers() override;
	virtual int32 GetNumSpectators() override;
	virtual bool IsHandlingReplays() override;
	virtual void PostSeamlessTravel() override;
	virtual void HandleSeamlessTravelPlayer(AController*& C) override;
	virtual void InitSeamlessTravelPlayer(AController* NewController) override;
	virtual bool CanServerTravel(const FString& URL, bool bAbsolute) override;
	virtual void StartToLeaveMap() override;
	virtual bool SpawnPlayerFromSimulate(const FVector& NewLocation, const FRotator& NewRotation) override;
	*/
};
