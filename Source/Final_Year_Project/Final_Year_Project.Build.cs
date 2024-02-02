// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Final_Year_Project : ModuleRules
{
	public Final_Year_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
