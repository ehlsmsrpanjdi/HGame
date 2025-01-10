// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/RTS_InterfacePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_InterfacePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ARTS_InterfacePlayerController();
RTS_INTERFACE_API UClass* Z_Construct_UClass_ARTS_InterfacePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Class ARTS_InterfacePlayerController Function GetMousePos
struct Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics
{
	struct RTS_InterfacePlayerController_eventGetMousePos_Parms
	{
		float _DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::NewProp__DeltaTime = { "_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTS_InterfacePlayerController_eventGetMousePos_Parms, _DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::NewProp__DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTS_InterfacePlayerController, nullptr, "GetMousePos", nullptr, nullptr, Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::RTS_InterfacePlayerController_eventGetMousePos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::RTS_InterfacePlayerController_eventGetMousePos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTS_InterfacePlayerController::execGetMousePos)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMousePos(Z_Param__DeltaTime);
	P_NATIVE_END;
}
// End Class ARTS_InterfacePlayerController Function GetMousePos

// Begin Class ARTS_InterfacePlayerController
void ARTS_InterfacePlayerController::StaticRegisterNativesARTS_InterfacePlayerController()
{
	UClass* Class = ARTS_InterfacePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMousePos", &ARTS_InterfacePlayerController::execGetMousePos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTS_InterfacePlayerController);
UClass* Z_Construct_UClass_ARTS_InterfacePlayerController_NoRegister()
{
	return ARTS_InterfacePlayerController::StaticClass();
}
struct Z_Construct_UClass_ARTS_InterfacePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RTS_InterfacePlayerController.h" },
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_mc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS_InterfacePlayerController" },
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_WheelUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS_InterfacePlayerController" },
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_WheelDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS_InterfacePlayerController" },
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MLocation_MetaData[] = {
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewSize_MetaData[] = {
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensetive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS_InterfacePlayerController" },
		{ "ModuleRelativePath", "RTS_InterfacePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_mc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_WheelUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_WheelDown;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensetive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTS_InterfacePlayerController_GetMousePos, "GetMousePos" }, // 1638410919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_InterfacePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_mc = { "Input_mc", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTS_InterfacePlayerController, Input_mc), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_mc_MetaData), NewProp_Input_mc_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_WheelUp = { "Input_WheelUp", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTS_InterfacePlayerController, Input_WheelUp), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_WheelUp_MetaData), NewProp_Input_WheelUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_WheelDown = { "Input_WheelDown", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTS_InterfacePlayerController, Input_WheelDown), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_WheelDown_MetaData), NewProp_Input_WheelDown_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_MLocation = { "MLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(MLocation, ARTS_InterfacePlayerController), STRUCT_OFFSET(ARTS_InterfacePlayerController, MLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MLocation_MetaData), NewProp_MLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_ViewSize = { "ViewSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ViewSize, ARTS_InterfacePlayerController), STRUCT_OFFSET(ARTS_InterfacePlayerController, ViewSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewSize_MetaData), NewProp_ViewSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_MouseSensetive = { "MouseSensetive", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTS_InterfacePlayerController, MouseSensetive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensetive_MetaData), NewProp_MouseSensetive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_mc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_WheelUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_Input_WheelDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_MLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_ViewSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::NewProp_MouseSensetive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::ClassParams = {
	&ARTS_InterfacePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARTS_InterfacePlayerController()
{
	if (!Z_Registration_Info_UClass_ARTS_InterfacePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTS_InterfacePlayerController.OuterSingleton, Z_Construct_UClass_ARTS_InterfacePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTS_InterfacePlayerController.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<ARTS_InterfacePlayerController>()
{
	return ARTS_InterfacePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_InterfacePlayerController);
ARTS_InterfacePlayerController::~ARTS_InterfacePlayerController() {}
// End Class ARTS_InterfacePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTS_InterfacePlayerController, ARTS_InterfacePlayerController::StaticClass, TEXT("ARTS_InterfacePlayerController"), &Z_Registration_Info_UClass_ARTS_InterfacePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTS_InterfacePlayerController), 623207062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_1316709584(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
