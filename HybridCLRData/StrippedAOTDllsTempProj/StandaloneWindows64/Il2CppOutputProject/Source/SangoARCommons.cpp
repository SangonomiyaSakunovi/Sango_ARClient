#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1;
struct IEqualityComparer_1_t4C406F82823FF96EEFA77E78C84DE151AFA91A85;
struct KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290;
struct List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842;
struct List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3;
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90;
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ChatGPTCompletionMessageInfoU5BU5D_t1F36F19BAED4677BA812660E2ED9D845A4AEA3E6;
struct ChatGPTCompletionRspChoiceInfoU5BU5D_t7988E9A5CC0C124860DB115AE58EB280543F1B12;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC;
struct ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3;
struct ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F;
struct ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958;
struct ChatGPTConstant_tCD43B9D697FEA9088DDF613CE188188954267F0F;
struct DictTool_t7BD8D57A5F02429A9B314A082026AA9B546F70FB;
struct EmbeddedAttribute_t43ACF1E7A44EDD553B8455638927C5C1566D1DC2;
struct NullableAttribute_t192FD5CF509732F4E862DDF31C153E94E2420760;
struct NullableContextAttribute_t4901B32336E283559C90B2BBA1BB750824C9B4F6;
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t0A6704529697D3F198F26AC12E993CEE9F0A361D 
{
};
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* ____keys;
	ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842  : public RuntimeObject
{
	ChatGPTCompletionMessageInfoU5BU5D_t1F36F19BAED4677BA812660E2ED9D845A4AEA3E6* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3  : public RuntimeObject
{
	ChatGPTCompletionRspChoiceInfoU5BU5D_t7988E9A5CC0C124860DB115AE58EB280543F1B12* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC  : public RuntimeObject
{
	String_t* ___U3CroleU3Ek__BackingField;
	String_t* ___U3CcontentU3Ek__BackingField;
};
struct ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3  : public RuntimeObject
{
	String_t* ___U3CmodelU3Ek__BackingField;
	List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842* ___U3CmessagesU3Ek__BackingField;
	float ___U3CtemperatureU3Ek__BackingField;
};
struct ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	int32_t ___U3CcreatedU3Ek__BackingField;
	String_t* ___U3CmodelU3Ek__BackingField;
	List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3* ___U3CchoicesU3Ek__BackingField;
};
struct ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958  : public RuntimeObject
{
	ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* ___U3CmessageU3Ek__BackingField;
	String_t* ___U3Cfinish_reasonU3Ek__BackingField;
	int32_t ___U3CindexU3Ek__BackingField;
};
struct ChatGPTConstant_tCD43B9D697FEA9088DDF613CE188188954267F0F  : public RuntimeObject
{
};
struct DictTool_t7BD8D57A5F02429A9B314A082026AA9B546F70FB  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct EmbeddedAttribute_t43ACF1E7A44EDD553B8455638927C5C1566D1DC2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct NullableAttribute_t192FD5CF509732F4E862DDF31C153E94E2420760  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags;
};
struct NullableContextAttribute_t4901B32336E283559C90B2BBA1BB750824C9B4F6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint8_t ___Flag;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842_StaticFields
{
	ChatGPTCompletionMessageInfoU5BU5D_t1F36F19BAED4677BA812660E2ED9D845A4AEA3E6* ___s_emptyArray;
};
struct List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3_StaticFields
{
	ChatGPTCompletionRspChoiceInfoU5BU5D_t7988E9A5CC0C124860DB115AE58EB280543F1B12* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_gshared (uint8_t ___0_key, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___1_dict, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
inline RuntimeObject* DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8 (uint8_t ___0_key, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___1_dict, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (uint8_t, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_gshared)(___0_key, ___1_dict, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mCDC09845D0E97A61F712FE1629AEF8A342650B7D (EmbeddedAttribute_t43ACF1E7A44EDD553B8455638927C5C1566D1DC2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m23FA6BA1183B2F5992B258FCEB5D83392D3FFBC4 (NullableAttribute_t192FD5CF509732F4E862DDF31C153E94E2420760* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m62E8F6F6C306590E688BD60FAC640BB57C46F228 (NullableAttribute_t192FD5CF509732F4E862DDF31C153E94E2420760* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mA8EFCCFD6C46D3EDFDD44B77CD9CB570BCC8B772 (NullableContextAttribute_t4901B32336E283559C90B2BBA1BB750824C9B4F6* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictTool_GetStringValue_m498CB8F280A71C66101EF26084BFF657BB2E42D6 (uint8_t ___0_key, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___1_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint8_t L_0 = ___0_key;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_1 = ___1_dict;
		RuntimeObject* L_2;
		L_2 = DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8(L_0, L_1, DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictTool_GetIntValue_mA20E3D1D113A0B50E7455770689BEAA5A24825EE (uint8_t ___0_key, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___1_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_1 = ___1_dict;
		RuntimeObject* L_2;
		L_2 = DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8(L_0, L_1, DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictTool_GetBoolValue_m56E3054A6E7E5B25E83A7F8438067AD23A11A72C (uint8_t ___0_key, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___1_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint8_t L_0 = ___0_key;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_1 = ___1_dict;
		RuntimeObject* L_2;
		L_2 = DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8(L_0, L_1, DictTool_GetDictValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7370FA45C84FDEBD686760E818CE402E5E0D7BD8_RuntimeMethod_var);
		V_0 = ((*(bool*)((bool*)(bool*)UnBox(L_2, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictTool__ctor_m950D85AD1094165CF7150A3C1431EF3037A0870E (DictTool_t7BD8D57A5F02429A9B314A082026AA9B546F70FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTConstant__ctor_m2BC12CBA8D5A647BCBE9771B3D916A87456CFDE9 (ChatGPTConstant_tCD43B9D697FEA9088DDF613CE188188954267F0F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionReq_get_model_mC1BF0DA7E8B4E878B395A706E46D2EC7211CCEF3 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmodelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionReq_set_model_mF0751E8140EC39FA9B7B65445A4E2FD892440BA0 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CmodelU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmodelU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842* ChatGPTCompletionReq_get_messages_mDB199510BB3733506F00A0866ACD7BB02F7CA148 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842* L_0 = __this->___U3CmessagesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionReq_set_messages_m52A727A56D78D85CD4B8771EDDEEC218A64261A8 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t2D365F3D069DF95F091A5B14CA02A24D9AD3F842* L_0 = ___0_value;
		__this->___U3CmessagesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessagesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChatGPTCompletionReq_get_temperature_mF46A4D9E8EAD0134AFDCE231640B56BEE3BA48B3 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CtemperatureU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionReq_set_temperature_m8E2F331B0A92B5F1093A495ECAAE4358026D7293 (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___U3CtemperatureU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionReq__ctor_m5C9B99F79713E83D0D553071FD25A6A605719FEF (ChatGPTCompletionReq_tF5C6AC74084E14A67B2D41B363CD3B883840E7F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionRsp_get_id_mE8E7FBEFBAE18BE70C43E93CD04CF63084D7F6D2 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRsp_set_id_m872D1D428C5229D8F7E1FE716818C79F6DD738CA (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatGPTCompletionRsp_get_created_mB885A7AFCE996AC810B44BA8264A7AFD236F4821 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcreatedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRsp_set_created_m67BD74C6D03FD0082EFB217A87A571D00ECDB354 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CcreatedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionRsp_get_model_m4F3B00C333A531144190ABFF1CB1C6C6FD8B1A84 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmodelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRsp_set_model_mB565226EF077538365942FC4CC374294D7452063 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CmodelU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmodelU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3* ChatGPTCompletionRsp_get_choices_m69A5F2349DD1BC18A93E0FDAE6AA50CE6AF1BFE2 (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3* L_0 = __this->___U3CchoicesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRsp_set_choices_m0F4E9EB22442C0634AE575F21015B0567A09271C (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_tEB2950E4D25A09DD3661E6597FC6969C36E9ECC3* L_0 = ___0_value;
		__this->___U3CchoicesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchoicesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRsp__ctor_mB0A0A2F838149238F3A2242ECA93EFA04A3757AC (ChatGPTCompletionRsp_t32B26C8DE3CDA5D924DEE4D6495A3937DAD2052F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* ChatGPTCompletionRspChoiceInfo_get_message_m06FDCC85E531A735FBF34B38B901AEAD871C6341 (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, const RuntimeMethod* method) 
{
	{
		ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* L_0 = __this->___U3CmessageU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRspChoiceInfo_set_message_mFB25C7834680D234542501F7E58ECBE87B2E1CBA (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* ___0_value, const RuntimeMethod* method) 
{
	{
		ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* L_0 = ___0_value;
		__this->___U3CmessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionRspChoiceInfo_get_finish_reason_mEC2F8DB4054F1086D5805E40FEB883C7B4FC896D (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Cfinish_reasonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRspChoiceInfo_set_finish_reason_m384A19D2B433EE2F06B29B3A7C9EA2EF7A80C70F (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3Cfinish_reasonU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cfinish_reasonU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatGPTCompletionRspChoiceInfo_get_index_mEB9EFBCA3F1B2168486C1E9B76BD35392FA1057D (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRspChoiceInfo_set_index_mAB692FCCD8CB621C57B6D4916A51C2B40472FFAD (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CindexU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionRspChoiceInfo__ctor_mBDAD5C65123D62559CFCAF8FDDBD616D1122323F (ChatGPTCompletionRspChoiceInfo_tE4B627060C5709EDE9E333E85BBFDFB91073C958* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionMessageInfo_get_role_mB7002AF93FD8B2CE5460D2C75E2F15692BA263EF (ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CroleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionMessageInfo_set_role_mDD35BC97E2C8373A5520FA695BDCD9C0E78D243B (ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CroleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CroleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGPTCompletionMessageInfo_get_content_m6479966F50123AD217EC6FC8F0ACE149A644BA3C (ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcontentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionMessageInfo_set_content_m81084E25676FDC2EF8A6DB736F337EF643EF9F66 (ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CcontentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPTCompletionMessageInfo__ctor_m15654DF012E041DFA96A42C86B514C2B641E57B1 (ChatGPTCompletionMessageInfo_t222F4A273841AF8A6122A70CF691B6C979B35DCC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
