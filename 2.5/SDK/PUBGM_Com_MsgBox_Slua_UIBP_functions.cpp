// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Com_MsgBox_Slua_UIBP.Com_MsgBox_Slua_UIBP_C.SetButtonOkState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCom_MsgBox_Slua_UIBP_C::SetButtonOkState(bool bInIsEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Com_MsgBox_Slua_UIBP.Com_MsgBox_Slua_UIBP_C.SetButtonOkState");

	UCom_MsgBox_Slua_UIBP_C_SetButtonOkState_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

