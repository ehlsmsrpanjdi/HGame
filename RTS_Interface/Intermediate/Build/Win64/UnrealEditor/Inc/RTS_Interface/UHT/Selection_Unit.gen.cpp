// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/C_Unit/Selection_Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelection_Unit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Unit_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class ASelection_Unit
void ASelection_Unit::StaticRegisterNativesASelection_Unit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelection_Unit);
UClass* Z_Construct_UClass_ASelection_Unit_NoRegister()
{
	return ASelection_Unit::StaticClass();
}
struct Z_Construct_UClass_ASelection_Unit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Game/C_Unit/Selection_Unit.h" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Selection_Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Game/C_Unit/Selection_Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelection_Unit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelection_Unit_Statics::NewProp_DSelection = { "DSelection", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelection_Unit, DSelection), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DSelection_MetaData), NewProp_DSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelection_Unit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelection_Unit_Statics::NewProp_DSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASelection_Unit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelection_Unit_Statics::ClassParams = {
	&ASelection_Unit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASelection_Unit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelection_Unit_Statics::Class_MetaDataParams), Z_Construct_UClass_ASelection_Unit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASelection_Unit()
{
	if (!Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton, Z_Construct_UClass_ASelection_Unit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASelection_Unit.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<ASelection_Unit>()
{
	return ASelection_Unit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASelection_Unit);
ASelection_Unit::~ASelection_Unit() {}
// End Class ASelection_Unit

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASelection_Unit, ASelection_Unit::StaticClass, TEXT("ASelection_Unit"), &Z_Registration_Info_UClass_ASelection_Unit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelection_Unit), 1896581733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_2562677751(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_Selection_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
