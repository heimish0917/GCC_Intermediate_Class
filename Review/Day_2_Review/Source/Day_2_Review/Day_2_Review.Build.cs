// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Day_2_Review : ModuleRules
{
	public Day_2_Review(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
