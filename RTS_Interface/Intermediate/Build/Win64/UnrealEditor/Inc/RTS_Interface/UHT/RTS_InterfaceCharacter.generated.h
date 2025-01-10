// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RTS_InterfaceCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_RTS_InterfaceCharacter_generated_h
#error "RTS_InterfaceCharacter.generated.h already included, missing '#pragma once' in RTS_InterfaceCharacter.h"
#endif
#define RTS_INTERFACE_RTS_InterfaceCharacter_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTS_InterfaceCharacter(); \
	friend struct Z_Construct_UClass_ARTS_InterfaceCharacter_Statics; \
public: \
	DECLARE_CLASS(ARTS_InterfaceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(ARTS_InterfaceCharacter)


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARTS_InterfaceCharacter(ARTS_InterfaceCharacter&&); \
	ARTS_InterfaceCharacter(const ARTS_InterfaceCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTS_InterfaceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTS_InterfaceCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTS_InterfaceCharacter) \
	NO_API virtual ~ARTS_InterfaceCharacter();


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_9_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class ARTS_InterfaceCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
