#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C
// 0x0000 (0x0020 - 0x0020)
class UAvatarDIYUtilsImp_BP_C : public UAvatarDIYBPUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C");
		return pStaticClass;
	}


	bool IsWeaponAttachmentDIYAvatarItem(int* InWeaponAttachmentID);
	bool IsWeaponDIYAvatarItem(int* InWeaponID);
	struct FDIYMatParam GetDIYMatParam(int* TextureID);
	struct FString GetDIYBaseColorString(int* ColorID);
	struct FString GetDIYBasePatternPath(int* PatternID);
};


}

