# SLikeNet_UE5
 [SLikeNet](https://github.com/SLikeSoft/SLikeNet) (fork of [RakNet](https://github.com/facebookarchive/RakNet)) plugin for Unreal Engine 5.
Tested on a fork of Unreal Engine 5.5.3, Windows and Linux.

# Usage

Just drop this plugin to your project or the engine plugins folder. Add SLikeNet_UE5 to your project public dependencies in Build.cs.

# Known issues

On some versions of Unreal OpenSSL is shipped broken for whatever reason (UI namespace error).

For a Linux build you might want to add this code to some place in your project, otherwise you won't be able to launch the editor.
Unreal's Linux toolchain is much stricter than Windows one, and SLikeNet codebase isn't very up to nowadays standards.

`
#if WITH_EDITOR
	#ifndef SWIG
		namespace SLNet {
			const SystemAddress UNASSIGNED_SYSTEM_ADDRESS;
			const RakNetGUID UNASSIGNED_RAKNET_GUID((uint64_t)-1);
		}
	#endif
#endif
`
