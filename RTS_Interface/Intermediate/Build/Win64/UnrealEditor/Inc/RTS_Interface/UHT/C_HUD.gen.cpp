// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_HUD() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_HUD();
RTS_INTERFACE_API UClass* Z_Construct_UClass_AC_HUD_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ARTS_InterfacePlayerController_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ASelection_Pawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class AC_HUD
void AC_HUD::StaticRegisterNativesAC_HUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_HUD);
UClass* Z_Construct_UClass_AC_HUD_NoRegister()
{
	return AC_HUD::StaticClass();
}
struct Z_Construct_UClass_AC_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "C_HUD.h" },
		{ "ModuleRelativePath", "C_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMousePos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "C_HUD" },
		{ "ModuleRelativePath", "C_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMousePos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "C_HUD" },
		{ "ModuleRelativePath", "C_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "C_HUD" },
		{ "ModuleRelativePath", "C_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDrawing_MetaData[] = {
		{ "ModuleRelativePath", "C_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTS_Controller_MetaData[] = {
		{ "ModuleRelativePath", "C_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartMousePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMousePos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
	static void NewProp_bIsDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDrawing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTS_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_StartMousePos = { "StartMousePos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_HUD, StartMousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMousePos_MetaData), NewProp_StartMousePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_CurrentMousePos = { "CurrentMousePos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_HUD, CurrentMousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMousePos_MetaData), NewProp_CurrentMousePos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASelection_Pawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_HUD, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedActors_MetaData), NewProp_SelectedActors_MetaData) };
void Z_Construct_UClass_AC_HUD_Statics::NewProp_bIsDrawing_SetBit(void* Obj)
{
	((AC_HUD*)Obj)->bIsDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_bIsDrawing = { "bIsDrawing", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_HUD), &Z_Construct_UClass_AC_HUD_Statics::NewProp_bIsDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDrawing_MetaData), NewProp_bIsDrawing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HUD_Statics::NewProp_RTS_Controller = { "RTS_Controller", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_HUD, RTS_Controller), Z_Construct_UClass_ARTS_InterfacePlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTS_Controller_MetaData), NewProp_RTS_Controller_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_StartMousePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_CurrentMousePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_SelectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_SelectedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_bIsDrawing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HUD_Statics::NewProp_RTS_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_HUD_Statics::ClassParams = {
	&AC_HUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_HUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_HUD()
{
	if (!Z_Registration_Info_UClass_AC_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_HUD.OuterSingleton, Z_Construct_UClass_AC_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_HUD.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<AC_HUD>()
{
	return AC_HUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_HUD);
AC_HUD::~AC_HUD() {}
// End Class AC_HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_HUD, AC_HUD::StaticClass, TEXT("AC_HUD"), &Z_Registration_Info_UClass_AC_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_HUD), 1121768920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_1219731203(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
