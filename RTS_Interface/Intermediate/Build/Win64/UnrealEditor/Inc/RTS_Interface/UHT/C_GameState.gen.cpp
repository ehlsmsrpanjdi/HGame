// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_GameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_GameState();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_GameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class AC_GameState
void AC_GameState::StaticRegisterNativesAC_GameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_GameState);
UClass* Z_Construct_UClass_AC_GameState_NoRegister()
{
	return AC_GameState::StaticClass();
}
struct Z_Construct_UClass_AC_GameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C_GameState.h" },
		{ "ModuleRelativePath", "C_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_GameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_GameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_GameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_GameState_Statics::ClassParams = {
	&AC_GameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_GameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_GameState()
{
	if (!Z_Registration_Info_UClass_AC_GameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_GameState.OuterSingleton, Z_Construct_UClass_AC_GameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_GameState.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<AC_GameState>()
{
	return AC_GameState::StaticClass();
}
AC_GameState::AC_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_GameState);
AC_GameState::~AC_GameState() {}
// End Class AC_GameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_GameState, AC_GameState::StaticClass, TEXT("AC_GameState"), &Z_Registration_Info_UClass_AC_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_GameState), 351443970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_3449838637(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
