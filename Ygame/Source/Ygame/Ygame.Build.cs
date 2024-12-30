// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ygame : ModuleRules
{
    public Ygame(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
        "Ygame/Public",            // 기본 경로
        "Ygame/Unit"              // 절대 경로 추가
            }
        );

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
