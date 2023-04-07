// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ETGameMode.h"
#include "Character/ETCharacter.h"
#include <UObject/ConstructorHelpers.h>

AETGameMode::AETGameMode()
{
	//GameStateClass =

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)DefaultPawnClass = PlayerPawnBPClass.Class;
	
	//PlayerControllerClass =

	//PlayerStateClass =
	
	//HUDClass =
		
	//SpectatorClass =
	
	PRINT_FUNCTION();
}

void AETGameMode::PostInitProperties()
{
	Super::PostInitProperties();
	PRINT_FUNCTION();
}

void AETGameMode::PostReinitProperties()
{
	Super::PostReinitProperties(); 
	PRINT_FUNCTION();
}

void AETGameMode::BeginDestroy()
{
	Super::BeginDestroy();
	PRINT_FUNCTION();

}
void AETGameMode::FinishDestroy()
{
	Super::FinishDestroy();
	PRINT_FUNCTION();
}


void AETGameMode::StartPlay()
{
	Super::StartPlay();
	PRINT_FUNCTION();
}

void AETGameMode::BeginPlay()
{
	Super::BeginPlay();
	PRINT_FUNCTION();
}

void AETGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	PRINT_FUNCTION();
}

void AETGameMode::PreInitializeComponents()
{
	Super::PreInitializeComponents();
	PRINT_FUNCTION();
}

void AETGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	PRINT_FUNCTION();
}

void AETGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	PRINT_FUNCTION();
}

void AETGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);
	PRINT_FUNCTION();
}

void AETGameMode::SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
{
	Super::SwapPlayerControllers(OldPC, NewPC);
	PRINT_FUNCTION();
}

void AETGameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PRINT_FUNCTION();
}

void AETGameMode::InitGameState()
{
	Super::InitGameState();
	PRINT_FUNCTION();
}

void AETGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
}

APlayerController* AETGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	// APlayerController* PlayerController = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	// DoSomething
	// return PlayerController;
	return Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void AETGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

void AETGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
}

void AETGameMode::Destroyed()
{
	Super::Destroyed();
	PRINT_FUNCTION();
}


