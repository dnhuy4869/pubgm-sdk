// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickUp_BP_Pants_06_B.PickUp_BP_Pants_06_B_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickUp_BP_Pants_06_B_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PickUp_BP_Pants_06_B.PickUp_BP_Pants_06_B_C.UserConstructionScript");

	APickUp_BP_Pants_06_B_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

