// Copyright Epic Games, Inc. All Rights Reserved.

#include "SLikeNet_UE5.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
//#include "SLikeNet_UE5Library/ExampleLibrary.h"


#define LOCTEXT_NAMESPACE "FSLikeNet_UE5Module"

IMPLEMENT_MODULE(FSLikeNet_UE5Module, SLikeNet_UE5)
void FSLikeNet_UE5Module::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("SLikeNet_UE5 startup"));
}

void FSLikeNet_UE5Module::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("SLikeNet_UE5 shutdown"));
}

#undef LOCTEXT_NAMESPACE
