// Copyright Epic Games, Inc. All Rights Reserved.

#include "WA_AmbienceManager.h"

#define LOCTEXT_NAMESPACE "FWA_AmbienceManagerModule"

void FWA_AmbienceManagerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FWA_AmbienceManagerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWA_AmbienceManagerModule, WA_AmbienceManager)