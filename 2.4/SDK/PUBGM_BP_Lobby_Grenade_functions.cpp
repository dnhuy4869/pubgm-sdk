// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lobby_Grenade.BP_Lobby_Grenade_C.SetAvatarReady
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lobby_Grenade_C::SetAvatarReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_Lobby_Grenade.BP_Lobby_Grenade_C.SetAvatarReady");

	ABP_Lobby_Grenade_C_SetAvatarReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BP_Lobby_Grenade.BP_Lobby_Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lobby_Grenade_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_Lobby_Grenade.BP_Lobby_Grenade_C.UserConstructionScript");

	ABP_Lobby_Grenade_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

