// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;


public class ProjectET : ModuleRules
{
	public ProjectET(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;//미리 컴파일된 헤더사용
		ShadowVariableWarningLevel = WarningLevel.Error;//그림자 변수 경고 에러
		bEnforceIWYU = true;//강제 IWYU

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",			//표준라이브러리모듈//	모듈 매니저, IO, 컨테이너, 쓰레드, 네트워크, 수학라이브러리, RHI, 블루프린트, 기본클래스(UObject)
			"CoreUObject",	//객체지향모듈//		상속, 리플렉션, 직렬화, 메모리관리, 참조, 인터페이스
			"Engine",		//엔진모듈//			오디오(UAudioComponent), 물리(UPhysicsAsset), 애니메이션(UAnimInstance), 렌더(UWolrd), UI(UUserWidget), 레벨(ULevel, AActor)
			//
			"InputCore",	//입력모듈//			입력이벤트, 이벤트호출, 바인딩, 입력모드(GameOnly, UIOnly...)
			"EnhancedInput",//향상입력모듈//		모듈간의 입력, 장비간의 입력을 통합 개선 입력
			//"HeadMountedDisplay", //VR, AR모듈//
			
			"Json",
			"JsonUtilities",

			"NavigationSystem",//네비게이션모듈//
			"AIModule",//BVTree, BlackBoard
			"GameplayTasks",//AI
			"RenderCore",//Graphic, Option?
			
			"Networking",//TCP,UDP
			"Sockets",//Socket
			"HTTP",//HTTP

			// LevelSequence
			// "MovieScene",
			// "LevelSequence",
			// "ActorSequence",
			// "Paper2D",
			// "CinematicCamera",
			// "MovieSceneTracks",
			// "MediaAssets",
		});
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore",
			"UMG",
		});
		DynamicallyLoadedModuleNames.AddRange(new string[] {
		});

		//PublicIncludePaths.AddRange(new string[] {}); //이 설정은 이제 사용되지 않는다.
		
		PrivateIncludePaths.AddRange(new string[] {
			"ProjectET"
		});//이 모듈의 cpp파일에 경로를 추가한다.
	}
}
