// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C.OnPlayerRotate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyAvatarFunctionLibrary_C::OnPlayerRotate(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyAvatarFunctionLibrary.LobbyAvatarFunctionLibrary_C.OnPlayerRotate");

	ULobbyAvatarFunctionLibrary_C_OnPlayerRotate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

