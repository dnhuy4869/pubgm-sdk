#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DracoPlugin.Draco
// 0x0004 (0x0020 - 0x001C)
class UDraco : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class DracoPlugin.Draco");
		return pStaticClass;
	}

};


// Class DracoPlugin.DracoSkeletal
// 0x0004 (0x0020 - 0x001C)
class UDracoSkeletal : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class DracoPlugin.DracoSkeletal");
		return pStaticClass;
	}

};


}

