// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/RTS_InterfaceGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_InterfaceGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ARTS_InterfaceGameMode();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ARTS_InterfaceGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class ARTS_InterfaceGameMode
void ARTS_InterfaceGameMode::StaticRegisterNativesARTS_InterfaceGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTS_InterfaceGameMode);
UClass* Z_Construct_UClass_ARTS_InterfaceGameMode_NoRegister()
{
	return ARTS_InterfaceGameMode::StaticClass();
}
struct Z_Construct_UClass_ARTS_InterfaceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTS_InterfaceGameMode.h" },
		{ "ModuleRelativePath", "RTS_InterfaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_InterfaceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::ClassParams = {
	&ARTS_InterfaceGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARTS_InterfaceGameMode()
{
	if (!Z_Registration_Info_UClass_ARTS_InterfaceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTS_InterfaceGameMode.OuterSingleton, Z_Construct_UClass_ARTS_InterfaceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTS_InterfaceGameMode.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<ARTS_InterfaceGameMode>()
{
	return ARTS_InterfaceGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_InterfaceGameMode);
ARTS_InterfaceGameMode::~ARTS_InterfaceGameMode() {}
// End Class ARTS_InterfaceGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTS_InterfaceGameMode, ARTS_InterfaceGameMode::StaticClass, TEXT("ARTS_InterfaceGameMode"), &Z_Registration_Info_UClass_ARTS_InterfaceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTS_InterfaceGameMode), 1526135762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_3835294107(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
