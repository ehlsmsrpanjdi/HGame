// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Instance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_C_Instance_generated_h
#error "C_Instance.generated.h already included, missing '#pragma once' in C_Instance.h"
#endif
#define RTS_INTERFACE_C_Instance_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_Instance(); \
	friend struct Z_Construct_UClass_UC_Instance_Statics; \
public: \
	DECLARE_CLASS(UC_Instance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(UC_Instance)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_Instance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_Instance(UC_Instance&&); \
	UC_Instance(const UC_Instance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_Instance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_Instance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_Instance) \
	NO_API virtual ~UC_Instance();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_12_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class UC_Instance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Instance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
