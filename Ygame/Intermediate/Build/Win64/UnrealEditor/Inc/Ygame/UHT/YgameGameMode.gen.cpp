// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ygame/YgameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYgameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Ygame();
YGAME_API UClass* Z_Construct_UClass_AYgameGameMode();
YGAME_API UClass* Z_Construct_UClass_AYgameGameMode_NoRegister();
// End Cross Module References

// Begin Class AYgameGameMode
void AYgameGameMode::StaticRegisterNativesAYgameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYgameGameMode);
UClass* Z_Construct_UClass_AYgameGameMode_NoRegister()
{
	return AYgameGameMode::StaticClass();
}
struct Z_Construct_UClass_AYgameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "YgameGameMode.h" },
		{ "ModuleRelativePath", "YgameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYgameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYgameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ygame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYgameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYgameGameMode_Statics::ClassParams = {
	&AYgameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYgameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AYgameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYgameGameMode()
{
	if (!Z_Registration_Info_UClass_AYgameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYgameGameMode.OuterSingleton, Z_Construct_UClass_AYgameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYgameGameMode.OuterSingleton;
}
template<> YGAME_API UClass* StaticClass<AYgameGameMode>()
{
	return AYgameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYgameGameMode);
AYgameGameMode::~AYgameGameMode() {}
// End Class AYgameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYgameGameMode, AYgameGameMode::StaticClass, TEXT("AYgameGameMode"), &Z_Registration_Info_UClass_AYgameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYgameGameMode), 4139808606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgameGameMode_h_2698527528(TEXT("/Script/Ygame"),
	Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
