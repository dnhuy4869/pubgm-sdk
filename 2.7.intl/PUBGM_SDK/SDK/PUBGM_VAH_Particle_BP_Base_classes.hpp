#pragma once

// PUBG MOBILE 2.7.0 SDK generated by Huy#3877 

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VAH_Particle_BP_Base.VAH_Particle_BP_Base_C
// 0x0000 (0x0070 - 0x0070)
class UVAH_Particle_BP_Base_C : public UAvatarCustomParticle_BP_C
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VAH_Particle_BP_Base.VAH_Particle_BP_Base_C");
		return pStaticClass;
	}

};


}

