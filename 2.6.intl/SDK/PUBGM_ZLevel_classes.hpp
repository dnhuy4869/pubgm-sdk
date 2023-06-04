#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZLevel.ZLevelData
// 0x00B8 (0x03C0 - 0x0308)
class AZLevelData : public AActor
{
public:
	struct FGameLevelDesc                              LevelDesc;                                                // 0x0308(0x0014) (Edit)
	TArray<struct FString>                             TargetClassPaths;                                         // 0x031C(0x000C) (Edit, ZeroConstructor)
	struct FString                                     LeveDirectorFilePath;                                     // 0x0328(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              // 0x0334(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FString                                     EndCondPar;                                               // 0x0338(0x000C) (Edit, ZeroConstructor)
	bool                                               IsLastLevel;                                              // 0x0344(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                DiffcultPerc;                                             // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UZPVECircle*>                         PVECircleConfigs;                                         // 0x034C(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZPVERelifePoint*>                    PVERelifePoints;                                          // 0x0358(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZMonsterSpotGroup*>                  MonsterSpotGroups;                                        // 0x0364(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FVector>                             TaskPointLocations;                                       // 0x0370(0x000C) (Edit, ZeroConstructor)
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      // 0x037C(0x000C) (Edit, ZeroConstructor)
	TArray<struct FPVECircle>                          PVECircleInfo;                                            // 0x0388(0x000C) (Edit, ZeroConstructor)
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           // 0x0394(0x000C) (Edit, ZeroConstructor)
	TArray<struct FLevelData>                          CfgList;                                                  // 0x03A0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             // 0x03AC(0x000C) (Edit, ZeroConstructor)
	int                                                CurComponentNameIndex;                                    // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZLevelData");
		return pStaticClass;
	}


	void ReBindLevelDataComponent();
	void CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup);
};


// Class ZLevel.ZSpotSceneComponent
// 0x0000 (0x0260 - 0x0260)
class UZSpotSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZSpotSceneComponent");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterRoadPoint
// 0x0010 (0x0270 - 0x0260)
class UZMonsterRoadPoint : public UZSpotSceneComponent
{
public:
	int                                                ID;                                                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Radius;                                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterRoadPoint");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpot
// 0x0020 (0x0280 - 0x0260)
class UZMonsterSpot : public UZSpotSceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MonsterSpotType;                                          // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	TArray<class UZMonsterRoadPoint*>                  RoadPointList;                                            // 0x0270(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      SpotRadius;                                               // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x027D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpot");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpotGroup
// 0x0020 (0x0280 - 0x0260)
class UZMonsterSpotGroup : public USceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UZMonsterSpot*>                       SpotList;                                                 // 0x026C(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpotGroup");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVECircle
// 0x0020 (0x0280 - 0x0260)
class UZPVECircle : public UZSpotSceneComponent
{
public:
	int                                                CircleID;                                                 // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   targetPos;                                                // 0x0264(0x0008) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pain;                                                     // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVECircle");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVERelifePoint
// 0x0010 (0x0270 - 0x0260)
class UZPVERelifePoint : public UZSpotSceneComponent
{
public:
	int                                                ID;                                                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActivePoint;                                            // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0265(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVERelifePoint");
		return pStaticClass;
	}

};


}

