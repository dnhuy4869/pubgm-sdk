#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C
// 0x0004 (0x06A4 - 0x06A0)
class APickUp_BP_Shoes_02_C_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        ST_ShortShoes_Pickup;                                     // 0x06A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

