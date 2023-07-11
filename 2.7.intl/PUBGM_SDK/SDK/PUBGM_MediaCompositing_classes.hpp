#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaCompositing.MediaPlane
// 0x0008 (0x0310 - 0x0308)
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               // 0x0308(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlane");
		return pStaticClass;
	}

};


// Class MediaCompositing.MediaPlaneComponent
// 0x00C0 (0x06D0 - 0x0610)
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                    // 0x0610(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0640(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneComponent");
		return pStaticClass;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};


// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (0x0610 - 0x0610)
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneFrustumComponent");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	bool                                               bLooping;                                                 // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x009C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseExternalMediaPlayer;                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	class UMediaPlayer*                                ExternalMediaPlayer;                                      // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return pStaticClass;
	}

};


}

