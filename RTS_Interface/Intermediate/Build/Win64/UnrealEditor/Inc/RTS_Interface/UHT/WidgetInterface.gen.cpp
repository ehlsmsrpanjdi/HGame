// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_Interface/C_Game/Interface/WidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UWidgetInterface();
RTS_INTERFACE_API UClass* Z_Construct_UClass_UWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS_Interface();
// End Cross Module References

// Begin Interface UWidgetInterface Function OnClick
void IWidgetInterface::OnClick()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnClick instead.");
}
static FName NAME_UWidgetInterface_OnClick = FName(TEXT("OnClick"));
void IWidgetInterface::Execute_OnClick(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWidgetInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UWidgetInterface_OnClick);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IWidgetInterface*)(O->GetNativeInterfaceAddress(UWidgetInterface::StaticClass())))
	{
		I->OnClick_Implementation();
	}
}
struct Z_Construct_UFunction_UWidgetInterface_OnClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "C_Game/Interface/WidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInterface_OnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInterface, nullptr, "OnClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInterface_OnClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInterface_OnClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetInterface_OnClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInterface_OnClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWidgetInterface::execOnClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClick_Implementation();
	P_NATIVE_END;
}
// End Interface UWidgetInterface Function OnClick

// Begin Interface UWidgetInterface
void UWidgetInterface::StaticRegisterNativesUWidgetInterface()
{
	UClass* Class = UWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClick", &IWidgetInterface::execOnClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetInterface);
UClass* Z_Construct_UClass_UWidgetInterface_NoRegister()
{
	return UWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "C_Game/Interface/WidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetInterface_OnClick, "OnClick" }, // 133746406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetInterface_Statics::ClassParams = {
	&UWidgetInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetInterface.OuterSingleton, Z_Construct_UClass_UWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetInterface.OuterSingleton;
}
template<> RTS_INTERFACE_API UClass* StaticClass<UWidgetInterface>()
{
	return UWidgetInterface::StaticClass();
}
UWidgetInterface::UWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetInterface);
UWidgetInterface::~UWidgetInterface() {}
// End Interface UWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetInterface, UWidgetInterface::StaticClass, TEXT("UWidgetInterface"), &Z_Registration_Info_UClass_UWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetInterface), 1217829348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_3095229296(TEXT("/Script/RTS_Interface"),
	Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
