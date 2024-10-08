// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.SetRankText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             ShadowColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo          FontInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URankSmall_Name_Star_UIBP_C::SetRankText(const struct FSlateColor& Color, const struct FSlateColor& ShadowColor, const struct FSlateFontInfo& FontInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.SetRankText");

	URankSmall_Name_Star_UIBP_C_SetRankText_Params params;
	params.Color = Color;
	params.ShadowColor = ShadowColor;
	params.FontInfo = FontInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.SetRankIntegral
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevel_Info         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isStarOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Name_Star_UIBP_C::SetRankIntegral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevel_Info, bool isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.SetRankIntegral");

	URankSmall_Name_Star_UIBP_C_SetRankIntegral_Params params;
	params.RankIntegralLevel_Info = RankIntegralLevel_Info;
	params.isStarOpen = isStarOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.ExecuteUbergraph_RankSmall_Name_Star_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Name_Star_UIBP_C::ExecuteUbergraph_RankSmall_Name_Star_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Name_Star_UIBP.RankSmall_Name_Star_UIBP_C.ExecuteUbergraph_RankSmall_Name_Star_UIBP");

	URankSmall_Name_Star_UIBP_C_ExecuteUbergraph_RankSmall_Name_Star_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

