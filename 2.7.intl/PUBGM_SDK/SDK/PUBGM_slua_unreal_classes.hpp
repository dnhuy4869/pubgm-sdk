#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class slua_unreal.LuaInstancedActorComponent
// 0x0058 (0x0118 - 0x00C0)
class ULuaInstancedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00C0(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0104(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaInstancedActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaObject
// 0x0054 (0x0070 - 0x001C)
class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x001C(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0064(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaObject");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaActor
// 0x0090 (0x0398 - 0x0308)
class ALuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0308(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x034C(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0388(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaActorComponent
// 0x0090 (0x0150 - 0x00C0)
class ULuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00C0(0x0040) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0100(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x013C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaGameMode
// 0x0050 (0x03E0 - 0x0390)
class ALuaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0390(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameMode");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaGameState
// 0x0090 (0x03E8 - 0x0358)
class ALuaGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0358(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x039C(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerState
// 0x0088 (0x0400 - 0x0378)
class ALuaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0378(0x0040) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x03B8(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x03F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerController
// 0x0090 (0x0640 - 0x05B0)
class ALuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x05B0(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x05F4(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0630(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerController");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaUserWidget
// 0x0050 (0x0258 - 0x0208)
class ULuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0208(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0248(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaUserWidget");
		return pStaticClass;
	}

};


// Class slua_unreal.LatentDelegate
// 0x0004 (0x0020 - 0x001C)
class ULatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};


// Class slua_unreal.LuaDelegate
// 0x000C (0x0028 - 0x001C)
class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class slua_unreal.LuaLevelScriptActor
// 0x0050 (0x0360 - 0x0310)
class ALuaLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0310(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0350(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaLevelScriptActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaOverrider
// 0x0004 (0x0020 - 0x001C)
class ULuaOverrider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverrider");
		return pStaticClass;
	}


	void TriggerAnimNotify();
	void InputVectorAxis(const struct FVector& AxisValue);
	void InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InputGesture(float Value);
	void InputAxis(float AxisValue);
	void InputAction(const struct FKey& Key);
};


// Class slua_unreal.InstancedLuaInterface
// 0x0000 (0x0020 - 0x0020)
class UInstancedLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.InstancedLuaInterface");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaOverriderInterface
// 0x0000 (0x0020 - 0x0020)
class ULuaOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverriderInterface");
		return pStaticClass;
	}


	struct FString GetLuaFilePath();
};


// Class slua_unreal.SluaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class USluaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.SluaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FSluaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FSluaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FSluaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FSluaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FSluaBPVar& Value, int Index);
	static struct FSluaBPVar CreateVarFromString(const struct FString& Value);
	static struct FSluaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FSluaBPVar CreateVarFromNumber(float Value);
	static struct FSluaBPVar CreateVarFromInt(int Value);
	static struct FSluaBPVar CreateVarFromBool(bool Value);
	static struct FSluaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName);
	static struct FSluaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


}

