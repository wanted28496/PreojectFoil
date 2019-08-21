// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTFOIL_ProjectFoilCharacter_generated_h
#error "ProjectFoilCharacter.generated.h already included, missing '#pragma once' in ProjectFoilCharacter.h"
#endif
#define PROJECTFOIL_ProjectFoilCharacter_generated_h

#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_RPC_WRAPPERS
#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectFoilCharacter(); \
	friend struct Z_Construct_UClass_AProjectFoilCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectFoilCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectFoil"), NO_API) \
	DECLARE_SERIALIZER(AProjectFoilCharacter)


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectFoilCharacter(); \
	friend struct Z_Construct_UClass_AProjectFoilCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectFoilCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectFoil"), NO_API) \
	DECLARE_SERIALIZER(AProjectFoilCharacter)


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectFoilCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectFoilCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectFoilCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectFoilCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectFoilCharacter(AProjectFoilCharacter&&); \
	NO_API AProjectFoilCharacter(const AProjectFoilCharacter&); \
public:


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectFoilCharacter(AProjectFoilCharacter&&); \
	NO_API AProjectFoilCharacter(const AProjectFoilCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectFoilCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectFoilCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectFoilCharacter)


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AProjectFoilCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AProjectFoilCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AProjectFoilCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AProjectFoilCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AProjectFoilCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AProjectFoilCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AProjectFoilCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AProjectFoilCharacter, L_MotionController); }


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_11_PROLOG
#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_RPC_WRAPPERS \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_INCLASS \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFOIL_API UClass* StaticClass<class AProjectFoilCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectFoil_Source_ProjectFoil_ProjectFoilCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
