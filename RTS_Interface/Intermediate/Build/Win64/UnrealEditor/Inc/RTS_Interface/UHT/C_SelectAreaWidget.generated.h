// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Widget/C_SelectAreaWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef RTS_INTERFACE_C_SelectAreaWidget_generated_h
#error "C_SelectAreaWidget.generated.h already included, missing '#pragma once' in C_SelectAreaWidget.h"
#endif
#define RTS_INTERFACE_C_SelectAreaWidget_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_SelectAreaWidget(); \
	friend struct Z_Construct_UClass_UC_SelectAreaWidget_Statics; \
public: \
	DECLARE_CLASS(UC_SelectAreaWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(UC_SelectAreaWidget)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_SelectAreaWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_SelectAreaWidget(UC_SelectAreaWidget&&); \
	UC_SelectAreaWidget(const UC_SelectAreaWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_SelectAreaWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_SelectAreaWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_SelectAreaWidget) \
	NO_API virtual ~UC_SelectAreaWidget();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_16_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class UC_SelectAreaWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Widget_C_SelectAreaWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
