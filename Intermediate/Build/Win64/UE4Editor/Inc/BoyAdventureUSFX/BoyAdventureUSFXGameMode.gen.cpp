// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/BoyAdventureUSFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoyAdventureUSFXGameMode() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_ABoyAdventureUSFXGameMode_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_ABoyAdventureUSFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void ABoyAdventureUSFXGameMode::StaticRegisterNativesABoyAdventureUSFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABoyAdventureUSFXGameMode_NoRegister()
	{
		return ABoyAdventureUSFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BoyAdventureUSFXGameMode.h" },
		{ "ModuleRelativePath", "BoyAdventureUSFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoyAdventureUSFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::ClassParams = {
		&ABoyAdventureUSFXGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoyAdventureUSFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoyAdventureUSFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoyAdventureUSFXGameMode, 3822821567);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<ABoyAdventureUSFXGameMode>()
	{
		return ABoyAdventureUSFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoyAdventureUSFXGameMode(Z_Construct_UClass_ABoyAdventureUSFXGameMode, &ABoyAdventureUSFXGameMode::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("ABoyAdventureUSFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoyAdventureUSFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
