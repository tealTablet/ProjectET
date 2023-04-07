// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/ETGameInstance.h"

UETGameInstance::UETGameInstance()
{
	
	//PRINT_FUNCTION();
}
void UETGameInstance::PostInitProperties()
{
	Super::PostInitProperties();
	//PRINT_FUNCTION();
}
void UETGameInstance::Init()
{
	Super::Init();
	//PRINT_FUNCTION();
}

void UETGameInstance::Shutdown()
{
	Super::Shutdown();
	//PRINT_FUNCTION();
}
void UETGameInstance::BeginDestroy()
{
	Super::BeginDestroy();
	//PRINT_FUNCTION();
}
void UETGameInstance::FinishDestroy()
{
	Super::FinishDestroy();
	//PRINT_FUNCTION();
}



/**
* 클래스의 기본형태

* ETStruct		: 네이티브
* ETInterface	: 인터페이스
*
*
* ETObject		: 가비지컬렉터
* ETActor		: 월드에 배치가능한
* ETPawn		: 빙의가 가능한
* ETCharacater	: 완성형
*
* ETGameInstance:
* ETGameMode	:
* ETGameState	:
* ETPlayerController
* ETPlayerState
* ETHUD
* ETSpectator
*
* ETActorComponent : UObject다. 월드에 배치가 불가능하므로
*
* ETBluePrintFunctionLibrary
* ETGameUserSettings
* ETLocalPlayer
* ETWorldSetting
* ETLevelScriptActor
*
* ETSingleton
* ETObjectPool
* ETEvent
* ETStateMachine
*
* ETCameraActor
* ETDecalActor
*/




/*
* F = new
* S = SNew, SAssingedNew
* U = CreateDefaultsubobject,NewObject
* A = SpawnActor
*
* UObjectBase -> UObjectBaseUtility -> UObject -> UHierarchyObject
*								상속     상속
*				 UActorComponent 포함> AActor -> AHierarchyActor
* 시작시
* GameInstance->GameMode->World->Actor->Component
* 
* UWorld <포함 Actor
*  ㄴ>Pawn 포함> Controller	<------생성-----GameMode
*
* TSubclassOf<ParentClass> X;
*/
//TNumericLimits<T>


//Helper
#pragma region UObject => UClass(MetaData)
/** ///////////////////////////////////////////////////////////////////////////////
* UObject virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#if 0
/** 일반적인 C++ 생성자: 프로그램 실행시에 CDO(Class Default Object)를 생성하기 위해 단한번 호출됩니다.
* 이후에는 의해 다른 생성자로 생성되기 때문에 호출되지 않습니다.
*/
//Construct();

/** 일반적인 C++ 소멸자: 객체가 메모리에서 소멸할 때, 호출됩니다. 
* U라면 사용하지 않는 것을 권장한다.(가비지컬렉터에의해서 언제 호출될지 명확하지 않다.)
*/
//virtual ~Desturct();

/** 멤버속성들을 초기화한 후에 호출됩니다.*/
virtual void PostInitProperties() override;

/** CDO로부터 초기화된 경우 호출됩니다. 인스턴스의 생성자역할을 합니다.*/
virtual void PostReInitProperties() override;

/** 개체를 파괴하기 전에 호출됩니다. 이것은 객체를 파괴하기로 결정하는 즉시 호출되어 객체가 작업을 시작할 수 있도록 합니다. */
virtual void BeginDestroy() override;

/** 개체 파괴를 완료하기 위해 호출됩니다. UObject::Finish Destroy가 호출된 후에는 오브젝트의 메모리에 더 이상 액세스할 수 없습니다. */
virtual void FinishDestroy() override;

/**  */
virtual void Rename(const  const TCHAR* NewName, UObject* NewOuter, ERenameFlags Flags)

//ProcessEvent()
#endif
/** ///////////////////////////////////////////////////////////////////////////////
* UObject 함수
*/ ////////////////////////////////////////////////////////////////////////////////
//생성
//T* CreateDefaultSubobject<T>(const wchar*);


// UEngine* GetEngine()
// UWorld* GetWorld()
// UClass* StaticClass()
// const TCHAR* StaticConfigName()
// UFunction FindFunction(FName InName)
// T CreateDefaultSubObject<T>()
// LoadConfig()
// GetDefaultSubobjects()
// IsPendingKill() GC수거 대기


//NewObject<T>(T OuterObject, T::StaticClass())
//ConstructObject()

//#include "UObject/ConstructorHelpers.h"
//static ConstructorHelpers::FObjectFinder<T> x(path);
//BluePrint의 경로문자열은 BP_BLAHBLAH.BP_BLAHBLAH_C 처럼 '.자기블프이름_C'이 항상 추가로 붙는 것을 생각


#pragma endregion

#pragma region AActor
/** ///////////////////////////////////////////////////////////////////////////////
* AActor virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#if 0
/** 이 액터에 대한 재생이 시작될 때 재정의 가능한 기본 이벤트입니다. */
virtual void BeginPlay() override;

/** 이 액터의 모든 프레임에서 호출되는 함수입니다. 이 함수를 재정의하여 모든 프레임에서 실행될 사용자 지정 논리를 구현합니다.
* 함수가 호출되기위해서는 생성자에서 PrimaryActorTick.bCanEverTick을 true 해야한다.
*/
virtual void Tick(float DeltaSeconds) override;

/** 이 액터가 레벨에서 제거될 때마다 호출되는 재정의 가능한 함수 */
virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

/** 이 클래스의 인스턴스가 에디터에 배치되거나 생성될 때 호출됩니다. */ 
virtual void OnConstruction(const FTransform& Transform) override;

/** Components 배열의 모든 구성요소가 등록되기 전에 호출되며, 에디터와 게임 플레이 중에 모두 호출됩니다.*/
virtual void PreInitializeComponents() override;

/** Components 배열의 모든 구성요소가 등록된 후 호출되며, 에디터와 게임 플레이 중에 호출됩니다.*/
virtual void PostInitializeComponents() override;

/** 이 액터가 게임플레이 도중이나 에디터에서 명시적으로 파괴될 때 호출되며, 레벨 스트리밍이나 게임플레이 종료 중에는 호출되지 않습니다.*/
virtual void Destroyed() override;
#endif

//UWorld::SpawnActor();
//Destroy()
//Lifespan

//kismet/UGameStatics.h
//UGameplayStatics::GetAllActorsOfClass(world,TSubclassOf<T>A,TArray<T> out)~~
//UGameplayStatics::OpenWorld()//Editor에서는 레벨의 이름에 UEDPIE_0_가 추가되므로
//UGameplayStatics::GetCurrentLeveleName(GetWorld(),true);로 이름을 가져온다.
//GetWorld().GetTimer()
#pragma endregion
#pragma region APawn
/** ///////////////////////////////////////////////////////////////////////////////
* APawn virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

/** 빙의가 될때*/
//virtual void PossessedBy() override;
/** 빙의에서 해제될때*/
//virtual void UnPossessed() override;

#pragma endregion
#pragma region ACharacter
/** ///////////////////////////////////////////////////////////////////////////////
* ACharacter virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

#pragma endregion

#pragma region UActorComponent
/** ///////////////////////////////////////////////////////////////////////////////
*  ActorComponent virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

#pragma endregion

#pragma region UGameInstance
/** ///////////////////////////////////////////////////////////////////////////////
*  UGameInstance virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#if 0
/** 사용자 정의 게임 인스턴스가 필요한 것을 설정할 수 있는 기회를 허용하는 가상 기능. */
virtual void Init() override;

/** 게임 인스턴스를 종료할 기회를 허용하는 가상기능 */
virtual void Shutdown() override;

#endif
/** ///////////////////////////////////////////////////////////////////////////////
* UGameInstance utility 함수
*/ ////////////////////////////////////////////////////////////////////////////////

//UEngine, UWorld, ALocal

#pragma endregion

#pragma region AGameModeBase
/** ///////////////////////////////////////////////////////////////////////////////
*  AGameModeBase virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

#pragma endregion
#pragma region AGameStateBase
/** ///////////////////////////////////////////////////////////////////////////////
* AGameStateBase virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#pragma endregion

#pragma region APlayerState
/** ///////////////////////////////////////////////////////////////////////////////
* APlayerState virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

#pragma endregion

#pragma region APlayerController
/** ///////////////////////////////////////////////////////////////////////////////
* APlayerContoller virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

#pragma endregion
#pragma region AAIController
/** ///////////////////////////////////////////////////////////////////////////////
* AIController virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#pragma endregion
#pragma region AController

#pragma endregion



#pragma region X
/** ///////////////////////////////////////////////////////////////////////////////
*  virtual 함수
*/ ////////////////////////////////////////////////////////////////////////////////

/** ///////////////////////////////////////////////////////////////////////////////
*  utility 함수
*/ ////////////////////////////////////////////////////////////////////////////////
#pragma endregion




//ELoadFlags::
//ESaveFlags
//EPackageFlags
//EClassFlags
//EClassCastFlags
//EPropertyFlags
//EObjectFlags
//EInternalObjectFlags
//EEnumFlags

//Pawn <-> Controller
//Controller->AIController, PlayerController
//Pawn->Character


/*블루 프린트 그래프에서 정의하는 것은 이벤트의 처리 혹은 함수(다른 곳에서 호출할)
일반적으로 로직은 이벤트로부터 실행
호출자▷  ▷호출
입력  ○  ○출력

ConstructClass
NewObject
*/