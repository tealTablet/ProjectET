// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <Engine/GameInstance.h>
#include <ETGameInstance.generated.h>

/**
 * 
 */
UCLASS()
class PROJECTET_API UETGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
#pragma region Object
	UETGameInstance();

	virtual void PostInitProperties() override;

	virtual void BeginDestroy() override;

	virtual void FinishDestroy() override;
#pragma endregion
#pragma region GameInstance
	virtual void Init() override;

	virtual void Shutdown() override;

	/** 월드가 변경될때 콜백*/
	//virtual void OnWorldChanged(UWorld* OldWolrd, UWorld* NewWorld);
#pragma endregion
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int Test;
	UFUNCTION(BlueprintCallable) void DoTest() { PRINT_FUNCTION(); }
	
private:
	//Singleton
	UETGameInstance* GameInstance;
};
