// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PANDORAS_DUST : ModuleRules
{
	public PANDORAS_DUST(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
