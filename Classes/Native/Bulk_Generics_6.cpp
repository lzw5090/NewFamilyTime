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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1715208777;
// System.Char[]
struct CharU5BU5D_t2804499281;

extern RuntimeClass* StringU5BU5D_t1715208777_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2768832577;
extern Il2CppCodeGenString* _stringLiteral4147833570;
extern Il2CppCodeGenString* _stringLiteral1569396514;
extern const uint32_t KeyValuePair_2_ToString_m229638954_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3411256814_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1829993161_MetadataUsageId;

struct StringU5BU5D_t1715208777;


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
#ifndef KEYVALUEPAIR_2_T1356407447_H
#define KEYVALUEPAIR_2_T1356407447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1356407447 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1356407447, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1356407447, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1356407447_H
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
#ifndef VIRTUALBUTTONDATA_T338869527_H
#define VIRTUALBUTTONDATA_T338869527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t338869527 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t338869527, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t338869527, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T338869527_H
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
#ifndef STATUS_T3280110220_H
#define STATUS_T3280110220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t3280110220 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t3280110220, ___value___1)); }
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
#endif // STATUS_T3280110220_H
#ifndef KEYVALUEPAIR_2_T1150175980_H
#define KEYVALUEPAIR_2_T1150175980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct  KeyValuePair_2_t1150175980 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VirtualButtonData_t338869527  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1150175980, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1150175980, ___value_1)); }
	inline VirtualButtonData_t338869527  get_value_1() const { return ___value_1; }
	inline VirtualButtonData_t338869527 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VirtualButtonData_t338869527  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1150175980_H
#ifndef KEYVALUEPAIR_2_T4091416673_H
#define KEYVALUEPAIR_2_T4091416673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t4091416673 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4091416673, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4091416673, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4091416673_H
// System.String[]
struct StringU5BU5D_t1715208777  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1662516614_gshared (KeyValuePair_2_t1356407447 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1336800913_gshared (KeyValuePair_2_t1356407447 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2616949688_gshared (KeyValuePair_2_t1356407447 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3477355909_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m645750538_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m229638954_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2252237856_gshared (KeyValuePair_2_t4091416673 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m25733400_gshared (KeyValuePair_2_t4091416673 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3955434226_gshared (KeyValuePair_2_t4091416673 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m598391635_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3624658337_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3411256814_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3245979671_gshared (KeyValuePair_2_t1150175980 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1814247964_gshared (KeyValuePair_2_t1150175980 * __this, VirtualButtonData_t338869527  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m762224669_gshared (KeyValuePair_2_t1150175980 * __this, int32_t ___key0, VirtualButtonData_t338869527  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2930539606_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t338869527  KeyValuePair_2_get_Value_m3507385853_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1829993161_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1662516614(__this, p0, method) ((  void (*) (KeyValuePair_2_t1356407447 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1662516614_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1336800913(__this, p0, method) ((  void (*) (KeyValuePair_2_t1356407447 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1336800913_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2616949688(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1356407447 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2616949688_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3477355909(__this, method) ((  int32_t (*) (KeyValuePair_2_t1356407447 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3477355909_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m645750538(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1356407447 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m645750538_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m3040993297 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m3697096329 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1715208777* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m229638954(__this, method) ((  String_t* (*) (KeyValuePair_2_t1356407447 *, const RuntimeMethod*))KeyValuePair_2_ToString_m229638954_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2252237856(__this, p0, method) ((  void (*) (KeyValuePair_2_t4091416673 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2252237856_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m25733400(__this, p0, method) ((  void (*) (KeyValuePair_2_t4091416673 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m25733400_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3955434226(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4091416673 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3955434226_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
#define KeyValuePair_2_get_Key_m598391635(__this, method) ((  int32_t (*) (KeyValuePair_2_t4091416673 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m598391635_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
#define KeyValuePair_2_get_Value_m3624658337(__this, method) ((  int32_t (*) (KeyValuePair_2_t4091416673 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3624658337_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
#define KeyValuePair_2_ToString_m3411256814(__this, method) ((  String_t* (*) (KeyValuePair_2_t4091416673 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3411256814_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3245979671(__this, p0, method) ((  void (*) (KeyValuePair_2_t1150175980 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3245979671_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1814247964(__this, p0, method) ((  void (*) (KeyValuePair_2_t1150175980 *, VirtualButtonData_t338869527 , const RuntimeMethod*))KeyValuePair_2_set_Value_m1814247964_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m762224669(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1150175980 *, int32_t, VirtualButtonData_t338869527 , const RuntimeMethod*))KeyValuePair_2__ctor_m762224669_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
#define KeyValuePair_2_get_Key_m2930539606(__this, method) ((  int32_t (*) (KeyValuePair_2_t1150175980 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2930539606_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
#define KeyValuePair_2_get_Value_m3507385853(__this, method) ((  VirtualButtonData_t338869527  (*) (KeyValuePair_2_t1150175980 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3507385853_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
#define KeyValuePair_2_ToString_m1829993161(__this, method) ((  String_t* (*) (KeyValuePair_2_t1150175980 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1829993161_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2616949688_gshared (KeyValuePair_2_t1356407447 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1662516614((KeyValuePair_2_t1356407447 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1336800913((KeyValuePair_2_t1356407447 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2616949688_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	KeyValuePair_2__ctor_m2616949688(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3477355909_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3477355909_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3477355909(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1662516614_gshared (KeyValuePair_2_t1356407447 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1662516614_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	KeyValuePair_2_set_Key_m1662516614(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m645750538_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m645750538_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	return KeyValuePair_2_get_Value_m645750538(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1336800913_gshared (KeyValuePair_2_t1356407447 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1336800913_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	KeyValuePair_2_set_Value_m1336800913(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m229638954_gshared (KeyValuePair_2_t1356407447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m229638954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1715208777* G_B2_1 = NULL;
	StringU5BU5D_t1715208777* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1715208777* G_B1_1 = NULL;
	StringU5BU5D_t1715208777* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1715208777* G_B3_2 = NULL;
	StringU5BU5D_t1715208777* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1715208777* G_B5_1 = NULL;
	StringU5BU5D_t1715208777* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1715208777* G_B4_1 = NULL;
	StringU5BU5D_t1715208777* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1715208777* G_B6_2 = NULL;
	StringU5BU5D_t1715208777* G_B6_3 = NULL;
	{
		StringU5BU5D_t1715208777* L_0 = (StringU5BU5D_t1715208777*)((StringU5BU5D_t1715208777*)SZArrayNew(StringU5BU5D_t1715208777_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2768832577);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2768832577);
		StringU5BU5D_t1715208777* L_1 = (StringU5BU5D_t1715208777*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3477355909((KeyValuePair_2_t1356407447 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3477355909((KeyValuePair_2_t1356407447 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3040993297((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1715208777* L_6 = (StringU5BU5D_t1715208777*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4147833570);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4147833570);
		StringU5BU5D_t1715208777* L_7 = (StringU5BU5D_t1715208777*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m645750538((KeyValuePair_2_t1356407447 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m645750538((KeyValuePair_2_t1356407447 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1715208777* L_12 = (StringU5BU5D_t1715208777*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1569396514);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1569396514);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3697096329(NULL /*static, unused*/, (StringU5BU5D_t1715208777*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m229638954_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1356407447 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1356407447 *>(__this + 1);
	return KeyValuePair_2_ToString_m229638954(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3955434226_gshared (KeyValuePair_2_t4091416673 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2252237856((KeyValuePair_2_t4091416673 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m25733400((KeyValuePair_2_t4091416673 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3955434226_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	KeyValuePair_2__ctor_m3955434226(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m598391635_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m598391635_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	return KeyValuePair_2_get_Key_m598391635(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2252237856_gshared (KeyValuePair_2_t4091416673 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2252237856_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	KeyValuePair_2_set_Key_m2252237856(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3624658337_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3624658337_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3624658337(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m25733400_gshared (KeyValuePair_2_t4091416673 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m25733400_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	KeyValuePair_2_set_Value_m25733400(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3411256814_gshared (KeyValuePair_2_t4091416673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3411256814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1715208777* G_B2_1 = NULL;
	StringU5BU5D_t1715208777* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1715208777* G_B1_1 = NULL;
	StringU5BU5D_t1715208777* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1715208777* G_B3_2 = NULL;
	StringU5BU5D_t1715208777* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1715208777* G_B5_1 = NULL;
	StringU5BU5D_t1715208777* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1715208777* G_B4_1 = NULL;
	StringU5BU5D_t1715208777* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1715208777* G_B6_2 = NULL;
	StringU5BU5D_t1715208777* G_B6_3 = NULL;
	{
		StringU5BU5D_t1715208777* L_0 = (StringU5BU5D_t1715208777*)((StringU5BU5D_t1715208777*)SZArrayNew(StringU5BU5D_t1715208777_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2768832577);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2768832577);
		StringU5BU5D_t1715208777* L_1 = (StringU5BU5D_t1715208777*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m598391635((KeyValuePair_2_t4091416673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m598391635((KeyValuePair_2_t4091416673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3040993297((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1715208777* L_6 = (StringU5BU5D_t1715208777*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4147833570);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4147833570);
		StringU5BU5D_t1715208777* L_7 = (StringU5BU5D_t1715208777*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m3624658337((KeyValuePair_2_t4091416673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m3624658337((KeyValuePair_2_t4091416673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(int32_t*)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1715208777* L_13 = (StringU5BU5D_t1715208777*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1569396514);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1569396514);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3697096329(NULL /*static, unused*/, (StringU5BU5D_t1715208777*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3411256814_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4091416673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4091416673 *>(__this + 1);
	return KeyValuePair_2_ToString_m3411256814(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m762224669_gshared (KeyValuePair_2_t1150175980 * __this, int32_t ___key0, VirtualButtonData_t338869527  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3245979671((KeyValuePair_2_t1150175980 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t338869527  L_1 = ___value1;
		KeyValuePair_2_set_Value_m1814247964((KeyValuePair_2_t1150175980 *)__this, (VirtualButtonData_t338869527 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m762224669_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, VirtualButtonData_t338869527  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	KeyValuePair_2__ctor_m762224669(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2930539606_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2930539606_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2930539606(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3245979671_gshared (KeyValuePair_2_t1150175980 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3245979671_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	KeyValuePair_2_set_Key_m3245979671(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t338869527  KeyValuePair_2_get_Value_m3507385853_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t338869527  L_0 = (VirtualButtonData_t338869527 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  VirtualButtonData_t338869527  KeyValuePair_2_get_Value_m3507385853_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3507385853(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1814247964_gshared (KeyValuePair_2_t1150175980 * __this, VirtualButtonData_t338869527  ___value0, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t338869527  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1814247964_AdjustorThunk (RuntimeObject * __this, VirtualButtonData_t338869527  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	KeyValuePair_2_set_Value_m1814247964(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1829993161_gshared (KeyValuePair_2_t1150175980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1829993161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VirtualButtonData_t338869527  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1715208777* G_B2_1 = NULL;
	StringU5BU5D_t1715208777* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1715208777* G_B1_1 = NULL;
	StringU5BU5D_t1715208777* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1715208777* G_B3_2 = NULL;
	StringU5BU5D_t1715208777* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1715208777* G_B5_1 = NULL;
	StringU5BU5D_t1715208777* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1715208777* G_B4_1 = NULL;
	StringU5BU5D_t1715208777* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1715208777* G_B6_2 = NULL;
	StringU5BU5D_t1715208777* G_B6_3 = NULL;
	{
		StringU5BU5D_t1715208777* L_0 = (StringU5BU5D_t1715208777*)((StringU5BU5D_t1715208777*)SZArrayNew(StringU5BU5D_t1715208777_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2768832577);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2768832577);
		StringU5BU5D_t1715208777* L_1 = (StringU5BU5D_t1715208777*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2930539606((KeyValuePair_2_t1150175980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2930539606((KeyValuePair_2_t1150175980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3040993297((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1715208777* L_6 = (StringU5BU5D_t1715208777*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4147833570);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4147833570);
		StringU5BU5D_t1715208777* L_7 = (StringU5BU5D_t1715208777*)L_6;
		VirtualButtonData_t338869527  L_8 = KeyValuePair_2_get_Value_m3507385853((KeyValuePair_2_t1150175980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		VirtualButtonData_t338869527  L_9 = KeyValuePair_2_get_Value_m3507385853((KeyValuePair_2_t1150175980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (VirtualButtonData_t338869527 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(VirtualButtonData_t338869527 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1715208777* L_13 = (StringU5BU5D_t1715208777*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1569396514);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1569396514);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3697096329(NULL /*static, unused*/, (StringU5BU5D_t1715208777*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1829993161_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1150175980 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1150175980 *>(__this + 1);
	return KeyValuePair_2_ToString_m1829993161(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
