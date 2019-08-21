// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFoil/ProjectFoilGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectFoilGameMode() {}
// Cross Module References
	PROJECTFOIL_API UClass* Z_Construct_UClass_AProjectFoilGameMode_NoRegister();
	PROJECTFOIL_API UClass* Z_Construct_UClass_AProjectFoilGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectFoil();
// End Cross Module References
	void AProjectFoilGameMode::StaticRegisterNativesAProjectFoilGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectFoilGameMode_NoRegister()
	{
		return AProjectFoilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectFoilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectFoilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFoil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectFoilGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectFoilGameMode.h" },
		{ "ModuleRelativePath", "ProjectFoilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectFoilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectFoilGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectFoilGameMode_Statics::ClassParams = {
		&AProjectFoilGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectFoilGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectFoilGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectFoilGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectFoilGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectFoilGameMode, 2496991757);
	template<> PROJECTFOIL_API UClass* StaticClass<AProjectFoilGameMode>()
	{
		return AProjectFoilGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectFoilGameMode(Z_Construct_UClass_AProjectFoilGameMode, &AProjectFoilGameMode::StaticClass, TEXT("/Script/ProjectFoil"), TEXT("AProjectFoilGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectFoilGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
