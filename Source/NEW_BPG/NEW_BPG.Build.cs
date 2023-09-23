// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NEW_BPG : ModuleRules
{
	public NEW_BPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
