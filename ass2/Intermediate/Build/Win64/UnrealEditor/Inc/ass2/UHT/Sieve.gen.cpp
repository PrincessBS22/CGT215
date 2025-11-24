// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sieve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSieve() {}

// ********** Begin Cross Module References ********************************************************
ASS2_API UClass* Z_Construct_UClass_USieve();
ASS2_API UClass* Z_Construct_UClass_USieve_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ass2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USieve Function Sieve ****************************************************
struct Z_Construct_UFunction_USieve_Sieve_Statics
{
	struct Sieve_eventSieve_Parms
	{
		int32 n;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sieve" },
		{ "ModuleRelativePath", "Public/Sieve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_n;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sieve_eventSieve_Parms, n), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sieve_eventSieve_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USieve_Sieve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USieve_Sieve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USieve_Sieve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USieve_Sieve_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USieve, nullptr, "Sieve", Z_Construct_UFunction_USieve_Sieve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USieve_Sieve_Statics::PropPointers), sizeof(Z_Construct_UFunction_USieve_Sieve_Statics::Sieve_eventSieve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USieve_Sieve_Statics::Function_MetaDataParams), Z_Construct_UFunction_USieve_Sieve_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USieve_Sieve_Statics::Sieve_eventSieve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USieve_Sieve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USieve_Sieve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USieve::execSieve)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=USieve::Sieve(Z_Param_n);
	P_NATIVE_END;
}
// ********** End Class USieve Function Sieve ******************************************************

// ********** Begin Class USieve *******************************************************************
void USieve::StaticRegisterNativesUSieve()
{
	UClass* Class = USieve::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Sieve", &USieve::execSieve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USieve;
UClass* USieve::GetPrivateStaticClass()
{
	using TClass = USieve;
	if (!Z_Registration_Info_UClass_USieve.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Sieve"),
			Z_Registration_Info_UClass_USieve.InnerSingleton,
			StaticRegisterNativesUSieve,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USieve.InnerSingleton;
}
UClass* Z_Construct_UClass_USieve_NoRegister()
{
	return USieve::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USieve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Sieve.h" },
		{ "ModuleRelativePath", "Public/Sieve.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USieve_Sieve, "Sieve" }, // 1800703814
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USieve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USieve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ass2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USieve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USieve_Statics::ClassParams = {
	&USieve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USieve_Statics::Class_MetaDataParams), Z_Construct_UClass_USieve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USieve()
{
	if (!Z_Registration_Info_UClass_USieve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USieve.OuterSingleton, Z_Construct_UClass_USieve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USieve.OuterSingleton;
}
USieve::USieve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USieve);
USieve::~USieve() {}
// ********** End Class USieve *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_PrincessBS22_OneDrive___purdue_edu_fall__25_CGT_215_CGT215_ass2_Source_ass2_Public_Sieve_h__Script_ass2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USieve, USieve::StaticClass, TEXT("USieve"), &Z_Registration_Info_UClass_USieve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USieve), 1991607752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PrincessBS22_OneDrive___purdue_edu_fall__25_CGT_215_CGT215_ass2_Source_ass2_Public_Sieve_h__Script_ass2_1152808374(TEXT("/Script/ass2"),
	Z_CompiledInDeferFile_FID_Users_PrincessBS22_OneDrive___purdue_edu_fall__25_CGT_215_CGT215_ass2_Source_ass2_Public_Sieve_h__Script_ass2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PrincessBS22_OneDrive___purdue_edu_fall__25_CGT_215_CGT215_ass2_Source_ass2_Public_Sieve_h__Script_ass2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
