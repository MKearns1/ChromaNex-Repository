// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChromaNex/DoorTriggerBox_usingC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorTriggerBox_usingC() {}
// Cross Module References
	CHROMANEX_API UClass* Z_Construct_UClass_ADoorTriggerBox_usingC();
	CHROMANEX_API UClass* Z_Construct_UClass_ADoorTriggerBox_usingC_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_ChromaNex();
// End Cross Module References
	DEFINE_FUNCTION(ADoorTriggerBox_usingC::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoorTriggerBox_usingC::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ADoorTriggerBox_usingC::StaticRegisterNativesADoorTriggerBox_usingC()
	{
		UClass* Class = ADoorTriggerBox_usingC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ADoorTriggerBox_usingC::execOnOverlapBegin },
			{ "OnOverlapEnd", &ADoorTriggerBox_usingC::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics
	{
		struct DoorTriggerBox_usingC_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerBox_usingC_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerBox_usingC_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorTriggerBox_usingC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorTriggerBox_usingC, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::DoorTriggerBox_usingC_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::DoorTriggerBox_usingC_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics
	{
		struct DoorTriggerBox_usingC_eventOnOverlapEnd_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerBox_usingC_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerBox_usingC_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorTriggerBox_usingC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorTriggerBox_usingC, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::DoorTriggerBox_usingC_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::DoorTriggerBox_usingC_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorTriggerBox_usingC);
	UClass* Z_Construct_UClass_ADoorTriggerBox_usingC_NoRegister()
	{
		return ADoorTriggerBox_usingC::StaticClass();
	}
	struct Z_Construct_UClass_ADoorTriggerBox_usingC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ChromaNex,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapBegin, "OnOverlapBegin" }, // 3018191610
		{ &Z_Construct_UFunction_ADoorTriggerBox_usingC_OnOverlapEnd, "OnOverlapEnd" }, // 434078657
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DoorTriggerBox_usingC.h" },
		{ "ModuleRelativePath", "DoorTriggerBox_usingC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "DoorTriggerBox_usingC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorTriggerBox_usingC, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::NewProp_TargetActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorTriggerBox_usingC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::ClassParams = {
		&ADoorTriggerBox_usingC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADoorTriggerBox_usingC()
	{
		if (!Z_Registration_Info_UClass_ADoorTriggerBox_usingC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorTriggerBox_usingC.OuterSingleton, Z_Construct_UClass_ADoorTriggerBox_usingC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorTriggerBox_usingC.OuterSingleton;
	}
	template<> CHROMANEX_API UClass* StaticClass<ADoorTriggerBox_usingC>()
	{
		return ADoorTriggerBox_usingC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorTriggerBox_usingC);
	ADoorTriggerBox_usingC::~ADoorTriggerBox_usingC() {}
	struct Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerBox_usingC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerBox_usingC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorTriggerBox_usingC, ADoorTriggerBox_usingC::StaticClass, TEXT("ADoorTriggerBox_usingC"), &Z_Registration_Info_UClass_ADoorTriggerBox_usingC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorTriggerBox_usingC), 2104428272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerBox_usingC_h_652542068(TEXT("/Script/ChromaNex"),
		Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerBox_usingC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerBox_usingC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
