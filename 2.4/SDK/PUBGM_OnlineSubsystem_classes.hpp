#pragma once

// PUBG MOBILE 2.4.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystem.NamedInterfaces
// 0x002C (0x0048 - 0x001C)
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x001C(0x000C) (ZeroConstructor)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x0028(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0034(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return pStaticClass;
	}

};


// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0020 - 0x0020)
class UTurnBasedMatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return pStaticClass;
	}


	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};


}

