#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimPara.WeaponAnimPara_C
// 0x0000 (0x0020 - 0x0020)
class UWeaponAnimPara_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAnimPara.WeaponAnimPara_C");
		return pStaticClass;
	}


	void SetAnimTimeInfo(int DelayTime, int TotalTime);
};


}

