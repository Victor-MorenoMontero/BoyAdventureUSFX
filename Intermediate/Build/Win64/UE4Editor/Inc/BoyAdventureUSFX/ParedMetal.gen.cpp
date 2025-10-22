// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ParedMetal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParedMetal() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AParedMetal_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AParedMetal();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoPared();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AParedMetal::StaticRegisterNativesAParedMetal()
	{
	}
	UClass* Z_Construct_UClass_AParedMetal_NoRegister()
	{
		return AParedMetal::StaticClass();
	}
	struct Z_Construct_UClass_AParedMetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesplazamientoPuerta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesplazamientoPuerta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteDesplazamientoPuerta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteDesplazamientoPuerta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activo_MetaData[];
#endif
		static void NewProp_Activo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Activo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParedMetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoPared,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParedMetal.h" },
		{ "ModuleRelativePath", "ParedMetal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedMetal_Statics::NewProp_DesplazamientoPuerta_MetaData[] = {
		{ "Category", "Pared Metal" },
		{ "ModuleRelativePath", "ParedMetal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParedMetal_Statics::NewProp_DesplazamientoPuerta = { "DesplazamientoPuerta", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParedMetal, DesplazamientoPuerta), METADATA_PARAMS(Z_Construct_UClass_AParedMetal_Statics::NewProp_DesplazamientoPuerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::NewProp_DesplazamientoPuerta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedMetal_Statics::NewProp_LimiteDesplazamientoPuerta_MetaData[] = {
		{ "Category", "Pared Metal" },
		{ "ModuleRelativePath", "ParedMetal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParedMetal_Statics::NewProp_LimiteDesplazamientoPuerta = { "LimiteDesplazamientoPuerta", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParedMetal, LimiteDesplazamientoPuerta), METADATA_PARAMS(Z_Construct_UClass_AParedMetal_Statics::NewProp_LimiteDesplazamientoPuerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::NewProp_LimiteDesplazamientoPuerta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo_MetaData[] = {
		{ "Category", "Pared Metal" },
		{ "ModuleRelativePath", "ParedMetal.h" },
	};
#endif
	void Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo_SetBit(void* Obj)
	{
		((AParedMetal*)Obj)->Activo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo = { "Activo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AParedMetal), &Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParedMetal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParedMetal_Statics::NewProp_DesplazamientoPuerta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParedMetal_Statics::NewProp_LimiteDesplazamientoPuerta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParedMetal_Statics::NewProp_Activo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParedMetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParedMetal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParedMetal_Statics::ClassParams = {
		&AParedMetal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParedMetal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParedMetal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParedMetal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParedMetal, 216839418);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AParedMetal>()
	{
		return AParedMetal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParedMetal(Z_Construct_UClass_AParedMetal, &AParedMetal::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AParedMetal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParedMetal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
