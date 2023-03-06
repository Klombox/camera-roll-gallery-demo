﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2;
struct VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2;
struct VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F;
struct VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1;
struct VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482;
struct VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062;
struct AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4;
struct AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C;
struct AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Type_t;
struct VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94;
struct VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA;
struct VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6;
struct VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1836F7682CB441E873EB35D4F26A4D2F03D1B4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A;
IL2CPP_EXTERN_C String_t* _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB;
IL2CPP_EXTERN_C String_t* _stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981;
IL2CPP_EXTERN_C String_t* _stringLiteral9612005F8E517605A5DAAF3B087F2727B6EC133C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DABCF2A50674181E71D868E8D9317885CB53D2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE099E35199E899B7796FB5803C6465BF879088CC;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4;
IL2CPP_EXTERN_C String_t* _stringLiteralF25A18EECC3B71FE7DC49876B54488AEC789DC3D;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062  : public RuntimeObject
{
	int32_t ___bufferView_0;
	int32_t ___byteOffset_1;
	int32_t ___componentType_2;
	bool ___normalized_3;
	int32_t ___count_4;
	String_t* ___type_5;
	uint8_t ____typeEnum_6;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___max_7;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___min_8;
	AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* ___sparse_9;
};
struct AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4  : public RuntimeObject
{
	int32_t ___count_0;
	AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* ___indices_1;
	AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* ___values_2;
};
struct AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C  : public RuntimeObject
{
	uint32_t ___bufferView_0;
	int32_t ___byteOffset_1;
	int32_t ___componentType_2;
};
struct AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E  : public RuntimeObject
{
	uint32_t ___bufferView_0;
	int32_t ___byteOffset_1;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	bool ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	String_t* ___m_name_13;
	String_t* ___englishname_14;
	String_t* ___nativename_15;
	String_t* ___iso3lang_16;
	String_t* ___iso2lang_17;
	String_t* ___win3lang_18;
	String_t* ___territory_19;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	bool ___constructed_26;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	bool ___m_isInherited_29;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	String_t* ___positiveSign_4;
	String_t* ___negativeSign_5;
	String_t* ___numberDecimalSeparator_6;
	String_t* ___numberGroupSeparator_7;
	String_t* ___currencyGroupSeparator_8;
	String_t* ___currencyDecimalSeparator_9;
	String_t* ___currencySymbol_10;
	String_t* ___ansiCurrencySymbol_11;
	String_t* ___nanSymbol_12;
	String_t* ___positiveInfinitySymbol_13;
	String_t* ___negativeInfinitySymbol_14;
	String_t* ___percentDecimalSeparator_15;
	String_t* ___percentGroupSeparator_16;
	String_t* ___percentSymbol_17;
	String_t* ___perMilleSymbol_18;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	int32_t ___m_dataItem_20;
	int32_t ___numberDecimalDigits_21;
	int32_t ___currencyDecimalDigits_22;
	int32_t ___currencyPositivePattern_23;
	int32_t ___currencyNegativePattern_24;
	int32_t ___numberNegativePattern_25;
	int32_t ___percentPositivePattern_26;
	int32_t ___percentNegativePattern_27;
	int32_t ___percentDecimalDigits_28;
	int32_t ___digitSubstitution_29;
	bool ___isReadOnly_30;
	bool ___m_useUserOverride_31;
	bool ___m_isInvariant_32;
	bool ___validForParseAsNumber_33;
	bool ___validForParseAsCurrency_34;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	StringBuilder_t* ___m_ChunkPrevious_1;
	int32_t ___m_ChunkLength_2;
	int32_t ___m_ChunkOffset_3;
	int32_t ___m_MaxCapacity_4;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A  : public RuntimeObject
{
	RuntimeObject* ___logger_0;
};
struct VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2  : public RuntimeObject
{
	RuntimeObject* ___logger_0;
};
struct VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0  : public RuntimeObject
{
	RuntimeObject* ___logger_0;
	int32_t ___U3CuvSetCountU3Ek__BackingField_1;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 
{
	int32_t ___inputByteStride_0;
	uint8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B 
{
	int32_t ___inputByteStride_0;
	int16_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB 
{
	int32_t ___inputByteStride_0;
	int16_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B 
{
	int32_t ___inputByteStride_0;
	int8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 
{
	int32_t ___inputByteStride_0;
	int8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C 
{
	int32_t ___inputByteStride_0;
	uint8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA 
{
	int32_t ___inputByteStride_0;
	uint8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB 
{
	int32_t ___inputByteStride_0;
	uint8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 
{
	int32_t ___inputByteStride_0;
	uint8_t* ___input_1;
	int32_t ___outputByteStride_2;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup_0;
	int32_t ___version_1;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField_0;
	int32_t ___U3CformatU3Ek__BackingField_1;
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	int32_t ___U3CstreamU3Ek__BackingField_3;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x_0;
	float ___y_1;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 
{
	bool ___hasValue_0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___value_1;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};
struct VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482  : public VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0
{
	NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 ___vData_2;
};
struct VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23  : public VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0
{
	NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B ___vData_2;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};
struct VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94  : public VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A
{
	NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 ___vData_1;
};
struct VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA  : public VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2
{
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___vData_1;
};
struct Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F 
{
	bool ___hasValue_0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value_1;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder_0;
	uint8_t ____byte_1;
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6  : public RuntimeObject
{
	bool ___calculateNormals_1;
	bool ___calculateTangents_2;
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___vad_3;
	RuntimeObject* ___logger_4;
	Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F ___U3CboundsU3Ek__BackingField_5;
};
struct VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2  : public VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6
{
	NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 ___vData_6;
	bool ___hasNormals_7;
	bool ___hasTangents_8;
	bool ___hasColors_9;
	bool ___hasBones_10;
	VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* ___texCoords_11;
	VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* ___colors_12;
	VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* ___bones_13;
};
struct VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2  : public VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6
{
	NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E ___vData_6;
	bool ___hasNormals_7;
	bool ___hasTangents_8;
	bool ___hasColors_9;
	bool ___hasBones_10;
	VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* ___texCoords_11;
	VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* ___colors_12;
	VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* ___bones_13;
};
struct VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F  : public VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6
{
	NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 ___vData_6;
	bool ___hasNormals_7;
	bool ___hasTangents_8;
	bool ___hasColors_9;
	bool ___hasBones_10;
	VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* ___texCoords_11;
	VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* ___colors_12;
	VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* ___bones_13;
};
struct VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1  : public VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___vData_6;
	bool ___hasNormals_7;
	bool ___hasTangents_8;
	bool ___hasColors_9;
	bool ___hasBones_10;
	VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* ___texCoords_11;
	VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* ___colors_12;
	VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* ___bones_13;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	RuntimeObject* ___shared_table_lock_1;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	bool ___IsTaiwanSku_39;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count_1;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count_1;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m6492C57B05D6B9FFD26772B944B2A6BEF6015483_gshared (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBA83AAC5DEEF6A424E816BC22A562F9F16331060_gshared (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_m330509F7AC793C43640F0649AC22729C08D9A935_gshared (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_gshared_inline (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_gshared (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_gshared (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m3E9F8FDDFC03690F85E723E3E679D211AE23D365_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_mDB8D148A0EF2CE914022B139EDC228BC42BA980D_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m6BDF1E860A988B4B255D8FDF639C0C4D8B2FA788_gshared (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF889FB0A50008701DFF815D51811D6C2FA88D506_gshared (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m6ED28625050D6187E9FF635F2F0B84FAE98963DE_gshared (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_mEF24F47840037840AEF8626D31E8C4C54CEF3340_gshared (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m4DCFABD026904FA968C9B95864D45F17166EEF9E_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_m98F5B919E464DF0F3ACD4366F3DC57AF2454635E_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF28F15854DB63F91A8E4ECE7E7046833DEECD545_gshared (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mC5ED66430AE33CD749E7A37DF7B48DFB49976CC7_gshared (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB26D6A63E8B3F18A77A5552D357236D2292DDC4B_gshared (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m4DFB73460B0763281BB179BE6CB139906474F02E_gshared (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m8A85D1F2EBBA5523EE055B4CE69E4C7F0CEEA8A9_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m5C4B829BA2A5130FB5C09B29AD8805155EA7C756_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m82995B1021A45DA3ADE8B42EB36038FBB092EEAF_gshared (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m1BA84A1F51723A5804D44113CB7EAFB1C8C38A99_gshared (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_mF524D1423BA04CC1D82B68F03416BB0D9F2D0D07_gshared (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m19509C7BDDDFA9760D838465C43702B020827838_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, int32_t ___0_index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_m48A57644B8C7C2218F25EC3053DCC7E84CDC8BA3_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m47651702D651C122A2B01BB40A8E917710D3099C_gshared (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mD862E6EE54C32A0F39ABA2451CC507C6950F4A2F_gshared (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_gshared (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_gshared (ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_gshared (ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_gshared (ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_gshared (ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_gshared (ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_gshared (ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_gshared (ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_gshared (ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7A519877353656E33CB26AC5D85DAAAD9D32326F_gshared (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_mC3FA4D9E8BCF32F7C01E4EB5D2E30CB0494ECFE0_gshared (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m8E72AF590C766BD30B44D869FF23574883C8FC45_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_m1539E19AC03F83FBB649E6433C0450530D2019B7_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m11DD67623A1C17A38C09B61FCB8443B2126273D5_gshared (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAAAC7BFBE5048F115833AE826C1F1B5E71956840_gshared (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)__this, ___0_value, method);
}
inline void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, const RuntimeMethod*))Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared)(__this, ___0_dataPointer, method);
}
inline void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, int32_t, const RuntimeMethod*))Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared)(__this, ___0_dataPointer, ___1_offset, method);
}
inline void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)__this, ___0_index, il2cppRetVal, method);
}
inline bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, RuntimeObject*, const RuntimeMethod*))Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline)(__this, ___0_obj, method);
}
inline bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
inline int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, const RuntimeMethod*))Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, const RuntimeMethod*))Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, String_t*, RuntimeObject*, const RuntimeMethod*))Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared)(__this, ___0_format, ___1_formatProvider, method);
}
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m6492C57B05D6B9FFD26772B944B2A6BEF6015483 (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m6492C57B05D6B9FFD26772B944B2A6BEF6015483_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfigBase__ctor_m09E6413C4CD08D36B052A541ECCB5440929CC119 (VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mBA83AAC5DEEF6A424E816BC22A562F9F16331060 (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mBA83AAC5DEEF6A424E816BC22A562F9F16331060_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_m330509F7AC793C43640F0649AC22729C08D9A935 (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_m330509F7AC793C43640F0649AC22729C08D9A935_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline (VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6* __this, Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline void VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method)
{
	((  void (*) (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*, RuntimeObject*, const RuntimeMethod*))VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_gshared)(__this, ___0_logger, method);
}
inline void VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318 (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method)
{
	((  void (*) (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*, RuntimeObject*, const RuntimeMethod*))VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_gshared)(__this, ___0_logger, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferColors__ctor_mDCA2FC9507D3CFCFA4A4E5E24422B1C0E8480A6F (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferBones__ctor_mC2CA055DC14EEE85FAE3CCC8C58D7BB1D7FFC1E0 (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19 (void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, bool ___7_ensureUnitLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfigBase_GetVector3sSparseJob_mDF16E5265365EF4520F3C167F0C35223BAF18D78 (void* ___0_indexBuffer, void* ___1_valueBuffer, int32_t ___2_sparseCount, int32_t ___3_indexType, int32_t ___4_valueType, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___5_output, int32_t ___6_outputByteStride, Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* ___7_dependsOn, bool ___8_normalized, const RuntimeMethod* method) ;
inline bool Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489*, const RuntimeMethod*))Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_gshared_inline)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73 (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489*, const RuntimeMethod*))Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfigBase_GetTangentsJob_mD6D5629F125A4D942E2336750E6FA84B284D09CC (VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method) ;
inline void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29 (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8*, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 JobHandle_CombineDependencies_m5B482F42E4C9CAC22FF24C1BF76F3AFB870DBB3E (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_jobs, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, const RuntimeMethod*))NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_gshared)(__this, method);
}
inline void Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526 (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_attribute, int32_t ___1_format, int32_t ___2_dimension, int32_t ___3_stream, const RuntimeMethod* method) ;
inline void VertexBufferConfig_1_CreateDescriptors_m3E9F8FDDFC03690F85E723E3E679D211AE23D365 (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, const RuntimeMethod* method)
{
	((  void (*) (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2*, const RuntimeMethod*))VertexBufferConfig_1_CreateDescriptors_m3E9F8FDDFC03690F85E723E3E679D211AE23D365_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferParams_m8033EB85082C142DCE8B69FFBAD26D7DFB0330B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_vertexCount, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___1_attributes, const RuntimeMethod* method) ;
inline void Mesh_SetVertexBufferData_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_mDB8D148A0EF2CE914022B139EDC228BC42BA980D (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertexBufferData_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_mDB8D148A0EF2CE914022B139EDC228BC42BA980D_gshared)(__this, ___0_data, ___1_dataStart, ___2_meshBufferStart, ___3_count, ___4_stream, ___5_flags, method);
}
inline void NativeArray_1_Dispose_m6BDF1E860A988B4B255D8FDF639C0C4D8B2FA788 (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*, const RuntimeMethod*))NativeArray_1_Dispose_m6BDF1E860A988B4B255D8FDF639C0C4D8B2FA788_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mF889FB0A50008701DFF815D51811D6C2FA88D506 (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF889FB0A50008701DFF815D51811D6C2FA88D506_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m6ED28625050D6187E9FF635F2F0B84FAE98963DE (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m6ED28625050D6187E9FF635F2F0B84FAE98963DE_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_mEF24F47840037840AEF8626D31E8C4C54CEF3340 (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_mEF24F47840037840AEF8626D31E8C4C54CEF3340_gshared)(___0_nativeArray, method);
}
inline void VertexBufferConfig_1_CreateDescriptors_m4DCFABD026904FA968C9B95864D45F17166EEF9E (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, const RuntimeMethod* method)
{
	((  void (*) (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2*, const RuntimeMethod*))VertexBufferConfig_1_CreateDescriptors_m4DCFABD026904FA968C9B95864D45F17166EEF9E_gshared)(__this, method);
}
inline void Mesh_SetVertexBufferData_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_m98F5B919E464DF0F3ACD4366F3DC57AF2454635E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertexBufferData_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_m98F5B919E464DF0F3ACD4366F3DC57AF2454635E_gshared)(__this, ___0_data, ___1_dataStart, ___2_meshBufferStart, ___3_count, ___4_stream, ___5_flags, method);
}
inline void NativeArray_1_Dispose_mF28F15854DB63F91A8E4ECE7E7046833DEECD545 (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*, const RuntimeMethod*))NativeArray_1_Dispose_mF28F15854DB63F91A8E4ECE7E7046833DEECD545_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mC5ED66430AE33CD749E7A37DF7B48DFB49976CC7 (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mC5ED66430AE33CD749E7A37DF7B48DFB49976CC7_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mB26D6A63E8B3F18A77A5552D357236D2292DDC4B (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB26D6A63E8B3F18A77A5552D357236D2292DDC4B_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m4DFB73460B0763281BB179BE6CB139906474F02E (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m4DFB73460B0763281BB179BE6CB139906474F02E_gshared)(___0_nativeArray, method);
}
inline void VertexBufferConfig_1_CreateDescriptors_m8A85D1F2EBBA5523EE055B4CE69E4C7F0CEEA8A9 (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, const RuntimeMethod* method)
{
	((  void (*) (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F*, const RuntimeMethod*))VertexBufferConfig_1_CreateDescriptors_m8A85D1F2EBBA5523EE055B4CE69E4C7F0CEEA8A9_gshared)(__this, method);
}
inline void Mesh_SetVertexBufferData_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m5C4B829BA2A5130FB5C09B29AD8805155EA7C756 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertexBufferData_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m5C4B829BA2A5130FB5C09B29AD8805155EA7C756_gshared)(__this, ___0_data, ___1_dataStart, ___2_meshBufferStart, ___3_count, ___4_stream, ___5_flags, method);
}
inline void NativeArray_1_Dispose_m82995B1021A45DA3ADE8B42EB36038FBB092EEAF (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*, const RuntimeMethod*))NativeArray_1_Dispose_m82995B1021A45DA3ADE8B42EB36038FBB092EEAF_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoordsBase__ctor_mA682BA6A3A3EC590E91298EFFA1CD36D561550C5 (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m1BA84A1F51723A5804D44113CB7EAFB1C8C38A99 (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m1BA84A1F51723A5804D44113CB7EAFB1C8C38A99_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_mF524D1423BA04CC1D82B68F03416BB0D9F2D0D07 (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_mF524D1423BA04CC1D82B68F03416BB0D9F2D0D07_gshared)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexBufferTexCoordsBase_set_uvSetCount_mEB29B27EBCA5D9FF11328CBAE6270BF9FA1A4982_inline (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m19509C7BDDDFA9760D838465C43702B020827838 (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method)
{
	return ((  Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 (*) (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*, void*, int32_t, int32_t, int32_t, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*, int32_t, bool, const RuntimeMethod*))VertexBufferTexCoords_1_GetUvsJob_m19509C7BDDDFA9760D838465C43702B020827838_gshared)(__this, ___0_input, ___1_count, ___2_inputType, ___3_inputByteStride, ___4_output, ___5_outputByteStride, ___6_normalized, method);
}
inline void NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, int32_t ___0_index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8*, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void Mesh_SetVertexBufferData_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_m48A57644B8C7C2218F25EC3053DCC7E84CDC8BA3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertexBufferData_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_m48A57644B8C7C2218F25EC3053DCC7E84CDC8BA3_gshared)(__this, ___0_data, ___1_dataStart, ___2_meshBufferStart, ___3_count, ___4_stream, ___5_flags, method);
}
inline bool NativeArray_1_get_IsCreated_m47651702D651C122A2B01BB40A8E917710D3099C (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m47651702D651C122A2B01BB40A8E917710D3099C_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_mD862E6EE54C32A0F39ABA2451CC507C6950F4A2F (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*, const RuntimeMethod*))NativeArray_1_Dispose_mD862E6EE54C32A0F39ABA2451CC507C6950F4A2F_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E (ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5 (ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850 (ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4 (ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8 (ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C (ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896 (ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572 (ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_gshared)(___0_jobData, ___1_arrayLength, ___2_innerloopBatchCount, ___3_dependsOn, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m7A519877353656E33CB26AC5D85DAAAD9D32326F (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7A519877353656E33CB26AC5D85DAAAD9D32326F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_mC3FA4D9E8BCF32F7C01E4EB5D2E30CB0494ECFE0 (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_mC3FA4D9E8BCF32F7C01E4EB5D2E30CB0494ECFE0_gshared)(___0_nativeArray, method);
}
inline Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m8E72AF590C766BD30B44D869FF23574883C8FC45 (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method)
{
	return ((  Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 (*) (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*, void*, int32_t, int32_t, int32_t, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*, int32_t, bool, const RuntimeMethod*))VertexBufferTexCoords_1_GetUvsJob_m8E72AF590C766BD30B44D869FF23574883C8FC45_gshared)(__this, ___0_input, ___1_count, ___2_inputType, ___3_inputByteStride, ___4_output, ___5_outputByteStride, ___6_normalized, method);
}
inline void Mesh_SetVertexBufferData_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_m1539E19AC03F83FBB649E6433C0450530D2019B7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertexBufferData_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_m1539E19AC03F83FBB649E6433C0450530D2019B7_gshared)(__this, ___0_data, ___1_dataStart, ___2_meshBufferStart, ___3_count, ___4_stream, ___5_flags, method);
}
inline bool NativeArray_1_get_IsCreated_m11DD67623A1C17A38C09B61FCB8443B2126273D5 (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m11DD67623A1C17A38C09B61FCB8443B2126273D5_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_mAAAC7BFBE5048F115833AE826C1F1B5E71956840 (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*, const RuntimeMethod*))NativeArray_1_Dispose_mAAAC7BFBE5048F115833AE826C1F1B5E71956840_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m3432B49FF8435F45396666AA8B4724CF478EC0A1_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_1_get_Zero_m3384DC19FF560B5C07194EB2690C6AE65E910311_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m504CE8338E1C01BCEFF3CBA1A65D3F27AB0D6E93_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* L_0 = (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(&(&V_0)->____placeholder_0);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register_0);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0_0);
		V_1 = (uint8_t*)((uintptr_t)L_2);
		uint8_t* L_3 = (uint8_t*)(&(&V_0)->____byte_1);
		uint8_t* L_4 = V_1;
		V_2 = (-1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			G_B2_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
			goto IL_0045;
		}
		G_B1_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
	}
	{
		V_2 = 1;
		G_B21_0 = G_B1_0;
		goto IL_0176;
	}

IL_0045:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			G_B4_0 = G_B2_0;
			goto IL_0067;
		}
		G_B3_0 = G_B2_0;
	}
	{
		V_2 = 1;
		G_B21_0 = G_B3_0;
		goto IL_0176;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			G_B6_0 = G_B4_0;
			goto IL_0089;
		}
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			G_B8_0 = G_B6_0;
			goto IL_00ab;
		}
		G_B7_0 = G_B6_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B7_0;
		goto IL_0176;
	}

IL_00ab:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			G_B10_0 = G_B8_0;
			goto IL_00cd;
		}
		G_B9_0 = G_B8_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B9_0;
		goto IL_0176;
	}

IL_00cd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		if (!L_34)
		{
			G_B12_0 = G_B10_0;
			goto IL_00ef;
		}
		G_B11_0 = G_B10_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B11_0;
		goto IL_0176;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			G_B14_0 = G_B12_0;
			goto IL_010e;
		}
		G_B13_0 = G_B12_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			G_B16_0 = G_B14_0;
			goto IL_012d;
		}
		G_B15_0 = G_B14_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B15_0;
		goto IL_0176;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			G_B18_0 = G_B16_0;
			goto IL_014c;
		}
		G_B17_0 = G_B16_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B17_0;
		goto IL_0176;
	}

IL_014c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		if (!L_54)
		{
			G_B20_0 = G_B18_0;
			goto IL_016b;
		}
		G_B19_0 = G_B18_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B19_0;
		goto IL_0176;
	}

IL_016b:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_55 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_0176:
	{
		int32_t L_56 = V_2;
		return ((int32_t)(G_B21_0/L_56));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_26 = L_11;
	const Il2CppFullySharedGenericStruct L_41 = L_11;
	const Il2CppFullySharedGenericStruct L_56 = L_11;
	const Il2CppFullySharedGenericStruct L_71 = L_11;
	const Il2CppFullySharedGenericStruct L_86 = L_11;
	const Il2CppFullySharedGenericStruct L_101 = L_11;
	const Il2CppFullySharedGenericStruct L_116 = L_11;
	const Il2CppFullySharedGenericStruct L_131 = L_11;
	const Il2CppFullySharedGenericStruct L_146 = L_11;
	const Il2CppFullySharedGenericStruct L_157 = L_11;
	const Il2CppFullySharedGenericStruct L_210 = L_11;
	const Il2CppFullySharedGenericStruct L_263 = L_11;
	const Il2CppFullySharedGenericStruct L_292 = L_11;
	const Il2CppFullySharedGenericStruct L_321 = L_11;
	const Il2CppFullySharedGenericStruct L_338 = L_11;
	const Il2CppFullySharedGenericStruct L_355 = L_11;
	const Il2CppFullySharedGenericStruct L_366 = L_11;
	const Il2CppFullySharedGenericStruct L_377 = L_11;
	const Il2CppFullySharedGenericStruct L_394 = L_11;
	const Il2CppFullySharedGenericStruct L_160 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_213 = L_160;
	const Il2CppFullySharedGenericStruct L_266 = L_160;
	const Il2CppFullySharedGenericStruct L_295 = L_160;
	const Il2CppFullySharedGenericStruct L_324 = L_160;
	const Il2CppFullySharedGenericStruct L_341 = L_160;
	const Il2CppFullySharedGenericStruct L_358 = L_160;
	const Il2CppFullySharedGenericStruct L_369 = L_160;
	const Il2CppFullySharedGenericStruct L_380 = L_160;
	const Il2CppFullySharedGenericStruct L_397 = L_160;
	const Il2CppFullySharedGenericStruct L_163 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_216 = L_163;
	const Il2CppFullySharedGenericStruct L_269 = L_163;
	const Il2CppFullySharedGenericStruct L_298 = L_163;
	const Il2CppFullySharedGenericStruct L_327 = L_163;
	const Il2CppFullySharedGenericStruct L_344 = L_163;
	const Il2CppFullySharedGenericStruct L_383 = L_163;
	const Il2CppFullySharedGenericStruct L_166 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_219 = L_166;
	const Il2CppFullySharedGenericStruct L_272 = L_166;
	const Il2CppFullySharedGenericStruct L_301 = L_166;
	const Il2CppFullySharedGenericStruct L_330 = L_166;
	const Il2CppFullySharedGenericStruct L_347 = L_166;
	const Il2CppFullySharedGenericStruct L_386 = L_166;
	const Il2CppFullySharedGenericStruct L_169 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_222 = L_169;
	const Il2CppFullySharedGenericStruct L_275 = L_169;
	const Il2CppFullySharedGenericStruct L_304 = L_169;
	const Il2CppFullySharedGenericStruct L_172 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_225 = L_172;
	const Il2CppFullySharedGenericStruct L_278 = L_172;
	const Il2CppFullySharedGenericStruct L_307 = L_172;
	const Il2CppFullySharedGenericStruct L_175 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_228 = L_175;
	const Il2CppFullySharedGenericStruct L_281 = L_175;
	const Il2CppFullySharedGenericStruct L_310 = L_175;
	const Il2CppFullySharedGenericStruct L_178 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_231 = L_178;
	const Il2CppFullySharedGenericStruct L_284 = L_178;
	const Il2CppFullySharedGenericStruct L_313 = L_178;
	const Il2CppFullySharedGenericStruct L_181 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_234 = L_181;
	const Il2CppFullySharedGenericStruct L_184 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_237 = L_184;
	const Il2CppFullySharedGenericStruct L_187 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_240 = L_187;
	const Il2CppFullySharedGenericStruct L_190 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_243 = L_190;
	const Il2CppFullySharedGenericStruct L_193 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_246 = L_193;
	const Il2CppFullySharedGenericStruct L_196 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_249 = L_196;
	const Il2CppFullySharedGenericStruct L_199 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_252 = L_199;
	const Il2CppFullySharedGenericStruct L_202 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_255 = L_202;
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_6 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_7 = (uint8_t*)(&L_6->___byte_0_0);
		V_1 = L_7;
		uint8_t* L_8 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_8);
		V_2 = 0;
		goto IL_0052;
	}

IL_003f:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_11);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10))) = (int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_12, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_005e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_22 = (int8_t*)(&L_21->___sbyte_0_16);
		V_4 = L_22;
		int8_t* L_23 = V_4;
		V_3 = (int8_t*)((uintptr_t)L_23);
		V_5 = 0;
		goto IL_00a5;
	}

IL_008f:
	{
		int8_t* L_24 = V_3;
		int32_t L_25 = V_5;
		il2cpp_codegen_memcpy(L_26, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_26);
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_24, L_25))) = (int8_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_27, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a5:
	{
		int32_t L_29 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_30;
		L_30 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00b3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (!L_35)
		{
			goto IL_010d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_0_32);
		V_7 = L_37;
		uint16_t* L_38 = V_7;
		V_6 = (uint16_t*)((uintptr_t)L_38);
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_39 = V_6;
		int32_t L_40 = V_8;
		il2cpp_codegen_memcpy(L_41, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2))))) = (int16_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_42, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ff:
	{
		int32_t L_44 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_45;
		L_45 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00e5;
		}
	}
	{
		V_7 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_010d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0167;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_51 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_52 = (int16_t*)(&L_51->___int16_0_40);
		V_10 = L_52;
		int16_t* L_53 = V_10;
		V_9 = (int16_t*)((uintptr_t)L_53);
		V_11 = 0;
		goto IL_0159;
	}

IL_013f:
	{
		int16_t* L_54 = V_9;
		int32_t L_55 = V_11;
		il2cpp_codegen_memcpy(L_56, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_56);
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 2))))) = (int16_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_57, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_58 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0159:
	{
		int32_t L_59 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_60;
		L_60 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_013f;
		}
	}
	{
		V_10 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
		if (!L_65)
		{
			goto IL_01c1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_66 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_67 = (uint32_t*)(&L_66->___uint32_0_48);
		V_13 = L_67;
		uint32_t* L_68 = V_13;
		V_12 = (uint32_t*)((uintptr_t)L_68);
		V_14 = 0;
		goto IL_01b3;
	}

IL_0199:
	{
		uint32_t* L_69 = V_12;
		int32_t L_70 = V_14;
		il2cpp_codegen_memcpy(L_71, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_71);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4))))) = (int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_72, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_73 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_01b3:
	{
		int32_t L_74 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_75;
		L_75 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0199;
		}
	}
	{
		V_13 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_021b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_81 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_82 = (int32_t*)(&L_81->___int32_0_52);
		V_16 = L_82;
		int32_t* L_83 = V_16;
		V_15 = (int32_t*)((uintptr_t)L_83);
		V_17 = 0;
		goto IL_020d;
	}

IL_01f3:
	{
		int32_t* L_84 = V_15;
		int32_t L_85 = V_17;
		il2cpp_codegen_memcpy(L_86, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_86);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_87, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_88 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_020d:
	{
		int32_t L_89 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_01f3;
		}
	}
	{
		V_16 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_021b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		bool L_95;
		L_95 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_92, L_94, NULL);
		if (!L_95)
		{
			goto IL_0275;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_96 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_97 = (uint64_t*)(&L_96->___uint64_0_56);
		V_19 = L_97;
		uint64_t* L_98 = V_19;
		V_18 = (uint64_t*)((uintptr_t)L_98);
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_99 = V_18;
		int32_t L_100 = V_20;
		il2cpp_codegen_memcpy(L_101, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_101);
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8))))) = (int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_102, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_103 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0267:
	{
		int32_t L_104 = V_20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_105;
		L_105 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_024d;
		}
	}
	{
		V_19 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_0275:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_02cf;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_111 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_112 = (int64_t*)(&L_111->___int64_0_58);
		V_22 = L_112;
		int64_t* L_113 = V_22;
		V_21 = (int64_t*)((uintptr_t)L_113);
		V_23 = 0;
		goto IL_02c1;
	}

IL_02a7:
	{
		int64_t* L_114 = V_21;
		int32_t L_115 = V_23;
		il2cpp_codegen_memcpy(L_116, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_116);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 8))))) = (int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_117, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_118 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_02c1:
	{
		int32_t L_119 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_120;
		L_120 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_02a7;
		}
	}
	{
		V_22 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_02cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		if (!L_125)
		{
			goto IL_0329;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_126 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_127 = (float*)(&L_126->___single_0_60);
		V_25 = L_127;
		float* L_128 = V_25;
		V_24 = (float*)((uintptr_t)L_128);
		V_26 = 0;
		goto IL_031b;
	}

IL_0301:
	{
		float* L_129 = V_24;
		int32_t L_130 = V_26;
		il2cpp_codegen_memcpy(L_131, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_132 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_131);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_130), 4))))) = (float)((*(float*)((float*)(float*)UnBox(L_132, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_133 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_133, 1));
	}

IL_031b:
	{
		int32_t L_134 = V_26;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_135;
		L_135 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_0301;
		}
	}
	{
		V_25 = (float*)((uintptr_t)0);
		return;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_142 = (double*)(&L_141->___double_0_64);
		V_28 = L_142;
		double* L_143 = V_28;
		V_27 = (double*)((uintptr_t)L_143);
		V_29 = 0;
		goto IL_0378;
	}

IL_035e:
	{
		double* L_144 = V_27;
		int32_t L_145 = V_29;
		il2cpp_codegen_memcpy(L_146, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_147 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_146);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (double)((*(double*)((double*)(double*)UnBox(L_147, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_148 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_0378:
	{
		int32_t L_149 = V_29;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_150;
		L_150 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_149) < ((int32_t)L_150)))
		{
			goto IL_035e;
		}
	}
	{
		V_28 = (double*)((uintptr_t)0);
		return;
	}

IL_0386:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_153 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_154;
		L_154 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_153, NULL);
		bool L_155;
		L_155 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_152, L_154, NULL);
		if (!L_155)
		{
			goto IL_0505;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_156 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_157, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_158 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_157);
		L_156->___byte_0_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_158, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_160, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_161 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_160);
		L_159->___byte_1_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_161, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_162 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_163, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_164 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_163);
		L_162->___byte_2_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_164, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_165 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_166, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_167 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_166);
		L_165->___byte_3_3 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_167, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_169, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_170 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_169);
		L_168->___byte_4_4 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_170, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_171 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_172, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_173 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_172);
		L_171->___byte_5_5 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_173, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_175, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_176 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_175);
		L_174->___byte_6_6 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_176, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_177 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_178, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_179 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_178);
		L_177->___byte_7_7 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_179, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_180 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_181, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_182 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_181);
		L_180->___byte_8_8 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_182, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_184, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_185 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_184);
		L_183->___byte_9_9 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_185, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_186 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_187, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_188 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_187);
		L_186->___byte_10_10 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_188, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_190, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_191 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_190);
		L_189->___byte_11_11 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_191, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_192 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_193, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_194 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_193);
		L_192->___byte_12_12 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_194, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_195 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_196, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_197 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_196);
		L_195->___byte_13_13 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_197, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_199, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_200 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_199);
		L_198->___byte_14_14 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_200, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_201 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_202, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_203 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_202);
		L_201->___byte_15_15 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_203, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		return;
	}

IL_0505:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_205;
		L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_206 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_207;
		L_207 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_206, NULL);
		bool L_208;
		L_208 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_205, L_207, NULL);
		if (!L_208)
		{
			goto IL_0684;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_210, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_211 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_210);
		L_209->___sbyte_0_16 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_211, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_212 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_213, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_214 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_213);
		L_212->___sbyte_1_17 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_214, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_215 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_216, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_217 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_216);
		L_215->___sbyte_2_18 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_217, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_219, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_220 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_219);
		L_218->___sbyte_3_19 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_220, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_221 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_222, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_223 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_222);
		L_221->___sbyte_4_20 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_223, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_224 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_225, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_226 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_225);
		L_224->___sbyte_5_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_226, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_227 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_228, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_229 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_228);
		L_227->___sbyte_6_22 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_229, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_230 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_231, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_232 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_231);
		L_230->___sbyte_7_23 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_232, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_234, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_235 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_234);
		L_233->___sbyte_8_24 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_235, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_236 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_237, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_238 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_237);
		L_236->___sbyte_9_25 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_238, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_240, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_241 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_240);
		L_239->___sbyte_10_26 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_241, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_242 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_243, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_244 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_243);
		L_242->___sbyte_11_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_244, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_245 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_246, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_247 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_246);
		L_245->___sbyte_12_28 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_247, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_248 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_249, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_250 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_249);
		L_248->___sbyte_13_29 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_250, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_251 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_252, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_253 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_252);
		L_251->___sbyte_14_30 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_253, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_255, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_256 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_255);
		L_254->___sbyte_15_31 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_256, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		return;
	}

IL_0684:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_259 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_260;
		L_260 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_259, NULL);
		bool L_261;
		L_261 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_258, L_260, NULL);
		if (!L_261)
		{
			goto IL_0753;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_262 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_263, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_264 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_263);
		L_262->___uint16_0_32 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_264, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_265 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_266, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_267 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_266);
		L_265->___uint16_1_33 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_267, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_268 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_269, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_270 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_269);
		L_268->___uint16_2_34 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_270, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_271 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_272, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_273 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_272);
		L_271->___uint16_3_35 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_273, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_275, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_276 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_275);
		L_274->___uint16_4_36 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_276, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_277 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_278, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_279 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_278);
		L_277->___uint16_5_37 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_279, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_280 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_281, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_282 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_281);
		L_280->___uint16_6_38 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_282, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_283 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_284, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_285 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_284);
		L_283->___uint16_7_39 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_285, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		return;
	}

IL_0753:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_286 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_287;
		L_287 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_286, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_288 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_289;
		L_289 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_288, NULL);
		bool L_290;
		L_290 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_287, L_289, NULL);
		if (!L_290)
		{
			goto IL_0822;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_291 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_292, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_293 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_292);
		L_291->___int16_0_40 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_293, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_295, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_296 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_295);
		L_294->___int16_1_41 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_296, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_297 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_298, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_299 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_298);
		L_297->___int16_2_42 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_299, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_300 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_301, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_302 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_301);
		L_300->___int16_3_43 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_302, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_303 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_304, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_305 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_304);
		L_303->___int16_4_44 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_305, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_306 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_307, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_308 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_307);
		L_306->___int16_5_45 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_308, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_310, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_311 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_310);
		L_309->___int16_6_46 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_311, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_313, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_314 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_313);
		L_312->___int16_7_47 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_314, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		return;
	}

IL_0822:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_315 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_316;
		L_316 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_315, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_317 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_318;
		L_318 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_317, NULL);
		bool L_319;
		L_319 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_316, L_318, NULL);
		if (!L_319)
		{
			goto IL_0896;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_320 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_321, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_322 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_321);
		L_320->___uint32_0_48 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_322, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_323 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_324, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_325 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_324);
		L_323->___uint32_1_49 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_325, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_326 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_327, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_328 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_327);
		L_326->___uint32_2_50 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_328, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_330, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_331 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_330);
		L_329->___uint32_3_51 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_331, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		return;
	}

IL_0896:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		bool L_336;
		L_336 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_333, L_335, NULL);
		if (!L_336)
		{
			goto IL_090a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_337 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_338, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_339 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_338);
		L_337->___int32_0_52 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_339, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_341, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_342 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_341);
		L_340->___int32_1_53 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_342, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_343 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_344, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_345 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_344);
		L_343->___int32_2_54 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_345, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_346 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_347, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_348 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_347);
		L_346->___int32_3_55 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_348, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		return;
	}

IL_090a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0952;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_355, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_356 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_355);
		L_354->___uint64_0_56 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_356, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_358, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_359 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_358);
		L_357->___uint64_1_57 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_359, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		return;
	}

IL_0952:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_360 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_361;
		L_361 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_360, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_362 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_363;
		L_363 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_362, NULL);
		bool L_364;
		L_364 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_361, L_363, NULL);
		if (!L_364)
		{
			goto IL_099a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_366, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_367 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_366);
		L_365->___int64_0_58 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_367, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_368 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_369, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_370 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_369);
		L_368->___int64_1_59 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_370, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		return;
	}

IL_099a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_371 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_372;
		L_372 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_371, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_373 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_374;
		L_374 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_373, NULL);
		bool L_375;
		L_375 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_372, L_374, NULL);
		if (!L_375)
		{
			goto IL_0a0e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_376 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_377, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_378 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_377);
		L_376->___single_0_60 = ((*(float*)((float*)(float*)UnBox(L_378, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_380, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_381 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_380);
		L_379->___single_1_61 = ((*(float*)((float*)(float*)UnBox(L_381, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_382 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_383, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_384 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_383);
		L_382->___single_2_62 = ((*(float*)((float*)(float*)UnBox(L_384, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_385 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_386, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_387 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_386);
		L_385->___single_3_63 = ((*(float*)((float*)(float*)UnBox(L_387, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		return;
	}

IL_0a0e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_388 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_389;
		L_389 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_388, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_390 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_391;
		L_391 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_390, NULL);
		bool L_392;
		L_392 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_389, L_391, NULL);
		if (!L_392)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_393 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_394, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_395 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_394);
		L_393->___double_0_64 = ((*(double*)((double*)(double*)UnBox(L_395, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		il2cpp_codegen_memcpy(L_397, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_398 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_397);
		L_396->___double_1_65 = ((*(double*)((double*)(double*)UnBox(L_398, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
	}

IL_0a55:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_dataPointer;
		((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(__this, L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001(_thisAdjusted, ___0_dataPointer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		void* L_5 = ___0_dataPointer;
		V_0 = (uint8_t*)L_5;
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___1_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_9 = (uint8_t*)(&L_8->___byte_0_0);
		V_2 = L_9;
		uint8_t* L_10 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_10);
		V_3 = 0;
		goto IL_0047;
	}

IL_003b:
	{
		uint8_t* L_11 = V_1;
		int32_t L_12 = V_3;
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_18;
		L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		void* L_24 = ___0_dataPointer;
		V_4 = (int8_t*)L_24;
		int8_t* L_25 = V_4;
		int32_t L_26 = ___1_offset;
		V_4 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_28 = (int8_t*)(&L_27->___sbyte_0_16);
		V_6 = L_28;
		int8_t* L_29 = V_6;
		V_5 = (int8_t*)((uintptr_t)L_29);
		V_7 = 0;
		goto IL_00a0;
	}

IL_008e:
	{
		int8_t* L_30 = V_5;
		int32_t L_31 = V_7;
		int8_t* L_32 = V_4;
		int32_t L_33 = V_7;
		int32_t L_34 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33)));
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31))) = (int8_t)L_34;
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a0:
	{
		int32_t L_36 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_37;
		L_37 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008e;
		}
	}
	{
		V_6 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00ae:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (!L_42)
		{
			goto IL_0112;
		}
	}
	{
		void* L_43 = ___0_dataPointer;
		V_8 = (uint16_t*)L_43;
		uint16_t* L_44 = V_8;
		int32_t L_45 = ___1_offset;
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_0_32);
		V_10 = L_47;
		uint16_t* L_48 = V_10;
		V_9 = (uint16_t*)((uintptr_t)L_48);
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_49 = V_9;
		int32_t L_50 = V_11;
		uint16_t* L_51 = V_8;
		int32_t L_52 = V_11;
		int32_t L_53 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 2))))) = (int16_t)L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0104:
	{
		int32_t L_55 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_56;
		L_56 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00ec;
		}
	}
	{
		V_10 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_0176;
		}
	}
	{
		void* L_62 = ___0_dataPointer;
		V_12 = (int16_t*)L_62;
		int16_t* L_63 = V_12;
		int32_t L_64 = ___1_offset;
		V_12 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_63, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_65 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_66 = (int16_t*)(&L_65->___int16_0_40);
		V_14 = L_66;
		int16_t* L_67 = V_14;
		V_13 = (int16_t*)((uintptr_t)L_67);
		V_15 = 0;
		goto IL_0168;
	}

IL_0150:
	{
		int16_t* L_68 = V_13;
		int32_t L_69 = V_15;
		int16_t* L_70 = V_12;
		int32_t L_71 = V_15;
		int32_t L_72 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_71), 2)))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 2))))) = (int16_t)L_72;
		int32_t L_73 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0168:
	{
		int32_t L_74 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_75;
		L_75 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0150;
		}
	}
	{
		V_14 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0176:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01da;
		}
	}
	{
		void* L_81 = ___0_dataPointer;
		V_16 = (uint32_t*)L_81;
		uint32_t* L_82 = V_16;
		int32_t L_83 = ___1_offset;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_83), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_85 = (uint32_t*)(&L_84->___uint32_0_48);
		V_18 = L_85;
		uint32_t* L_86 = V_18;
		V_17 = (uint32_t*)((uintptr_t)L_86);
		V_19 = 0;
		goto IL_01cc;
	}

IL_01b4:
	{
		uint32_t* L_87 = V_17;
		int32_t L_88 = V_19;
		uint32_t* L_89 = V_16;
		int32_t L_90 = V_19;
		int32_t L_91 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4)))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))) = (int32_t)L_91;
		int32_t L_92 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01cc:
	{
		int32_t L_93 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_94;
		L_94 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01b4;
		}
	}
	{
		V_18 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		if (!L_99)
		{
			goto IL_023e;
		}
	}
	{
		void* L_100 = ___0_dataPointer;
		V_20 = (int32_t*)L_100;
		int32_t* L_101 = V_20;
		int32_t L_102 = ___1_offset;
		V_20 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_102), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_103 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_104 = (int32_t*)(&L_103->___int32_0_52);
		V_22 = L_104;
		int32_t* L_105 = V_22;
		V_21 = (int32_t*)((uintptr_t)L_105);
		V_23 = 0;
		goto IL_0230;
	}

IL_0218:
	{
		int32_t* L_106 = V_21;
		int32_t L_107 = V_23;
		int32_t* L_108 = V_20;
		int32_t L_109 = V_23;
		int32_t L_110 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_108, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_109), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_107), 4))))) = (int32_t)L_110;
		int32_t L_111 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0230:
	{
		int32_t L_112 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_113;
		L_113 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0218;
		}
	}
	{
		V_22 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_023e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02a2;
		}
	}
	{
		void* L_119 = ___0_dataPointer;
		V_24 = (uint64_t*)L_119;
		uint64_t* L_120 = V_24;
		int32_t L_121 = ___1_offset;
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_120, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_121), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_122 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_123 = (uint64_t*)(&L_122->___uint64_0_56);
		V_26 = L_123;
		uint64_t* L_124 = V_26;
		V_25 = (uint64_t*)((uintptr_t)L_124);
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_125 = V_25;
		int32_t L_126 = V_27;
		uint64_t* L_127 = V_24;
		int32_t L_128 = V_27;
		int64_t L_129 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_128), 8)))));
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_126), 8))))) = (int64_t)L_129;
		int32_t L_130 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_0294:
	{
		int32_t L_131 = V_27;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_027c;
		}
	}
	{
		V_26 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (!L_137)
		{
			goto IL_0306;
		}
	}
	{
		void* L_138 = ___0_dataPointer;
		V_28 = (int64_t*)L_138;
		int64_t* L_139 = V_28;
		int32_t L_140 = ___1_offset;
		V_28 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_140), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_142 = (int64_t*)(&L_141->___int64_0_58);
		V_30 = L_142;
		int64_t* L_143 = V_30;
		V_29 = (int64_t*)((uintptr_t)L_143);
		V_31 = 0;
		goto IL_02f8;
	}

IL_02e0:
	{
		int64_t* L_144 = V_29;
		int32_t L_145 = V_31;
		int64_t* L_146 = V_28;
		int32_t L_147 = V_31;
		int64_t L_148 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_146, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_147), 8)))));
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (int64_t)L_148;
		int32_t L_149 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_02f8:
	{
		int32_t L_150 = V_31;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_151;
		L_151 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_02e0;
		}
	}
	{
		V_30 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_036a;
		}
	}
	{
		void* L_157 = ___0_dataPointer;
		V_32 = (float*)L_157;
		float* L_158 = V_32;
		int32_t L_159 = ___1_offset;
		V_32 = ((float*)il2cpp_codegen_add((intptr_t)L_158, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_159), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_160 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_161 = (float*)(&L_160->___single_0_60);
		V_34 = L_161;
		float* L_162 = V_34;
		V_33 = (float*)((uintptr_t)L_162);
		V_35 = 0;
		goto IL_035c;
	}

IL_0344:
	{
		float* L_163 = V_33;
		int32_t L_164 = V_35;
		float* L_165 = V_32;
		int32_t L_166 = V_35;
		float L_167 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_166), 4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_164), 4))))) = (float)L_167;
		int32_t L_168 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_035c:
	{
		int32_t L_169 = V_35;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_170;
		L_170 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0344;
		}
	}
	{
		V_34 = (float*)((uintptr_t)0);
		return;
	}

IL_036a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_174;
		L_174 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_173, NULL);
		bool L_175;
		L_175 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_172, L_174, NULL);
		if (!L_175)
		{
			goto IL_03ce;
		}
	}
	{
		void* L_176 = ___0_dataPointer;
		V_36 = (double*)L_176;
		double* L_177 = V_36;
		int32_t L_178 = ___1_offset;
		V_36 = ((double*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_179 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_180 = (double*)(&L_179->___double_0_64);
		V_38 = L_180;
		double* L_181 = V_38;
		V_37 = (double*)((uintptr_t)L_181);
		V_39 = 0;
		goto IL_03c0;
	}

IL_03a8:
	{
		double* L_182 = V_37;
		int32_t L_183 = V_39;
		double* L_184 = V_36;
		int32_t L_185 = V_39;
		double L_186 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_184, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_185), 8)))));
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_183), 8))))) = (double)L_186;
		int32_t L_187 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_03c0:
	{
		int32_t L_188 = V_39;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_189;
		L_189 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_03a8;
		}
	}
	{
		V_38 = (double*)((uintptr_t)0);
		return;
	}

IL_03ce:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_190 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_190, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_190, method);
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9(_thisAdjusted, ___0_dataPointer, ___1_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) 
{
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = ___0_existingRegister;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_1 = (*(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)L_0);
		__this->___register_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_AdjustorThunk (RuntimeObject* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674(_thisAdjusted, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_14 = (uint8_t*)(&L_13->___byte_0_0);
		V_0 = L_14;
		uint8_t* L_15 = V_0;
		int32_t L_16 = ___0_index;
		int32_t L_17 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_15), L_16)));
		uint8_t L_18 = ((uint8_t)L_17);
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_26 = (int8_t*)(&L_25->___sbyte_0_16);
		V_1 = L_26;
		int8_t* L_27 = V_1;
		int32_t L_28 = ___0_index;
		int32_t L_29 = *((int8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_27), L_28)));
		int8_t L_30 = ((int8_t)L_29);
		RuntimeObject* L_31 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0090:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00ca;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_37 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_38 = (uint16_t*)(&L_37->___uint16_0_32);
		V_2 = L_38;
		uint16_t* L_39 = V_2;
		int32_t L_40 = ___0_index;
		int32_t L_41 = *((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_39), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2)))));
		uint16_t L_42 = ((uint16_t)L_41);
		RuntimeObject* L_43 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_42);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_43, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ca:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_50 = (int16_t*)(&L_49->___int16_0_40);
		V_3 = L_50;
		int16_t* L_51 = V_3;
		int32_t L_52 = ___0_index;
		int32_t L_53 = *((int16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_51), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		int16_t L_54 = ((int16_t)L_53);
		RuntimeObject* L_55 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0140;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_61 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_62 = (uint32_t*)(&L_61->___uint32_0_48);
		V_4 = L_62;
		uint32_t* L_63 = V_4;
		int32_t L_64 = ___0_index;
		int32_t L_65 = *((uint32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_63), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 4)))));
		uint32_t L_66 = ((uint32_t)L_65);
		RuntimeObject* L_67 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_66);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_67, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0140:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_017c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_73 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_74 = (int32_t*)(&L_73->___int32_0_52);
		V_5 = L_74;
		int32_t* L_75 = V_5;
		int32_t L_76 = ___0_index;
		int32_t L_77 = *((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_75), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4)))));
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_017c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_01b8;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_85 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_86 = (uint64_t*)(&L_85->___uint64_0_56);
		V_6 = L_86;
		uint64_t* L_87 = V_6;
		int32_t L_88 = ___0_index;
		int64_t L_89 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_87), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 8)))));
		uint64_t L_90 = ((uint64_t)L_89);
		RuntimeObject* L_91 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_90);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_91, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01b8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		if (!L_96)
		{
			goto IL_01f4;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_97 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_98 = (int64_t*)(&L_97->___int64_0_58);
		V_7 = L_98;
		int64_t* L_99 = V_7;
		int32_t L_100 = ___0_index;
		int64_t L_101 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_99), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8)))));
		int64_t L_102 = L_101;
		RuntimeObject* L_103 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_102);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_103, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0230;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_110 = (float*)(&L_109->___single_0_60);
		V_8 = L_110;
		float* L_111 = V_8;
		int32_t L_112 = ___0_index;
		float L_113 = *((float*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_111), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), 4)))));
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_114);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_115, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0230:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		if (!L_120)
		{
			goto IL_026c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_121 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_122 = (double*)(&L_121->___double_0_64);
		V_9 = L_122;
		double* L_123 = V_9;
		int32_t L_124 = ___0_index;
		double L_125 = *((double*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_123), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_124), 8)))));
		double L_126 = L_125;
		RuntimeObject* L_127 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_126);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_127, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_026c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_128 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_128, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
	}
}
IL2CPP_EXTERN_C  void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, ((*(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		int32_t L_3 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_other), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_2, L_4);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_01f0;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_15 = (uint8_t)L_14->___byte_0_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_16.___register_0;
		uint8_t L_18 = (uint8_t)L_17.___byte_0_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_20 = (uint8_t)L_19->___byte_1_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_21.___register_0;
		uint8_t L_23 = (uint8_t)L_22.___byte_1_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_25 = (uint8_t)L_24->___byte_2_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_26.___register_0;
		uint8_t L_28 = (uint8_t)L_27.___byte_2_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_30 = (uint8_t)L_29->___byte_3_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_31.___register_0;
		uint8_t L_33 = (uint8_t)L_32.___byte_3_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_35 = (uint8_t)L_34->___byte_4_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_36.___register_0;
		uint8_t L_38 = (uint8_t)L_37.___byte_4_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_40 = (uint8_t)L_39->___byte_5_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_41.___register_0;
		uint8_t L_43 = (uint8_t)L_42.___byte_5_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_45 = (uint8_t)L_44->___byte_6_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_46.___register_0;
		uint8_t L_48 = (uint8_t)L_47.___byte_6_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_48))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_50 = (uint8_t)L_49->___byte_7_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_51 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_52 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_51.___register_0;
		uint8_t L_53 = (uint8_t)L_52.___byte_7_7;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_53))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_55 = (uint8_t)L_54->___byte_8_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_56 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_57 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_56.___register_0;
		uint8_t L_58 = (uint8_t)L_57.___byte_8_8;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_58))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_59 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_60 = (uint8_t)L_59->___byte_9_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_61 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_61.___register_0;
		uint8_t L_63 = (uint8_t)L_62.___byte_9_9;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_63))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_64 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_65 = (uint8_t)L_64->___byte_10_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_66 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_67 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_66.___register_0;
		uint8_t L_68 = (uint8_t)L_67.___byte_10_10;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_68))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_69 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_70 = (uint8_t)L_69->___byte_11_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_71 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_71.___register_0;
		uint8_t L_73 = (uint8_t)L_72.___byte_11_11;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_73))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_74 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_75 = (uint8_t)L_74->___byte_12_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_76 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_77 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_76.___register_0;
		uint8_t L_78 = (uint8_t)L_77.___byte_12_12;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_78))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_79 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_80 = (uint8_t)L_79->___byte_13_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_81 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_82 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_81.___register_0;
		uint8_t L_83 = (uint8_t)L_82.___byte_13_13;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_83))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_85 = (uint8_t)L_84->___byte_14_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_86 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_87 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_86.___register_0;
		uint8_t L_88 = (uint8_t)L_87.___byte_14_14;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_88))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_89 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_90 = (uint8_t)L_89->___byte_15_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_91 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_92 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_91.___register_0;
		uint8_t L_93 = (uint8_t)L_92.___byte_15_15;
		return (bool)((((int32_t)L_90) == ((int32_t)L_93))? 1 : 0);
	}

IL_01ee:
	{
		return (bool)0;
	}

IL_01f0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (!L_98)
		{
			goto IL_03af;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_99 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_100 = (int8_t)L_99->___sbyte_0_16;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_101 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_102 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_101.___register_0;
		int8_t L_103 = (int8_t)L_102.___sbyte_0_16;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_103))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_104 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_105 = (int8_t)L_104->___sbyte_1_17;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_106 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_107 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_106.___register_0;
		int8_t L_108 = (int8_t)L_107.___sbyte_1_17;
		if ((!(((uint32_t)L_105) == ((uint32_t)L_108))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_110 = (int8_t)L_109->___sbyte_2_18;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_111 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_112 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_111.___register_0;
		int8_t L_113 = (int8_t)L_112.___sbyte_2_18;
		if ((!(((uint32_t)L_110) == ((uint32_t)L_113))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_114 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_115 = (int8_t)L_114->___sbyte_3_19;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_116 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_117 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_116.___register_0;
		int8_t L_118 = (int8_t)L_117.___sbyte_3_19;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_118))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_119 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_120 = (int8_t)L_119->___sbyte_4_20;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_121 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_122 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_121.___register_0;
		int8_t L_123 = (int8_t)L_122.___sbyte_4_20;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_123))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_124 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_125 = (int8_t)L_124->___sbyte_5_21;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_126 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_127 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_126.___register_0;
		int8_t L_128 = (int8_t)L_127.___sbyte_5_21;
		if ((!(((uint32_t)L_125) == ((uint32_t)L_128))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_129 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_130 = (int8_t)L_129->___sbyte_6_22;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_131 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_132 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_131.___register_0;
		int8_t L_133 = (int8_t)L_132.___sbyte_6_22;
		if ((!(((uint32_t)L_130) == ((uint32_t)L_133))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_135 = (int8_t)L_134->___sbyte_7_23;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_136 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_137 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_136.___register_0;
		int8_t L_138 = (int8_t)L_137.___sbyte_7_23;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_138))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_139 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_140 = (int8_t)L_139->___sbyte_8_24;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_141 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_142 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_141.___register_0;
		int8_t L_143 = (int8_t)L_142.___sbyte_8_24;
		if ((!(((uint32_t)L_140) == ((uint32_t)L_143))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_144 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_145 = (int8_t)L_144->___sbyte_9_25;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_146 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_147 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_146.___register_0;
		int8_t L_148 = (int8_t)L_147.___sbyte_9_25;
		if ((!(((uint32_t)L_145) == ((uint32_t)L_148))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_149 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_150 = (int8_t)L_149->___sbyte_10_26;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_151 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_152 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_151.___register_0;
		int8_t L_153 = (int8_t)L_152.___sbyte_10_26;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_153))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_154 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_155 = (int8_t)L_154->___sbyte_11_27;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_156 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_157 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_156.___register_0;
		int8_t L_158 = (int8_t)L_157.___sbyte_11_27;
		if ((!(((uint32_t)L_155) == ((uint32_t)L_158))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_160 = (int8_t)L_159->___sbyte_12_28;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_161 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_162 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_161.___register_0;
		int8_t L_163 = (int8_t)L_162.___sbyte_12_28;
		if ((!(((uint32_t)L_160) == ((uint32_t)L_163))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_164 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_165 = (int8_t)L_164->___sbyte_13_29;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_166 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_167 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_166.___register_0;
		int8_t L_168 = (int8_t)L_167.___sbyte_13_29;
		if ((!(((uint32_t)L_165) == ((uint32_t)L_168))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_169 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_170 = (int8_t)L_169->___sbyte_14_30;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_171 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_172 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_171.___register_0;
		int8_t L_173 = (int8_t)L_172.___sbyte_14_30;
		if ((!(((uint32_t)L_170) == ((uint32_t)L_173))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_175 = (int8_t)L_174->___sbyte_15_31;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_176 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_177 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_176.___register_0;
		int8_t L_178 = (int8_t)L_177.___sbyte_15_31;
		return (bool)((((int32_t)L_175) == ((int32_t)L_178))? 1 : 0);
	}

IL_03ad:
	{
		return (bool)0;
	}

IL_03af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0496;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_184 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_185 = (uint16_t)L_184->___uint16_0_32;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_186 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_187 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_186.___register_0;
		uint16_t L_188 = (uint16_t)L_187.___uint16_0_32;
		if ((!(((uint32_t)L_185) == ((uint32_t)L_188))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_190 = (uint16_t)L_189->___uint16_1_33;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_191 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_192 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_191.___register_0;
		uint16_t L_193 = (uint16_t)L_192.___uint16_1_33;
		if ((!(((uint32_t)L_190) == ((uint32_t)L_193))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_195 = (uint16_t)L_194->___uint16_2_34;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_196 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_197 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_196.___register_0;
		uint16_t L_198 = (uint16_t)L_197.___uint16_2_34;
		if ((!(((uint32_t)L_195) == ((uint32_t)L_198))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_199 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_200 = (uint16_t)L_199->___uint16_3_35;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_201 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_202 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_201.___register_0;
		uint16_t L_203 = (uint16_t)L_202.___uint16_3_35;
		if ((!(((uint32_t)L_200) == ((uint32_t)L_203))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_204 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_205 = (uint16_t)L_204->___uint16_4_36;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_206 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_207 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_206.___register_0;
		uint16_t L_208 = (uint16_t)L_207.___uint16_4_36;
		if ((!(((uint32_t)L_205) == ((uint32_t)L_208))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_210 = (uint16_t)L_209->___uint16_5_37;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_211 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_212 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_211.___register_0;
		uint16_t L_213 = (uint16_t)L_212.___uint16_5_37;
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_215 = (uint16_t)L_214->___uint16_6_38;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_216 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_217 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_216.___register_0;
		uint16_t L_218 = (uint16_t)L_217.___uint16_6_38;
		if ((!(((uint32_t)L_215) == ((uint32_t)L_218))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_219 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_220 = (uint16_t)L_219->___uint16_7_39;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_221 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_222 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_221.___register_0;
		uint16_t L_223 = (uint16_t)L_222.___uint16_7_39;
		return (bool)((((int32_t)L_220) == ((int32_t)L_223))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}

IL_0496:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_057d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_229 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_230 = (int16_t)L_229->___int16_0_40;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_231 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_231.___register_0;
		int16_t L_233 = (int16_t)L_232.___int16_0_40;
		if ((!(((uint32_t)L_230) == ((uint32_t)L_233))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_234 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_235 = (int16_t)L_234->___int16_1_41;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_236 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_237 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_236.___register_0;
		int16_t L_238 = (int16_t)L_237.___int16_1_41;
		if ((!(((uint32_t)L_235) == ((uint32_t)L_238))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_240 = (int16_t)L_239->___int16_2_42;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_241 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_241.___register_0;
		int16_t L_243 = (int16_t)L_242.___int16_2_42;
		if ((!(((uint32_t)L_240) == ((uint32_t)L_243))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_245 = (int16_t)L_244->___int16_3_43;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_246 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_247 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_246.___register_0;
		int16_t L_248 = (int16_t)L_247.___int16_3_43;
		if ((!(((uint32_t)L_245) == ((uint32_t)L_248))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_250 = (int16_t)L_249->___int16_4_44;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_251 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_252 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_251.___register_0;
		int16_t L_253 = (int16_t)L_252.___int16_4_44;
		if ((!(((uint32_t)L_250) == ((uint32_t)L_253))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_255 = (int16_t)L_254->___int16_5_45;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_256 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_257 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_256.___register_0;
		int16_t L_258 = (int16_t)L_257.___int16_5_45;
		if ((!(((uint32_t)L_255) == ((uint32_t)L_258))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_260 = (int16_t)L_259->___int16_6_46;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_261 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_262 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_261.___register_0;
		int16_t L_263 = (int16_t)L_262.___int16_6_46;
		if ((!(((uint32_t)L_260) == ((uint32_t)L_263))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_265 = (int16_t)L_264->___int16_7_47;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_266 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_266.___register_0;
		int16_t L_268 = (int16_t)L_267.___int16_7_47;
		return (bool)((((int32_t)L_265) == ((int32_t)L_268))? 1 : 0);
	}

IL_057b:
	{
		return (bool)0;
	}

IL_057d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_269 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_270;
		L_270 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_269, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		bool L_273;
		L_273 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_270, L_272, NULL);
		if (!L_273)
		{
			goto IL_05fb;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_275 = (uint32_t)L_274->___uint32_0_48;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_276 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_276.___register_0;
		uint32_t L_278 = (uint32_t)L_277.___uint32_0_48;
		if ((!(((uint32_t)L_275) == ((uint32_t)L_278))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_280 = (uint32_t)L_279->___uint32_1_49;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_281 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_282 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_281.___register_0;
		uint32_t L_283 = (uint32_t)L_282.___uint32_1_49;
		if ((!(((uint32_t)L_280) == ((uint32_t)L_283))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_285 = (uint32_t)L_284->___uint32_2_50;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_286 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_287 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_286.___register_0;
		uint32_t L_288 = (uint32_t)L_287.___uint32_2_50;
		if ((!(((uint32_t)L_285) == ((uint32_t)L_288))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_290 = (uint32_t)L_289->___uint32_3_51;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_291 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_292 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_291.___register_0;
		uint32_t L_293 = (uint32_t)L_292.___uint32_3_51;
		return (bool)((((int32_t)L_290) == ((int32_t)L_293))? 1 : 0);
	}

IL_05f9:
	{
		return (bool)0;
	}

IL_05fb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_294 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_295;
		L_295 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_294, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_296 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_297;
		L_297 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_296, NULL);
		bool L_298;
		L_298 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_295, L_297, NULL);
		if (!L_298)
		{
			goto IL_0679;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_300 = (int32_t)L_299->___int32_0_52;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_301 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_301.___register_0;
		int32_t L_303 = (int32_t)L_302.___int32_0_52;
		if ((!(((uint32_t)L_300) == ((uint32_t)L_303))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_305 = (int32_t)L_304->___int32_1_53;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_306 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_307 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_306.___register_0;
		int32_t L_308 = (int32_t)L_307.___int32_1_53;
		if ((!(((uint32_t)L_305) == ((uint32_t)L_308))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_310 = (int32_t)L_309->___int32_2_54;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_311 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_311.___register_0;
		int32_t L_313 = (int32_t)L_312.___int32_2_54;
		if ((!(((uint32_t)L_310) == ((uint32_t)L_313))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_315 = (int32_t)L_314->___int32_3_55;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_316 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_317 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_316.___register_0;
		int32_t L_318 = (int32_t)L_317.___int32_3_55;
		return (bool)((((int32_t)L_315) == ((int32_t)L_318))? 1 : 0);
	}

IL_0677:
	{
		return (bool)0;
	}

IL_0679:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_319 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_320;
		L_320 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_319, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_321 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_322;
		L_322 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_321, NULL);
		bool L_323;
		L_323 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_320, L_322, NULL);
		if (!L_323)
		{
			goto IL_06c7;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_325 = (uint64_t)L_324->___uint64_0_56;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_326 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_327 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_326.___register_0;
		uint64_t L_328 = (uint64_t)L_327.___uint64_0_56;
		if ((!(((uint64_t)L_325) == ((uint64_t)L_328))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_330 = (uint64_t)L_329->___uint64_1_57;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_331 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_332 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_331.___register_0;
		uint64_t L_333 = (uint64_t)L_332.___uint64_1_57;
		return (bool)((((int64_t)L_330) == ((int64_t)L_333))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}

IL_06c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0715;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_339 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t L_340 = (int64_t)L_339->___int64_0_58;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_341 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_342 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_341.___register_0;
		int64_t L_343 = (int64_t)L_342.___int64_0_58;
		if ((!(((uint64_t)L_340) == ((uint64_t)L_343))))
		{
			goto IL_0713;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_344 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t L_345 = (int64_t)L_344->___int64_1_59;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_346 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_347 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_346.___register_0;
		int64_t L_348 = (int64_t)L_347.___int64_1_59;
		return (bool)((((int64_t)L_345) == ((int64_t)L_348))? 1 : 0);
	}

IL_0713:
	{
		return (bool)0;
	}

IL_0715:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0793;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_355 = (float)L_354->___single_0_60;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_356 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_356.___register_0;
		float L_358 = (float)L_357.___single_0_60;
		if ((!(((float)L_355) == ((float)L_358))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_359 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_360 = (float)L_359->___single_1_61;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_361 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_362 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_361.___register_0;
		float L_363 = (float)L_362.___single_1_61;
		if ((!(((float)L_360) == ((float)L_363))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_364 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_365 = (float)L_364->___single_2_62;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_366 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_366.___register_0;
		float L_368 = (float)L_367.___single_2_62;
		if ((!(((float)L_365) == ((float)L_368))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_370 = (float)L_369->___single_3_63;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_371 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_372 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_371.___register_0;
		float L_373 = (float)L_372.___single_3_63;
		return (bool)((((float)L_370) == ((float)L_373))? 1 : 0);
	}

IL_0791:
	{
		return (bool)0;
	}

IL_0793:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_374 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_375;
		L_375 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_374, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_376 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_377;
		L_377 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_376, NULL);
		bool L_378;
		L_378 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_375, L_377, NULL);
		if (!L_378)
		{
			goto IL_07e1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double L_380 = (double)L_379->___double_0_64;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_381 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_382 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_381.___register_0;
		double L_383 = (double)L_382.___double_0_64;
		if ((!(((double)L_380) == ((double)L_383))))
		{
			goto IL_07df;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_384 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double L_385 = (double)L_384->___double_1_65;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_386 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_387 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_386.___register_0;
		double L_388 = (double)L_387.___double_1_65;
		return (bool)((((double)L_385) == ((double)L_388))? 1 : 0);
	}

IL_07df:
	{
		return (bool)0;
	}

IL_07e1:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_389 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_389, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_389, method);
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_AdjustorThunk (RuntimeObject* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_23 = L_8;
	const Il2CppFullySharedGenericStruct L_38 = L_8;
	const Il2CppFullySharedGenericStruct L_53 = L_8;
	const Il2CppFullySharedGenericStruct L_68 = L_8;
	const Il2CppFullySharedGenericStruct L_83 = L_8;
	const Il2CppFullySharedGenericStruct L_98 = L_8;
	const Il2CppFullySharedGenericStruct L_113 = L_8;
	const Il2CppFullySharedGenericStruct L_128 = L_8;
	const Il2CppFullySharedGenericStruct L_143 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8);
		V_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_9, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_6, L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_00a7;
		}
	}
	{
		V_3 = 0;
		goto IL_009d;
	}

IL_0078:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_22, (Il2CppFullySharedGenericStruct*)L_23);
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23);
		V_4 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_25;
		L_25 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF((&V_4), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_21, L_25, NULL);
		V_0 = L_26;
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009d:
	{
		int32_t L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_29;
		L_29 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_30 = V_0;
		return L_30;
	}

IL_00a7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (!L_35)
		{
			goto IL_00fa;
		}
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_37, (Il2CppFullySharedGenericStruct*)L_38);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_38);
		V_6 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_39, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_40;
		L_40 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_36, L_40, NULL);
		V_0 = L_41;
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ef:
	{
		int32_t L_43 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_44;
		L_44 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00fa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_014d;
		}
	}
	{
		V_7 = 0;
		goto IL_0142;
	}

IL_011a:
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_7;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_52, (Il2CppFullySharedGenericStruct*)L_53);
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_53);
		V_8 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_54, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_55;
		L_55 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_56;
		L_56 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_51, L_55, NULL);
		V_0 = L_56;
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0142:
	{
		int32_t L_58 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_59;
		L_59 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_60 = V_0;
		return L_60;
	}

IL_014d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
		if (!L_65)
		{
			goto IL_01a0;
		}
	}
	{
		V_9 = 0;
		goto IL_0195;
	}

IL_016d:
	{
		int32_t L_66 = V_0;
		int32_t L_67 = V_9;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_67, (Il2CppFullySharedGenericStruct*)L_68);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_68);
		V_10 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_69, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_70;
		L_70 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_10), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_71;
		L_71 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_66, L_70, NULL);
		V_0 = L_71;
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0195:
	{
		int32_t L_73 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_74;
		L_74 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_75 = V_0;
		return L_75;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01f3;
		}
	}
	{
		V_11 = 0;
		goto IL_01e8;
	}

IL_01c0:
	{
		int32_t L_81 = V_0;
		int32_t L_82 = V_11;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_82, (Il2CppFullySharedGenericStruct*)L_83);
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_83);
		V_12 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_85;
		L_85 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_12), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_81, L_85, NULL);
		V_0 = L_86;
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01e8:
	{
		int32_t L_88 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_89;
		L_89 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_90 = V_0;
		return L_90;
	}

IL_01f3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		bool L_95;
		L_95 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_92, L_94, NULL);
		if (!L_95)
		{
			goto IL_0246;
		}
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_96 = V_0;
		int32_t L_97 = V_13;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_97, (Il2CppFullySharedGenericStruct*)L_98);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_98);
		V_14 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_99, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_100;
		L_100 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_101;
		L_101 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_96, L_100, NULL);
		V_0 = L_101;
		int32_t L_102 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_104;
		L_104 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_105 = V_0;
		return L_105;
	}

IL_0246:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0299;
		}
	}
	{
		V_15 = 0;
		goto IL_028e;
	}

IL_0266:
	{
		int32_t L_111 = V_0;
		int32_t L_112 = V_15;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_112, (Il2CppFullySharedGenericStruct*)L_113);
		RuntimeObject* L_114 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_113);
		V_16 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_114, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_115;
		L_115 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_16), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_116;
		L_116 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_111, L_115, NULL);
		V_0 = L_116;
		int32_t L_117 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_028e:
	{
		int32_t L_118 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_119;
		L_119 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_118) < ((int32_t)L_119)))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_120 = V_0;
		return L_120;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		if (!L_125)
		{
			goto IL_02ec;
		}
	}
	{
		V_17 = 0;
		goto IL_02e1;
	}

IL_02b9:
	{
		int32_t L_126 = V_0;
		int32_t L_127 = V_17;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_127, (Il2CppFullySharedGenericStruct*)L_128);
		RuntimeObject* L_129 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_128);
		V_18 = ((*(float*)((float*)(float*)UnBox(L_129, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_130;
		L_130 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_18), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_131;
		L_131 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_126, L_130, NULL);
		V_0 = L_131;
		int32_t L_132 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_132, 1));
	}

IL_02e1:
	{
		int32_t L_133 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_134;
		L_134 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_133) < ((int32_t)L_134)))
		{
			goto IL_02b9;
		}
	}
	{
		int32_t L_135 = V_0;
		return L_135;
	}

IL_02ec:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_033f;
		}
	}
	{
		V_19 = 0;
		goto IL_0334;
	}

IL_030c:
	{
		int32_t L_141 = V_0;
		int32_t L_142 = V_19;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_142, (Il2CppFullySharedGenericStruct*)L_143);
		RuntimeObject* L_144 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_143);
		V_20 = ((*(double*)((double*)(double*)UnBox(L_144, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_145;
		L_145 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_20), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_146;
		L_146 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_141, L_145, NULL);
		V_0 = L_146;
		int32_t L_147 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_0334:
	{
		int32_t L_148 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_149;
		L_149 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_148) < ((int32_t)L_149)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_150 = V_0;
		return L_150;
	}

IL_033f:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_151 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_151, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_151, method);
	}

IL_034a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_04da;
		}
	}
	{
		int32_t L_157 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_158 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_159 = (uint8_t*)(&L_158->___byte_0_0);
		int32_t L_160;
		L_160 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_159, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_161;
		L_161 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_157, L_160, NULL);
		V_0 = L_161;
		int32_t L_162 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_163 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_164 = (uint8_t*)(&L_163->___byte_1_1);
		int32_t L_165;
		L_165 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_164, NULL);
		int32_t L_166;
		L_166 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_162, L_165, NULL);
		V_0 = L_166;
		int32_t L_167 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_169 = (uint8_t*)(&L_168->___byte_2_2);
		int32_t L_170;
		L_170 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_169, NULL);
		int32_t L_171;
		L_171 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_167, L_170, NULL);
		V_0 = L_171;
		int32_t L_172 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_173 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_174 = (uint8_t*)(&L_173->___byte_3_3);
		int32_t L_175;
		L_175 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_174, NULL);
		int32_t L_176;
		L_176 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_172, L_175, NULL);
		V_0 = L_176;
		int32_t L_177 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_179 = (uint8_t*)(&L_178->___byte_4_4);
		int32_t L_180;
		L_180 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_179, NULL);
		int32_t L_181;
		L_181 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_177, L_180, NULL);
		V_0 = L_181;
		int32_t L_182 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_184 = (uint8_t*)(&L_183->___byte_5_5);
		int32_t L_185;
		L_185 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_184, NULL);
		int32_t L_186;
		L_186 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_182, L_185, NULL);
		V_0 = L_186;
		int32_t L_187 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_188 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_189 = (uint8_t*)(&L_188->___byte_6_6);
		int32_t L_190;
		L_190 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_189, NULL);
		int32_t L_191;
		L_191 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_187, L_190, NULL);
		V_0 = L_191;
		int32_t L_192 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_193 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_194 = (uint8_t*)(&L_193->___byte_7_7);
		int32_t L_195;
		L_195 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_194, NULL);
		int32_t L_196;
		L_196 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_192, L_195, NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_199 = (uint8_t*)(&L_198->___byte_8_8);
		int32_t L_200;
		L_200 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_199, NULL);
		int32_t L_201;
		L_201 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_197, L_200, NULL);
		V_0 = L_201;
		int32_t L_202 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_203 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_204 = (uint8_t*)(&L_203->___byte_9_9);
		int32_t L_205;
		L_205 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_204, NULL);
		int32_t L_206;
		L_206 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_202, L_205, NULL);
		V_0 = L_206;
		int32_t L_207 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_208 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_209 = (uint8_t*)(&L_208->___byte_10_10);
		int32_t L_210;
		L_210 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_209, NULL);
		int32_t L_211;
		L_211 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_207, L_210, NULL);
		V_0 = L_211;
		int32_t L_212 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_213 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_214 = (uint8_t*)(&L_213->___byte_11_11);
		int32_t L_215;
		L_215 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_214, NULL);
		int32_t L_216;
		L_216 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_212, L_215, NULL);
		V_0 = L_216;
		int32_t L_217 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_219 = (uint8_t*)(&L_218->___byte_12_12);
		int32_t L_220;
		L_220 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_219, NULL);
		int32_t L_221;
		L_221 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_217, L_220, NULL);
		V_0 = L_221;
		int32_t L_222 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_223 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_224 = (uint8_t*)(&L_223->___byte_13_13);
		int32_t L_225;
		L_225 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_224, NULL);
		int32_t L_226;
		L_226 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_222, L_225, NULL);
		V_0 = L_226;
		int32_t L_227 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_228 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_229 = (uint8_t*)(&L_228->___byte_14_14);
		int32_t L_230;
		L_230 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_229, NULL);
		int32_t L_231;
		L_231 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_227, L_230, NULL);
		V_0 = L_231;
		int32_t L_232 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_234 = (uint8_t*)(&L_233->___byte_15_15);
		int32_t L_235;
		L_235 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_234, NULL);
		int32_t L_236;
		L_236 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_232, L_235, NULL);
		V_0 = L_236;
		int32_t L_237 = V_0;
		return L_237;
	}

IL_04da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_238 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_239;
		L_239 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_238, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_240 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_241;
		L_241 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_240, NULL);
		bool L_242;
		L_242 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_239, L_241, NULL);
		if (!L_242)
		{
			goto IL_066a;
		}
	}
	{
		int32_t L_243 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_245 = (int8_t*)(&L_244->___sbyte_0_16);
		int32_t L_246;
		L_246 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_245, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_247;
		L_247 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_243, L_246, NULL);
		V_0 = L_247;
		int32_t L_248 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_250 = (int8_t*)(&L_249->___sbyte_1_17);
		int32_t L_251;
		L_251 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_250, NULL);
		int32_t L_252;
		L_252 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_248, L_251, NULL);
		V_0 = L_252;
		int32_t L_253 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_255 = (int8_t*)(&L_254->___sbyte_2_18);
		int32_t L_256;
		L_256 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_255, NULL);
		int32_t L_257;
		L_257 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_253, L_256, NULL);
		V_0 = L_257;
		int32_t L_258 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_260 = (int8_t*)(&L_259->___sbyte_3_19);
		int32_t L_261;
		L_261 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_260, NULL);
		int32_t L_262;
		L_262 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_258, L_261, NULL);
		V_0 = L_262;
		int32_t L_263 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_265 = (int8_t*)(&L_264->___sbyte_4_20);
		int32_t L_266;
		L_266 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_265, NULL);
		int32_t L_267;
		L_267 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_263, L_266, NULL);
		V_0 = L_267;
		int32_t L_268 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_269 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_270 = (int8_t*)(&L_269->___sbyte_5_21);
		int32_t L_271;
		L_271 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_270, NULL);
		int32_t L_272;
		L_272 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_268, L_271, NULL);
		V_0 = L_272;
		int32_t L_273 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_275 = (int8_t*)(&L_274->___sbyte_6_22);
		int32_t L_276;
		L_276 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_275, NULL);
		int32_t L_277;
		L_277 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_273, L_276, NULL);
		V_0 = L_277;
		int32_t L_278 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_280 = (int8_t*)(&L_279->___sbyte_7_23);
		int32_t L_281;
		L_281 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_280, NULL);
		int32_t L_282;
		L_282 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_278, L_281, NULL);
		V_0 = L_282;
		int32_t L_283 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_285 = (int8_t*)(&L_284->___sbyte_8_24);
		int32_t L_286;
		L_286 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_285, NULL);
		int32_t L_287;
		L_287 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_283, L_286, NULL);
		V_0 = L_287;
		int32_t L_288 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_290 = (int8_t*)(&L_289->___sbyte_9_25);
		int32_t L_291;
		L_291 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_290, NULL);
		int32_t L_292;
		L_292 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_288, L_291, NULL);
		V_0 = L_292;
		int32_t L_293 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_295 = (int8_t*)(&L_294->___sbyte_10_26);
		int32_t L_296;
		L_296 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_295, NULL);
		int32_t L_297;
		L_297 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_293, L_296, NULL);
		V_0 = L_297;
		int32_t L_298 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_300 = (int8_t*)(&L_299->___sbyte_11_27);
		int32_t L_301;
		L_301 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_300, NULL);
		int32_t L_302;
		L_302 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_298, L_301, NULL);
		V_0 = L_302;
		int32_t L_303 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_305 = (int8_t*)(&L_304->___sbyte_12_28);
		int32_t L_306;
		L_306 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_305, NULL);
		int32_t L_307;
		L_307 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_303, L_306, NULL);
		V_0 = L_307;
		int32_t L_308 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_310 = (int8_t*)(&L_309->___sbyte_13_29);
		int32_t L_311;
		L_311 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_310, NULL);
		int32_t L_312;
		L_312 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_308, L_311, NULL);
		V_0 = L_312;
		int32_t L_313 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_315 = (int8_t*)(&L_314->___sbyte_14_30);
		int32_t L_316;
		L_316 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_315, NULL);
		int32_t L_317;
		L_317 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_313, L_316, NULL);
		V_0 = L_317;
		int32_t L_318 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_319 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_320 = (int8_t*)(&L_319->___sbyte_15_31);
		int32_t L_321;
		L_321 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_320, NULL);
		int32_t L_322;
		L_322 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_318, L_321, NULL);
		V_0 = L_322;
		int32_t L_323 = V_0;
		return L_323;
	}

IL_066a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_324 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_325;
		L_325 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_324, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_326 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_327;
		L_327 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_326, NULL);
		bool L_328;
		L_328 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_325, L_327, NULL);
		if (!L_328)
		{
			goto IL_0742;
		}
	}
	{
		int32_t L_329 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_330 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_331 = (uint16_t*)(&L_330->___uint16_0_32);
		int32_t L_332;
		L_332 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_331, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_333;
		L_333 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_329, L_332, NULL);
		V_0 = L_333;
		int32_t L_334 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_335 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_336 = (uint16_t*)(&L_335->___uint16_1_33);
		int32_t L_337;
		L_337 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_336, NULL);
		int32_t L_338;
		L_338 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_334, L_337, NULL);
		V_0 = L_338;
		int32_t L_339 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_341 = (uint16_t*)(&L_340->___uint16_2_34);
		int32_t L_342;
		L_342 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_341, NULL);
		int32_t L_343;
		L_343 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_339, L_342, NULL);
		V_0 = L_343;
		int32_t L_344 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_346 = (uint16_t*)(&L_345->___uint16_3_35);
		int32_t L_347;
		L_347 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_346, NULL);
		int32_t L_348;
		L_348 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_344, L_347, NULL);
		V_0 = L_348;
		int32_t L_349 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_350 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_351 = (uint16_t*)(&L_350->___uint16_4_36);
		int32_t L_352;
		L_352 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_351, NULL);
		int32_t L_353;
		L_353 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_349, L_352, NULL);
		V_0 = L_353;
		int32_t L_354 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_355 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_356 = (uint16_t*)(&L_355->___uint16_5_37);
		int32_t L_357;
		L_357 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_356, NULL);
		int32_t L_358;
		L_358 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_354, L_357, NULL);
		V_0 = L_358;
		int32_t L_359 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_360 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_361 = (uint16_t*)(&L_360->___uint16_6_38);
		int32_t L_362;
		L_362 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_361, NULL);
		int32_t L_363;
		L_363 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_359, L_362, NULL);
		V_0 = L_363;
		int32_t L_364 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_366 = (uint16_t*)(&L_365->___uint16_7_39);
		int32_t L_367;
		L_367 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_366, NULL);
		int32_t L_368;
		L_368 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_364, L_367, NULL);
		V_0 = L_368;
		int32_t L_369 = V_0;
		return L_369;
	}

IL_0742:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_370 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_371;
		L_371 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_370, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_372 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_373;
		L_373 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_372, NULL);
		bool L_374;
		L_374 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_371, L_373, NULL);
		if (!L_374)
		{
			goto IL_081a;
		}
	}
	{
		int32_t L_375 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_376 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_377 = (int16_t*)(&L_376->___int16_0_40);
		int32_t L_378;
		L_378 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_377, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_379;
		L_379 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_375, L_378, NULL);
		V_0 = L_379;
		int32_t L_380 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_381 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_382 = (int16_t*)(&L_381->___int16_1_41);
		int32_t L_383;
		L_383 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_382, NULL);
		int32_t L_384;
		L_384 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_380, L_383, NULL);
		V_0 = L_384;
		int32_t L_385 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_387 = (int16_t*)(&L_386->___int16_2_42);
		int32_t L_388;
		L_388 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_387, NULL);
		int32_t L_389;
		L_389 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_385, L_388, NULL);
		V_0 = L_389;
		int32_t L_390 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_391 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_392 = (int16_t*)(&L_391->___int16_3_43);
		int32_t L_393;
		L_393 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_392, NULL);
		int32_t L_394;
		L_394 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_390, L_393, NULL);
		V_0 = L_394;
		int32_t L_395 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_397 = (int16_t*)(&L_396->___int16_4_44);
		int32_t L_398;
		L_398 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_397, NULL);
		int32_t L_399;
		L_399 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_395, L_398, NULL);
		V_0 = L_399;
		int32_t L_400 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_401 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_402 = (int16_t*)(&L_401->___int16_5_45);
		int32_t L_403;
		L_403 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_402, NULL);
		int32_t L_404;
		L_404 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_400, L_403, NULL);
		V_0 = L_404;
		int32_t L_405 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_406 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_407 = (int16_t*)(&L_406->___int16_6_46);
		int32_t L_408;
		L_408 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_407, NULL);
		int32_t L_409;
		L_409 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_405, L_408, NULL);
		V_0 = L_409;
		int32_t L_410 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_412 = (int16_t*)(&L_411->___int16_7_47);
		int32_t L_413;
		L_413 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_412, NULL);
		int32_t L_414;
		L_414 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_410, L_413, NULL);
		V_0 = L_414;
		int32_t L_415 = V_0;
		return L_415;
	}

IL_081a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_416 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_417;
		L_417 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_416, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_418 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_419;
		L_419 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_418, NULL);
		bool L_420;
		L_420 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_417, L_419, NULL);
		if (!L_420)
		{
			goto IL_0893;
		}
	}
	{
		int32_t L_421 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_422 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_423 = (uint32_t*)(&L_422->___uint32_0_48);
		int32_t L_424;
		L_424 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_423, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_425;
		L_425 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_421, L_424, NULL);
		V_0 = L_425;
		int32_t L_426 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_427 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_428 = (uint32_t*)(&L_427->___uint32_1_49);
		int32_t L_429;
		L_429 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_428, NULL);
		int32_t L_430;
		L_430 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_426, L_429, NULL);
		V_0 = L_430;
		int32_t L_431 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_432 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_433 = (uint32_t*)(&L_432->___uint32_2_50);
		int32_t L_434;
		L_434 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_433, NULL);
		int32_t L_435;
		L_435 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_431, L_434, NULL);
		V_0 = L_435;
		int32_t L_436 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_438 = (uint32_t*)(&L_437->___uint32_3_51);
		int32_t L_439;
		L_439 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_438, NULL);
		int32_t L_440;
		L_440 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_436, L_439, NULL);
		V_0 = L_440;
		int32_t L_441 = V_0;
		return L_441;
	}

IL_0893:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_442 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_443;
		L_443 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_442, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_444 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_445;
		L_445 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_444, NULL);
		bool L_446;
		L_446 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_443, L_445, NULL);
		if (!L_446)
		{
			goto IL_090c;
		}
	}
	{
		int32_t L_447 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_448 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_449 = (int32_t*)(&L_448->___int32_0_52);
		int32_t L_450;
		L_450 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_449, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_451;
		L_451 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_447, L_450, NULL);
		V_0 = L_451;
		int32_t L_452 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_453 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_454 = (int32_t*)(&L_453->___int32_1_53);
		int32_t L_455;
		L_455 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_454, NULL);
		int32_t L_456;
		L_456 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_452, L_455, NULL);
		V_0 = L_456;
		int32_t L_457 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_459 = (int32_t*)(&L_458->___int32_2_54);
		int32_t L_460;
		L_460 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_459, NULL);
		int32_t L_461;
		L_461 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_457, L_460, NULL);
		V_0 = L_461;
		int32_t L_462 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_463 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_464 = (int32_t*)(&L_463->___int32_3_55);
		int32_t L_465;
		L_465 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_464, NULL);
		int32_t L_466;
		L_466 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_462, L_465, NULL);
		V_0 = L_466;
		int32_t L_467 = V_0;
		return L_467;
	}

IL_090c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_468 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_469;
		L_469 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_468, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_470 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_471;
		L_471 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_470, NULL);
		bool L_472;
		L_472 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_469, L_471, NULL);
		if (!L_472)
		{
			goto IL_0957;
		}
	}
	{
		int32_t L_473 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_474 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_475 = (uint64_t*)(&L_474->___uint64_0_56);
		int32_t L_476;
		L_476 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_475, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_477;
		L_477 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_473, L_476, NULL);
		V_0 = L_477;
		int32_t L_478 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_479 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_480 = (uint64_t*)(&L_479->___uint64_1_57);
		int32_t L_481;
		L_481 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_480, NULL);
		int32_t L_482;
		L_482 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_478, L_481, NULL);
		V_0 = L_482;
		int32_t L_483 = V_0;
		return L_483;
	}

IL_0957:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_484 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_485;
		L_485 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_484, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_486 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_487;
		L_487 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_486, NULL);
		bool L_488;
		L_488 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_485, L_487, NULL);
		if (!L_488)
		{
			goto IL_09a2;
		}
	}
	{
		int32_t L_489 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_490 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_491 = (int64_t*)(&L_490->___int64_0_58);
		int32_t L_492;
		L_492 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_491, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_493;
		L_493 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_489, L_492, NULL);
		V_0 = L_493;
		int32_t L_494 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_495 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_496 = (int64_t*)(&L_495->___int64_1_59);
		int32_t L_497;
		L_497 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_496, NULL);
		int32_t L_498;
		L_498 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_494, L_497, NULL);
		V_0 = L_498;
		int32_t L_499 = V_0;
		return L_499;
	}

IL_09a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_500 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_501;
		L_501 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_500, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_502 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_503;
		L_503 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_502, NULL);
		bool L_504;
		L_504 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_501, L_503, NULL);
		if (!L_504)
		{
			goto IL_0a1b;
		}
	}
	{
		int32_t L_505 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_506 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_507 = (float*)(&L_506->___single_0_60);
		int32_t L_508;
		L_508 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_507, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_509;
		L_509 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_505, L_508, NULL);
		V_0 = L_509;
		int32_t L_510 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_511 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_512 = (float*)(&L_511->___single_1_61);
		int32_t L_513;
		L_513 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_512, NULL);
		int32_t L_514;
		L_514 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_510, L_513, NULL);
		V_0 = L_514;
		int32_t L_515 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_516 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_517 = (float*)(&L_516->___single_2_62);
		int32_t L_518;
		L_518 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_517, NULL);
		int32_t L_519;
		L_519 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_515, L_518, NULL);
		V_0 = L_519;
		int32_t L_520 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_521 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_522 = (float*)(&L_521->___single_3_63);
		int32_t L_523;
		L_523 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_522, NULL);
		int32_t L_524;
		L_524 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_520, L_523, NULL);
		V_0 = L_524;
		int32_t L_525 = V_0;
		return L_525;
	}

IL_0a1b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_526 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_527;
		L_527 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_526, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_528 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_529;
		L_529 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_528, NULL);
		bool L_530;
		L_530 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_527, L_529, NULL);
		if (!L_530)
		{
			goto IL_0a66;
		}
	}
	{
		int32_t L_531 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_532 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_533 = (double*)(&L_532->___double_0_64);
		int32_t L_534;
		L_534 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_533, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_535;
		L_535 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_531, L_534, NULL);
		V_0 = L_535;
		int32_t L_536 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_537 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_538 = (double*)(&L_537->___double_1_65);
		int32_t L_539;
		L_539 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_538, NULL);
		int32_t L_540;
		L_540 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_536, L_539, NULL);
		V_0 = L_540;
		int32_t L_541 = V_0;
		return L_541;
	}

IL_0a66:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_542 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_542, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_542, method);
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_24 = L_8;
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, (Il2CppChar)((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8);
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_formatProvider;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_9, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)), L_10, L_11);
		NullCheck(L_6);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		String_t* L_15 = V_1;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, (Il2CppChar)((int32_t)32), NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_21;
		L_21 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_23;
		L_23 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), (Il2CppFullySharedGenericStruct*)L_24);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_24);
		String_t* L_26 = ___0_format;
		RuntimeObject* L_27 = ___1_formatProvider;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_25, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)));
		String_t* L_28;
		L_28 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_25, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)), L_26, L_27);
		NullCheck(L_22);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, (Il2CppChar)((int32_t)62), NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck((RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD9D7F968EF2059FD426D9AB1B5252CF82BD4F4EF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___1_right;
		bool L_1;
		L_1 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mA9CAF8F4CFD39F3FFFD040F57C0FA7EAD5508999_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&(&___0_value)->___register_0);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_1), L_0, Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_1_Equals_m96E39C24E7761FC3F454C5A26242AE329FDEFC99_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_33 = L_12;
	const Il2CppFullySharedGenericStruct L_54 = L_12;
	const Il2CppFullySharedGenericStruct L_75 = L_12;
	const Il2CppFullySharedGenericStruct L_96 = L_12;
	const Il2CppFullySharedGenericStruct L_117 = L_12;
	const Il2CppFullySharedGenericStruct L_138 = L_12;
	const Il2CppFullySharedGenericStruct L_159 = L_12;
	const Il2CppFullySharedGenericStruct L_180 = L_12;
	const Il2CppFullySharedGenericStruct L_201 = L_12;
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_35 = L_14;
	const Il2CppFullySharedGenericStruct L_56 = L_14;
	const Il2CppFullySharedGenericStruct L_77 = L_14;
	const Il2CppFullySharedGenericStruct L_98 = L_14;
	const Il2CppFullySharedGenericStruct L_119 = L_14;
	const Il2CppFullySharedGenericStruct L_140 = L_14;
	const Il2CppFullySharedGenericStruct L_161 = L_14;
	const Il2CppFullySharedGenericStruct L_182 = L_14;
	const Il2CppFullySharedGenericStruct L_203 = L_14;
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_11, (Il2CppFullySharedGenericStruct*)L_12);
		int32_t L_13 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_13, (Il2CppFullySharedGenericStruct*)L_14);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_15;
		L_15 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_12, L_14);
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_32, (Il2CppFullySharedGenericStruct*)L_33);
		int32_t L_34 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_34, (Il2CppFullySharedGenericStruct*)L_35);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_36;
		L_36 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_33, L_35);
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_53, (Il2CppFullySharedGenericStruct*)L_54);
		int32_t L_55 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_55, (Il2CppFullySharedGenericStruct*)L_56);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_57;
		L_57 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_54, L_56);
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_74, (Il2CppFullySharedGenericStruct*)L_75);
		int32_t L_76 = V_7;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_76, (Il2CppFullySharedGenericStruct*)L_77);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_78;
		L_78 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_75, L_77);
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_95, (Il2CppFullySharedGenericStruct*)L_96);
		int32_t L_97 = V_9;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_97, (Il2CppFullySharedGenericStruct*)L_98);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_99;
		L_99 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_96, L_98);
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_116, (Il2CppFullySharedGenericStruct*)L_117);
		int32_t L_118 = V_11;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_118, (Il2CppFullySharedGenericStruct*)L_119);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_120;
		L_120 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_117, L_119);
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_137, (Il2CppFullySharedGenericStruct*)L_138);
		int32_t L_139 = V_13;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_139, (Il2CppFullySharedGenericStruct*)L_140);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_141;
		L_141 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_138, L_140);
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_158, (Il2CppFullySharedGenericStruct*)L_159);
		int32_t L_160 = V_15;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_160, (Il2CppFullySharedGenericStruct*)L_161);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_162;
		L_162 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_159, L_161);
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_179, (Il2CppFullySharedGenericStruct*)L_180);
		int32_t L_181 = V_17;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_181, (Il2CppFullySharedGenericStruct*)L_182);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_183;
		L_183 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_180, L_182);
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_200, (Il2CppFullySharedGenericStruct*)L_201);
		int32_t L_202 = V_19;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_202, (Il2CppFullySharedGenericStruct*)L_203);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_204;
		L_204 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_201, L_203);
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_217.___register_0;
		uint8_t L_219 = (uint8_t)L_218.___byte_0_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_220.___register_0;
		uint8_t L_222 = (uint8_t)L_221.___byte_0_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0_0 = (uint8_t)G_B86_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_224.___register_0;
		uint8_t L_226 = (uint8_t)L_225.___byte_1_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_227.___register_0;
		uint8_t L_229 = (uint8_t)L_228.___byte_1_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1_1 = (uint8_t)G_B89_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_231.___register_0;
		uint8_t L_233 = (uint8_t)L_232.___byte_2_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_234.___register_0;
		uint8_t L_236 = (uint8_t)L_235.___byte_2_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2_2 = (uint8_t)G_B92_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_238.___register_0;
		uint8_t L_240 = (uint8_t)L_239.___byte_3_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_241.___register_0;
		uint8_t L_243 = (uint8_t)L_242.___byte_3_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3_3 = (uint8_t)G_B95_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_245.___register_0;
		uint8_t L_247 = (uint8_t)L_246.___byte_4_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_248.___register_0;
		uint8_t L_250 = (uint8_t)L_249.___byte_4_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4_4 = (uint8_t)G_B98_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_252.___register_0;
		uint8_t L_254 = (uint8_t)L_253.___byte_5_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_255.___register_0;
		uint8_t L_257 = (uint8_t)L_256.___byte_5_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5_5 = (uint8_t)G_B101_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_259.___register_0;
		uint8_t L_261 = (uint8_t)L_260.___byte_6_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_262.___register_0;
		uint8_t L_264 = (uint8_t)L_263.___byte_6_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6_6 = (uint8_t)G_B104_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_266.___register_0;
		uint8_t L_268 = (uint8_t)L_267.___byte_7_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_269.___register_0;
		uint8_t L_271 = (uint8_t)L_270.___byte_7_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7_7 = (uint8_t)G_B107_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_273.___register_0;
		uint8_t L_275 = (uint8_t)L_274.___byte_8_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_276.___register_0;
		uint8_t L_278 = (uint8_t)L_277.___byte_8_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8_8 = (uint8_t)G_B110_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_280.___register_0;
		uint8_t L_282 = (uint8_t)L_281.___byte_9_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_283.___register_0;
		uint8_t L_285 = (uint8_t)L_284.___byte_9_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9_9 = (uint8_t)G_B113_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_287.___register_0;
		uint8_t L_289 = (uint8_t)L_288.___byte_10_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_290.___register_0;
		uint8_t L_292 = (uint8_t)L_291.___byte_10_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10_10 = (uint8_t)G_B116_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_294.___register_0;
		uint8_t L_296 = (uint8_t)L_295.___byte_11_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_297.___register_0;
		uint8_t L_299 = (uint8_t)L_298.___byte_11_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11_11 = (uint8_t)G_B119_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_301.___register_0;
		uint8_t L_303 = (uint8_t)L_302.___byte_12_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_304.___register_0;
		uint8_t L_306 = (uint8_t)L_305.___byte_12_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12_12 = (uint8_t)G_B122_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_308.___register_0;
		uint8_t L_310 = (uint8_t)L_309.___byte_13_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_311.___register_0;
		uint8_t L_313 = (uint8_t)L_312.___byte_13_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13_13 = (uint8_t)G_B125_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_315.___register_0;
		uint8_t L_317 = (uint8_t)L_316.___byte_14_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_318.___register_0;
		uint8_t L_320 = (uint8_t)L_319.___byte_14_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14_14 = (uint8_t)G_B128_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_322.___register_0;
		uint8_t L_324 = (uint8_t)L_323.___byte_15_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_325.___register_0;
		uint8_t L_327 = (uint8_t)L_326.___byte_15_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15_15 = (uint8_t)G_B131_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_335.___register_0;
		int8_t L_337 = (int8_t)L_336.___sbyte_0_16;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_338.___register_0;
		int8_t L_340 = (int8_t)L_339.___sbyte_0_16;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0_16 = (int8_t)G_B136_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_342.___register_0;
		int8_t L_344 = (int8_t)L_343.___sbyte_1_17;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_345.___register_0;
		int8_t L_347 = (int8_t)L_346.___sbyte_1_17;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1_17 = (int8_t)G_B139_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_349.___register_0;
		int8_t L_351 = (int8_t)L_350.___sbyte_2_18;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_352.___register_0;
		int8_t L_354 = (int8_t)L_353.___sbyte_2_18;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2_18 = (int8_t)G_B142_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_356.___register_0;
		int8_t L_358 = (int8_t)L_357.___sbyte_3_19;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_359.___register_0;
		int8_t L_361 = (int8_t)L_360.___sbyte_3_19;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3_19 = (int8_t)G_B145_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_363.___register_0;
		int8_t L_365 = (int8_t)L_364.___sbyte_4_20;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_366.___register_0;
		int8_t L_368 = (int8_t)L_367.___sbyte_4_20;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4_20 = (int8_t)G_B148_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_370.___register_0;
		int8_t L_372 = (int8_t)L_371.___sbyte_5_21;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_373.___register_0;
		int8_t L_375 = (int8_t)L_374.___sbyte_5_21;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5_21 = (int8_t)G_B151_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_377.___register_0;
		int8_t L_379 = (int8_t)L_378.___sbyte_6_22;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_380.___register_0;
		int8_t L_382 = (int8_t)L_381.___sbyte_6_22;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6_22 = (int8_t)G_B154_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_384.___register_0;
		int8_t L_386 = (int8_t)L_385.___sbyte_7_23;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_387.___register_0;
		int8_t L_389 = (int8_t)L_388.___sbyte_7_23;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7_23 = (int8_t)G_B157_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_391.___register_0;
		int8_t L_393 = (int8_t)L_392.___sbyte_8_24;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_394.___register_0;
		int8_t L_396 = (int8_t)L_395.___sbyte_8_24;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8_24 = (int8_t)G_B160_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_398.___register_0;
		int8_t L_400 = (int8_t)L_399.___sbyte_9_25;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_401.___register_0;
		int8_t L_403 = (int8_t)L_402.___sbyte_9_25;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9_25 = (int8_t)G_B163_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_405.___register_0;
		int8_t L_407 = (int8_t)L_406.___sbyte_10_26;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_408.___register_0;
		int8_t L_410 = (int8_t)L_409.___sbyte_10_26;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10_26 = (int8_t)G_B166_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_412.___register_0;
		int8_t L_414 = (int8_t)L_413.___sbyte_11_27;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_415.___register_0;
		int8_t L_417 = (int8_t)L_416.___sbyte_11_27;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11_27 = (int8_t)G_B169_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_419.___register_0;
		int8_t L_421 = (int8_t)L_420.___sbyte_12_28;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_422.___register_0;
		int8_t L_424 = (int8_t)L_423.___sbyte_12_28;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12_28 = (int8_t)G_B172_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_426.___register_0;
		int8_t L_428 = (int8_t)L_427.___sbyte_13_29;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_429.___register_0;
		int8_t L_431 = (int8_t)L_430.___sbyte_13_29;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13_29 = (int8_t)G_B175_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_433.___register_0;
		int8_t L_435 = (int8_t)L_434.___sbyte_14_30;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_436.___register_0;
		int8_t L_438 = (int8_t)L_437.___sbyte_14_30;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14_30 = (int8_t)G_B178_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_440.___register_0;
		int8_t L_442 = (int8_t)L_441.___sbyte_15_31;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_443.___register_0;
		int8_t L_445 = (int8_t)L_444.___sbyte_15_31;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15_31 = (int8_t)G_B181_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_453.___register_0;
		uint16_t L_455 = (uint16_t)L_454.___uint16_0_32;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_456.___register_0;
		uint16_t L_458 = (uint16_t)L_457.___uint16_0_32;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0_32 = (uint16_t)G_B186_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_460.___register_0;
		uint16_t L_462 = (uint16_t)L_461.___uint16_1_33;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_463.___register_0;
		uint16_t L_465 = (uint16_t)L_464.___uint16_1_33;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1_33 = (uint16_t)G_B189_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_467.___register_0;
		uint16_t L_469 = (uint16_t)L_468.___uint16_2_34;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_470.___register_0;
		uint16_t L_472 = (uint16_t)L_471.___uint16_2_34;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2_34 = (uint16_t)G_B192_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_474.___register_0;
		uint16_t L_476 = (uint16_t)L_475.___uint16_3_35;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_477.___register_0;
		uint16_t L_479 = (uint16_t)L_478.___uint16_3_35;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3_35 = (uint16_t)G_B195_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_481.___register_0;
		uint16_t L_483 = (uint16_t)L_482.___uint16_4_36;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_484.___register_0;
		uint16_t L_486 = (uint16_t)L_485.___uint16_4_36;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4_36 = (uint16_t)G_B198_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_488.___register_0;
		uint16_t L_490 = (uint16_t)L_489.___uint16_5_37;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_491.___register_0;
		uint16_t L_493 = (uint16_t)L_492.___uint16_5_37;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5_37 = (uint16_t)G_B201_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_495.___register_0;
		uint16_t L_497 = (uint16_t)L_496.___uint16_6_38;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_498.___register_0;
		uint16_t L_500 = (uint16_t)L_499.___uint16_6_38;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6_38 = (uint16_t)G_B204_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_502.___register_0;
		uint16_t L_504 = (uint16_t)L_503.___uint16_7_39;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_505.___register_0;
		uint16_t L_507 = (uint16_t)L_506.___uint16_7_39;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7_39 = (uint16_t)G_B207_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_515.___register_0;
		int16_t L_517 = (int16_t)L_516.___int16_0_40;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_518.___register_0;
		int16_t L_520 = (int16_t)L_519.___int16_0_40;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0_40 = (int16_t)G_B212_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_522.___register_0;
		int16_t L_524 = (int16_t)L_523.___int16_1_41;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_525.___register_0;
		int16_t L_527 = (int16_t)L_526.___int16_1_41;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1_41 = (int16_t)G_B215_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_529.___register_0;
		int16_t L_531 = (int16_t)L_530.___int16_2_42;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_532.___register_0;
		int16_t L_534 = (int16_t)L_533.___int16_2_42;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2_42 = (int16_t)G_B218_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_536.___register_0;
		int16_t L_538 = (int16_t)L_537.___int16_3_43;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_539.___register_0;
		int16_t L_541 = (int16_t)L_540.___int16_3_43;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3_43 = (int16_t)G_B221_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_543.___register_0;
		int16_t L_545 = (int16_t)L_544.___int16_4_44;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_546.___register_0;
		int16_t L_548 = (int16_t)L_547.___int16_4_44;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4_44 = (int16_t)G_B224_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_550.___register_0;
		int16_t L_552 = (int16_t)L_551.___int16_5_45;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_553.___register_0;
		int16_t L_555 = (int16_t)L_554.___int16_5_45;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5_45 = (int16_t)G_B227_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_557.___register_0;
		int16_t L_559 = (int16_t)L_558.___int16_6_46;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_560.___register_0;
		int16_t L_562 = (int16_t)L_561.___int16_6_46;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6_46 = (int16_t)G_B230_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_564.___register_0;
		int16_t L_566 = (int16_t)L_565.___int16_7_47;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_567.___register_0;
		int16_t L_569 = (int16_t)L_568.___int16_7_47;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7_47 = (int16_t)G_B233_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_577.___register_0;
		uint32_t L_579 = (uint32_t)L_578.___uint32_0_48;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_580.___register_0;
		uint32_t L_582 = (uint32_t)L_581.___uint32_0_48;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0_48 = G_B238_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_584.___register_0;
		uint32_t L_586 = (uint32_t)L_585.___uint32_1_49;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_587.___register_0;
		uint32_t L_589 = (uint32_t)L_588.___uint32_1_49;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1_49 = G_B241_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_591.___register_0;
		uint32_t L_593 = (uint32_t)L_592.___uint32_2_50;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_594.___register_0;
		uint32_t L_596 = (uint32_t)L_595.___uint32_2_50;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2_50 = G_B244_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_598.___register_0;
		uint32_t L_600 = (uint32_t)L_599.___uint32_3_51;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_601.___register_0;
		uint32_t L_603 = (uint32_t)L_602.___uint32_3_51;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3_51 = G_B247_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_611.___register_0;
		int32_t L_613 = (int32_t)L_612.___int32_0_52;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_614.___register_0;
		int32_t L_616 = (int32_t)L_615.___int32_0_52;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0_52 = G_B252_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_618.___register_0;
		int32_t L_620 = (int32_t)L_619.___int32_1_53;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_621.___register_0;
		int32_t L_623 = (int32_t)L_622.___int32_1_53;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1_53 = G_B255_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_625.___register_0;
		int32_t L_627 = (int32_t)L_626.___int32_2_54;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_628.___register_0;
		int32_t L_630 = (int32_t)L_629.___int32_2_54;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2_54 = G_B258_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_632.___register_0;
		int32_t L_634 = (int32_t)L_633.___int32_3_55;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_635.___register_0;
		int32_t L_637 = (int32_t)L_636.___int32_3_55;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3_55 = G_B261_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_645.___register_0;
		uint64_t L_647 = (uint64_t)L_646.___uint64_0_56;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_648.___register_0;
		uint64_t L_650 = (uint64_t)L_649.___uint64_0_56;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0_56 = G_B266_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_652.___register_0;
		uint64_t L_654 = (uint64_t)L_653.___uint64_1_57;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_655.___register_0;
		uint64_t L_657 = (uint64_t)L_656.___uint64_1_57;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1_57 = G_B269_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_665.___register_0;
		int64_t L_667 = (int64_t)L_666.___int64_0_58;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_668.___register_0;
		int64_t L_670 = (int64_t)L_669.___int64_0_58;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0_58 = G_B274_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_672.___register_0;
		int64_t L_674 = (int64_t)L_673.___int64_1_59;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_675.___register_0;
		int64_t L_677 = (int64_t)L_676.___int64_1_59;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1_59 = G_B277_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_685.___register_0;
		float L_687 = (float)L_686.___single_0_60;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_688.___register_0;
		float L_690 = (float)L_689.___single_0_60;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0_60 = G_B282_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_692.___register_0;
		float L_694 = (float)L_693.___single_1_61;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_695.___register_0;
		float L_697 = (float)L_696.___single_1_61;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1_61 = G_B285_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_699.___register_0;
		float L_701 = (float)L_700.___single_2_62;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_702.___register_0;
		float L_704 = (float)L_703.___single_2_62;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2_62 = G_B288_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_706.___register_0;
		float L_708 = (float)L_707.___single_3_63;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_709.___register_0;
		float L_711 = (float)L_710.___single_3_63;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3_63 = G_B291_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_719.___register_0;
		double L_721 = (double)L_720.___double_0_64;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_722.___register_0;
		double L_724 = (double)L_723.___double_0_64;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0_64 = G_B296_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_726.___register_0;
		double L_728 = (double)L_727.___double_1_65;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A)L_729.___register_0;
		double L_731 = (double)L_730.___double_1_65;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1_65 = G_B299_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_mD34044F5519631ED7AA89E35525ABFFA300D7895_gshared (Il2CppFullySharedGenericStruct ___0_left, Il2CppFullySharedGenericStruct ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_14 = L_5;
	const Il2CppFullySharedGenericStruct L_23 = L_5;
	const Il2CppFullySharedGenericStruct L_32 = L_5;
	const Il2CppFullySharedGenericStruct L_41 = L_5;
	const Il2CppFullySharedGenericStruct L_50 = L_5;
	const Il2CppFullySharedGenericStruct L_59 = L_5;
	const Il2CppFullySharedGenericStruct L_68 = L_5;
	const Il2CppFullySharedGenericStruct L_77 = L_5;
	const Il2CppFullySharedGenericStruct L_86 = L_5;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_16 = L_7;
	const Il2CppFullySharedGenericStruct L_25 = L_7;
	const Il2CppFullySharedGenericStruct L_34 = L_7;
	const Il2CppFullySharedGenericStruct L_43 = L_7;
	const Il2CppFullySharedGenericStruct L_52 = L_7;
	const Il2CppFullySharedGenericStruct L_61 = L_7;
	const Il2CppFullySharedGenericStruct L_70 = L_7;
	const Il2CppFullySharedGenericStruct L_79 = L_7;
	const Il2CppFullySharedGenericStruct L_88 = L_7;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		il2cpp_codegen_memcpy(L_7, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_7);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_6, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_8, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_memcpy(L_14, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_14);
		il2cpp_codegen_memcpy(L_16, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_16);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_15, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_17, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23);
		il2cpp_codegen_memcpy(L_25, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_25);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_26, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00d0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_32, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_32);
		il2cpp_codegen_memcpy(L_34, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_34);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_33, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_35, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_0104;
		}
	}
	{
		il2cpp_codegen_memcpy(L_41, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		il2cpp_codegen_memcpy(L_43, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_43);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_42, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_44, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0138;
		}
	}
	{
		il2cpp_codegen_memcpy(L_50, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_50);
		il2cpp_codegen_memcpy(L_52, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_53 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_52);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_51, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_53, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		bool L_58;
		L_58 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_55, L_57, NULL);
		if (!L_58)
		{
			goto IL_016c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_59, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_60 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_59);
		il2cpp_codegen_memcpy(L_61, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_61);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_60, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_62, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_68, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_68);
		il2cpp_codegen_memcpy(L_70, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_70);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_69, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_71, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01d4;
		}
	}
	{
		il2cpp_codegen_memcpy(L_77, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_78 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_77);
		il2cpp_codegen_memcpy(L_79, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_79);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_78, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_80, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_0208;
		}
	}
	{
		il2cpp_codegen_memcpy(L_86, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_86);
		il2cpp_codegen_memcpy(L_88, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_89 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_88);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_87, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_89, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_90 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_90, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_GetOneValue_mE737616FA904E2C6558D22FEA78098714972060A_gshared (Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ((uint8_t)1);
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0027:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int8_t L_12 = ((int8_t)1);
		RuntimeObject* L_13 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_13, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_004e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		uint16_t L_19 = ((uint16_t)1);
		RuntimeObject* L_20 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_19);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_20, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0075:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		int16_t L_26 = ((int16_t)1);
		RuntimeObject* L_27 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_26);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_33 = ((uint32_t)1);
		RuntimeObject* L_34 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_34, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00c3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = 1;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_41, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ea:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0112;
		}
	}
	{
		uint64_t L_47 = ((uint64_t)((int64_t)1));
		RuntimeObject* L_48 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_47);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_48, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		int64_t L_54 = ((int64_t)1);
		RuntimeObject* L_55 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_013a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		float L_61 = (1.0f);
		RuntimeObject* L_62 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_61);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_62, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0194;
		}
	}
	{
		double L_68 = (1.0);
		RuntimeObject* L_69 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_68);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_69, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0194:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_70 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_GetAllBitsSetValue_mB4736B3DE9ED10228E2F1991D497A98C9FE3E67B_gshared (Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		uint8_t L_5;
		L_5 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_002b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int8_t L_13;
		L_13 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		uint16_t L_21;
		L_21 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		uint16_t L_22 = L_21;
		RuntimeObject* L_23 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		int16_t L_29;
		L_29 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		int16_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ac:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t L_37;
		L_37 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		uint32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_38);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00d7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_45;
		L_45 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_47, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0102:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_012d;
		}
	}
	{
		uint64_t L_53;
		L_53 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		uint64_t L_54 = L_53;
		RuntimeObject* L_55 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		int64_t L_61;
		L_61 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		int64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_62);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_63, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0158:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_0183;
		}
	}
	{
		float L_69;
		L_69 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_70);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_71, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0183:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01ae;
		}
	}
	{
		double L_77;
		L_77 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_78);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01ae:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_80 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m5C2E6DBA5BAABD495E2C5E516B928C78DB2A7615_gshared (const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count_1 = L_0;
		il2cpp_codegen_initobj((&((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero_2), sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), NULL, (Il2CppFullySharedGenericStruct*)L_1);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2((&L_3), il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_one_3 = L_3;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (Il2CppFullySharedGenericStruct*)L_4);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2((&L_6), il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_allOnes_4 = L_6;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBufferConfig_1_get_vertexCount_m058686D5A9587EE4DD0D2F639B6F1116943AC589_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_0 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m6492C57B05D6B9FFD26772B944B2A6BEF6015483(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_3 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		V_1 = L_4;
		goto IL_0023;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1__ctor_mF968A5FAF0E387406CB2040674CB7B6EB27CA5A9_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferConfigBase__ctor_m09E6413C4CD08D36B052A541ECCB5440929CC119((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfig_1_ScheduleVertexJobs_mC0C6DB9F9C105CE277CF04643F4471B6E6567F69_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, RuntimeObject* ___0_buffers, int32_t ___1_positionAccessorIndex, int32_t ___2_normalAccessorIndex, int32_t ___3_tangentAccessorIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_uvAccessorIndices, int32_t ___5_colorAccessorIndex, int32_t ___6_weightsAccessorIndex, int32_t ___7_jointsAccessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		s_Il2CppMethodInitialized = true;
	}
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	void* V_22 = NULL;
	void* V_23 = NULL;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	bool V_29 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_30 = NULL;
	void* V_31 = NULL;
	int32_t V_32 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_37 = NULL;
	void* V_38 = NULL;
	int32_t V_39 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_40;
	memset((&V_40), 0, sizeof(V_40));
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_46;
	memset((&V_46), 0, sizeof(V_46));
	bool V_47 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* G_B26_0 = NULL;
	VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* G_B27_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	{
		RuntimeObject* L_0 = ___0_buffers;
		int32_t L_1 = ___1_positionAccessorIndex;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_0, L_1, (&V_0), (&V_1), (&V_2));
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___count_4;
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_mBA83AAC5DEEF6A424E816BC22A562F9F16331060((&L_4), L_3, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___vData_6 = L_4;
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 L_5 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32)__this->___vData_6;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_m330509F7AC793C43640F0649AC22729C08D9A935(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_3 = (uint8_t*)L_6;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_8;
		L_8 = Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C(L_7, NULL);
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_8, NULL);
		V_4 = 1;
		V_5 = ((int32_t)12);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->___bufferView_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B3_0 = 0;
	}

IL_0075:
	{
		V_9 = (bool)G_B3_0;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0083:
	{
		int32_t L_15 = ___2_normalAccessorIndex;
		V_10 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		__this->___hasNormals_7 = (bool)1;
	}

IL_009f:
	{
		bool L_18 = (bool)__this->___hasNormals_7;
		bool L_19 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateNormals_1;
		__this->___hasNormals_7 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_19));
		bool L_20 = (bool)__this->___hasNormals_7;
		V_11 = L_20;
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12)));
	}

IL_00c7:
	{
		int32_t L_23 = ___3_tangentAccessorIndex;
		V_12 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		__this->___hasTangents_8 = (bool)1;
	}

IL_00e4:
	{
		bool L_26 = (bool)__this->___hasTangents_8;
		bool L_27 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateTangents_2;
		__this->___hasTangents_8 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_27));
		bool L_28 = (bool)__this->___hasTangents_8;
		V_13 = L_28;
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)16)));
	}

IL_010c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___4_uvAccessorIndices;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___4_uvAccessorIndices;
		NullCheck(L_32);
		G_B16_0 = ((!(((uint32_t)(((RuntimeArray*)L_32)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B16_0 = 0;
	}

IL_0119:
	{
		V_14 = (bool)G_B16_0;
		bool L_33 = V_14;
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___4_uvAccessorIndices;
		NullCheck(L_34);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) < ((int32_t)3))? 1 : 0), NULL);
		int32_t L_35 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___4_uvAccessorIndices;
		NullCheck(L_36);
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)(((RuntimeArray*)L_36)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___4_uvAccessorIndices;
		NullCheck(L_37);
		V_16 = ((int32_t)(((RuntimeArray*)L_37)->max_length));
		int32_t L_38 = V_16;
		V_15 = L_38;
		int32_t L_39 = V_15;
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_0147;
		}
	}
	{
		goto IL_015a;
	}

IL_0147:
	{
		RuntimeObject* L_40 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* L_41 = (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC(L_41, L_40, VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41);
		goto IL_016d;
	}

IL_015a:
	{
		RuntimeObject* L_42 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* L_43 = (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318(L_43, L_42, VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43);
		goto IL_016d;
	}

IL_016d:
	{
	}

IL_016e:
	{
		int32_t L_44 = ___5_colorAccessorIndex;
		__this->___hasColors_9 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = (bool)__this->___hasColors_9;
		V_17 = L_45;
		bool L_46 = V_17;
		if (!L_46)
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_48 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)il2cpp_codegen_object_new(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		VertexBufferColors__ctor_mDCA2FC9507D3CFCFA4A4E5E24422B1C0E8480A6F(L_48, NULL);
		__this->___colors_12 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colors_12), (void*)L_48);
	}

IL_019b:
	{
		int32_t L_49 = ___6_weightsAccessorIndex;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			G_B26_0 = __this;
			goto IL_01ab;
		}
		G_B25_0 = __this;
	}
	{
		int32_t L_50 = ___7_jointsAccessorIndex;
		G_B27_0 = ((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B27_1 = G_B25_0;
		goto IL_01ac;
	}

IL_01ab:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
	}

IL_01ac:
	{
		NullCheck(G_B27_1);
		G_B27_1->___hasBones_10 = (bool)G_B27_0;
		bool L_51 = (bool)__this->___hasBones_10;
		V_18 = L_51;
		bool L_52 = V_18;
		if (!L_52)
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		RuntimeObject* L_54 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)il2cpp_codegen_object_new(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		VertexBufferBones__ctor_mC2CA055DC14EEE85FAE3CCC8C58D7BB1D7FFC1E0(L_55, L_54, NULL);
		__this->___bones_13 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_13), (void*)L_55);
	}

IL_01d6:
	{
		int32_t L_56 = V_4;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_6), L_56, (int32_t)4, (int32_t)1, NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		V_7 = 0;
		il2cpp_codegen_initobj((&V_19), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = (int32_t)L_57->___bufferView_0;
		V_20 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_20;
		if (!L_59)
		{
			goto IL_0220;
		}
	}
	{
		void* L_60 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)L_61->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->___componentType_2;
		int32_t L_65 = V_2;
		uint8_t* L_66 = V_3;
		int32_t L_67 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (bool)L_68->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_70;
		L_70 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_60, L_62, L_64, L_65, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_66, L_67, L_69, (bool)0, NULL);
		V_19 = L_70;
	}

IL_0220:
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_71 = V_0;
		NullCheck(L_71);
		bool L_72;
		L_72 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_71, NULL);
		V_21 = L_72;
		bool L_73 = V_21;
		if (!L_73)
		{
			goto IL_02d0;
		}
	}
	{
		RuntimeObject* L_74 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_75 = V_0;
		NullCheck(L_75);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_76 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_75->___sparse_9;
		NullCheck(L_76);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_77 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_76->___indices_1;
		NullCheck(L_74);
		InterfaceActionInvoker2< AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*, void** >::Invoke(1, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_74, L_77, (&V_22));
		RuntimeObject* L_78 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_79 = V_0;
		NullCheck(L_79);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_80 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_79->___sparse_9;
		NullCheck(L_80);
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_81 = (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*)L_80->___values_2;
		NullCheck(L_78);
		InterfaceActionInvoker2< AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*, void** >::Invoke(2, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_78, L_81, (&V_23));
		void* L_82 = V_22;
		void* L_83 = V_23;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_84 = V_0;
		NullCheck(L_84);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_85 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_84->___sparse_9;
		NullCheck(L_85);
		int32_t L_86 = (int32_t)L_85->___count_0;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_87 = V_0;
		NullCheck(L_87);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_88 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_87->___sparse_9;
		NullCheck(L_88);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_89 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_88->___indices_1;
		NullCheck(L_89);
		int32_t L_90 = (int32_t)L_89->___componentType_2;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)L_91->___componentType_2;
		uint8_t* L_93 = V_3;
		int32_t L_94 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_95 = V_0;
		NullCheck(L_95);
		bool L_96 = (bool)L_95->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_97;
		L_97 = VertexBufferConfigBase_GetVector3sSparseJob_mDF16E5265365EF4520F3C167F0C35223BAF18D78(L_82, L_83, L_86, L_90, L_92, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_93, L_94, (&V_19), L_96, NULL);
		V_24 = L_97;
		bool L_98;
		L_98 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_24), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_25 = L_98;
		bool L_99 = V_25;
		if (!L_99)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_100 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101;
		L_101 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_24), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_100, (L_101));
		int32_t L_102 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		goto IL_02cf;
	}

IL_02b7:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_103 = V_26;
		V_27 = L_103;
		goto IL_056e;
	}

IL_02cf:
	{
	}

IL_02d0:
	{
		bool L_104;
		L_104 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_19), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_28 = L_104;
		bool L_105 = V_28;
		if (!L_105)
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_106 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_107;
		L_107 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_19), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_106, (L_107));
		int32_t L_108 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		goto IL_0310;
	}

IL_02f8:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_109 = V_26;
		V_27 = L_109;
		goto IL_056e;
	}

IL_0310:
	{
		int32_t L_110 = ___2_normalAccessorIndex;
		V_29 = (bool)((((int32_t)((((int32_t)L_110) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_29;
		if (!L_111)
		{
			goto IL_03c3;
		}
	}
	{
		RuntimeObject* L_112 = ___0_buffers;
		int32_t L_113 = ___2_normalAccessorIndex;
		NullCheck(L_112);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_112, L_113, (&V_30), (&V_31), (&V_32));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_114 = V_30;
		NullCheck(L_114);
		bool L_115;
		L_115 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_114, NULL);
		V_34 = L_115;
		bool L_116 = V_34;
		if (!L_116)
		{
			goto IL_035b;
		}
	}
	{
		RuntimeObject* L_117 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_117, (uint32_t)((int32_t)42), L_119);
	}

IL_035b:
	{
		void* L_120 = V_31;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_121 = V_30;
		NullCheck(L_121);
		int32_t L_122 = (int32_t)L_121->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_123 = V_30;
		NullCheck(L_123);
		int32_t L_124 = (int32_t)L_123->___componentType_2;
		int32_t L_125 = V_32;
		uint8_t* L_126 = V_3;
		int32_t L_127 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_128 = V_30;
		NullCheck(L_128);
		bool L_129 = (bool)L_128->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_130;
		L_130 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_120, L_122, L_124, L_125, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, ((int32_t)12))), L_127, L_129, (bool)1, NULL);
		V_33 = L_130;
		bool L_131;
		L_131 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_33), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_35 = L_131;
		bool L_132 = V_35;
		if (!L_132)
		{
			goto IL_03aa;
		}
	}
	{
		int32_t L_133 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_134;
		L_134 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_33), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_133, (L_134));
		int32_t L_135 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		goto IL_03c2;
	}

IL_03aa:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_136 = V_26;
		V_27 = L_136;
		goto IL_056e;
	}

IL_03c2:
	{
	}

IL_03c3:
	{
		int32_t L_137 = ___3_tangentAccessorIndex;
		V_36 = (bool)((((int32_t)((((int32_t)L_137) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_36;
		if (!L_138)
		{
			goto IL_0477;
		}
	}
	{
		RuntimeObject* L_139 = ___0_buffers;
		int32_t L_140 = ___3_tangentAccessorIndex;
		NullCheck(L_139);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_139, L_140, (&V_37), (&V_38), (&V_39));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_141 = V_37;
		NullCheck(L_141);
		bool L_142;
		L_142 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_141, NULL);
		V_41 = L_142;
		bool L_143 = V_41;
		if (!L_143)
		{
			goto IL_040f;
		}
	}
	{
		RuntimeObject* L_144 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = L_145;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_144, (uint32_t)((int32_t)42), L_146);
	}

IL_040f:
	{
		void* L_147 = V_38;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_148 = V_37;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)L_148->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_150 = V_37;
		NullCheck(L_150);
		int32_t L_151 = (int32_t)L_150->___componentType_2;
		int32_t L_152 = V_39;
		uint8_t* L_153 = V_3;
		int32_t L_154 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_155 = V_37;
		NullCheck(L_155);
		bool L_156 = (bool)L_155->___normalized_3;
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_157;
		L_157 = VertexBufferConfigBase_GetTangentsJob_mD6D5629F125A4D942E2336750E6FA84B284D09CC((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_147, L_149, L_151, L_152, (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_153, ((int32_t)24))), L_154, L_156, NULL);
		V_40 = L_157;
		bool L_158;
		L_158 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_40), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_42 = L_158;
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_045e;
		}
	}
	{
		int32_t L_160 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_161;
		L_161 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_40), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_160, (L_161));
		int32_t L_162 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		goto IL_0476;
	}

IL_045e:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_163 = V_26;
		V_27 = L_163;
		goto IL_056e;
	}

IL_0476:
	{
	}

IL_0477:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_164 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_43 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_164) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_165 = V_43;
		if (!L_165)
		{
			goto IL_04b3;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_166 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		RuntimeObject* L_167 = ___0_buffers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ___4_uvAccessorIndices;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = (int32_t)L_169->___count_4;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_171 = V_6;
		int32_t L_172 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___4_uvAccessorIndices;
		NullCheck(L_173);
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_174;
		memset((&L_174), 0, sizeof(L_174));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_174), L_171, L_172, ((int32_t)(((RuntimeArray*)L_173)->max_length)), NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck(L_166);
		bool L_175;
		L_175 = VirtualFuncInvoker4< bool, RuntimeObject*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, L_166, L_167, L_168, L_170, L_174);
		int32_t L_176 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ___4_uvAccessorIndices;
		NullCheck(L_177);
		V_7 = ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(((RuntimeArray*)L_177)->max_length))));
	}

IL_04b3:
	{
		bool L_178 = (bool)__this->___hasColors_9;
		V_44 = L_178;
		bool L_179 = V_44;
		if (!L_179)
		{
			goto IL_04e0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_180 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		RuntimeObject* L_181 = ___0_buffers;
		int32_t L_182 = ___5_colorAccessorIndex;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_183 = V_6;
		int32_t L_184 = V_7;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_185;
		memset((&L_185), 0, sizeof(L_185));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_185), L_183, L_184, 1, NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180);
		bool L_186;
		L_186 = VirtualFuncInvoker3< bool, RuntimeObject*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180, L_181, L_182, L_185);
		int32_t L_187 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_04e0:
	{
		bool L_188 = (bool)__this->___hasBones_10;
		V_45 = L_188;
		bool L_189 = V_45;
		if (!L_189)
		{
			goto IL_053d;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_190 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		RuntimeObject* L_191 = ___0_buffers;
		int32_t L_192 = ___6_weightsAccessorIndex;
		int32_t L_193 = ___7_jointsAccessorIndex;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_194;
		L_194 = VirtualFuncInvoker3< Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489, RuntimeObject*, int32_t, int32_t >::Invoke(4, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190, L_191, L_192, L_193);
		V_46 = L_194;
		bool L_195;
		L_195 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_46), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_47 = L_195;
		bool L_196 = V_47;
		if (!L_196)
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_197 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_198;
		L_198 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_46), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_197, (L_198));
		int32_t L_199 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		goto IL_053c;
	}

IL_0527:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_200 = V_26;
		V_27 = L_200;
		goto IL_056e;
	}

IL_053c:
	{
	}

IL_053d:
	{
		int32_t L_201 = V_4;
		if ((((int32_t)L_201) > ((int32_t)1)))
		{
			goto IL_054c;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_202;
		L_202 = IL2CPP_NATIVEARRAY_GET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, 0);
		G_B65_0 = L_202;
		goto IL_0553;
	}

IL_054c:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_203 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_204;
		L_204 = JobHandle_CombineDependencies_m5B482F42E4C9CAC22FF24C1BF76F3AFB870DBB3E(L_203, NULL);
		G_B65_0 = L_204;
	}

IL_0553:
	{
		V_8 = G_B65_0;
		NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A((&V_6), NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_205 = V_8;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_206;
		memset((&L_206), 0, sizeof(L_206));
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&L_206), L_205, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		V_27 = L_206;
		goto IL_056e;
	}

IL_056e:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_207 = V_27;
		return L_207;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m3E9F8FDDFC03690F85E723E3E679D211AE23D365_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_0 = 1;
		bool L_0 = (bool)__this->___hasNormals_7;
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		bool L_3 = (bool)__this->___hasTangents_8;
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_6 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_5 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_0;
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
	}

IL_003e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_11 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_6 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_14 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_7 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0064:
	{
		int32_t L_17 = V_0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_18 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var, (uint32_t)L_17);
		((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3), (void*)L_18);
		V_1 = 0;
		V_2 = 0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_19 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_22;
		memset((&L_22), 0, sizeof(L_22));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_22), (int32_t)0, (int32_t)0, 3, L_21, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		bool L_24 = (bool)__this->___hasNormals_7;
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_26 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_29;
		memset((&L_29), 0, sizeof(L_29));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_29), (int32_t)1, (int32_t)0, 3, L_28, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_29);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b4:
	{
		bool L_31 = (bool)__this->___hasTangents_8;
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00db;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_33 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36;
		memset((&L_36), 0, sizeof(L_36));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_36), (int32_t)2, (int32_t)0, 4, L_35, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00db:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_39 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_10 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_010c;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_41 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_42 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41, L_42, L_43, L_44);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010c:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_47 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_11 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0136;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_49 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_50 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t*, int32_t >::Invoke(5, L_49, L_50, (&V_1), L_51);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_53 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_12 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_12;
		if (!L_54)
		{
			goto IL_0163;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_56 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55, L_56, L_57, L_58);
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 2));
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0163:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_ApplyOnMesh_mDE4E8BC17B25E2A53FD917702A9E098414AF29E9_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A, NULL);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		V_1 = (bool)((((RuntimeObject*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		VertexBufferConfig_1_CreateDescriptors_m3E9F8FDDFC03690F85E723E3E679D211AE23D365(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0022:
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_msh;
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_3 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_5 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		NullCheck(L_2);
		Mesh_SetVertexBufferParams_m8033EB85082C142DCE8B69FFBAD26D7DFB0330B2(L_2, L_4, L_5, NULL);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981, NULL);
		V_0 = 0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_msh;
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32 L_7 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32)__this->___vData_6;
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_8 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_8)->___m_Length_1);
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_flags;
		NullCheck(L_6);
		Mesh_SetVertexBufferData_TisVPos_t60F9F86213E6426227874FBBA41EF5551B920A72_mDB8D148A0EF2CE914022B139EDC228BC42BA980D(L_6, L_7, 0, 0, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_13 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_15 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___0_msh;
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_flags;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15, L_16, L_17, L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00a0:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_20 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_22 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = ___0_msh;
		int32_t L_24 = V_0;
		int32_t L_25 = ___1_flags;
		NullCheck(L_22);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, L_22, L_23, L_24, L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c2:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_27 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_4 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_29 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = ___0_msh;
		int32_t L_31 = V_0;
		int32_t L_32 = ___1_flags;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29, L_30, L_31, L_32);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e6:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_Dispose_m72B49A87C96A7733BA9DD1124134A6A59020BC06_gshared (VertexBufferConfig_1_t47AC6CC28078D3A074C3C96C3278C6F084E8C2B2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_0 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m6492C57B05D6B9FFD26772B944B2A6BEF6015483(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32* L_3 = (NativeArray_1_tD408100FF3EF35A33487FCC54E51BA9B32EE3C32*)(&__this->___vData_6);
		NativeArray_1_Dispose_m6BDF1E860A988B4B255D8FDF639C0C4D8B2FA788(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_4 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_1 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_6 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
		VirtualActionInvoker0::Invoke(7, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
	}

IL_0039:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_7 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7, L_9);
	}

IL_0054:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_10 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_12 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
		VirtualActionInvoker0::Invoke(7, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
	}

IL_006f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBufferConfig_1_get_vertexCount_m814F2D887C262ECA7266860274488DB7E4DDAC43_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_0 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF889FB0A50008701DFF815D51811D6C2FA88D506(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_3 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		V_1 = L_4;
		goto IL_0023;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1__ctor_mB24BCADD64E9819A345A5F373A9DC003ED3641E0_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferConfigBase__ctor_m09E6413C4CD08D36B052A541ECCB5440929CC119((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfig_1_ScheduleVertexJobs_m38DC09A64775C9AB3DE7D653BE3BCDCFB966660F_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, RuntimeObject* ___0_buffers, int32_t ___1_positionAccessorIndex, int32_t ___2_normalAccessorIndex, int32_t ___3_tangentAccessorIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_uvAccessorIndices, int32_t ___5_colorAccessorIndex, int32_t ___6_weightsAccessorIndex, int32_t ___7_jointsAccessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		s_Il2CppMethodInitialized = true;
	}
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	void* V_22 = NULL;
	void* V_23 = NULL;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	bool V_29 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_30 = NULL;
	void* V_31 = NULL;
	int32_t V_32 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_37 = NULL;
	void* V_38 = NULL;
	int32_t V_39 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_40;
	memset((&V_40), 0, sizeof(V_40));
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_46;
	memset((&V_46), 0, sizeof(V_46));
	bool V_47 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* G_B26_0 = NULL;
	VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* G_B27_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	{
		RuntimeObject* L_0 = ___0_buffers;
		int32_t L_1 = ___1_positionAccessorIndex;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_0, L_1, (&V_0), (&V_1), (&V_2));
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___count_4;
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_m6ED28625050D6187E9FF635F2F0B84FAE98963DE((&L_4), L_3, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___vData_6 = L_4;
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E L_5 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E)__this->___vData_6;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_mEF24F47840037840AEF8626D31E8C4C54CEF3340(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_3 = (uint8_t*)L_6;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_8;
		L_8 = Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C(L_7, NULL);
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_8, NULL);
		V_4 = 1;
		V_5 = ((int32_t)12);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->___bufferView_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B3_0 = 0;
	}

IL_0075:
	{
		V_9 = (bool)G_B3_0;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0083:
	{
		int32_t L_15 = ___2_normalAccessorIndex;
		V_10 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		__this->___hasNormals_7 = (bool)1;
	}

IL_009f:
	{
		bool L_18 = (bool)__this->___hasNormals_7;
		bool L_19 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateNormals_1;
		__this->___hasNormals_7 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_19));
		bool L_20 = (bool)__this->___hasNormals_7;
		V_11 = L_20;
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12)));
	}

IL_00c7:
	{
		int32_t L_23 = ___3_tangentAccessorIndex;
		V_12 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		__this->___hasTangents_8 = (bool)1;
	}

IL_00e4:
	{
		bool L_26 = (bool)__this->___hasTangents_8;
		bool L_27 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateTangents_2;
		__this->___hasTangents_8 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_27));
		bool L_28 = (bool)__this->___hasTangents_8;
		V_13 = L_28;
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)16)));
	}

IL_010c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___4_uvAccessorIndices;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___4_uvAccessorIndices;
		NullCheck(L_32);
		G_B16_0 = ((!(((uint32_t)(((RuntimeArray*)L_32)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B16_0 = 0;
	}

IL_0119:
	{
		V_14 = (bool)G_B16_0;
		bool L_33 = V_14;
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___4_uvAccessorIndices;
		NullCheck(L_34);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) < ((int32_t)3))? 1 : 0), NULL);
		int32_t L_35 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___4_uvAccessorIndices;
		NullCheck(L_36);
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)(((RuntimeArray*)L_36)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___4_uvAccessorIndices;
		NullCheck(L_37);
		V_16 = ((int32_t)(((RuntimeArray*)L_37)->max_length));
		int32_t L_38 = V_16;
		V_15 = L_38;
		int32_t L_39 = V_15;
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_0147;
		}
	}
	{
		goto IL_015a;
	}

IL_0147:
	{
		RuntimeObject* L_40 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* L_41 = (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC(L_41, L_40, VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41);
		goto IL_016d;
	}

IL_015a:
	{
		RuntimeObject* L_42 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* L_43 = (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318(L_43, L_42, VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43);
		goto IL_016d;
	}

IL_016d:
	{
	}

IL_016e:
	{
		int32_t L_44 = ___5_colorAccessorIndex;
		__this->___hasColors_9 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = (bool)__this->___hasColors_9;
		V_17 = L_45;
		bool L_46 = V_17;
		if (!L_46)
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_48 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)il2cpp_codegen_object_new(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		VertexBufferColors__ctor_mDCA2FC9507D3CFCFA4A4E5E24422B1C0E8480A6F(L_48, NULL);
		__this->___colors_12 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colors_12), (void*)L_48);
	}

IL_019b:
	{
		int32_t L_49 = ___6_weightsAccessorIndex;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			G_B26_0 = __this;
			goto IL_01ab;
		}
		G_B25_0 = __this;
	}
	{
		int32_t L_50 = ___7_jointsAccessorIndex;
		G_B27_0 = ((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B27_1 = G_B25_0;
		goto IL_01ac;
	}

IL_01ab:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
	}

IL_01ac:
	{
		NullCheck(G_B27_1);
		G_B27_1->___hasBones_10 = (bool)G_B27_0;
		bool L_51 = (bool)__this->___hasBones_10;
		V_18 = L_51;
		bool L_52 = V_18;
		if (!L_52)
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		RuntimeObject* L_54 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)il2cpp_codegen_object_new(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		VertexBufferBones__ctor_mC2CA055DC14EEE85FAE3CCC8C58D7BB1D7FFC1E0(L_55, L_54, NULL);
		__this->___bones_13 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_13), (void*)L_55);
	}

IL_01d6:
	{
		int32_t L_56 = V_4;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_6), L_56, (int32_t)4, (int32_t)1, NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		V_7 = 0;
		il2cpp_codegen_initobj((&V_19), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = (int32_t)L_57->___bufferView_0;
		V_20 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_20;
		if (!L_59)
		{
			goto IL_0220;
		}
	}
	{
		void* L_60 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)L_61->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->___componentType_2;
		int32_t L_65 = V_2;
		uint8_t* L_66 = V_3;
		int32_t L_67 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (bool)L_68->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_70;
		L_70 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_60, L_62, L_64, L_65, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_66, L_67, L_69, (bool)0, NULL);
		V_19 = L_70;
	}

IL_0220:
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_71 = V_0;
		NullCheck(L_71);
		bool L_72;
		L_72 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_71, NULL);
		V_21 = L_72;
		bool L_73 = V_21;
		if (!L_73)
		{
			goto IL_02d0;
		}
	}
	{
		RuntimeObject* L_74 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_75 = V_0;
		NullCheck(L_75);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_76 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_75->___sparse_9;
		NullCheck(L_76);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_77 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_76->___indices_1;
		NullCheck(L_74);
		InterfaceActionInvoker2< AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*, void** >::Invoke(1, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_74, L_77, (&V_22));
		RuntimeObject* L_78 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_79 = V_0;
		NullCheck(L_79);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_80 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_79->___sparse_9;
		NullCheck(L_80);
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_81 = (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*)L_80->___values_2;
		NullCheck(L_78);
		InterfaceActionInvoker2< AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*, void** >::Invoke(2, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_78, L_81, (&V_23));
		void* L_82 = V_22;
		void* L_83 = V_23;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_84 = V_0;
		NullCheck(L_84);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_85 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_84->___sparse_9;
		NullCheck(L_85);
		int32_t L_86 = (int32_t)L_85->___count_0;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_87 = V_0;
		NullCheck(L_87);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_88 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_87->___sparse_9;
		NullCheck(L_88);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_89 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_88->___indices_1;
		NullCheck(L_89);
		int32_t L_90 = (int32_t)L_89->___componentType_2;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)L_91->___componentType_2;
		uint8_t* L_93 = V_3;
		int32_t L_94 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_95 = V_0;
		NullCheck(L_95);
		bool L_96 = (bool)L_95->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_97;
		L_97 = VertexBufferConfigBase_GetVector3sSparseJob_mDF16E5265365EF4520F3C167F0C35223BAF18D78(L_82, L_83, L_86, L_90, L_92, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_93, L_94, (&V_19), L_96, NULL);
		V_24 = L_97;
		bool L_98;
		L_98 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_24), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_25 = L_98;
		bool L_99 = V_25;
		if (!L_99)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_100 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101;
		L_101 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_24), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_100, (L_101));
		int32_t L_102 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		goto IL_02cf;
	}

IL_02b7:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_103 = V_26;
		V_27 = L_103;
		goto IL_056e;
	}

IL_02cf:
	{
	}

IL_02d0:
	{
		bool L_104;
		L_104 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_19), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_28 = L_104;
		bool L_105 = V_28;
		if (!L_105)
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_106 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_107;
		L_107 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_19), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_106, (L_107));
		int32_t L_108 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		goto IL_0310;
	}

IL_02f8:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_109 = V_26;
		V_27 = L_109;
		goto IL_056e;
	}

IL_0310:
	{
		int32_t L_110 = ___2_normalAccessorIndex;
		V_29 = (bool)((((int32_t)((((int32_t)L_110) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_29;
		if (!L_111)
		{
			goto IL_03c3;
		}
	}
	{
		RuntimeObject* L_112 = ___0_buffers;
		int32_t L_113 = ___2_normalAccessorIndex;
		NullCheck(L_112);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_112, L_113, (&V_30), (&V_31), (&V_32));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_114 = V_30;
		NullCheck(L_114);
		bool L_115;
		L_115 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_114, NULL);
		V_34 = L_115;
		bool L_116 = V_34;
		if (!L_116)
		{
			goto IL_035b;
		}
	}
	{
		RuntimeObject* L_117 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_117, (uint32_t)((int32_t)42), L_119);
	}

IL_035b:
	{
		void* L_120 = V_31;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_121 = V_30;
		NullCheck(L_121);
		int32_t L_122 = (int32_t)L_121->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_123 = V_30;
		NullCheck(L_123);
		int32_t L_124 = (int32_t)L_123->___componentType_2;
		int32_t L_125 = V_32;
		uint8_t* L_126 = V_3;
		int32_t L_127 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_128 = V_30;
		NullCheck(L_128);
		bool L_129 = (bool)L_128->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_130;
		L_130 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_120, L_122, L_124, L_125, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, ((int32_t)12))), L_127, L_129, (bool)1, NULL);
		V_33 = L_130;
		bool L_131;
		L_131 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_33), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_35 = L_131;
		bool L_132 = V_35;
		if (!L_132)
		{
			goto IL_03aa;
		}
	}
	{
		int32_t L_133 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_134;
		L_134 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_33), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_133, (L_134));
		int32_t L_135 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		goto IL_03c2;
	}

IL_03aa:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_136 = V_26;
		V_27 = L_136;
		goto IL_056e;
	}

IL_03c2:
	{
	}

IL_03c3:
	{
		int32_t L_137 = ___3_tangentAccessorIndex;
		V_36 = (bool)((((int32_t)((((int32_t)L_137) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_36;
		if (!L_138)
		{
			goto IL_0477;
		}
	}
	{
		RuntimeObject* L_139 = ___0_buffers;
		int32_t L_140 = ___3_tangentAccessorIndex;
		NullCheck(L_139);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_139, L_140, (&V_37), (&V_38), (&V_39));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_141 = V_37;
		NullCheck(L_141);
		bool L_142;
		L_142 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_141, NULL);
		V_41 = L_142;
		bool L_143 = V_41;
		if (!L_143)
		{
			goto IL_040f;
		}
	}
	{
		RuntimeObject* L_144 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = L_145;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_144, (uint32_t)((int32_t)42), L_146);
	}

IL_040f:
	{
		void* L_147 = V_38;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_148 = V_37;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)L_148->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_150 = V_37;
		NullCheck(L_150);
		int32_t L_151 = (int32_t)L_150->___componentType_2;
		int32_t L_152 = V_39;
		uint8_t* L_153 = V_3;
		int32_t L_154 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_155 = V_37;
		NullCheck(L_155);
		bool L_156 = (bool)L_155->___normalized_3;
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_157;
		L_157 = VertexBufferConfigBase_GetTangentsJob_mD6D5629F125A4D942E2336750E6FA84B284D09CC((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_147, L_149, L_151, L_152, (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_153, ((int32_t)24))), L_154, L_156, NULL);
		V_40 = L_157;
		bool L_158;
		L_158 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_40), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_42 = L_158;
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_045e;
		}
	}
	{
		int32_t L_160 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_161;
		L_161 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_40), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_160, (L_161));
		int32_t L_162 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		goto IL_0476;
	}

IL_045e:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_163 = V_26;
		V_27 = L_163;
		goto IL_056e;
	}

IL_0476:
	{
	}

IL_0477:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_164 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_43 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_164) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_165 = V_43;
		if (!L_165)
		{
			goto IL_04b3;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_166 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		RuntimeObject* L_167 = ___0_buffers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ___4_uvAccessorIndices;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = (int32_t)L_169->___count_4;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_171 = V_6;
		int32_t L_172 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___4_uvAccessorIndices;
		NullCheck(L_173);
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_174;
		memset((&L_174), 0, sizeof(L_174));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_174), L_171, L_172, ((int32_t)(((RuntimeArray*)L_173)->max_length)), NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck(L_166);
		bool L_175;
		L_175 = VirtualFuncInvoker4< bool, RuntimeObject*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, L_166, L_167, L_168, L_170, L_174);
		int32_t L_176 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ___4_uvAccessorIndices;
		NullCheck(L_177);
		V_7 = ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(((RuntimeArray*)L_177)->max_length))));
	}

IL_04b3:
	{
		bool L_178 = (bool)__this->___hasColors_9;
		V_44 = L_178;
		bool L_179 = V_44;
		if (!L_179)
		{
			goto IL_04e0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_180 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		RuntimeObject* L_181 = ___0_buffers;
		int32_t L_182 = ___5_colorAccessorIndex;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_183 = V_6;
		int32_t L_184 = V_7;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_185;
		memset((&L_185), 0, sizeof(L_185));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_185), L_183, L_184, 1, NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180);
		bool L_186;
		L_186 = VirtualFuncInvoker3< bool, RuntimeObject*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180, L_181, L_182, L_185);
		int32_t L_187 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_04e0:
	{
		bool L_188 = (bool)__this->___hasBones_10;
		V_45 = L_188;
		bool L_189 = V_45;
		if (!L_189)
		{
			goto IL_053d;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_190 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		RuntimeObject* L_191 = ___0_buffers;
		int32_t L_192 = ___6_weightsAccessorIndex;
		int32_t L_193 = ___7_jointsAccessorIndex;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_194;
		L_194 = VirtualFuncInvoker3< Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489, RuntimeObject*, int32_t, int32_t >::Invoke(4, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190, L_191, L_192, L_193);
		V_46 = L_194;
		bool L_195;
		L_195 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_46), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_47 = L_195;
		bool L_196 = V_47;
		if (!L_196)
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_197 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_198;
		L_198 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_46), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_197, (L_198));
		int32_t L_199 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		goto IL_053c;
	}

IL_0527:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_200 = V_26;
		V_27 = L_200;
		goto IL_056e;
	}

IL_053c:
	{
	}

IL_053d:
	{
		int32_t L_201 = V_4;
		if ((((int32_t)L_201) > ((int32_t)1)))
		{
			goto IL_054c;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_202;
		L_202 = IL2CPP_NATIVEARRAY_GET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, 0);
		G_B65_0 = L_202;
		goto IL_0553;
	}

IL_054c:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_203 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_204;
		L_204 = JobHandle_CombineDependencies_m5B482F42E4C9CAC22FF24C1BF76F3AFB870DBB3E(L_203, NULL);
		G_B65_0 = L_204;
	}

IL_0553:
	{
		V_8 = G_B65_0;
		NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A((&V_6), NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_205 = V_8;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_206;
		memset((&L_206), 0, sizeof(L_206));
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&L_206), L_205, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		V_27 = L_206;
		goto IL_056e;
	}

IL_056e:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_207 = V_27;
		return L_207;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m4DCFABD026904FA968C9B95864D45F17166EEF9E_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_0 = 1;
		bool L_0 = (bool)__this->___hasNormals_7;
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		bool L_3 = (bool)__this->___hasTangents_8;
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_6 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_5 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_0;
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
	}

IL_003e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_11 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_6 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_14 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_7 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0064:
	{
		int32_t L_17 = V_0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_18 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var, (uint32_t)L_17);
		((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3), (void*)L_18);
		V_1 = 0;
		V_2 = 0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_19 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_22;
		memset((&L_22), 0, sizeof(L_22));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_22), (int32_t)0, (int32_t)0, 3, L_21, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		bool L_24 = (bool)__this->___hasNormals_7;
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_26 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_29;
		memset((&L_29), 0, sizeof(L_29));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_29), (int32_t)1, (int32_t)0, 3, L_28, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_29);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b4:
	{
		bool L_31 = (bool)__this->___hasTangents_8;
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00db;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_33 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36;
		memset((&L_36), 0, sizeof(L_36));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_36), (int32_t)2, (int32_t)0, 4, L_35, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00db:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_39 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_10 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_010c;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_41 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_42 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41, L_42, L_43, L_44);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010c:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_47 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_11 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0136;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_49 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_50 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t*, int32_t >::Invoke(5, L_49, L_50, (&V_1), L_51);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_53 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_12 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_12;
		if (!L_54)
		{
			goto IL_0163;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_56 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55, L_56, L_57, L_58);
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 2));
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0163:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_ApplyOnMesh_mD6EA853047B266F6D3915A846A85F77D3CACDB40_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A, NULL);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		V_1 = (bool)((((RuntimeObject*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		VertexBufferConfig_1_CreateDescriptors_m4DCFABD026904FA968C9B95864D45F17166EEF9E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0022:
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_msh;
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_3 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_5 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		NullCheck(L_2);
		Mesh_SetVertexBufferParams_m8033EB85082C142DCE8B69FFBAD26D7DFB0330B2(L_2, L_4, L_5, NULL);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981, NULL);
		V_0 = 0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_msh;
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E L_7 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E)__this->___vData_6;
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_8 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_8)->___m_Length_1);
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_flags;
		NullCheck(L_6);
		Mesh_SetVertexBufferData_TisVPosNorm_t83C1B9EC82865A2124605BF69D0D0FD05E611DCD_m98F5B919E464DF0F3ACD4366F3DC57AF2454635E(L_6, L_7, 0, 0, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_13 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_15 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___0_msh;
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_flags;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15, L_16, L_17, L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00a0:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_20 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_22 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = ___0_msh;
		int32_t L_24 = V_0;
		int32_t L_25 = ___1_flags;
		NullCheck(L_22);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, L_22, L_23, L_24, L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c2:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_27 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_4 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_29 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = ___0_msh;
		int32_t L_31 = V_0;
		int32_t L_32 = ___1_flags;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29, L_30, L_31, L_32);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e6:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_Dispose_mDC3B7394E59AD3B311930F55FB4AE7863F96D874_gshared (VertexBufferConfig_1_t61E401A0C1792B20EFC5918CA6E6B207C4A8EEF2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_0 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF889FB0A50008701DFF815D51811D6C2FA88D506(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E* L_3 = (NativeArray_1_tAE4A2361DE1DDFE17E8AA1998BB8F49B8473A62E*)(&__this->___vData_6);
		NativeArray_1_Dispose_mF28F15854DB63F91A8E4ECE7E7046833DEECD545(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_4 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_1 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_6 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
		VirtualActionInvoker0::Invoke(7, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
	}

IL_0039:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_7 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7, L_9);
	}

IL_0054:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_10 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_12 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
		VirtualActionInvoker0::Invoke(7, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
	}

IL_006f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBufferConfig_1_get_vertexCount_m2DC67C81D219643930D32EF9E7FD2BCBA12718C6_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_0 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mC5ED66430AE33CD749E7A37DF7B48DFB49976CC7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_3 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		V_1 = L_4;
		goto IL_0023;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1__ctor_m7CBFD09CD87F835D9931A419AEE8E74E82A7B047_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferConfigBase__ctor_m09E6413C4CD08D36B052A541ECCB5440929CC119((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfig_1_ScheduleVertexJobs_m54D431CC2ADC121D5CEA2736BEE940F31DAA1274_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, RuntimeObject* ___0_buffers, int32_t ___1_positionAccessorIndex, int32_t ___2_normalAccessorIndex, int32_t ___3_tangentAccessorIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_uvAccessorIndices, int32_t ___5_colorAccessorIndex, int32_t ___6_weightsAccessorIndex, int32_t ___7_jointsAccessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		s_Il2CppMethodInitialized = true;
	}
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	void* V_22 = NULL;
	void* V_23 = NULL;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	bool V_29 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_30 = NULL;
	void* V_31 = NULL;
	int32_t V_32 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_37 = NULL;
	void* V_38 = NULL;
	int32_t V_39 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_40;
	memset((&V_40), 0, sizeof(V_40));
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_46;
	memset((&V_46), 0, sizeof(V_46));
	bool V_47 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* G_B26_0 = NULL;
	VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* G_B27_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	{
		RuntimeObject* L_0 = ___0_buffers;
		int32_t L_1 = ___1_positionAccessorIndex;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_0, L_1, (&V_0), (&V_1), (&V_2));
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___count_4;
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_mB26D6A63E8B3F18A77A5552D357236D2292DDC4B((&L_4), L_3, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___vData_6 = L_4;
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 L_5 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250)__this->___vData_6;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m4DFB73460B0763281BB179BE6CB139906474F02E(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_3 = (uint8_t*)L_6;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_8;
		L_8 = Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C(L_7, NULL);
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_8, NULL);
		V_4 = 1;
		V_5 = ((int32_t)12);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->___bufferView_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B3_0 = 0;
	}

IL_0075:
	{
		V_9 = (bool)G_B3_0;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0083:
	{
		int32_t L_15 = ___2_normalAccessorIndex;
		V_10 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		__this->___hasNormals_7 = (bool)1;
	}

IL_009f:
	{
		bool L_18 = (bool)__this->___hasNormals_7;
		bool L_19 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateNormals_1;
		__this->___hasNormals_7 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_19));
		bool L_20 = (bool)__this->___hasNormals_7;
		V_11 = L_20;
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12)));
	}

IL_00c7:
	{
		int32_t L_23 = ___3_tangentAccessorIndex;
		V_12 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		__this->___hasTangents_8 = (bool)1;
	}

IL_00e4:
	{
		bool L_26 = (bool)__this->___hasTangents_8;
		bool L_27 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateTangents_2;
		__this->___hasTangents_8 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_27));
		bool L_28 = (bool)__this->___hasTangents_8;
		V_13 = L_28;
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)16)));
	}

IL_010c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___4_uvAccessorIndices;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___4_uvAccessorIndices;
		NullCheck(L_32);
		G_B16_0 = ((!(((uint32_t)(((RuntimeArray*)L_32)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B16_0 = 0;
	}

IL_0119:
	{
		V_14 = (bool)G_B16_0;
		bool L_33 = V_14;
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___4_uvAccessorIndices;
		NullCheck(L_34);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) < ((int32_t)3))? 1 : 0), NULL);
		int32_t L_35 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___4_uvAccessorIndices;
		NullCheck(L_36);
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)(((RuntimeArray*)L_36)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___4_uvAccessorIndices;
		NullCheck(L_37);
		V_16 = ((int32_t)(((RuntimeArray*)L_37)->max_length));
		int32_t L_38 = V_16;
		V_15 = L_38;
		int32_t L_39 = V_15;
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_0147;
		}
	}
	{
		goto IL_015a;
	}

IL_0147:
	{
		RuntimeObject* L_40 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* L_41 = (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC(L_41, L_40, VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41);
		goto IL_016d;
	}

IL_015a:
	{
		RuntimeObject* L_42 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* L_43 = (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318(L_43, L_42, VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43);
		goto IL_016d;
	}

IL_016d:
	{
	}

IL_016e:
	{
		int32_t L_44 = ___5_colorAccessorIndex;
		__this->___hasColors_9 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = (bool)__this->___hasColors_9;
		V_17 = L_45;
		bool L_46 = V_17;
		if (!L_46)
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_48 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)il2cpp_codegen_object_new(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		VertexBufferColors__ctor_mDCA2FC9507D3CFCFA4A4E5E24422B1C0E8480A6F(L_48, NULL);
		__this->___colors_12 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colors_12), (void*)L_48);
	}

IL_019b:
	{
		int32_t L_49 = ___6_weightsAccessorIndex;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			G_B26_0 = __this;
			goto IL_01ab;
		}
		G_B25_0 = __this;
	}
	{
		int32_t L_50 = ___7_jointsAccessorIndex;
		G_B27_0 = ((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B27_1 = G_B25_0;
		goto IL_01ac;
	}

IL_01ab:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
	}

IL_01ac:
	{
		NullCheck(G_B27_1);
		G_B27_1->___hasBones_10 = (bool)G_B27_0;
		bool L_51 = (bool)__this->___hasBones_10;
		V_18 = L_51;
		bool L_52 = V_18;
		if (!L_52)
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		RuntimeObject* L_54 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)il2cpp_codegen_object_new(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		VertexBufferBones__ctor_mC2CA055DC14EEE85FAE3CCC8C58D7BB1D7FFC1E0(L_55, L_54, NULL);
		__this->___bones_13 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_13), (void*)L_55);
	}

IL_01d6:
	{
		int32_t L_56 = V_4;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_6), L_56, (int32_t)4, (int32_t)1, NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		V_7 = 0;
		il2cpp_codegen_initobj((&V_19), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = (int32_t)L_57->___bufferView_0;
		V_20 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_20;
		if (!L_59)
		{
			goto IL_0220;
		}
	}
	{
		void* L_60 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)L_61->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->___componentType_2;
		int32_t L_65 = V_2;
		uint8_t* L_66 = V_3;
		int32_t L_67 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (bool)L_68->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_70;
		L_70 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_60, L_62, L_64, L_65, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_66, L_67, L_69, (bool)0, NULL);
		V_19 = L_70;
	}

IL_0220:
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_71 = V_0;
		NullCheck(L_71);
		bool L_72;
		L_72 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_71, NULL);
		V_21 = L_72;
		bool L_73 = V_21;
		if (!L_73)
		{
			goto IL_02d0;
		}
	}
	{
		RuntimeObject* L_74 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_75 = V_0;
		NullCheck(L_75);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_76 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_75->___sparse_9;
		NullCheck(L_76);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_77 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_76->___indices_1;
		NullCheck(L_74);
		InterfaceActionInvoker2< AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*, void** >::Invoke(1, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_74, L_77, (&V_22));
		RuntimeObject* L_78 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_79 = V_0;
		NullCheck(L_79);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_80 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_79->___sparse_9;
		NullCheck(L_80);
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_81 = (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*)L_80->___values_2;
		NullCheck(L_78);
		InterfaceActionInvoker2< AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*, void** >::Invoke(2, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_78, L_81, (&V_23));
		void* L_82 = V_22;
		void* L_83 = V_23;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_84 = V_0;
		NullCheck(L_84);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_85 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_84->___sparse_9;
		NullCheck(L_85);
		int32_t L_86 = (int32_t)L_85->___count_0;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_87 = V_0;
		NullCheck(L_87);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_88 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_87->___sparse_9;
		NullCheck(L_88);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_89 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_88->___indices_1;
		NullCheck(L_89);
		int32_t L_90 = (int32_t)L_89->___componentType_2;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)L_91->___componentType_2;
		uint8_t* L_93 = V_3;
		int32_t L_94 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_95 = V_0;
		NullCheck(L_95);
		bool L_96 = (bool)L_95->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_97;
		L_97 = VertexBufferConfigBase_GetVector3sSparseJob_mDF16E5265365EF4520F3C167F0C35223BAF18D78(L_82, L_83, L_86, L_90, L_92, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_93, L_94, (&V_19), L_96, NULL);
		V_24 = L_97;
		bool L_98;
		L_98 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_24), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_25 = L_98;
		bool L_99 = V_25;
		if (!L_99)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_100 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101;
		L_101 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_24), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_100, (L_101));
		int32_t L_102 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		goto IL_02cf;
	}

IL_02b7:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_103 = V_26;
		V_27 = L_103;
		goto IL_056e;
	}

IL_02cf:
	{
	}

IL_02d0:
	{
		bool L_104;
		L_104 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_19), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_28 = L_104;
		bool L_105 = V_28;
		if (!L_105)
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_106 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_107;
		L_107 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_19), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_106, (L_107));
		int32_t L_108 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		goto IL_0310;
	}

IL_02f8:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_109 = V_26;
		V_27 = L_109;
		goto IL_056e;
	}

IL_0310:
	{
		int32_t L_110 = ___2_normalAccessorIndex;
		V_29 = (bool)((((int32_t)((((int32_t)L_110) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_29;
		if (!L_111)
		{
			goto IL_03c3;
		}
	}
	{
		RuntimeObject* L_112 = ___0_buffers;
		int32_t L_113 = ___2_normalAccessorIndex;
		NullCheck(L_112);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_112, L_113, (&V_30), (&V_31), (&V_32));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_114 = V_30;
		NullCheck(L_114);
		bool L_115;
		L_115 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_114, NULL);
		V_34 = L_115;
		bool L_116 = V_34;
		if (!L_116)
		{
			goto IL_035b;
		}
	}
	{
		RuntimeObject* L_117 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_117, (uint32_t)((int32_t)42), L_119);
	}

IL_035b:
	{
		void* L_120 = V_31;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_121 = V_30;
		NullCheck(L_121);
		int32_t L_122 = (int32_t)L_121->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_123 = V_30;
		NullCheck(L_123);
		int32_t L_124 = (int32_t)L_123->___componentType_2;
		int32_t L_125 = V_32;
		uint8_t* L_126 = V_3;
		int32_t L_127 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_128 = V_30;
		NullCheck(L_128);
		bool L_129 = (bool)L_128->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_130;
		L_130 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_120, L_122, L_124, L_125, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, ((int32_t)12))), L_127, L_129, (bool)1, NULL);
		V_33 = L_130;
		bool L_131;
		L_131 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_33), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_35 = L_131;
		bool L_132 = V_35;
		if (!L_132)
		{
			goto IL_03aa;
		}
	}
	{
		int32_t L_133 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_134;
		L_134 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_33), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_133, (L_134));
		int32_t L_135 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		goto IL_03c2;
	}

IL_03aa:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_136 = V_26;
		V_27 = L_136;
		goto IL_056e;
	}

IL_03c2:
	{
	}

IL_03c3:
	{
		int32_t L_137 = ___3_tangentAccessorIndex;
		V_36 = (bool)((((int32_t)((((int32_t)L_137) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_36;
		if (!L_138)
		{
			goto IL_0477;
		}
	}
	{
		RuntimeObject* L_139 = ___0_buffers;
		int32_t L_140 = ___3_tangentAccessorIndex;
		NullCheck(L_139);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_139, L_140, (&V_37), (&V_38), (&V_39));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_141 = V_37;
		NullCheck(L_141);
		bool L_142;
		L_142 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_141, NULL);
		V_41 = L_142;
		bool L_143 = V_41;
		if (!L_143)
		{
			goto IL_040f;
		}
	}
	{
		RuntimeObject* L_144 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = L_145;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_144, (uint32_t)((int32_t)42), L_146);
	}

IL_040f:
	{
		void* L_147 = V_38;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_148 = V_37;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)L_148->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_150 = V_37;
		NullCheck(L_150);
		int32_t L_151 = (int32_t)L_150->___componentType_2;
		int32_t L_152 = V_39;
		uint8_t* L_153 = V_3;
		int32_t L_154 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_155 = V_37;
		NullCheck(L_155);
		bool L_156 = (bool)L_155->___normalized_3;
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_157;
		L_157 = VertexBufferConfigBase_GetTangentsJob_mD6D5629F125A4D942E2336750E6FA84B284D09CC((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_147, L_149, L_151, L_152, (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_153, ((int32_t)24))), L_154, L_156, NULL);
		V_40 = L_157;
		bool L_158;
		L_158 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_40), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_42 = L_158;
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_045e;
		}
	}
	{
		int32_t L_160 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_161;
		L_161 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_40), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_160, (L_161));
		int32_t L_162 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		goto IL_0476;
	}

IL_045e:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_163 = V_26;
		V_27 = L_163;
		goto IL_056e;
	}

IL_0476:
	{
	}

IL_0477:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_164 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_43 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_164) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_165 = V_43;
		if (!L_165)
		{
			goto IL_04b3;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_166 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		RuntimeObject* L_167 = ___0_buffers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ___4_uvAccessorIndices;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = (int32_t)L_169->___count_4;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_171 = V_6;
		int32_t L_172 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___4_uvAccessorIndices;
		NullCheck(L_173);
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_174;
		memset((&L_174), 0, sizeof(L_174));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_174), L_171, L_172, ((int32_t)(((RuntimeArray*)L_173)->max_length)), NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck(L_166);
		bool L_175;
		L_175 = VirtualFuncInvoker4< bool, RuntimeObject*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, L_166, L_167, L_168, L_170, L_174);
		int32_t L_176 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ___4_uvAccessorIndices;
		NullCheck(L_177);
		V_7 = ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(((RuntimeArray*)L_177)->max_length))));
	}

IL_04b3:
	{
		bool L_178 = (bool)__this->___hasColors_9;
		V_44 = L_178;
		bool L_179 = V_44;
		if (!L_179)
		{
			goto IL_04e0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_180 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		RuntimeObject* L_181 = ___0_buffers;
		int32_t L_182 = ___5_colorAccessorIndex;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_183 = V_6;
		int32_t L_184 = V_7;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_185;
		memset((&L_185), 0, sizeof(L_185));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_185), L_183, L_184, 1, NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180);
		bool L_186;
		L_186 = VirtualFuncInvoker3< bool, RuntimeObject*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180, L_181, L_182, L_185);
		int32_t L_187 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_04e0:
	{
		bool L_188 = (bool)__this->___hasBones_10;
		V_45 = L_188;
		bool L_189 = V_45;
		if (!L_189)
		{
			goto IL_053d;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_190 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		RuntimeObject* L_191 = ___0_buffers;
		int32_t L_192 = ___6_weightsAccessorIndex;
		int32_t L_193 = ___7_jointsAccessorIndex;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_194;
		L_194 = VirtualFuncInvoker3< Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489, RuntimeObject*, int32_t, int32_t >::Invoke(4, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190, L_191, L_192, L_193);
		V_46 = L_194;
		bool L_195;
		L_195 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_46), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_47 = L_195;
		bool L_196 = V_47;
		if (!L_196)
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_197 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_198;
		L_198 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_46), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_197, (L_198));
		int32_t L_199 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		goto IL_053c;
	}

IL_0527:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_200 = V_26;
		V_27 = L_200;
		goto IL_056e;
	}

IL_053c:
	{
	}

IL_053d:
	{
		int32_t L_201 = V_4;
		if ((((int32_t)L_201) > ((int32_t)1)))
		{
			goto IL_054c;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_202;
		L_202 = IL2CPP_NATIVEARRAY_GET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, 0);
		G_B65_0 = L_202;
		goto IL_0553;
	}

IL_054c:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_203 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_204;
		L_204 = JobHandle_CombineDependencies_m5B482F42E4C9CAC22FF24C1BF76F3AFB870DBB3E(L_203, NULL);
		G_B65_0 = L_204;
	}

IL_0553:
	{
		V_8 = G_B65_0;
		NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A((&V_6), NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_205 = V_8;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_206;
		memset((&L_206), 0, sizeof(L_206));
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&L_206), L_205, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		V_27 = L_206;
		goto IL_056e;
	}

IL_056e:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_207 = V_27;
		return L_207;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m8A85D1F2EBBA5523EE055B4CE69E4C7F0CEEA8A9_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_0 = 1;
		bool L_0 = (bool)__this->___hasNormals_7;
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		bool L_3 = (bool)__this->___hasTangents_8;
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_6 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_5 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_0;
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
	}

IL_003e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_11 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_6 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_14 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_7 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0064:
	{
		int32_t L_17 = V_0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_18 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var, (uint32_t)L_17);
		((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3), (void*)L_18);
		V_1 = 0;
		V_2 = 0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_19 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_22;
		memset((&L_22), 0, sizeof(L_22));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_22), (int32_t)0, (int32_t)0, 3, L_21, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		bool L_24 = (bool)__this->___hasNormals_7;
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_26 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_29;
		memset((&L_29), 0, sizeof(L_29));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_29), (int32_t)1, (int32_t)0, 3, L_28, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_29);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b4:
	{
		bool L_31 = (bool)__this->___hasTangents_8;
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00db;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_33 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36;
		memset((&L_36), 0, sizeof(L_36));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_36), (int32_t)2, (int32_t)0, 4, L_35, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00db:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_39 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_10 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_010c;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_41 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_42 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41, L_42, L_43, L_44);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010c:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_47 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_11 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0136;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_49 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_50 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t*, int32_t >::Invoke(5, L_49, L_50, (&V_1), L_51);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_53 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_12 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_12;
		if (!L_54)
		{
			goto IL_0163;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_56 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55, L_56, L_57, L_58);
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 2));
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0163:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_ApplyOnMesh_m7C110CA8264151D6ED5BD489A77AD77E5110DCB7_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A, NULL);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		V_1 = (bool)((((RuntimeObject*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		VertexBufferConfig_1_CreateDescriptors_m8A85D1F2EBBA5523EE055B4CE69E4C7F0CEEA8A9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0022:
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_msh;
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_3 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_5 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		NullCheck(L_2);
		Mesh_SetVertexBufferParams_m8033EB85082C142DCE8B69FFBAD26D7DFB0330B2(L_2, L_4, L_5, NULL);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981, NULL);
		V_0 = 0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_msh;
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250 L_7 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250)__this->___vData_6;
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_8 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_8)->___m_Length_1);
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_flags;
		NullCheck(L_6);
		Mesh_SetVertexBufferData_TisVPosNormTan_tB869C784FC0363C61B0A9F2BC0A20C6C2233D193_m5C4B829BA2A5130FB5C09B29AD8805155EA7C756(L_6, L_7, 0, 0, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_13 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_15 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___0_msh;
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_flags;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15, L_16, L_17, L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00a0:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_20 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_22 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = ___0_msh;
		int32_t L_24 = V_0;
		int32_t L_25 = ___1_flags;
		NullCheck(L_22);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, L_22, L_23, L_24, L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c2:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_27 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_4 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_29 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = ___0_msh;
		int32_t L_31 = V_0;
		int32_t L_32 = ___1_flags;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29, L_30, L_31, L_32);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e6:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_Dispose_m4763B33655059272A152DC12C1426CC4126B6C94_gshared (VertexBufferConfig_1_t5656BE1823626DF63B15341961AFF3FC9C7F330F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_0 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mC5ED66430AE33CD749E7A37DF7B48DFB49976CC7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250* L_3 = (NativeArray_1_tD350E73A402290EB7A41B128AE52B5FEFF502250*)(&__this->___vData_6);
		NativeArray_1_Dispose_m82995B1021A45DA3ADE8B42EB36038FBB092EEAF(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_4 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_1 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_6 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
		VirtualActionInvoker0::Invoke(7, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
	}

IL_0039:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_7 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7, L_9);
	}

IL_0054:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_10 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_12 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
		VirtualActionInvoker0::Invoke(7, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
	}

IL_006f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexBufferConfig_1_get_vertexCount_m9A91CDB55BC330F939787E03E89BC885FE8B1588_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = L_4;
		goto IL_0023;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1__ctor_m315A817F9D4638AD1281BF9E2221F9A5AA3FE4B2_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferConfigBase__ctor_m09E6413C4CD08D36B052A541ECCB5440929CC119((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferConfig_1_ScheduleVertexJobs_m50B18773DCDCC054FCC7C9E914F8854C445F6E8D_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, RuntimeObject* ___0_buffers, int32_t ___1_positionAccessorIndex, int32_t ___2_normalAccessorIndex, int32_t ___3_tangentAccessorIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_uvAccessorIndices, int32_t ___5_colorAccessorIndex, int32_t ___6_weightsAccessorIndex, int32_t ___7_jointsAccessorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		s_Il2CppMethodInitialized = true;
	}
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	void* V_22 = NULL;
	void* V_23 = NULL;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	bool V_29 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_30 = NULL;
	void* V_31 = NULL;
	int32_t V_32 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_37 = NULL;
	void* V_38 = NULL;
	int32_t V_39 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_40;
	memset((&V_40), 0, sizeof(V_40));
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_46;
	memset((&V_46), 0, sizeof(V_46));
	bool V_47 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* G_B26_0 = NULL;
	VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* G_B27_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	{
		RuntimeObject* L_0 = ___0_buffers;
		int32_t L_1 = ___1_positionAccessorIndex;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_0, L_1, (&V_0), (&V_1), (&V_2));
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral7F6B55313F4FA0499F8C8C4348E4AA668EA346EB, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->___count_4;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_4), L_3, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___vData_6 = L_4;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18)__this->___vData_6;
		void* L_6;
		L_6 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_3 = (uint8_t*)L_6;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_8;
		L_8 = Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C(L_7, NULL);
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_8, NULL);
		V_4 = 1;
		V_5 = ((int32_t)12);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->___bufferView_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B3_0 = 0;
	}

IL_0075:
	{
		V_9 = (bool)G_B3_0;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0083:
	{
		int32_t L_15 = ___2_normalAccessorIndex;
		V_10 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		__this->___hasNormals_7 = (bool)1;
	}

IL_009f:
	{
		bool L_18 = (bool)__this->___hasNormals_7;
		bool L_19 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateNormals_1;
		__this->___hasNormals_7 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_19));
		bool L_20 = (bool)__this->___hasNormals_7;
		V_11 = L_20;
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12)));
	}

IL_00c7:
	{
		int32_t L_23 = ___3_tangentAccessorIndex;
		V_12 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		__this->___hasTangents_8 = (bool)1;
	}

IL_00e4:
	{
		bool L_26 = (bool)__this->___hasTangents_8;
		bool L_27 = (bool)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___calculateTangents_2;
		__this->___hasTangents_8 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_27));
		bool L_28 = (bool)__this->___hasTangents_8;
		V_13 = L_28;
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)16)));
	}

IL_010c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___4_uvAccessorIndices;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___4_uvAccessorIndices;
		NullCheck(L_32);
		G_B16_0 = ((!(((uint32_t)(((RuntimeArray*)L_32)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B16_0 = 0;
	}

IL_0119:
	{
		V_14 = (bool)G_B16_0;
		bool L_33 = V_14;
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___4_uvAccessorIndices;
		NullCheck(L_34);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) < ((int32_t)3))? 1 : 0), NULL);
		int32_t L_35 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___4_uvAccessorIndices;
		NullCheck(L_36);
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)(((RuntimeArray*)L_36)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___4_uvAccessorIndices;
		NullCheck(L_37);
		V_16 = ((int32_t)(((RuntimeArray*)L_37)->max_length));
		int32_t L_38 = V_16;
		V_15 = L_38;
		int32_t L_39 = V_15;
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_0147;
		}
	}
	{
		goto IL_015a;
	}

IL_0147:
	{
		RuntimeObject* L_40 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* L_41 = (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC(L_41, L_40, VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_41);
		goto IL_016d;
	}

IL_015a:
	{
		RuntimeObject* L_42 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* L_43 = (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23*)il2cpp_codegen_object_new(VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23_il2cpp_TypeInfo_var);
		VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318(L_43, L_42, VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_RuntimeMethod_var);
		__this->___texCoords_11 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texCoords_11), (void*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_43);
		goto IL_016d;
	}

IL_016d:
	{
	}

IL_016e:
	{
		int32_t L_44 = ___5_colorAccessorIndex;
		__this->___hasColors_9 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = (bool)__this->___hasColors_9;
		V_17 = L_45;
		bool L_46 = V_17;
		if (!L_46)
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_48 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)il2cpp_codegen_object_new(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA_il2cpp_TypeInfo_var);
		VertexBufferColors__ctor_mDCA2FC9507D3CFCFA4A4E5E24422B1C0E8480A6F(L_48, NULL);
		__this->___colors_12 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colors_12), (void*)L_48);
	}

IL_019b:
	{
		int32_t L_49 = ___6_weightsAccessorIndex;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			G_B26_0 = __this;
			goto IL_01ab;
		}
		G_B25_0 = __this;
	}
	{
		int32_t L_50 = ___7_jointsAccessorIndex;
		G_B27_0 = ((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B27_1 = G_B25_0;
		goto IL_01ac;
	}

IL_01ab:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
	}

IL_01ac:
	{
		NullCheck(G_B27_1);
		G_B27_1->___hasBones_10 = (bool)G_B27_0;
		bool L_51 = (bool)__this->___hasBones_10;
		V_18 = L_51;
		bool L_52 = V_18;
		if (!L_52)
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		RuntimeObject* L_54 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)il2cpp_codegen_object_new(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94_il2cpp_TypeInfo_var);
		VertexBufferBones__ctor_mC2CA055DC14EEE85FAE3CCC8C58D7BB1D7FFC1E0(L_55, L_54, NULL);
		__this->___bones_13 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_13), (void*)L_55);
	}

IL_01d6:
	{
		int32_t L_56 = V_4;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_6), L_56, (int32_t)4, (int32_t)1, NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_RuntimeMethod_var);
		V_7 = 0;
		il2cpp_codegen_initobj((&V_19), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = (int32_t)L_57->___bufferView_0;
		V_20 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_20;
		if (!L_59)
		{
			goto IL_0220;
		}
	}
	{
		void* L_60 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)L_61->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->___componentType_2;
		int32_t L_65 = V_2;
		uint8_t* L_66 = V_3;
		int32_t L_67 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (bool)L_68->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_70;
		L_70 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_60, L_62, L_64, L_65, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_66, L_67, L_69, (bool)0, NULL);
		V_19 = L_70;
	}

IL_0220:
	{
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_71 = V_0;
		NullCheck(L_71);
		bool L_72;
		L_72 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_71, NULL);
		V_21 = L_72;
		bool L_73 = V_21;
		if (!L_73)
		{
			goto IL_02d0;
		}
	}
	{
		RuntimeObject* L_74 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_75 = V_0;
		NullCheck(L_75);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_76 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_75->___sparse_9;
		NullCheck(L_76);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_77 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_76->___indices_1;
		NullCheck(L_74);
		InterfaceActionInvoker2< AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*, void** >::Invoke(1, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_74, L_77, (&V_22));
		RuntimeObject* L_78 = ___0_buffers;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_79 = V_0;
		NullCheck(L_79);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_80 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_79->___sparse_9;
		NullCheck(L_80);
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_81 = (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*)L_80->___values_2;
		NullCheck(L_78);
		InterfaceActionInvoker2< AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E*, void** >::Invoke(2, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_78, L_81, (&V_23));
		void* L_82 = V_22;
		void* L_83 = V_23;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_84 = V_0;
		NullCheck(L_84);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_85 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_84->___sparse_9;
		NullCheck(L_85);
		int32_t L_86 = (int32_t)L_85->___count_0;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_87 = V_0;
		NullCheck(L_87);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_88 = (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_87->___sparse_9;
		NullCheck(L_88);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_89 = (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C*)L_88->___indices_1;
		NullCheck(L_89);
		int32_t L_90 = (int32_t)L_89->___componentType_2;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)L_91->___componentType_2;
		uint8_t* L_93 = V_3;
		int32_t L_94 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_95 = V_0;
		NullCheck(L_95);
		bool L_96 = (bool)L_95->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_97;
		L_97 = VertexBufferConfigBase_GetVector3sSparseJob_mDF16E5265365EF4520F3C167F0C35223BAF18D78(L_82, L_83, L_86, L_90, L_92, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_93, L_94, (&V_19), L_96, NULL);
		V_24 = L_97;
		bool L_98;
		L_98 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_24), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_25 = L_98;
		bool L_99 = V_25;
		if (!L_99)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_100 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101;
		L_101 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_24), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_100, (L_101));
		int32_t L_102 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		goto IL_02cf;
	}

IL_02b7:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_103 = V_26;
		V_27 = L_103;
		goto IL_056e;
	}

IL_02cf:
	{
	}

IL_02d0:
	{
		bool L_104;
		L_104 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_19), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_28 = L_104;
		bool L_105 = V_28;
		if (!L_105)
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_106 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_107;
		L_107 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_19), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_106, (L_107));
		int32_t L_108 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		goto IL_0310;
	}

IL_02f8:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_109 = V_26;
		V_27 = L_109;
		goto IL_056e;
	}

IL_0310:
	{
		int32_t L_110 = ___2_normalAccessorIndex;
		V_29 = (bool)((((int32_t)((((int32_t)L_110) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_29;
		if (!L_111)
		{
			goto IL_03c3;
		}
	}
	{
		RuntimeObject* L_112 = ___0_buffers;
		int32_t L_113 = ___2_normalAccessorIndex;
		NullCheck(L_112);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_112, L_113, (&V_30), (&V_31), (&V_32));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_114 = V_30;
		NullCheck(L_114);
		bool L_115;
		L_115 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_114, NULL);
		V_34 = L_115;
		bool L_116 = V_34;
		if (!L_116)
		{
			goto IL_035b;
		}
	}
	{
		RuntimeObject* L_117 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_117, (uint32_t)((int32_t)42), L_119);
	}

IL_035b:
	{
		void* L_120 = V_31;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_121 = V_30;
		NullCheck(L_121);
		int32_t L_122 = (int32_t)L_121->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_123 = V_30;
		NullCheck(L_123);
		int32_t L_124 = (int32_t)L_123->___componentType_2;
		int32_t L_125 = V_32;
		uint8_t* L_126 = V_3;
		int32_t L_127 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_128 = V_30;
		NullCheck(L_128);
		bool L_129 = (bool)L_128->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_130;
		L_130 = VertexBufferConfigBase_GetVector3sJob_m36C3A02263E8FEC101A274C9E146964946450A19(L_120, L_122, L_124, L_125, (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, ((int32_t)12))), L_127, L_129, (bool)1, NULL);
		V_33 = L_130;
		bool L_131;
		L_131 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_33), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_35 = L_131;
		bool L_132 = V_35;
		if (!L_132)
		{
			goto IL_03aa;
		}
	}
	{
		int32_t L_133 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_134;
		L_134 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_33), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_133, (L_134));
		int32_t L_135 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		goto IL_03c2;
	}

IL_03aa:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_136 = V_26;
		V_27 = L_136;
		goto IL_056e;
	}

IL_03c2:
	{
	}

IL_03c3:
	{
		int32_t L_137 = ___3_tangentAccessorIndex;
		V_36 = (bool)((((int32_t)((((int32_t)L_137) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_36;
		if (!L_138)
		{
			goto IL_0477;
		}
	}
	{
		RuntimeObject* L_139 = ___0_buffers;
		int32_t L_140 = ___3_tangentAccessorIndex;
		NullCheck(L_139);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_139, L_140, (&V_37), (&V_38), (&V_39));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_141 = V_37;
		NullCheck(L_141);
		bool L_142;
		L_142 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_141, NULL);
		V_41 = L_142;
		bool L_143 = V_41;
		if (!L_143)
		{
			goto IL_040f;
		}
	}
	{
		RuntimeObject* L_144 = (RuntimeObject*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___logger_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = L_145;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_144, (uint32_t)((int32_t)42), L_146);
	}

IL_040f:
	{
		void* L_147 = V_38;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_148 = V_37;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)L_148->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_150 = V_37;
		NullCheck(L_150);
		int32_t L_151 = (int32_t)L_150->___componentType_2;
		int32_t L_152 = V_39;
		uint8_t* L_153 = V_3;
		int32_t L_154 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_155 = V_37;
		NullCheck(L_155);
		bool L_156 = (bool)L_155->___normalized_3;
		NullCheck((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_157;
		L_157 = VertexBufferConfigBase_GetTangentsJob_mD6D5629F125A4D942E2336750E6FA84B284D09CC((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this, L_147, L_149, L_151, L_152, (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_153, ((int32_t)24))), L_154, L_156, NULL);
		V_40 = L_157;
		bool L_158;
		L_158 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_40), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_42 = L_158;
		bool L_159 = V_42;
		if (!L_159)
		{
			goto IL_045e;
		}
	}
	{
		int32_t L_160 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_161;
		L_161 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_40), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_160, (L_161));
		int32_t L_162 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		goto IL_0476;
	}

IL_045e:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_163 = V_26;
		V_27 = L_163;
		goto IL_056e;
	}

IL_0476:
	{
	}

IL_0477:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_164 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_43 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_164) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_165 = V_43;
		if (!L_165)
		{
			goto IL_04b3;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_166 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		RuntimeObject* L_167 = ___0_buffers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ___4_uvAccessorIndices;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = (int32_t)L_169->___count_4;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_171 = V_6;
		int32_t L_172 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___4_uvAccessorIndices;
		NullCheck(L_173);
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_174;
		memset((&L_174), 0, sizeof(L_174));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_174), L_171, L_172, ((int32_t)(((RuntimeArray*)L_173)->max_length)), NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck(L_166);
		bool L_175;
		L_175 = VirtualFuncInvoker4< bool, RuntimeObject*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, L_166, L_167, L_168, L_170, L_174);
		int32_t L_176 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ___4_uvAccessorIndices;
		NullCheck(L_177);
		V_7 = ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(((RuntimeArray*)L_177)->max_length))));
	}

IL_04b3:
	{
		bool L_178 = (bool)__this->___hasColors_9;
		V_44 = L_178;
		bool L_179 = V_44;
		if (!L_179)
		{
			goto IL_04e0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_180 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		RuntimeObject* L_181 = ___0_buffers;
		int32_t L_182 = ___5_colorAccessorIndex;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_183 = V_6;
		int32_t L_184 = V_7;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_185;
		memset((&L_185), 0, sizeof(L_185));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_185), L_183, L_184, 1, NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_RuntimeMethod_var);
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180);
		bool L_186;
		L_186 = VirtualFuncInvoker3< bool, RuntimeObject*, int32_t, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 >::Invoke(4, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_180, L_181, L_182, L_185);
		int32_t L_187 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_04e0:
	{
		bool L_188 = (bool)__this->___hasBones_10;
		V_45 = L_188;
		bool L_189 = V_45;
		if (!L_189)
		{
			goto IL_053d;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_190 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		RuntimeObject* L_191 = ___0_buffers;
		int32_t L_192 = ___6_weightsAccessorIndex;
		int32_t L_193 = ___7_jointsAccessorIndex;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_194;
		L_194 = VirtualFuncInvoker3< Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489, RuntimeObject*, int32_t, int32_t >::Invoke(4, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_190, L_191, L_192, L_193);
		V_46 = L_194;
		bool L_195;
		L_195 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_46), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_47 = L_195;
		bool L_196 = V_47;
		if (!L_196)
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_197 = V_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_198;
		L_198 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_46), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, L_197, (L_198));
		int32_t L_199 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		goto IL_053c;
	}

IL_0527:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		il2cpp_codegen_initobj((&V_26), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_200 = V_26;
		V_27 = L_200;
		goto IL_056e;
	}

IL_053c:
	{
	}

IL_053d:
	{
		int32_t L_201 = V_4;
		if ((((int32_t)L_201) > ((int32_t)1)))
		{
			goto IL_054c;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_202;
		L_202 = IL2CPP_NATIVEARRAY_GET_ITEM(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, ((&V_6))->___m_Buffer_0, 0);
		G_B65_0 = L_202;
		goto IL_0553;
	}

IL_054c:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_203 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_204;
		L_204 = JobHandle_CombineDependencies_m5B482F42E4C9CAC22FF24C1BF76F3AFB870DBB3E(L_203, NULL);
		G_B65_0 = L_204;
	}

IL_0553:
	{
		V_8 = G_B65_0;
		NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A((&V_6), NativeArray_1_Dispose_m410AE526181169A2E22E5508BF8072707268FC4A_RuntimeMethod_var);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_205 = V_8;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_206;
		memset((&L_206), 0, sizeof(L_206));
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&L_206), L_205, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		V_27 = L_206;
		goto IL_056e;
	}

IL_056e:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_207 = V_27;
		return L_207;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_CreateDescriptors_m514EBF7EC110BEF11524BE631921C4133C33B493_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_0 = 1;
		bool L_0 = (bool)__this->___hasNormals_7;
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		bool L_3 = (bool)__this->___hasTangents_8;
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_6 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_5 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_0;
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
	}

IL_003e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_11 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_6 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_14 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_7 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0064:
	{
		int32_t L_17 = V_0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_18 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)SZArrayNew(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2_il2cpp_TypeInfo_var, (uint32_t)L_17);
		((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3), (void*)L_18);
		V_1 = 0;
		V_2 = 0;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_19 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_22;
		memset((&L_22), 0, sizeof(L_22));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_22), (int32_t)0, (int32_t)0, 3, L_21, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		bool L_24 = (bool)__this->___hasNormals_7;
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_26 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_29;
		memset((&L_29), 0, sizeof(L_29));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_29), (int32_t)1, (int32_t)0, 3, L_28, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_29);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b4:
	{
		bool L_31 = (bool)__this->___hasTangents_8;
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00db;
		}
	}
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_33 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36;
		memset((&L_36), 0, sizeof(L_36));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_36), (int32_t)2, (int32_t)0, 4, L_35, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00db:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_39 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_10 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_010c;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_41 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_42 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_41, L_42, L_43, L_44);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010c:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_47 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_11 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0136;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_49 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_50 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t*, int32_t >::Invoke(5, L_49, L_50, (&V_1), L_51);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_53 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_12 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_12;
		if (!L_54)
		{
			goto IL_0163;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_55 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_56 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55);
		VirtualActionInvoker3< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t, int32_t >::Invoke(5, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_55, L_56, L_57, L_58);
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 2));
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0163:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_ApplyOnMesh_m1BA8E976CD55A90BF728E336ED2D9ADE51F03F81_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral5B957040DDBB1ED08EFED87262335A473AC6345A, NULL);
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_0 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		V_1 = (bool)((((RuntimeObject*)(VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((  void (*) (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0022:
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralEFC60B042DA5F07CA9FB322ACCFC919D99E535C4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_msh;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_5 = (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)((VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6*)__this)->___vad_3;
		NullCheck(L_2);
		Mesh_SetVertexBufferParams_m8033EB85082C142DCE8B69FFBAD26D7DFB0330B2(L_2, L_4, L_5, NULL);
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral857FFFE2BBFE40F203A9BBB8BA2864257B72D981, NULL);
		V_0 = 0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_msh;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18)__this->___vData_6;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		int32_t L_9;
		L_9 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_flags;
		NullCheck(L_6);
		((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, L_7, 0, 0, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_13 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_15 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___0_msh;
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_flags;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_15, L_16, L_17, L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00a0:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_20 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_22 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = ___0_msh;
		int32_t L_24 = V_0;
		int32_t L_25 = ___1_flags;
		NullCheck(L_22);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, L_22, L_23, L_24, L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c2:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_27 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_4 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_29 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = ___0_msh;
		int32_t L_31 = V_0;
		int32_t L_32 = ___1_flags;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29);
		VirtualActionInvoker3< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t >::Invoke(6, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_29, L_30, L_31, L_32);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e6:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferConfig_1_Dispose_mFA00D33A88E7F887B81DFB9AAD1D49E9D009B33A_gshared (VertexBufferConfig_1_tFB5B0DE36E6B7A5E14B9059BAB32B7792670B7A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___vData_6);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_4 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		V_1 = (bool)((!(((RuntimeObject*)(VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA* L_6 = (VertexBufferColors_tEF6C015F453B9211A3317E5AF8A19E5CBC4EB1BA*)__this->___colors_12;
		NullCheck((VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
		VirtualActionInvoker0::Invoke(7, (VertexBufferColorsBase_tC8E799F3B6DB6E298E3ECCB11C927C73FA0D9BC2*)L_6);
	}

IL_0039:
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_7 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		V_2 = (bool)((!(((RuntimeObject*)(VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* L_9 = (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this->___texCoords_11;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7, L_9);
	}

IL_0054:
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_10 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		V_3 = (bool)((!(((RuntimeObject*)(VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94* L_12 = (VertexBufferBones_tC987D4A60BFAFBABC22E567509B61F8671154A94*)__this->___bones_13;
		NullCheck((VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
		VirtualActionInvoker0::Invoke(7, (VertexBufferBonesBase_t2FB9EEA1E3AABDD44AD9D2091B184F973E35A96A*)L_12);
	}

IL_006f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1__ctor_mAE7613FD1AA242A6096C7AEFFBACE1070C8F97BC_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferTexCoordsBase__ctor_mA682BA6A3A3EC590E91298EFFA1CD36D561550C5((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexBufferTexCoords_1_ScheduleVertexUVJobs_mC8D674602411958A327300BDD19380744623EA49_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, RuntimeObject* ___0_buffers, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_uvAccessorIndices, int32_t ___2_vertexCount, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___3_handles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DABCF2A50674181E71D868E8D9317885CB53D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099E35199E899B7796FB5803C6465BF879088CC);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_4 = NULL;
	void* V_5 = NULL;
	int32_t V_6 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralA6DABCF2A50674181E71D868E8D9317885CB53D2, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		int32_t L_0 = ___2_vertexCount;
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m1BA84A1F51723A5804D44113CB7EAFB1C8C38A99((&L_1), L_0, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___vData_2 = L_1;
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 L_2 = (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313)__this->___vData_2;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_mF524D1423BA04CC1D82B68F03416BB0D9F2D0D07(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (uint8_t*)L_3;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_uvAccessorIndices;
		NullCheck(L_4);
		NullCheck((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this);
		VertexBufferTexCoordsBase_set_uvSetCount_mEB29B27EBCA5D9FF11328CBAE6270BF9FA1A4982_inline((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_uvAccessorIndices;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_5)->max_length)), 8));
		V_2 = 0;
		goto IL_00e5;
	}

IL_004e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_uvAccessorIndices;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		RuntimeObject* L_10 = ___0_buffers;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_10, L_11, (&V_4), (&V_5), (&V_6));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_12 = V_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_12, NULL);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_15 = (RuntimeObject*)((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this)->___logger_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE099E35199E899B7796FB5803C6465BF879088CC);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_15, (uint32_t)((int32_t)42), L_17);
	}

IL_008c:
	{
		void* L_18 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)L_19->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)L_21->___componentType_2;
		int32_t L_23 = V_6;
		uint8_t* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = (bool)L_27->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_29;
		L_29 = VertexBufferTexCoords_1_GetUvsJob_m19509C7BDDDFA9760D838465C43702B020827838(__this, L_18, L_20, L_22, L_23, (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 8)))), L_26, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_7 = L_29;
		bool L_30;
		L_30 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_7), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_32 = V_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_33;
		L_33 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_7), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A((&___3_handles), L_32, L_33, NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_RuntimeMethod_var);
		goto IL_00e0;
	}

IL_00d4:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		V_10 = (bool)0;
		goto IL_00ff;
	}

IL_00e0:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e5:
	{
		int32_t L_35 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___1_uvAccessorIndices;
		NullCheck(L_36);
		V_11 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_004e;
		}
	}
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		V_10 = (bool)1;
		goto IL_00ff;
	}

IL_00ff:
	{
		bool L_38 = V_10;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_AddDescriptors_m35CA44A8D5BAC99E6696B5D6B552F8C8CF49DEA5_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_dst, int32_t* ___1_offset, int32_t ___2_stream, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (int32_t)4;
		V_1 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (int32_t)5;
	}

IL_0014:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_2 = ___0_dst;
		int32_t* L_3 = ___1_offset;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		int32_t L_6 = ___2_stream;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_7;
		memset((&L_7), 0, sizeof(L_7));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_7), L_5, (int32_t)0, 2, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_7);
		int32_t* L_8 = ___1_offset;
		int32_t* L_9 = ___1_offset;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		NullCheck((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this);
		int32_t L_13;
		L_13 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, NULL);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_ApplyOnMesh_mB41FCF57FBE322FD93B61DCE1CCA2A7D009A99A5_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_stream, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9612005F8E517605A5DAAF3B087F2727B6EC133C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral9612005F8E517605A5DAAF3B087F2727B6EC133C, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_msh;
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313 L_1 = (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313)__this->___vData_2;
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* L_2 = (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*)(&__this->___vData_2);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___1_stream;
		int32_t L_5 = ___2_flags;
		NullCheck(L_0);
		Mesh_SetVertexBufferData_TisVTexCoord1_tBE16AAD03CD6B8049B1D88CA01AC26B34D71F4A9_m48A57644B8C7C2218F25EC3053DCC7E84CDC8BA3(L_0, L_1, 0, 0, L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_Dispose_m0532DD5B8EE2C65F654DE88F24FD69260657D618_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* L_0 = (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*)(&__this->___vData_2);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m47651702D651C122A2B01BB40A8E917710D3099C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313* L_3 = (NativeArray_1_t6C4A7357B053718CE61F4EED5DAEB50002965313*)(&__this->___vData_2);
		NativeArray_1_Dispose_mD862E6EE54C32A0F39ABA2451CC507C6950F4A2F(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m19509C7BDDDFA9760D838465C43702B020827838_gshared (VertexBufferTexCoords_1_tC3BDF50CB5E32BFCCFB7064627B3D5DC83393482* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1836F7682CB441E873EB35D4F26A4D2F03D1B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25A18EECC3B71FE7DC49876B54488AEC789DC3D);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 V_5;
	memset((&V_5), 0, sizeof(V_5));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB V_10;
	memset((&V_10), 0, sizeof(V_10));
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA V_13;
	memset((&V_13), 0, sizeof(V_13));
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA V_14;
	memset((&V_14), 0, sizeof(V_14));
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C V_15;
	memset((&V_15), 0, sizeof(V_15));
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB V_18;
	memset((&V_18), 0, sizeof(V_18));
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB V_19;
	memset((&V_19), 0, sizeof(V_19));
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B V_20;
	memset((&V_20), 0, sizeof(V_20));
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 V_23;
	memset((&V_23), 0, sizeof(V_23));
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 V_24;
	memset((&V_24), 0, sizeof(V_24));
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B V_25;
	memset((&V_25), 0, sizeof(V_25));
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B4_0 = NULL;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B5_1 = NULL;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B9_0 = NULL;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B10_1 = NULL;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B13_0 = NULL;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B14_1 = NULL;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B19_0 = NULL;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B20_1 = NULL;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B23_0 = NULL;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B24_1 = NULL;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B29_0 = NULL;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B30_1 = NULL;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B33_0 = NULL;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B34_1 = NULL;
	int32_t G_B39_0 = 0;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B42_0 = NULL;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B43_1 = NULL;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B46_0 = NULL;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B45_0 = NULL;
	int32_t G_B47_0 = 0;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B47_1 = NULL;
	RuntimeObject* G_B51_0 = NULL;
	RuntimeObject* G_B50_0 = NULL;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral1836F7682CB441E873EB35D4F26A4D2F03D1B4BF, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		int32_t L_0 = ___2_inputType;
		V_3 = L_0;
		int32_t L_1 = V_3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)5120))))
		{
			case 0:
			{
				goto IL_02d8;
			}
			case 1:
			{
				goto IL_00a1;
			}
			case 2:
			{
				goto IL_021b;
			}
			case 3:
			{
				goto IL_015e;
			}
			case 4:
			{
				goto IL_039d;
			}
			case 5:
			{
				goto IL_039d;
			}
			case 6:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_039d;
	}

IL_0045:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89));
		int32_t L_3 = ___3_inputByteStride;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			G_B4_0 = (&V_5);
			goto IL_0058;
		}
		G_B3_0 = (&V_5);
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		goto IL_005a;
	}

IL_0058:
	{
		int32_t L_4 = ___3_inputByteStride;
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_005a:
	{
		G_B5_1->___inputByteStride_0 = G_B5_0;
		void* L_5 = ___0_input;
		(&V_5)->___input_1 = (uint8_t*)L_5;
		int32_t L_6 = ___5_outputByteStride;
		(&V_5)->___outputByteStride_2 = L_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_7 = ___4_output;
		(&V_5)->___result_3 = L_7;
		ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 L_8 = V_5;
		V_4 = L_8;
		ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 L_9 = V_4;
		int32_t L_10 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_12;
		L_12 = IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B(L_9, L_10, ((int32_t)512), L_11, IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_12, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_03d1;
	}

IL_00a1:
	{
		bool L_13 = ___6_normalized;
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1));
		int32_t L_15 = ___3_inputByteStride;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			G_B9_0 = (&V_9);
			goto IL_00bc;
		}
		G_B8_0 = (&V_9);
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_00be;
	}

IL_00bc:
	{
		int32_t L_16 = ___3_inputByteStride;
		G_B10_0 = L_16;
		G_B10_1 = G_B9_0;
	}

IL_00be:
	{
		G_B10_1->___inputByteStride_0 = G_B10_0;
		void* L_17 = ___0_input;
		(&V_9)->___input_1 = (uint8_t*)L_17;
		int32_t L_18 = ___5_outputByteStride;
		(&V_9)->___outputByteStride_2 = L_18;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_19 = ___4_output;
		(&V_9)->___result_3 = L_19;
		ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 L_20 = V_9;
		V_8 = L_20;
		ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 L_21 = V_8;
		int32_t L_22 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_23 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_24;
		L_24 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E(L_21, L_22, ((int32_t)512), L_23, IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_24, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_0159;
	}

IL_0102:
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB));
		int32_t L_25 = ___3_inputByteStride;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			G_B13_0 = (&V_11);
			goto IL_0115;
		}
		G_B12_0 = (&V_11);
	}
	{
		G_B14_0 = 2;
		G_B14_1 = G_B12_0;
		goto IL_0117;
	}

IL_0115:
	{
		int32_t L_26 = ___3_inputByteStride;
		G_B14_0 = L_26;
		G_B14_1 = G_B13_0;
	}

IL_0117:
	{
		G_B14_1->___inputByteStride_0 = G_B14_0;
		void* L_27 = ___0_input;
		(&V_11)->___input_1 = (uint8_t*)L_27;
		int32_t L_28 = ___5_outputByteStride;
		(&V_11)->___outputByteStride_2 = L_28;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_29 = ___4_output;
		(&V_11)->___result_3 = L_29;
		ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB L_30 = V_11;
		V_10 = L_30;
		ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB L_31 = V_10;
		int32_t L_32 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_33 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_34;
		L_34 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5(L_31, L_32, ((int32_t)512), L_33, IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_34, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_0159:
	{
		goto IL_03d1;
	}

IL_015e:
	{
		bool L_35 = ___6_normalized;
		V_12 = L_35;
		bool L_36 = V_12;
		if (!L_36)
		{
			goto IL_01bf;
		}
	}
	{
		il2cpp_codegen_initobj((&V_14), sizeof(ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA));
		int32_t L_37 = ___3_inputByteStride;
		if ((((int32_t)L_37) > ((int32_t)0)))
		{
			G_B19_0 = (&V_14);
			goto IL_0179;
		}
		G_B18_0 = (&V_14);
	}
	{
		G_B20_0 = 4;
		G_B20_1 = G_B18_0;
		goto IL_017b;
	}

IL_0179:
	{
		int32_t L_38 = ___3_inputByteStride;
		G_B20_0 = L_38;
		G_B20_1 = G_B19_0;
	}

IL_017b:
	{
		G_B20_1->___inputByteStride_0 = G_B20_0;
		void* L_39 = ___0_input;
		(&V_14)->___input_1 = (uint8_t*)L_39;
		int32_t L_40 = ___5_outputByteStride;
		(&V_14)->___outputByteStride_2 = L_40;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_41 = ___4_output;
		(&V_14)->___result_3 = L_41;
		ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA L_42 = V_14;
		V_13 = L_42;
		ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA L_43 = V_13;
		int32_t L_44 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_45 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_46;
		L_46 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850(L_43, L_44, ((int32_t)512), L_45, IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_46, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_0216;
	}

IL_01bf:
	{
		il2cpp_codegen_initobj((&V_16), sizeof(ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C));
		int32_t L_47 = ___3_inputByteStride;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			G_B23_0 = (&V_16);
			goto IL_01d2;
		}
		G_B22_0 = (&V_16);
	}
	{
		G_B24_0 = 4;
		G_B24_1 = G_B22_0;
		goto IL_01d4;
	}

IL_01d2:
	{
		int32_t L_48 = ___3_inputByteStride;
		G_B24_0 = L_48;
		G_B24_1 = G_B23_0;
	}

IL_01d4:
	{
		G_B24_1->___inputByteStride_0 = G_B24_0;
		void* L_49 = ___0_input;
		(&V_16)->___input_1 = (uint8_t*)L_49;
		int32_t L_50 = ___5_outputByteStride;
		(&V_16)->___outputByteStride_2 = L_50;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_51 = ___4_output;
		(&V_16)->___result_3 = L_51;
		ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C L_52 = V_16;
		V_15 = L_52;
		ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C L_53 = V_15;
		int32_t L_54 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_55 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56;
		L_56 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4(L_53, L_54, ((int32_t)512), L_55, IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_56, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_0216:
	{
		goto IL_03d1;
	}

IL_021b:
	{
		bool L_57 = ___6_normalized;
		V_17 = L_57;
		bool L_58 = V_17;
		if (!L_58)
		{
			goto IL_027c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_19), sizeof(ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB));
		int32_t L_59 = ___3_inputByteStride;
		if ((((int32_t)L_59) > ((int32_t)0)))
		{
			G_B29_0 = (&V_19);
			goto IL_0236;
		}
		G_B28_0 = (&V_19);
	}
	{
		G_B30_0 = 4;
		G_B30_1 = G_B28_0;
		goto IL_0238;
	}

IL_0236:
	{
		int32_t L_60 = ___3_inputByteStride;
		G_B30_0 = L_60;
		G_B30_1 = G_B29_0;
	}

IL_0238:
	{
		G_B30_1->___inputByteStride_0 = G_B30_0;
		void* L_61 = ___0_input;
		(&V_19)->___input_1 = (int16_t*)L_61;
		int32_t L_62 = ___5_outputByteStride;
		(&V_19)->___outputByteStride_2 = L_62;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_63 = ___4_output;
		(&V_19)->___result_3 = L_63;
		ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB L_64 = V_19;
		V_18 = L_64;
		ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB L_65 = V_18;
		int32_t L_66 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_67 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_68;
		L_68 = IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8(L_65, L_66, ((int32_t)512), L_67, IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_68, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_02d3;
	}

IL_027c:
	{
		il2cpp_codegen_initobj((&V_21), sizeof(ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B));
		int32_t L_69 = ___3_inputByteStride;
		if ((((int32_t)L_69) > ((int32_t)0)))
		{
			G_B33_0 = (&V_21);
			goto IL_028f;
		}
		G_B32_0 = (&V_21);
	}
	{
		G_B34_0 = 4;
		G_B34_1 = G_B32_0;
		goto IL_0291;
	}

IL_028f:
	{
		int32_t L_70 = ___3_inputByteStride;
		G_B34_0 = L_70;
		G_B34_1 = G_B33_0;
	}

IL_0291:
	{
		G_B34_1->___inputByteStride_0 = G_B34_0;
		void* L_71 = ___0_input;
		(&V_21)->___input_1 = (int16_t*)L_71;
		int32_t L_72 = ___5_outputByteStride;
		(&V_21)->___outputByteStride_2 = L_72;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_73 = ___4_output;
		(&V_21)->___result_3 = L_73;
		ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B L_74 = V_21;
		V_20 = L_74;
		ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B L_75 = V_20;
		int32_t L_76 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_77 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_78;
		L_78 = IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C(L_75, L_76, ((int32_t)512), L_77, IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_78, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_02d3:
	{
		goto IL_03d1;
	}

IL_02d8:
	{
		int32_t L_79 = ___3_inputByteStride;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_02e0;
		}
	}
	{
		G_B39_0 = 2;
		goto IL_02e2;
	}

IL_02e0:
	{
		int32_t L_80 = ___3_inputByteStride;
		G_B39_0 = L_80;
	}

IL_02e2:
	{
		V_1 = G_B39_0;
		bool L_81 = ___6_normalized;
		V_22 = L_81;
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_0344;
		}
	}
	{
		il2cpp_codegen_initobj((&V_24), sizeof(ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5));
		int32_t L_83 = ___3_inputByteStride;
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			G_B42_0 = (&V_24);
			goto IL_02fe;
		}
		G_B41_0 = (&V_24);
	}
	{
		G_B43_0 = 2;
		G_B43_1 = G_B41_0;
		goto IL_0300;
	}

IL_02fe:
	{
		int32_t L_84 = ___3_inputByteStride;
		G_B43_0 = L_84;
		G_B43_1 = G_B42_0;
	}

IL_0300:
	{
		G_B43_1->___inputByteStride_0 = G_B43_0;
		void* L_85 = ___0_input;
		(&V_24)->___input_1 = (int8_t*)L_85;
		int32_t L_86 = ___5_outputByteStride;
		(&V_24)->___outputByteStride_2 = L_86;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_87 = ___4_output;
		(&V_24)->___result_3 = L_87;
		ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 L_88 = V_24;
		V_23 = L_88;
		ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 L_89 = V_23;
		int32_t L_90 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_91 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_92;
		L_92 = IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896(L_89, L_90, ((int32_t)512), L_91, IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_92, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_039b;
	}

IL_0344:
	{
		il2cpp_codegen_initobj((&V_26), sizeof(ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B));
		int32_t L_93 = ___3_inputByteStride;
		if ((((int32_t)L_93) > ((int32_t)0)))
		{
			G_B46_0 = (&V_26);
			goto IL_0357;
		}
		G_B45_0 = (&V_26);
	}
	{
		G_B47_0 = 2;
		G_B47_1 = G_B45_0;
		goto IL_0359;
	}

IL_0357:
	{
		int32_t L_94 = ___3_inputByteStride;
		G_B47_0 = L_94;
		G_B47_1 = G_B46_0;
	}

IL_0359:
	{
		G_B47_1->___inputByteStride_0 = G_B47_0;
		void* L_95 = ___0_input;
		(&V_26)->___input_1 = (int8_t*)L_95;
		int32_t L_96 = ___5_outputByteStride;
		(&V_26)->___outputByteStride_2 = L_96;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_97 = ___4_output;
		(&V_26)->___result_3 = L_97;
		ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B L_98 = V_26;
		V_25 = L_98;
		ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B L_99 = V_25;
		int32_t L_100 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_102;
		L_102 = IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572(L_99, L_100, ((int32_t)512), L_101, IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_102, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_039b:
	{
		goto IL_03d1;
	}

IL_039d:
	{
		RuntimeObject* L_103 = (RuntimeObject*)((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this)->___logger_0;
		RuntimeObject* L_104 = L_103;
		if (L_104)
		{
			G_B51_0 = L_104;
			goto IL_03a9;
		}
		G_B50_0 = L_104;
	}
	{
		goto IL_03cf;
	}

IL_03a9:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_106 = L_105;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF25A18EECC3B71FE7DC49876B54488AEC789DC3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_106;
		Il2CppFakeBox<int32_t> L_108(GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var, (&___2_inputType));
		String_t* L_109;
		L_109 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_108), NULL);
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_109);
		NullCheck(G_B51_0);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, G_B51_0, (uint32_t)((int32_t)48), L_107);
	}

IL_03cf:
	{
		goto IL_03d1;
	}

IL_03d1:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_110 = V_0;
		V_27 = L_110;
		goto IL_03dc;
	}

IL_03dc:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_111 = V_27;
		return L_111;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1__ctor_m0F6FBE93401E4483E25F311AC13F2751C829C318_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_logger;
		VertexBufferTexCoordsBase__ctor_mA682BA6A3A3EC590E91298EFFA1CD36D561550C5((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexBufferTexCoords_1_ScheduleVertexUVJobs_m5067CC7FB70C5E6A66041E086F6708E2779A26E6_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, RuntimeObject* ___0_buffers, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_uvAccessorIndices, int32_t ___2_vertexCount, NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___3_handles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DABCF2A50674181E71D868E8D9317885CB53D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099E35199E899B7796FB5803C6465BF879088CC);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_4 = NULL;
	void* V_5 = NULL;
	int32_t V_6 = 0;
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteralA6DABCF2A50674181E71D868E8D9317885CB53D2, NULL);
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral2EF5EFD574A608A83CF9064628FA98780588F57F, NULL);
		int32_t L_0 = ___2_vertexCount;
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m7A519877353656E33CB26AC5D85DAAAD9D32326F((&L_1), L_0, (int32_t)4, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___vData_2 = L_1;
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B L_2 = (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B)__this->___vData_2;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_mC3FA4D9E8BCF32F7C01E4EB5D2E30CB0494ECFE0(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (uint8_t*)L_3;
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_uvAccessorIndices;
		NullCheck(L_4);
		NullCheck((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this);
		VertexBufferTexCoordsBase_set_uvSetCount_mEB29B27EBCA5D9FF11328CBAE6270BF9FA1A4982_inline((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_uvAccessorIndices;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_5)->max_length)), 8));
		V_2 = 0;
		goto IL_00e5;
	}

IL_004e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_uvAccessorIndices;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		RuntimeObject* L_10 = ___0_buffers;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		InterfaceActionInvoker4< int32_t, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062**, void**, int32_t* >::Invoke(0, IGltfBuffers_t00BA2FBEDB51454535E849F99340C2DDB9D60E47_il2cpp_TypeInfo_var, L_10, L_11, (&V_4), (&V_5), (&V_6));
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_12 = V_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572(L_12, NULL);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_15 = (RuntimeObject*)((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this)->___logger_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE099E35199E899B7796FB5803C6465BF879088CC);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, L_15, (uint32_t)((int32_t)42), L_17);
	}

IL_008c:
	{
		void* L_18 = V_5;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)L_19->___count_4;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)L_21->___componentType_2;
		int32_t L_23 = V_6;
		uint8_t* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = (bool)L_27->___normalized_3;
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_29;
		L_29 = VertexBufferTexCoords_1_GetUvsJob_m8E72AF590C766BD30B44D869FF23574883C8FC45(__this, L_18, L_20, L_22, L_23, (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 8)))), L_26, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_7 = L_29;
		bool L_30;
		L_30 = Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_inline((&V_7), Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_RuntimeMethod_var);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_32 = V_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_33;
		L_33 = Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73((&V_7), Nullable_1_get_Value_m35132F34816B551520C24C7FE0A77D2DA8B59B73_RuntimeMethod_var);
		NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A((&___3_handles), L_32, L_33, NativeSlice_1_set_Item_m4136C1EFFCBE42A205C02C31DF940F5950F69E2A_RuntimeMethod_var);
		goto IL_00e0;
	}

IL_00d4:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		V_10 = (bool)0;
		goto IL_00ff;
	}

IL_00e0:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e5:
	{
		int32_t L_35 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___1_uvAccessorIndices;
		NullCheck(L_36);
		V_11 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_004e;
		}
	}
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		V_10 = (bool)1;
		goto IL_00ff;
	}

IL_00ff:
	{
		bool L_38 = V_10;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_AddDescriptors_mA5BEE07FBD97A237837A31C606734A13D176246A_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_dst, int32_t* ___1_offset, int32_t ___2_stream, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (int32_t)4;
		V_1 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (int32_t)5;
	}

IL_0014:
	{
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_2 = ___0_dst;
		int32_t* L_3 = ___1_offset;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		int32_t L_6 = ___2_stream;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_7;
		memset((&L_7), 0, sizeof(L_7));
		VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A((&L_7), L_5, (int32_t)0, 2, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76)L_7);
		int32_t* L_8 = ___1_offset;
		int32_t* L_9 = ___1_offset;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		NullCheck((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this);
		int32_t L_13;
		L_13 = VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this, NULL);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_ApplyOnMesh_m45E1042076405145B2D700BF39CA89968BFF046D_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_msh, int32_t ___1_stream, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9612005F8E517605A5DAAF3B087F2727B6EC133C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral9612005F8E517605A5DAAF3B087F2727B6EC133C, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_msh;
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B L_1 = (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B)__this->___vData_2;
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* L_2 = (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*)(&__this->___vData_2);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___1_stream;
		int32_t L_5 = ___2_flags;
		NullCheck(L_0);
		Mesh_SetVertexBufferData_TisVTexCoord2_tB42C28FB21409F1B17B9EC52611E806B1448A32F_m1539E19AC03F83FBB649E6433C0450530D2019B7(L_0, L_1, 0, 0, L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexBufferTexCoords_1_Dispose_m3FDDD016E153CE31C29405C8D80628F1F12D9B94_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* L_0 = (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*)(&__this->___vData_2);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m11DD67623A1C17A38C09B61FCB8443B2126273D5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B* L_3 = (NativeArray_1_tB2C1C169B592627CDAF43F7E5E024063D054AD5B*)(&__this->___vData_2);
		NativeArray_1_Dispose_mAAAC7BFBE5048F115833AE826C1F1B5E71956840(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 VertexBufferTexCoords_1_GetUvsJob_m8E72AF590C766BD30B44D869FF23574883C8FC45_gshared (VertexBufferTexCoords_1_t6CBD8211FE92E60197C0EF941C957A983526EB23* __this, void* ___0_input, int32_t ___1_count, int32_t ___2_inputType, int32_t ___3_inputByteStride, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___4_output, int32_t ___5_outputByteStride, bool ___6_normalized, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1836F7682CB441E873EB35D4F26A4D2F03D1B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25A18EECC3B71FE7DC49876B54488AEC789DC3D);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 V_5;
	memset((&V_5), 0, sizeof(V_5));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB V_10;
	memset((&V_10), 0, sizeof(V_10));
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA V_13;
	memset((&V_13), 0, sizeof(V_13));
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA V_14;
	memset((&V_14), 0, sizeof(V_14));
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C V_15;
	memset((&V_15), 0, sizeof(V_15));
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB V_18;
	memset((&V_18), 0, sizeof(V_18));
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB V_19;
	memset((&V_19), 0, sizeof(V_19));
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B V_20;
	memset((&V_20), 0, sizeof(V_20));
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 V_23;
	memset((&V_23), 0, sizeof(V_23));
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 V_24;
	memset((&V_24), 0, sizeof(V_24));
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B V_25;
	memset((&V_25), 0, sizeof(V_25));
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B V_26;
	memset((&V_26), 0, sizeof(V_26));
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 V_27;
	memset((&V_27), 0, sizeof(V_27));
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B4_0 = NULL;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* G_B5_1 = NULL;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B9_0 = NULL;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* G_B10_1 = NULL;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B13_0 = NULL;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* G_B14_1 = NULL;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B19_0 = NULL;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* G_B20_1 = NULL;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B23_0 = NULL;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* G_B24_1 = NULL;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B29_0 = NULL;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* G_B30_1 = NULL;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B33_0 = NULL;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* G_B34_1 = NULL;
	int32_t G_B39_0 = 0;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B42_0 = NULL;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* G_B43_1 = NULL;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B46_0 = NULL;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B45_0 = NULL;
	int32_t G_B47_0 = 0;
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* G_B47_1 = NULL;
	RuntimeObject* G_B51_0 = NULL;
	RuntimeObject* G_B50_0 = NULL;
	{
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(_stringLiteral1836F7682CB441E873EB35D4F26A4D2F03D1B4BF, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489));
		int32_t L_0 = ___2_inputType;
		V_3 = L_0;
		int32_t L_1 = V_3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)5120))))
		{
			case 0:
			{
				goto IL_02d8;
			}
			case 1:
			{
				goto IL_00a1;
			}
			case 2:
			{
				goto IL_021b;
			}
			case 3:
			{
				goto IL_015e;
			}
			case 4:
			{
				goto IL_039d;
			}
			case 5:
			{
				goto IL_039d;
			}
			case 6:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_039d;
	}

IL_0045:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89));
		int32_t L_3 = ___3_inputByteStride;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			G_B4_0 = (&V_5);
			goto IL_0058;
		}
		G_B3_0 = (&V_5);
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		goto IL_005a;
	}

IL_0058:
	{
		int32_t L_4 = ___3_inputByteStride;
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_005a:
	{
		G_B5_1->___inputByteStride_0 = G_B5_0;
		void* L_5 = ___0_input;
		(&V_5)->___input_1 = (uint8_t*)L_5;
		int32_t L_6 = ___5_outputByteStride;
		(&V_5)->___outputByteStride_2 = L_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_7 = ___4_output;
		(&V_5)->___result_3 = L_7;
		ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 L_8 = V_5;
		V_4 = L_8;
		ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 L_9 = V_4;
		int32_t L_10 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_12;
		L_12 = IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B(L_9, L_10, ((int32_t)512), L_11, IJobParallelForExtensions_Schedule_TisConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89_mA8876033E0A607F09F276C2E0840AAFF31C4931B_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_12, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_03d1;
	}

IL_00a1:
	{
		bool L_13 = ___6_normalized;
		V_7 = L_13;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1));
		int32_t L_15 = ___3_inputByteStride;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			G_B9_0 = (&V_9);
			goto IL_00bc;
		}
		G_B8_0 = (&V_9);
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_00be;
	}

IL_00bc:
	{
		int32_t L_16 = ___3_inputByteStride;
		G_B10_0 = L_16;
		G_B10_1 = G_B9_0;
	}

IL_00be:
	{
		G_B10_1->___inputByteStride_0 = G_B10_0;
		void* L_17 = ___0_input;
		(&V_9)->___input_1 = (uint8_t*)L_17;
		int32_t L_18 = ___5_outputByteStride;
		(&V_9)->___outputByteStride_2 = L_18;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_19 = ___4_output;
		(&V_9)->___result_3 = L_19;
		ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 L_20 = V_9;
		V_8 = L_20;
		ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 L_21 = V_8;
		int32_t L_22 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_23 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_24;
		L_24 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E(L_21, L_22, ((int32_t)512), L_23, IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1_mF44365369C2DA0F87C1A1DD4493B59A812AACC9E_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_24, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_0159;
	}

IL_0102:
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB));
		int32_t L_25 = ___3_inputByteStride;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			G_B13_0 = (&V_11);
			goto IL_0115;
		}
		G_B12_0 = (&V_11);
	}
	{
		G_B14_0 = 2;
		G_B14_1 = G_B12_0;
		goto IL_0117;
	}

IL_0115:
	{
		int32_t L_26 = ___3_inputByteStride;
		G_B14_0 = L_26;
		G_B14_1 = G_B13_0;
	}

IL_0117:
	{
		G_B14_1->___inputByteStride_0 = G_B14_0;
		void* L_27 = ___0_input;
		(&V_11)->___input_1 = (uint8_t*)L_27;
		int32_t L_28 = ___5_outputByteStride;
		(&V_11)->___outputByteStride_2 = L_28;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_29 = ___4_output;
		(&V_11)->___result_3 = L_29;
		ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB L_30 = V_11;
		V_10 = L_30;
		ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB L_31 = V_10;
		int32_t L_32 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_33 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_34;
		L_34 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5(L_31, L_32, ((int32_t)512), L_33, IJobParallelForExtensions_Schedule_TisConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB_m502613427EE465896678D399C73C3148EC4ADCE5_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_34, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_0159:
	{
		goto IL_03d1;
	}

IL_015e:
	{
		bool L_35 = ___6_normalized;
		V_12 = L_35;
		bool L_36 = V_12;
		if (!L_36)
		{
			goto IL_01bf;
		}
	}
	{
		il2cpp_codegen_initobj((&V_14), sizeof(ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA));
		int32_t L_37 = ___3_inputByteStride;
		if ((((int32_t)L_37) > ((int32_t)0)))
		{
			G_B19_0 = (&V_14);
			goto IL_0179;
		}
		G_B18_0 = (&V_14);
	}
	{
		G_B20_0 = 4;
		G_B20_1 = G_B18_0;
		goto IL_017b;
	}

IL_0179:
	{
		int32_t L_38 = ___3_inputByteStride;
		G_B20_0 = L_38;
		G_B20_1 = G_B19_0;
	}

IL_017b:
	{
		G_B20_1->___inputByteStride_0 = G_B20_0;
		void* L_39 = ___0_input;
		(&V_14)->___input_1 = (uint8_t*)L_39;
		int32_t L_40 = ___5_outputByteStride;
		(&V_14)->___outputByteStride_2 = L_40;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_41 = ___4_output;
		(&V_14)->___result_3 = L_41;
		ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA L_42 = V_14;
		V_13 = L_42;
		ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA L_43 = V_13;
		int32_t L_44 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_45 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_46;
		L_46 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850(L_43, L_44, ((int32_t)512), L_45, IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA_m8A8F9336ED94EAB202DA66E950B1CE9D85DAB850_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_46, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_0216;
	}

IL_01bf:
	{
		il2cpp_codegen_initobj((&V_16), sizeof(ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C));
		int32_t L_47 = ___3_inputByteStride;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			G_B23_0 = (&V_16);
			goto IL_01d2;
		}
		G_B22_0 = (&V_16);
	}
	{
		G_B24_0 = 4;
		G_B24_1 = G_B22_0;
		goto IL_01d4;
	}

IL_01d2:
	{
		int32_t L_48 = ___3_inputByteStride;
		G_B24_0 = L_48;
		G_B24_1 = G_B23_0;
	}

IL_01d4:
	{
		G_B24_1->___inputByteStride_0 = G_B24_0;
		void* L_49 = ___0_input;
		(&V_16)->___input_1 = (uint8_t*)L_49;
		int32_t L_50 = ___5_outputByteStride;
		(&V_16)->___outputByteStride_2 = L_50;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_51 = ___4_output;
		(&V_16)->___result_3 = L_51;
		ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C L_52 = V_16;
		V_15 = L_52;
		ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C L_53 = V_15;
		int32_t L_54 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_55 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56;
		L_56 = IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4(L_53, L_54, ((int32_t)512), L_55, IJobParallelForExtensions_Schedule_TisConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C_mC5CD3CD117412A8B128C72CA48E454046A0645D4_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_56, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_0216:
	{
		goto IL_03d1;
	}

IL_021b:
	{
		bool L_57 = ___6_normalized;
		V_17 = L_57;
		bool L_58 = V_17;
		if (!L_58)
		{
			goto IL_027c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_19), sizeof(ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB));
		int32_t L_59 = ___3_inputByteStride;
		if ((((int32_t)L_59) > ((int32_t)0)))
		{
			G_B29_0 = (&V_19);
			goto IL_0236;
		}
		G_B28_0 = (&V_19);
	}
	{
		G_B30_0 = 4;
		G_B30_1 = G_B28_0;
		goto IL_0238;
	}

IL_0236:
	{
		int32_t L_60 = ___3_inputByteStride;
		G_B30_0 = L_60;
		G_B30_1 = G_B29_0;
	}

IL_0238:
	{
		G_B30_1->___inputByteStride_0 = G_B30_0;
		void* L_61 = ___0_input;
		(&V_19)->___input_1 = (int16_t*)L_61;
		int32_t L_62 = ___5_outputByteStride;
		(&V_19)->___outputByteStride_2 = L_62;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_63 = ___4_output;
		(&V_19)->___result_3 = L_63;
		ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB L_64 = V_19;
		V_18 = L_64;
		ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB L_65 = V_18;
		int32_t L_66 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_67 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_68;
		L_68 = IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8(L_65, L_66, ((int32_t)512), L_67, IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB_m39B24B92AA5417288C99DCD12C13CD3E71A813A8_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_68, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_02d3;
	}

IL_027c:
	{
		il2cpp_codegen_initobj((&V_21), sizeof(ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B));
		int32_t L_69 = ___3_inputByteStride;
		if ((((int32_t)L_69) > ((int32_t)0)))
		{
			G_B33_0 = (&V_21);
			goto IL_028f;
		}
		G_B32_0 = (&V_21);
	}
	{
		G_B34_0 = 4;
		G_B34_1 = G_B32_0;
		goto IL_0291;
	}

IL_028f:
	{
		int32_t L_70 = ___3_inputByteStride;
		G_B34_0 = L_70;
		G_B34_1 = G_B33_0;
	}

IL_0291:
	{
		G_B34_1->___inputByteStride_0 = G_B34_0;
		void* L_71 = ___0_input;
		(&V_21)->___input_1 = (int16_t*)L_71;
		int32_t L_72 = ___5_outputByteStride;
		(&V_21)->___outputByteStride_2 = L_72;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_73 = ___4_output;
		(&V_21)->___result_3 = L_73;
		ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B L_74 = V_21;
		V_20 = L_74;
		ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B L_75 = V_20;
		int32_t L_76 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_77 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_78;
		L_78 = IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C(L_75, L_76, ((int32_t)512), L_77, IJobParallelForExtensions_Schedule_TisConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B_m7A5B7D1FAAF53F32E700B11B811CD0D219EEF59C_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_78, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_02d3:
	{
		goto IL_03d1;
	}

IL_02d8:
	{
		int32_t L_79 = ___3_inputByteStride;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_02e0;
		}
	}
	{
		G_B39_0 = 2;
		goto IL_02e2;
	}

IL_02e0:
	{
		int32_t L_80 = ___3_inputByteStride;
		G_B39_0 = L_80;
	}

IL_02e2:
	{
		V_1 = G_B39_0;
		bool L_81 = ___6_normalized;
		V_22 = L_81;
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_0344;
		}
	}
	{
		il2cpp_codegen_initobj((&V_24), sizeof(ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5));
		int32_t L_83 = ___3_inputByteStride;
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			G_B42_0 = (&V_24);
			goto IL_02fe;
		}
		G_B41_0 = (&V_24);
	}
	{
		G_B43_0 = 2;
		G_B43_1 = G_B41_0;
		goto IL_0300;
	}

IL_02fe:
	{
		int32_t L_84 = ___3_inputByteStride;
		G_B43_0 = L_84;
		G_B43_1 = G_B42_0;
	}

IL_0300:
	{
		G_B43_1->___inputByteStride_0 = G_B43_0;
		void* L_85 = ___0_input;
		(&V_24)->___input_1 = (int8_t*)L_85;
		int32_t L_86 = ___5_outputByteStride;
		(&V_24)->___outputByteStride_2 = L_86;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_87 = ___4_output;
		(&V_24)->___result_3 = L_87;
		ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 L_88 = V_24;
		V_23 = L_88;
		ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 L_89 = V_23;
		int32_t L_90 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_91 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_92;
		L_92 = IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896(L_89, L_90, ((int32_t)512), L_91, IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5_mA96FC6E0C6B80AB706257257D1C8ACA0A8604896_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_92, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
		goto IL_039b;
	}

IL_0344:
	{
		il2cpp_codegen_initobj((&V_26), sizeof(ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B));
		int32_t L_93 = ___3_inputByteStride;
		if ((((int32_t)L_93) > ((int32_t)0)))
		{
			G_B46_0 = (&V_26);
			goto IL_0357;
		}
		G_B45_0 = (&V_26);
	}
	{
		G_B47_0 = 2;
		G_B47_1 = G_B45_0;
		goto IL_0359;
	}

IL_0357:
	{
		int32_t L_94 = ___3_inputByteStride;
		G_B47_0 = L_94;
		G_B47_1 = G_B46_0;
	}

IL_0359:
	{
		G_B47_1->___inputByteStride_0 = G_B47_0;
		void* L_95 = ___0_input;
		(&V_26)->___input_1 = (int8_t*)L_95;
		int32_t L_96 = ___5_outputByteStride;
		(&V_26)->___outputByteStride_2 = L_96;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_97 = ___4_output;
		(&V_26)->___result_3 = L_97;
		ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B L_98 = V_26;
		V_25 = L_98;
		ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B L_99 = V_25;
		int32_t L_100 = ___1_count;
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_101 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_102;
		L_102 = IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572(L_99, L_100, ((int32_t)512), L_101, IJobParallelForExtensions_Schedule_TisConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B_m08F8B262B64C9F207BF182CBD24C32C9CFA5D572_RuntimeMethod_var);
		Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526((&V_0), L_102, Nullable_1__ctor_mB41B318820A405D727A0192457EC35740E6B7526_RuntimeMethod_var);
	}

IL_039b:
	{
		goto IL_03d1;
	}

IL_039d:
	{
		RuntimeObject* L_103 = (RuntimeObject*)((VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0*)__this)->___logger_0;
		RuntimeObject* L_104 = L_103;
		if (L_104)
		{
			G_B51_0 = L_104;
			goto IL_03a9;
		}
		G_B50_0 = L_104;
	}
	{
		goto IL_03cf;
	}

IL_03a9:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_106 = L_105;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF25A18EECC3B71FE7DC49876B54488AEC789DC3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_106;
		Il2CppFakeBox<int32_t> L_108(GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var, (&___2_inputType));
		String_t* L_109;
		L_109 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_108), NULL);
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_109);
		NullCheck(G_B51_0);
		InterfaceActionInvoker2< uint32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(0, ICodeLogger_t0AB041B7272F7E2D664B3B8BA707F69E7E8C235A_il2cpp_TypeInfo_var, G_B51_0, (uint32_t)((int32_t)48), L_107);
	}

IL_03cf:
	{
		goto IL_03d1;
	}

IL_03d1:
	{
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_110 = V_0;
		V_27 = L_110;
		goto IL_03dc;
	}

IL_03dc:
	{
		Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 L_111 = V_27;
		return L_111;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline(L_0, NULL);
		String_t* L_1 = ___0_name;
		Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexBufferConfigBase_set_bounds_m12296B12C8903B6D04A8DEE261AB89F39640A0E2_inline (VertexBufferConfigBase_tD5A39ACCE0B3F78EBA37D89F09DB7C06535CFDB6* __this, Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_0 = ___0_value;
		__this->___U3CboundsU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexBufferTexCoordsBase_get_uvSetCount_m1A192E5F7EE46E07B80AF1C27914DF89EC74AE50_inline (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CuvSetCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexBufferTexCoordsBase_set_uvSetCount_mEB29B27EBCA5D9FF11328CBAE6270BF9FA1A4982_inline (VertexBufferTexCoordsBase_tD4FB8C52AAF80656258EE2D6877A9E2899FEC8A0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CuvSetCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, ((*(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5E390FE1B37B443BEE9BE8F3FFC9A0974CCAC80C_gshared_inline (Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D159E683556C06B3B3963D92483B6867EB3233)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
