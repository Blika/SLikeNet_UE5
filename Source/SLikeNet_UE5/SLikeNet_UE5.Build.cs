using System.IO;
using UnrealBuildTool;

public class SLikeNet_UE5 : ModuleRules{
	public SLikeNet_UE5(ReadOnlyTargetRules Target) : base(Target){
		IWYUSupport = IWYUSupport.None;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bUseUnity = false;
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects",
				"OpenSSL",
				"SSL"
			}
		);
		if(Target.Platform == UnrealTargetPlatform.Win64){
			PublicDefinitions.Add("_RAKNET_DLL");
			PublicDefinitions.Add("RAK_DLL_EXPORT=__declspec(dllexport)");
			PublicSystemLibraries.Add("ws2_32.lib");
            PublicSystemLibraries.Add("crypt32.lib"); 
            PublicSystemLibraries.Add("iphlpapi.lib");
		}/*else if(Target.Platform == UnrealTargetPlatform.Linux){ // it builds fine for linux
			//bWarningsAsErrors = false;

			//PublicSystemLibraries.Add("pthread");
            //PublicSystemLibraries.Add("dl");
        }*/
	}
}
