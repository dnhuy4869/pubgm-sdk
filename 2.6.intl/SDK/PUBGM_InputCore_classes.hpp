#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InputCore.InputCoreTypes
// 0x0004 (0x0020 - 0x001C)
class UInputCoreTypes : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class InputCore.InputCoreTypes");
		return pStaticClass;
	}

};


}

