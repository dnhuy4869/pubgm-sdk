#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR_10001.BP_Rifle_SCAR_10000_C
// 0x0004 (0x0934 - 0x0930)
class ABP_Rifle_SCAR_10000_C : public ABP_LobbyWeapon_C
{
public:
	class ULobbyWeaponAnimList_Rifle_C*                LobbyWeaponAnimList_Rifle;                                // 0x0930(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR_10001.BP_Rifle_SCAR_10000_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

