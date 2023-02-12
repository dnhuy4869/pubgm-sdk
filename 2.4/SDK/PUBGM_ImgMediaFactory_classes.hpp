#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMediaFactory.ImgMediaSettings
// 0x0024 (0x0040 - 0x001C)
class UImgMediaSettings : public UObject
{
public:
	float                                              DefaultFps;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheBehindPercentage;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheSizeGB;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ExrDecoderThreads;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     DefaultProxy;                                             // 0x002C(0x000C) (Edit, ZeroConstructor, Config)
	bool                                               UseDefaultProxy;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ImgMediaFactory.ImgMediaSettings");
		return pStaticClass;
	}

};


}

