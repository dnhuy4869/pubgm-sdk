// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponAnimPara.WeaponAnimPara_C.SetAnimTimeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAnimPara_C::SetAnimTimeInfo(int DelayTime, int TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WeaponAnimPara.WeaponAnimPara_C.SetAnimTimeInfo");

	UWeaponAnimPara_C_SetAnimTimeInfo_Params params;
	params.DelayTime = DelayTime;
	params.TotalTime = TotalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

