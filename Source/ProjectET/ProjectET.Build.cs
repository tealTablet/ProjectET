// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;


public class ProjectET : ModuleRules
{
	public ProjectET(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		ShadowVariableWarningLevel = WarningLevel.Error;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",			//모듈 매니저, IO, 컨테이너, 쓰레드, 네트워크, 수학라이브러리, RHI, 블루프린트, 기본클래스(UObject)
			"CoreUObject",	//Inherited UObject, URefelect, USerialize, UGarbageCollector, Reference for UObject, Interface for UObject
			"Engine",		//Audio(UAudioComponent), Phyics(UPhysicsAsset), Animation(UAnimInstance), Render(UWolrd), UI(UUserWidget), Level(ULevel, AActor)
			//
			"InputCore",	//InputEvent, EventCall, Binding, Mode(GameOnly, UIOnly...)
			"EnhancedInput",//모듈간의 입력, 장비간의 입력을 통합 개선 
			//"HeadMountedDisplay", //VR, AR
			
			"Json",
			"JsonUtilities",

			"AIModule",
			"GameplayTasks",
			"RenderCore",//Graphic, Option
		});
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore",
			"UMG",
		});
		DynamicallyLoadedModuleNames.AddRange(new string[] {
		});

		//PublicIncludePaths.AddRange(new string[] {}); //이 설정은 이제 필요가 없다.

		PrivateIncludePaths.AddRange(new string[] {
			"ProjectET"
		});
	}
}
