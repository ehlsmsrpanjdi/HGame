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
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_All_Bast_Unit_MetaData[] = {
		{ "Category", "C_GameState" },
		{ "ModuleRelativePath", "C_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_All_Bast_Unit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_All_Bast_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_GameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_GameState_Statics::NewProp_All_Bast_Unit_Inner = { "All_Bast_Unit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASelection_Unit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC_GameState_Statics::NewProp_All_Bast_Unit = { "All_Bast_Unit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_GameState, All_Bast_Unit), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_All_Bast_Unit_MetaData), NewProp_All_Bast_Unit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_GameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_GameState_Statics::NewProp_All_Bast_Unit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_GameState_Statics::NewProp_All_Bast_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_GameState_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AC_GameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_GameState_Statics::PropPointers),
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
		{ Z_Construct_UClass_AC_GameState, AC_GameState::StaticClass, TEXT("AC_GameState"), &Z_Registration_Info_UClass_AC_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_GameState), 3200031140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_1518153134(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
