// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickUp_BP_Shoes_02_C_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C.UserConstructionScript");

	APickUp_BP_Shoes_02_C_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

