#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LuaHotReload.LuaHotReloadHelper
// 0x000C (0x0028 - 0x001C)
class ULuaHotReloadHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScriptChangedDelegate;                                  // 0x001C(0x000C) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LuaHotReload.LuaHotReloadHelper");
		return pStaticClass;
	}


	void OnLuaFileHotUpdate(const struct FString& NotifyMessage);
};


}

