// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ygame : ModuleRules
{
    public Ygame(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
        "Ygame/Public",            // �⺻ ���
        "Ygame/Unit"              // ���� ��� �߰�
            }
        );

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
