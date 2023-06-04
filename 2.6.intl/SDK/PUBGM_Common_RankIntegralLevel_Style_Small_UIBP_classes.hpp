#pragma once

// PUBG MOBILE 2.5.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C
// 0x0088 (0x02E0 - 0x0258)
class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0004) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x025C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ERankIntegralType>                     RankIntegralType;                                         // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	class UUserWidget*                                 RankIntegralUIBP;                                         // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 RankTextColor;                                            // 0x0268(0x001C) (Edit, BlueprintVisible)
	struct FSlateColor                                 RankTextShadowColor;                                      // 0x0284(0x001C) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              RankFontInfo;                                             // 0x02A0(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void IsSegmentStarSwitchOpen(bool* isStarOpen);
	void SetArenaRankInteralWithCustomColor(int RankInteral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color);
	void SetRankInteralBySeason(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID);
	void SetRankCustomColor(int rankIntegral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color, int SeasonID);
	void SetRankInteralJaguar(int rankIntegral, class UTextBlock* TextIntegralName);
	void SetRankInteral(int rankIntegral, class UTextBlock* TextIntegralName);
	void SetRankInteralInXMission(int rankIntegral, class UTextBlock* TextIntegralName);
	void SetArenaRankInteral(int rankIntegral, class UTextBlock* TextIntegralName);
	void SetRankInteralCommon(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ConstructItem();
	void Destruct();
	void ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

