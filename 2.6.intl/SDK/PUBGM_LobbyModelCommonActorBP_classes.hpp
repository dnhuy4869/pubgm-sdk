#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyModelCommonActorBP.LobbyModelCommonActorBP_C
// 0x000C (0x03F4 - 0x03E8)
class ALobbyModelCommonActorBP_C : public ALobbyModelCommonActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                commonActorResId;                                         // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShowType;                                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyModelCommonActorBP.LobbyModelCommonActorBP_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

