#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C
// 0x0004 (0x037C - 0x0378)
class AUAELobbyGamePawnMode_C : public AUAELobbyGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

