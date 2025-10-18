// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LaunchMeow : ModuleRules
{
	public LaunchMeow(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
