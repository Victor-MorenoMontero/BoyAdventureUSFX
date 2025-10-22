// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/Amigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmigo() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AAmigo_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AAmigo();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AAmigo::StaticRegisterNativesAAmigo()
	{
	}
	UClass* Z_Construct_UClass_AAmigo_NoRegister()
	{
		return AAmigo::StaticClass();
	}
	struct Z_Construct_UClass_AAmigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmigo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Amigo.h" },
		{ "ModuleRelativePath", "Amigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmigo_Statics::ClassParams = {
		&AAmigo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmigo, 1748749387);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AAmigo>()
	{
		return AAmigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmigo(Z_Construct_UClass_AAmigo, &AAmigo::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AAmigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
