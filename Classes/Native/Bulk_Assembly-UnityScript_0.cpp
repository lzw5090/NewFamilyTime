#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// kittenEvents
struct kittenEvents_t3053428568;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t579178693;
// UnityEngine.Component
struct Component_t1229061857;
// UnityEngine.Animation
struct Animation_t1046280339;
// UnityEngine.AnimationState
struct AnimationState_t2673871096;
// System.String
struct String_t;
// kittenIthcing
struct kittenIthcing_t1274595291;
// kittenMeow
struct kittenMeow_t819312230;
// System.Char[]
struct CharU5BU5D_t2804499281;
// System.Void
struct Void_t2018391435;

extern const RuntimeMethod* Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2505450552;
extern Il2CppCodeGenString* _stringLiteral619383806;
extern const uint32_t kittenEvents_Start_m2586719941_MetadataUsageId;
extern RuntimeClass* Input_t2882628703_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral426421287;
extern Il2CppCodeGenString* _stringLiteral389963497;
extern const uint32_t kittenEvents_Update_m3739100676_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3973335783;
extern const uint32_t kittenIthcing_Start_m3985259187_MetadataUsageId;
extern const uint32_t kittenIthcing_Update_m1634989454_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1581377531;
extern const uint32_t kittenMeow_Start_m521737234_MetadataUsageId;
extern const uint32_t kittenMeow_Update_m2062536836_MetadataUsageId;



#ifndef U3CMODULEU3E_T1401088763_H
#define U3CMODULEU3E_T1401088763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1401088763 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1401088763_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T911275296_H
#define VALUETYPE_T911275296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t911275296  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t911275296_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t911275296_marshaled_com
{
};
#endif // VALUETYPE_T911275296_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2804499281* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2804499281* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2804499281** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2804499281* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T999562536_H
#define ENUM_T999562536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t999562536  : public ValueType_t911275296
{
public:

public:
};

struct Enum_t999562536_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2804499281* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t999562536_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2804499281* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2804499281** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2804499281* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t999562536_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t999562536_marshaled_com
{
};
#endif // ENUM_T999562536_H
#ifndef BOOLEAN_T3986471390_H
#define BOOLEAN_T3986471390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3986471390 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3986471390, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3986471390_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3986471390_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3986471390_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3986471390_H
#ifndef INT32_T299372157_H
#define INT32_T299372157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t299372157 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t299372157, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T299372157_H
#ifndef VOID_T2018391435_H
#define VOID_T2018391435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2018391435 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2018391435_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef TRACKEDREFERENCE_T622719952_H
#define TRACKEDREFERENCE_T622719952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t622719952  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t622719952, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t622719952_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t622719952_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T622719952_H
#ifndef WRAPMODE_T1664877325_H
#define WRAPMODE_T1664877325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WrapMode
struct  WrapMode_t1664877325 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WrapMode_t1664877325, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPMODE_T1664877325_H
#ifndef OBJECT_T2770233418_H
#define OBJECT_T2770233418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2770233418  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2770233418, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2770233418_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2770233418_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2770233418_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2770233418_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2770233418_H
#ifndef COMPONENT_T1229061857_H
#define COMPONENT_T1229061857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1229061857  : public Object_t2770233418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1229061857_H
#ifndef ANIMATIONSTATE_T2673871096_H
#define ANIMATIONSTATE_T2673871096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t2673871096  : public TrackedReference_t622719952
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T2673871096_H
#ifndef BEHAVIOUR_T3171373653_H
#define BEHAVIOUR_T3171373653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3171373653  : public Component_t1229061857
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3171373653_H
#ifndef MONOBEHAVIOUR_T579178693_H
#define MONOBEHAVIOUR_T579178693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t579178693  : public Behaviour_t3171373653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T579178693_H
#ifndef ANIMATION_T1046280339_H
#define ANIMATION_T1046280339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t1046280339  : public Behaviour_t3171373653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T1046280339_H
#ifndef KITTENITHCING_T1274595291_H
#define KITTENITHCING_T1274595291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// kittenIthcing
struct  kittenIthcing_t1274595291  : public MonoBehaviour_t579178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KITTENITHCING_T1274595291_H
#ifndef KITTENMEOW_T819312230_H
#define KITTENMEOW_T819312230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// kittenMeow
struct  kittenMeow_t819312230  : public MonoBehaviour_t579178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KITTENMEOW_T819312230_H
#ifndef KITTENEVENTS_T3053428568_H
#define KITTENEVENTS_T3053428568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// kittenEvents
struct  kittenEvents_t3053428568  : public MonoBehaviour_t579178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KITTENEVENTS_T3053428568_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m1852797155_gshared (Component_t1229061857 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m896744548 (MonoBehaviour_t579178693 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
#define Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, method) ((  Animation_t1046280339 * (*) (Component_t1229061857 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m1852797155_gshared)(__this, method)
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t2673871096 * Animation_get_Item_m2030850263 (Animation_t1046280339 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C"  void AnimationState_set_layer_m1462651050 (AnimationState_t2673871096 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C"  void AnimationState_set_wrapMode_m1058465955 (AnimationState_t2673871096 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C"  bool Input_GetKey_m2195012377 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m1824527851 (Animation_t1046280339 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kittenEvents::.ctor()
extern "C"  void kittenEvents__ctor_m1324718171 (kittenEvents_t3053428568 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m896744548(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenEvents::Start()
extern "C"  void kittenEvents_Start_m2586719941 (kittenEvents_t3053428568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenEvents_Start_m2586719941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t1046280339 * L_0 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_0);
		AnimationState_t2673871096 * L_1 = Animation_get_Item_m2030850263(L_0, _stringLiteral2505450552, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m1462651050(L_1, 1, /*hidden argument*/NULL);
		Animation_t1046280339 * L_2 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_2);
		AnimationState_t2673871096 * L_3 = Animation_get_Item_m2030850263(L_2, _stringLiteral2505450552, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m1058465955(L_3, 1, /*hidden argument*/NULL);
		Animation_t1046280339 * L_4 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_4);
		AnimationState_t2673871096 * L_5 = Animation_get_Item_m2030850263(L_4, _stringLiteral619383806, /*hidden argument*/NULL);
		NullCheck(L_5);
		AnimationState_set_layer_m1462651050(L_5, 1, /*hidden argument*/NULL);
		Animation_t1046280339 * L_6 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_6);
		AnimationState_t2673871096 * L_7 = Animation_get_Item_m2030850263(L_6, _stringLiteral619383806, /*hidden argument*/NULL);
		NullCheck(L_7);
		AnimationState_set_wrapMode_m1058465955(L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenEvents::Update()
extern "C"  void kittenEvents_Update_m3739100676 (kittenEvents_t3053428568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenEvents_Update_m3739100676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t2882628703_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m2195012377(NULL /*static, unused*/, _stringLiteral426421287, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1046280339 * L_1 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_1);
		Animation_Play_m1824527851(L_1, _stringLiteral2505450552, /*hidden argument*/NULL);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t2882628703_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m2195012377(NULL /*static, unused*/, _stringLiteral389963497, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		Animation_t1046280339 * L_3 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_3);
		Animation_Play_m1824527851(L_3, _stringLiteral619383806, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void kittenEvents::Main()
extern "C"  void kittenEvents_Main_m359670820 (kittenEvents_t3053428568 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void kittenIthcing::.ctor()
extern "C"  void kittenIthcing__ctor_m3432497381 (kittenIthcing_t1274595291 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m896744548(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenIthcing::Start()
extern "C"  void kittenIthcing_Start_m3985259187 (kittenIthcing_t1274595291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenIthcing_Start_m3985259187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t1046280339 * L_0 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_0);
		AnimationState_t2673871096 * L_1 = Animation_get_Item_m2030850263(L_0, _stringLiteral3973335783, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m1462651050(L_1, 1, /*hidden argument*/NULL);
		Animation_t1046280339 * L_2 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_2);
		AnimationState_t2673871096 * L_3 = Animation_get_Item_m2030850263(L_2, _stringLiteral3973335783, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m1058465955(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenIthcing::Update()
extern "C"  void kittenIthcing_Update_m1634989454 (kittenIthcing_t1274595291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenIthcing_Update_m1634989454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t2882628703_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m2195012377(NULL /*static, unused*/, _stringLiteral426421287, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1046280339 * L_1 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_1);
		Animation_Play_m1824527851(L_1, _stringLiteral3973335783, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void kittenIthcing::Main()
extern "C"  void kittenIthcing_Main_m2198513945 (kittenIthcing_t1274595291 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void kittenMeow::.ctor()
extern "C"  void kittenMeow__ctor_m776197768 (kittenMeow_t819312230 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m896744548(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenMeow::Start()
extern "C"  void kittenMeow_Start_m521737234 (kittenMeow_t819312230 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenMeow_Start_m521737234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t1046280339 * L_0 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_0);
		AnimationState_t2673871096 * L_1 = Animation_get_Item_m2030850263(L_0, _stringLiteral1581377531, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m1462651050(L_1, 1, /*hidden argument*/NULL);
		Animation_t1046280339 * L_2 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_2);
		AnimationState_t2673871096 * L_3 = Animation_get_Item_m2030850263(L_2, _stringLiteral1581377531, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m1058465955(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenMeow::Update()
extern "C"  void kittenMeow_Update_m2062536836 (kittenMeow_t819312230 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (kittenMeow_Update_m2062536836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t2882628703_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m2195012377(NULL /*static, unused*/, _stringLiteral389963497, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1046280339 * L_1 = Component_GetComponent_TisAnimation_t1046280339_m942423351(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1046280339_m942423351_RuntimeMethod_var);
		NullCheck(L_1);
		Animation_Play_m1824527851(L_1, _stringLiteral1581377531, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void kittenMeow::Main()
extern "C"  void kittenMeow_Main_m2667362289 (kittenMeow_t819312230 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
