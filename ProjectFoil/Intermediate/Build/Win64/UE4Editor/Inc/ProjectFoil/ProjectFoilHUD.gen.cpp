// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFoil/ProjectFoilHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectFoilHUD() {}
// Cross Module References
	PROJECTFOIL_API UClass* Z_Construct_UClass_AProjectFoilHUD_NoRegister();
	PROJECTFOIL_API UClass* Z_Construct_UClass_AProjectFoilHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProjectFoil();
// End Cross Module References
	void AProjectFoilHUD::StaticRegisterNativesAProjectFoilHUD()
	{
	}
	UClass* Z_Construct_UClass_AProjectFoilHUD_NoRegister()
	{
		return AProjectFoilHUD::StaticClass();
	}
	struct Z_Construct_UClass_AProjectFoilHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectFoilHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFoil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectFoilHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ProjectFoilHUD.h" },
		{ "ModuleRelativePath", "ProjectFoilHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectFoilHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectFoilHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectFoilHUD_Statics::ClassParams = {
		&AProjectFoilHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectFoilHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectFoilHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectFoilHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectFoilHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectFoilHUD, 87357644);
	template<> PROJECTFOIL_API UClass* StaticClass<AProjectFoilHUD>()
	{
		return AProjectFoilHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectFoilHUD(Z_Construct_UClass_AProjectFoilHUD, &AProjectFoilHUD::StaticClass, TEXT("/Script/ProjectFoil"), TEXT("AProjectFoilHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectFoilHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
