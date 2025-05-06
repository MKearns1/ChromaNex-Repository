// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChromaNex/MyTriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTriggerBox() {}
// Cross Module References
	CHROMANEX_API UClass* Z_Construct_UClass_AMyTriggerBox();
	CHROMANEX_API UClass* Z_Construct_UClass_AMyTriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_ChromaNex();
// End Cross Module References
	void AMyTriggerBox::StaticRegisterNativesAMyTriggerBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTriggerBox);
	UClass* Z_Construct_UClass_AMyTriggerBox_NoRegister()
	{
		return AMyTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AMyTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ChromaNex,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyTriggerBox.h" },
		{ "ModuleRelativePath", "MyTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTriggerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTriggerBox_Statics::ClassParams = {
		&AMyTriggerBox::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyTriggerBox()
	{
		if (!Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton, Z_Construct_UClass_AMyTriggerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton;
	}
	template<> CHROMANEX_API UClass* StaticClass<AMyTriggerBox>()
	{
		return AMyTriggerBox::StaticClass();
	}
	AMyTriggerBox::AMyTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTriggerBox);
	AMyTriggerBox::~AMyTriggerBox() {}
	struct Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_MyTriggerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_MyTriggerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTriggerBox, AMyTriggerBox::StaticClass, TEXT("AMyTriggerBox"), &Z_Registration_Info_UClass_AMyTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTriggerBox), 1769200364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_MyTriggerBox_h_2285485111(TEXT("/Script/ChromaNex"),
		Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_MyTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_MyTriggerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
