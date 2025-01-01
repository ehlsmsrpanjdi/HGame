// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ygame/YgamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYgamePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ygame();
YGAME_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();
YGAME_API UClass* Z_Construct_UClass_AYgamePlayerController();
YGAME_API UClass* Z_Construct_UClass_AYgamePlayerController_NoRegister();
// End Cross Module References

// Begin Class AYgamePlayerController
void AYgamePlayerController::StaticRegisterNativesAYgamePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYgamePlayerController);
UClass* Z_Construct_UClass_AYgamePlayerController_NoRegister()
{
	return AYgamePlayerController::StaticClass();
}
struct Z_Construct_UClass_AYgamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "YgamePlayerController.h" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClick_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ROnClick_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpWheel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownWheel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftWheel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightWheel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Mouse_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelTime_MetaData[] = {
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Main_Body_MetaData[] = {
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPortSize_MetaData[] = {
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[] = {
		{ "ModuleRelativePath", "YgamePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnClick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ROnClick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Mouse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Main_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewPortSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYgamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_OnClick = { "OnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, OnClick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClick_MetaData), NewProp_OnClick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_ROnClick = { "ROnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, ROnClick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ROnClick_MetaData), NewProp_ROnClick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_UpWheel = { "UpWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, UpWheel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpWheel_MetaData), NewProp_UpWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_DownWheel = { "DownWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, DownWheel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownWheel_MetaData), NewProp_DownWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_LeftWheel = { "LeftWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, LeftWheel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftWheel_MetaData), NewProp_LeftWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_RightWheel = { "RightWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, RightWheel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightWheel_MetaData), NewProp_RightWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_IA_Mouse = { "IA_Mouse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, IA_Mouse), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Mouse_MetaData), NewProp_IA_Mouse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MainContext = { "MainContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, MainContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainContext_MetaData), NewProp_MainContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_WheelTime = { "WheelTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, WheelTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelTime_MetaData), NewProp_WheelTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_Main_Body = { "Main_Body", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, Main_Body), Z_Construct_UClass_ACameraPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Main_Body_MetaData), NewProp_Main_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_FloatingMovement = { "FloatingMovement", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, FloatingMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingMovement_MetaData), NewProp_FloatingMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_ViewPortSize = { "ViewPortSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, ViewPortSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPortSize_MetaData), NewProp_ViewPortSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYgamePlayerController, MP), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MP_MetaData), NewProp_MP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYgamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_OnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_ROnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_UpWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_DownWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_LeftWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_RightWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_IA_Mouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MainContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_WheelTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_Main_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_FloatingMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_ViewPortSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYgamePlayerController_Statics::NewProp_MP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYgamePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AYgamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Ygame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYgamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYgamePlayerController_Statics::ClassParams = {
	&AYgamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AYgamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AYgamePlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYgamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AYgamePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYgamePlayerController()
{
	if (!Z_Registration_Info_UClass_AYgamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYgamePlayerController.OuterSingleton, Z_Construct_UClass_AYgamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYgamePlayerController.OuterSingleton;
}
template<> YGAME_API UClass* StaticClass<AYgamePlayerController>()
{
	return AYgamePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYgamePlayerController);
AYgamePlayerController::~AYgamePlayerController() {}
// End Class AYgamePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgamePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYgamePlayerController, AYgamePlayerController::StaticClass, TEXT("AYgamePlayerController"), &Z_Registration_Info_UClass_AYgamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYgamePlayerController), 3176355083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgamePlayerController_h_150620572(TEXT("/Script/Ygame"),
	Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ygame_Source_Ygame_YgamePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
