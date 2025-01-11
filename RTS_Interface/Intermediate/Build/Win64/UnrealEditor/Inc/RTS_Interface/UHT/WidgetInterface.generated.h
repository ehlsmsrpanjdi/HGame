// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/Interface/WidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_WidgetInterface_generated_h
#error "WidgetInterface.generated.h already included, missing '#pragma once' in WidgetInterface.h"
#endif
#define RTS_INTERFACE_WidgetInterface_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnClick_Implementation() {}; \
	DECLARE_FUNCTION(execOnClick);


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_CALLBACK_WRAPPERS
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetInterface(UWidgetInterface&&); \
	UWidgetInterface(const UWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInterface) \
	NO_API virtual ~UWidgetInterface();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWidgetInterface(); \
	friend struct Z_Construct_UClass_UWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(UWidgetInterface)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWidgetInterface() {} \
public: \
	typedef UWidgetInterface UClassType; \
	typedef IWidgetInterface ThisClass; \
	static void Execute_OnClick(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_13_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_CALLBACK_WRAPPERS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class UWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_Interface_WidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
