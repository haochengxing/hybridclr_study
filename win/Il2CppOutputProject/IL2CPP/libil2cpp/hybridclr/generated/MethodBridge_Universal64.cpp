#include <codegen/il2cpp-codegen-metadata.h>
#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"

#include "../metadata/MetadataModule.h"
#include "../metadata/MetadataUtil.h"

#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;

#if HYBRIDCLR_ABI_UNIVERSAL_64
//!!!{{CODE

// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Int16)
static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Int32)
static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Int64)
static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i1i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
static void __M2N_i1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i1i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.Convert::ToSByte(System.Single)
static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Double)
static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Decimal)
static void __M2N_i1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i1S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Boolean)
static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Char)
static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt32)
static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt64)
static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.SByte)
static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Int32)
static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Int64)
static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
static void __M2N_i2i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i2i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
static void __M2N_i2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i2i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Convert::ToInt16(System.Single)
static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Double)
static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i2S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Decimal)
static void __M2N_i2S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i2S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Boolean)
static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Char)
static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt32)
static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt64)
static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.AppDomain::GetCurrentThreadId()
static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Convert::ToInt32(System.Int16)
static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
static void __M2N_i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 <>f__AnonymousType0`1::GetHashCode()
static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static void __M2N_i4i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static void __M2N_i4i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
static void __M2N_i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ParseNumbers::StringToInt(System.String,System.Int32,System.Int32)
static void __M2N_i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Globalization.Calendar::GetDaysInMonth(System.Int32,System.Int32,System.Int32)
static void __M2N_i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
static void __M2N_i4i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
static void __M2N_i4i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<12> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S20i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<20> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<24> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8i4i4u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Array::FindIndex<T>(T[],System.Int32,System.Predicate`1<T>)
static void __M2N_i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32)
static void __M2N_i4i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
static void __M2N_i4i8i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CultureInfo,System.Globalization.CompareOptions)
static void __M2N_i4i8i4i8i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
static void __M2N_i4i8i4i8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i8i4i8i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.Int32,System.Boolean)
static void __M2N_i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 Microsoft.Win32.RegistryKeyComparer::GetHashCode(System.Object)
static void __M2N_i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
static void __M2N_i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
static void __M2N_i4i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
static void __M2N_i4i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.TermInfoStrings System.ByteMatcher::Match(System.Char[],System.Int32,System.Int32,System.Int32&)
static void __M2N_i4i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
static void __M2N_i4i8i8i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i4i8i8i4i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static void __M2N_i4i8i8i4i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static void __M2N_i4i8i8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
static void __M2N_i4i8i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean)
static void __M2N_i4i8i8i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte*,System.Int32,System.Boolean)
static void __M2N_i4i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 Mono.Globalization.Unicode.ContractionComparer::Compare(Mono.Globalization.Unicode.Contraction,Mono.Globalization.Unicode.Contraction)
static void __M2N_i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Globalization.CultureInfo,System.Globalization.CompareOptions)
static void __M2N_i4i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i4i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
static void __M2N_i4i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i8i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Single::CompareTo(System.Single)
static void __M2N_i4i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Double::CompareTo(System.Double)
static void __M2N_i4i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_i4i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T)
static void __M2N_i4i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static void __M2N_i4i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.NullableComparer`1::Compare(System.Nullable`1<T>,System.Nullable`1<T>)
static void __M2N_i4i8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static void __M2N_i4i8S20S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<20> __arg1, ValueTypeSize<20> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static void __M2N_i4i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8S24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8S24i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T)
static void __M2N_i4i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static void __M2N_i4i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
static void __M2N_i4i8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Boolean::CompareTo(System.Boolean)
static void __M2N_i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Char::CompareTo(System.Char)
static void __M2N_i4i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.String::IndexOf(System.Char,System.Int32)
static void __M2N_i4i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
static void __M2N_i4i8u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.UInt32::CompareTo(System.UInt32)
static void __M2N_i4i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static void __M2N_i4i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32)
static void __M2N_i4i8u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i8u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i8u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Convert::ToInt32(System.Single)
static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Convert::ToInt32(System.Double)
static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i4S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Convert::ToInt32(System.Decimal)
static void __M2N_i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
static void __M2N_i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Convert::ToInt32(System.Boolean)
static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Text.NormalizationCheck System.Text.Normalization::QuickCheck(System.Char,System.Int32)
static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Char::ConvertToUtf32(System.Char,System.Char)
static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Convert::ToInt32(System.UInt32)
static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Threading.TimeoutHelper::UpdateTimeOut(System.UInt32,System.Int32)
static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Convert::ToInt32(System.UInt64)
static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String Mono.Runtime::GetDisplayName()
static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int64 System.Convert::ToInt64(System.SByte)
static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Int16)
static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder,System.Environment/SpecialFolderOption)
static void __M2N_i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.ParseNumbers::IntToString(System.Int32,System.Int32,System.Int32,System.Char,System.Int32)
static void __M2N_i8i4i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
static void __M2N_i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Number::FormatInt32(System.Int32,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
static void __M2N_i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Diagnostics.Tracing.EtwSession System.Diagnostics.Tracing.EtwSession::GetEtwSession(System.Int32,System.Boolean)
static void __M2N_i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String <>f__AnonymousType0`1::ToString()
static void __M2N_i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Object System.Enum::ToObject(System.Type,System.SByte)
static void __M2N_i8i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8i1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Enum::ToObject(System.Type,System.Int16)
static void __M2N_i8i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8i2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static void __M2N_i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Object System.Array::GetValue(System.Int32,System.Int32)
static void __M2N_i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
static void __M2N_i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
static void __M2N_i8i8i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int64 System.ParseNumbers::StringToLong(System.String,System.Int32,System.Int32,System.Int32*)
static void __M2N_i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Object System.Convert::ChangeType(System.Object,System.TypeCode,System.IFormatProvider)
static void __M2N_i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
static void __M2N_i8i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Reflection.ConstructorInfo System.RuntimeType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static void __M2N_i8i8i4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.IAsyncResult System.Console/WindowsConsole/WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
static void __M2N_i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
static void __M2N_i8i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
static void __M2N_i8i8i4i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Reflection.MethodBase System.DefaultBinder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
static void __M2N_i8i8i4i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::WaitAsync(System.Int32,System.Threading.CancellationToken)
static void __M2N_i8i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32,System.Boolean)
static void __M2N_i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
static void __M2N_i8i8i4u1u1u1u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, int64_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.String System.String::PadLeft(System.Int32,System.Char)
static void __M2N_i8i8i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String Locale::GetText(System.String,System.Object[])
static void __M2N_i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
static void __M2N_i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Reflection.MemberInfo[] System.RuntimeType::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
static void __M2N_i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
static void __M2N_i8i8i8i4i4i8u1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, uint8_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Int64 System.IO.MonoIO::Seek(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
static void __M2N_i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Reflection.MethodInfo System.RuntimeType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static void __M2N_i8i8i8i4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::BeginInvoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.DateTimeParse/MatchNumberDelegate::BeginInvoke(System.__DTString&,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Reflection.PropertyInfo System.RuntimeType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
static void __M2N_i8i8i8i4i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Object System.RuntimeType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
static void __M2N_i8i8i8i4i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.IAsyncResult Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::BeginInvoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i4u1i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, int64_t __arg9, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Object Microsoft.Win32.RegistryKey::GetValue(System.String,System.Object)
static void __M2N_i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
static void __M2N_i8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
static void __M2N_i8i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
static void __M2N_i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object Microsoft.Win32.IRegistryApi::GetValue(Microsoft.Win32.RegistryKey,System.String,System.Object,Microsoft.Win32.RegistryValueOptions)
static void __M2N_i8i8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Action`2::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Action`3::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`4::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static void __M2N_i8i8i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_i8i8i8i8S8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
static void __M2N_i8i8i8i8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.IRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
static void __M2N_i8i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Func`4::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8i8u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Ensure(Microsoft.Win32.RegistryKey,System.String,System.Boolean,System.Boolean)
static void __M2N_i8i8i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Resources.ResourceSet System.Resources.FileBasedResourceGroveler::GrovelForResourceSet(System.Globalization.CultureInfo,System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
static void __M2N_i8i8i8i8u1u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.IAsyncResult UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::BeginInvoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8S160i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<160> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<160>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static void __M2N_i8i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::BeginInvoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1::StartNew(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_i8i8i8S8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
static void __M2N_i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Action`3::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static void __M2N_i8i8i8u1S32i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Resources.ResourceSet System.Resources.ResourceManager::GetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
static void __M2N_i8i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static void __M2N_i8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
static void __M2N_i8i8r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, float __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static void __M2N_i8i8r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, float __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static void __M2N_i8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
static void __M2N_i8i8r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, double __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8r8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, double __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static void __M2N_i8i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S12i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S12S12i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
static void __M2N_i8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
static void __M2N_i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Runtime.Serialization.SerializationEventHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
static void __M2N_i8i8S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame,System.AsyncCallback,System.Object)
static void __M2N_i8i8S16i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S16S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8S1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S20S20i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<20> __arg1, ValueTypeSize<20> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S24i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S24S24i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::BeginInvoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs,System.AsyncCallback,System.Object)
static void __M2N_i8i8S40i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
static void __M2N_i8i8S4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static void __M2N_i8i8S4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
static void __M2N_i8i8S4S4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Func`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
static void __M2N_i8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
static void __M2N_i8i8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
static void __M2N_i8i8S8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
static void __M2N_i8i8S8i8i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8S8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// Microsoft.Win32.KeyHandler Microsoft.Win32.KeyHandler::Lookup(Microsoft.Win32.RegistryKey,System.Boolean)
static void __M2N_i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Globalization.CultureData System.Globalization.CultureData::GetCultureData(System.String,System.Boolean,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.String)
static void __M2N_i8i8u1i4i4i4i8i4i4i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, int64_t __arg11, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(int64_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static void __M2N_i8i8u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
static void __M2N_i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8u1u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Object System.Enum::ToObject(System.Type,System.UInt16)
static void __M2N_i8i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
static void __M2N_i8i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8u2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Action`2::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
static void __M2N_i8i8u2i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.String System.String::Replace(System.Char,System.Char)
static void __M2N_i8i8u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
static void __M2N_i8i8u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Enum::ToObject(System.Type,System.UInt32)
static void __M2N_i8i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
static void __M2N_i8i8u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static void __M2N_i8i8u4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Enum::ToObject(System.Type,System.UInt64)
static void __M2N_i8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
static void __M2N_i8i8u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static void __M2N_i8i8u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static void __M2N_i8i8u8u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int64 System.Convert::ToInt64(System.Single)
static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatSingle(System.Single,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatDouble(System.Double,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8r8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Decimal)
static void __M2N_i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Tuple`2<T1,T2> System.Tuple::Create<T1,T2>(T1,T2)
static void __M2N_i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Number::FormatDecimal(System.Decimal,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.TypedReference::ToObject(System.TypedReference)
static void __M2N_i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<24> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), method);
}


// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
static void __M2N_i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
static void __M2N_i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle,System.RuntimeTypeHandle)
static void __M2N_i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
static void __M2N_i8S8S8S8S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, ValueTypeSize<24> __arg3, ValueTypeSize<24> __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Tuple`2<T1,T2> System.Tuple::Create<T1,T2>(T1,T2)
static void __M2N_i8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Convert::ToInt64(System.Boolean)
static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Int32&)
static void __M2N_i8u1u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.Char::ToString(System.Char)
static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Convert::ToString(System.Char,System.IFormatProvider)
static void __M2N_i8u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt32)
static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatUInt32(System.UInt32,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8u4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt64)
static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatUInt64(System.UInt64,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i8u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single UnityEngine.Screen::get_dpi()
static void __M2N_r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Single System.Convert::ToSingle(System.SByte)
static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int16)
static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int32)
static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int64)
static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector3::get_Item(System.Int32)
static void __M2N_r4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
static void __M2N_r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Threading.Interlocked::Exchange(System.Single&,System.Single)
static void __M2N_r4i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
static void __M2N_r4i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Math::Abs(System.Single)
static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Math::Max(System.Single,System.Single)
static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
static void __M2N_r4r4r4i8r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, int64_t __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Convert::ToSingle(System.Double)
static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
static void __M2N_r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_r4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Convert::ToSingle(System.Decimal)
static void __M2N_r4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
static void __M2N_r4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_r4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Convert::ToSingle(System.Byte)
static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt16)
static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt32)
static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt64)
static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.SByte)
static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Int16)
static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Int32)
static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.BitConverter::Int64BitsToDouble(System.Int64)
static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
static void __M2N_r8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Threading.Interlocked::Exchange(System.Double&,System.Double)
static void __M2N_r8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Threading.Interlocked::CompareExchange(System.Double&,System.Double,System.Double)
static void __M2N_r8i8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Convert::ToDouble(System.Single)
static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Atan(System.Double)
static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Pow(System.Double,System.Double)
static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Convert::ToDouble(System.Decimal)
static void __M2N_r8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Byte)
static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt16)
static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt32)
static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt64)
static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.ConsoleKeyInfo System.Console::ReadKey()
static void __M2N_S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
static void __M2N_S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static void __M2N_S12i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// T System.Collections.Generic.List`1::Find(System.Predicate`1<T>)
static void __M2N_S12i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
static void __M2N_S12i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
static void __M2N_S12i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3,UnityEngine.Camera/MonoOrStereoscopicEye)
static void __M2N_S12i8S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static void __M2N_S12i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
static void __M2N_S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
static void __M2N_S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
static void __M2N_S12S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
static void __M2N_S12S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
static void __M2N_S12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Guid System.Guid::NewGuid()
static void __M2N_S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Decimal System.Convert::ToDecimal(System.SByte)
static void __M2N_S16i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int16)
static void __M2N_S16i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int32)
static void __M2N_S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int64)
static void __M2N_S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
static void __M2N_S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<T>(System.Void*,System.Int32,Unity.Collections.Allocator)
static void __M2N_S16i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_S16i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
static void __M2N_S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static void __M2N_S16i8i8S160(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<160> __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<160>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
static void __M2N_S16i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static void __M2N_S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1::ConfigureAwait(System.Boolean)
static void __M2N_S16i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Single)
static void __M2N_S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Double)
static void __M2N_S16r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
static void __M2N_S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
static void __M2N_S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Decimal::Round(System.Decimal,System.Int32)
static void __M2N_S16S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
static void __M2N_S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
static void __M2N_S16S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
static void __M2N_S16S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
static void __M2N_S16S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Byte)
static void __M2N_S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt16)
static void __M2N_S16u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt32)
static void __M2N_S16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt64)
static void __M2N_S16u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// TResult System.Threading.Tasks.Task`1::get_Result()
static void __M2N_S1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// TResult System.Func`1::EndInvoke(System.IAsyncResult)
static void __M2N_S1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
static void __M2N_S20i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<20> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
static void __M2N_S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
static void __M2N_S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static void __M2N_S24i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.TypedReference System.TypedReference::MakeTypedReference(System.Object,System.Reflection.FieldInfo[])
static void __M2N_S24i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
static void __M2N_S24i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3,UnityEngine.Camera/MonoOrStereoscopicEye)
static void __M2N_S24i8S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
static void __M2N_S24S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFloatingDateRule(System.DateTime,System.Int32,System.Int32,System.DayOfWeek)
static void __M2N_S24S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1::GetEnumerator()
static void __M2N_S32i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<32> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.SessionMask::get_All()
static void __M2N_S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S40i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<40> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<40>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S48i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<48> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.SessionMask::FromId(System.Int32)
static void __M2N_S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
static void __M2N_S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
static void __M2N_S4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// T System.Collections.Generic.List`1::Find(System.Predicate`1<T>)
static void __M2N_S4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
static void __M2N_S4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.SessionMask::FromEventKeywords(System.UInt64)
static void __M2N_S4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
static void __M2N_S52i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<52> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<52>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
static void __M2N_S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
static void __M2N_S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_S64S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTime System.DateTime::get_Now()
static void __M2N_S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.DateTime System.DateTime::FromBinary(System.Int64)
static void __M2N_S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.DateTime::AddMonths(System.Int32)
static void __M2N_S8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_S8i8i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
static void __M2N_S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::AddDays(System.Double)
static void __M2N_S8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::Add(System.TimeSpan)
static void __M2N_S8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeSpan System.TimeSpan::FromDays(System.Double)
static void __M2N_S8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
static void __M2N_S8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
static void __M2N_S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
static void __M2N_S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.TimeZoneInfo::ConvertTimeFromUtc(System.DateTime,System.TimeZoneInfo)
static void __M2N_S8S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.TimeZoneInfo::ConvertTime(System.DateTime,System.TimeZoneInfo,System.TimeZoneInfo)
static void __M2N_S8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
static void __M2N_S8S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
static void __M2N_S8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static void __M2N_S96i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.NativeArray`1::get_Item(System.Int32)
static void __M2N_S96i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Boolean System.Convert::ToBoolean(System.SByte)
static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Int16)
static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&,System.Boolean&)
static void __M2N_u1i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Microsoft.Reflection.ReflectionExtensions::IsEnum(System.Type)
static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.SByte::Equals(System.SByte)
static void __M2N_u1i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Int16::Equals(System.Int16)
static void __M2N_u1i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Char::IsSurrogate(System.String,System.Int32)
static void __M2N_u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Globalization.Calendar::IsLeapYear(System.Int32,System.Int32)
static void __M2N_u1i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u1i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
static void __M2N_u1i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords,System.Diagnostics.Tracing.EventChannel)
static void __M2N_u1i8i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Threading.ManualResetEventSlim::Wait(System.Int32,System.Threading.CancellationToken)
static void __M2N_u1i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32,System.Boolean)
static void __M2N_u1i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean <>f__AnonymousType0`1::Equals(System.Object)
static void __M2N_u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.String::Equals(System.String,System.StringComparison)
static void __M2N_u1i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.DateTimeParse/MatchNumberDelegate::Invoke(System.__DTString&,System.Int32,System.Int32&)
static void __M2N_u1i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Microsoft.Win32.RegistryKeyComparer::Equals(System.Object,System.Object)
static void __M2N_u1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static void __M2N_u1i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_u1i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Boolean System.DateTimeParse/MatchNumberDelegate::EndInvoke(System.__DTString&,System.Int32&,System.IAsyncResult)
static void __M2N_u1i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Diagnostics.Tracing.EventProvider::WriteEvent(System.Diagnostics.Tracing.EventDescriptor&,System.Guid*,System.Guid*,System.Int32,System.IntPtr)
static void __M2N_u1i8i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
static void __M2N_u1i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.String::EndsWith(System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_u1i8i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Diagnostics.Tracing.ActivityFilter::PassesActivityFilter(System.Diagnostics.Tracing.ActivityFilter,System.Guid*,System.Boolean,System.Diagnostics.Tracing.EventSource,System.Int32)
static void __M2N_u1i8i8u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Single::Equals(System.Single)
static void __M2N_u1i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Double::Equals(System.Double)
static void __M2N_u1i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u1i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ConsoleKeyInfo::Equals(System.ConsoleKeyInfo)
static void __M2N_u1i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static void __M2N_u1i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::BlockUntilRecvMsg(System.Guid,System.Int32)
static void __M2N_u1i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static void __M2N_u1i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static void __M2N_u1i8S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Collections.Generic.NullableEqualityComparer`1::Equals(System.Nullable`1<T>,System.Nullable`1<T>)
static void __M2N_u1i8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect,System.Boolean)
static void __M2N_u1i8S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static void __M2N_u1i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
static void __M2N_u1i8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i8S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
static void __M2N_u1i8S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Diagnostics.Tracing.SessionMask::IsEqualOrSupersetOf(System.Diagnostics.Tracing.SessionMask)
static void __M2N_u1i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
static void __M2N_u1i8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static void __M2N_u1i8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static void __M2N_u1i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
static void __M2N_u1i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Boolean::Equals(System.Boolean)
static void __M2N_u1i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Diagnostics.Tracing.EventProvider::IsEnabled(System.Byte,System.Int64)
static void __M2N_u1i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static void __M2N_u1i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Char::Equals(System.Char)
static void __M2N_u1i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Int32)
static void __M2N_u1i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static void __M2N_u1i8u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.UInt32::Equals(System.UInt32)
static void __M2N_u1i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static void __M2N_u1i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static void __M2N_u1i8u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Single)
static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Double)
static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_u1S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Decimal)
static void __M2N_u1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
static void __M2N_u1S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
static void __M2N_u1S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<24> __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Runtime.InteropServices.GCHandle::op_Equality(System.Runtime.InteropServices.GCHandle,System.Runtime.InteropServices.GCHandle)
static void __M2N_u1S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u1S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
static void __M2N_u1S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.Runtime::SetGCAllowSynchronousMajor(System.Boolean)
static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Char::IsSurrogatePair(System.Char,System.Char)
static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt32)
static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt64)
static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
static void __M2N_u1u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Char System.Convert::ToChar(System.SByte)
static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Int16)
static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Int32)
static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::Parse(System.String)
static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
static void __M2N_u2i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u2i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
static void __M2N_u2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static void __M2N_u2i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u2i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Single)
static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Double)
static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u2S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Decimal)
static void __M2N_u2S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u2S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Byte)
static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpper(System.Char)
static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpper(System.Char,System.Globalization.CultureInfo)
static void __M2N_u2u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.Convert::ToChar(System.UInt32)
static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.UInt64)
static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Threading.TimeoutHelper::GetTime()
static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt32 System.Convert::ToUInt32(System.SByte)
static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int16)
static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int32)
static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Object)
static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
static void __M2N_u4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
static void __M2N_u4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u4i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Single)
static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Double)
static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u4S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Decimal)
static void __M2N_u4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Diagnostics.Tracing.SessionMask::op_Explicit(System.Diagnostics.Tracing.SessionMask)
static void __M2N_u4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Boolean)
static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Char)
static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.UInt64)
static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.SByte)
static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int16)
static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int32)
static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int64)
static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
static void __M2N_u8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
static void __M2N_u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static void __M2N_u8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Single)
static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Double)
static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSize<1> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<1>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Decimal)
static void __M2N_u8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Diagnostics.Tracing.SessionMask::op_Explicit(System.Diagnostics.Tracing.SessionMask)
static void __M2N_u8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1::Cast<ValueType>(ValueType)
static void __M2N_u8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Boolean)
static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Char)
static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.UInt32)
static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
static void __M2N_u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void Mono.Runtime::InstallSignalHandlers()
static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Void System.Environment::Exit(System.Int32)
static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Debug::LogFormat(UnityEngine.LogType,UnityEngine.LogOption,UnityEngine.Object,System.String,System.Object[])
static void __M2N_vi4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Debugger::Log(System.Int32,System.String,System.String)
static void __M2N_vi4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Diagnostics.Tracing.TraceLoggingDataCollector::AddScalar(System.SByte)
static void __M2N_vi8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.IO.BinaryWriter::Write(System.Int16)
static void __M2N_vi8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
static void __M2N_vi8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
static void __M2N_vi8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Globalization.Unicode.CodePointIndexer/TableRange::.ctor(System.Int32,System.Int32,System.Int32)
static void __M2N_vi8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.Int32)
static void __M2N_vi8i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi8i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.IntPtr)
static void __M2N_vi8i4i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean)
static void __M2N_vi8i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
static void __M2N_vi8i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.IntPtr)
static void __M2N_vi8i4i4i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
static void __M2N_vi8i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void Mono.Globalization.Unicode.TailoringInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean)
static void __M2N_vi8i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
static void __M2N_vi8i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
static void __M2N_vi8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.LogOption,UnityEngine.Object,System.String,System.Object[])
static void __M2N_vi8i4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Cubemap::.ctor(System.Int32,UnityEngine.TextureFormat,System.Boolean)
static void __M2N_vi8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
static void __M2N_vi8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
static void __M2N_vi8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
static void __M2N_vi8i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Diagnostics.Tracing.EventSource::WriteEventWithRelatedActivityIdCore(System.Int32,System.Guid*,System.Int32,System.Diagnostics.Tracing.EventSource/EventData*)
static void __M2N_vi8i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.String,System.String)
static void __M2N_vi8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Globalization.Unicode.Contraction::.ctor(System.Int32,System.Char[],System.String,System.Byte[])
static void __M2N_vi8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*)
static void __M2N_vi8i4i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
static void __M2N_vi8i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
static void __M2N_vi8i4r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
static void __M2N_vi8i4r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Unity.Collections.NativeArray`1::set_Item(System.Int32,T)
static void __M2N_vi8i4S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<96> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
static void __M2N_vi8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.TimeType::.ctor(System.Int32,System.Boolean,System.String)
static void __M2N_vi8i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Diagnostics.Tracing.EventDescriptor::.ctor(System.Int32,System.Byte,System.Byte,System.Int64)
static void __M2N_vi8i4u1u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Tracing.EventDescriptor::.ctor(System.Int32,System.Byte,System.Byte,System.Byte,System.Byte,System.Int32,System.Int64)
static void __M2N_vi8i4u1u1u1u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, int32_t __arg6, int64_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
static void __M2N_vi8i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi8i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void <>f__AnonymousType0`1::.ctor(<message>j__TPar)
static void __M2N_vi8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
static void __M2N_vi8i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Array::CopyTo(System.Array,System.Int32)
static void __M2N_vi8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Xml.SmallXmlParserException::.ctor(System.String,System.Int32,System.Int32)
static void __M2N_vi8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
static void __M2N_vi8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32)
static void __M2N_vi8i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
static void __M2N_vi8i8i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
static void __M2N_vi8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Tracing.TraceLoggingTypeInfo`1::.ctor(System.String,System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventOpcode,System.Diagnostics.Tracing.EventKeywords,System.Diagnostics.Tracing.EventTags)
static void __M2N_vi8i8i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Diagnostics.Tracing.FieldMetadata::.ctor(System.String,System.Diagnostics.Tracing.TraceLoggingDataType,System.Diagnostics.Tracing.EventFieldTags,System.Boolean)
static void __M2N_vi8i8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Tracing.ActivityFilter::UpdateFilter(System.Diagnostics.Tracing.ActivityFilter&,System.Diagnostics.Tracing.EventSource,System.Int32,System.String)
static void __M2N_vi8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
static void __M2N_vi8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32,System.Boolean,System.Int32)
static void __M2N_vi8i8i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::Invoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*)
static void __M2N_vi8i8i4u1i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
static void __M2N_vi8i8i4u1u1u1u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, int64_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __M2N_vi8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
static void __M2N_vi8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
static void __M2N_vi8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Collections.Generic.ArraySortHelper`2::Sort(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
static void __M2N_vi8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Diagnostics.Tracing.ActivityTracker::OnStop(System.String,System.String,System.Int32,System.Guid&)
static void __M2N_vi8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
static void __M2N_vi8i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Diagnostics.Tracing.ActivityTracker::OnStart(System.String,System.String,System.Int32,System.Guid&,System.Guid&,System.Diagnostics.Tracing.EventActivityOptions)
static void __M2N_vi8i8i8i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
static void __M2N_vi8i8i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32,System.Boolean)
static void __M2N_vi8i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
static void __M2N_vi8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Reflection.MemberInfoSerializationHolder::GetSerializationInfo(System.Runtime.Serialization.SerializationInfo,System.String,System.RuntimeType,System.String,System.Reflection.MemberTypes)
static void __M2N_vi8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Tasks.ContinuationTaskFromTask::.ctor(System.Threading.Tasks.Task,System.Delegate,System.Object,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.StackCrawlMark&)
static void __M2N_vi8i8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
static void __M2N_vi8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Reflection.MemberInfoSerializationHolder::GetSerializationInfo(System.Runtime.Serialization.SerializationInfo,System.String,System.RuntimeType,System.String,System.String,System.Reflection.MemberTypes,System.Type[])
static void __M2N_vi8i8i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
static void __M2N_vi8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
static void __M2N_vi8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Diagnostics.Tracing.ActivityTracker/ActivityInfo::.ctor(System.String,System.Int64,System.Diagnostics.Tracing.ActivityTracker/ActivityInfo,System.Guid,System.Diagnostics.Tracing.EventActivityOptions)
static void __M2N_vi8i8i8i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, ValueTypeSize<16> __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Events.CachedInvokableCall`1::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
static void __M2N_vi8i8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi8i8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
static void __M2N_vi8i8i8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
static void __M2N_vi8i8i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
static void __M2N_vi8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
static void __M2N_vi8i8i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi8i8i8u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
static void __M2N_vi8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
static void __M2N_vi8i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.AggregateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Diagnostics.Tracing.ManifestBuilder::.ctor(System.String,System.Guid,System.String,System.Resources.ResourceManager,System.Diagnostics.Tracing.EventManifestOptions)
static void __M2N_vi8i8S16i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
static void __M2N_vi8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Microsoft.Win32.SafeHandles.SafeFileHandle::.ctor(System.IntPtr,System.Boolean)
static void __M2N_vi8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Bindings.NativePropertyAttribute::.ctor(System.String,System.Boolean,UnityEngine.Bindings.TargetType)
static void __M2N_vi8i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
static void __M2N_vi8i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
static void __M2N_vi8i8u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
static void __M2N_vi8i8u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __M2N_vi8i8u1S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Char)
static void __M2N_vi8i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
static void __M2N_vi8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Decimal::.ctor(System.Single)
static void __M2N_vi8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
static void __M2N_vi8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
static void __M2N_vi8r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
static void __M2N_vi8r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Decimal::.ctor(System.Double)
static void __M2N_vi8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult(TResult)
static void __M2N_vi8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
static void __M2N_vi8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_vi8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.ParameterizedStrings/LowLevelStack::Push(System.ParameterizedStrings/FormatParam)
static void __M2N_vi8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Collections.Concurrent.ConcurrentDictionary`2::set_Item(TKey,TValue)
static void __M2N_vi8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __M2N_vi8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __M2N_vi8S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Diagnostics.Tracing.ActivityFilter::UpdateKwdTriggers(System.Diagnostics.Tracing.ActivityFilter,System.Guid,System.Diagnostics.Tracing.EventSource,System.Diagnostics.Tracing.EventKeywords)
static void __M2N_vi8S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
static void __M2N_vi8S16S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, ValueTypeSize<16> __arg3, ValueTypeSize<16> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __M2N_vi8S16S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __M2N_vi8S16S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __M2N_vi8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __M2N_vi8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __M2N_vi8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __M2N_vi8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __M2N_vi8S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __M2N_vi8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
static void __M2N_vi8S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<52> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<52>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.ArgIterator::.ctor(System.RuntimeArgumentHandle)
static void __M2N_vi8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Threading.Tasks.TaskFactory`1::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_vi8S8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
static void __M2N_vi8S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
static void __M2N_vi8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_vi8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Tuple`2::.ctor(T1,T2)
static void __M2N_vi8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
static void __M2N_vi8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Threading.ManualResetEventSlim::.ctor(System.Boolean,System.Int32)
static void __M2N_vi8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode,System.String)
static void __M2N_vi8u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Component::GetComponentsInChildren<T>(System.Boolean,System.Collections.Generic.List`1<T>)
static void __M2N_vi8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
static void __M2N_vi8u1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.Stream/ReadWriteTask::.ctor(System.Boolean,System.Func`2<System.Object,System.Int32>,System.Object,System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.AsyncCallback)
static void __M2N_vi8u1i8i8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int32_t __arg6, int32_t __arg7, int64_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Runtime.Remoting.Identity::NotifyClientDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi8u1i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.Level2Map::.ctor(System.Byte,System.Byte)
static void __M2N_vi8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi8u1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi8u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
static void __M2N_vi8u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.CompilerServices.DecimalConstantAttribute::.ctor(System.Byte,System.Byte,System.UInt32,System.UInt32,System.UInt32)
static void __M2N_vi8u1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
static void __M2N_vi8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.String::.ctor(System.Char,System.Int32)
static void __M2N_vi8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Globalization.Bootstring::.ctor(System.Char,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi8u2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi8u2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Action`2::Invoke(T1,T2)
static void __M2N_vi8u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Decimal::.ctor(System.UInt32)
static void __M2N_vi8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Guid::.ctor(System.UInt32,System.UInt16,System.UInt16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
static void __M2N_vi8u4u2u2u1u1u1u1u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, uint16_t __arg2, uint16_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, uint8_t __arg8, uint8_t __arg9, uint8_t __arg10, uint8_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(uint8_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.Void System.Decimal::.ctor(System.UInt64)
static void __M2N_vi8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Collections.Generic.Dictionary`2::set_Item(TKey,TValue)
static void __M2N_vi8u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_vS12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
static void __M2N_vS12S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
static void __M2N_vS12S12S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
static void __M2N_vS12S12S16r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Diagnostics.Tracing.EventSource::SetCurrentThreadActivityId(System.Guid)
static void __M2N_vS16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.TypedReference::SetTypedReference(System.TypedReference,System.Object)
static void __M2N_vS24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<24> __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
static void __M2N_vS8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Debug::set_developerConsoleVisible(System.Boolean)
static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Debug::Assert(System.Boolean,UnityEngine.Object)
static void __M2N_vu1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Debug::Assert(System.Boolean,System.Object,UnityEngine.Object)
static void __M2N_vu1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::AssertFormat(System.Boolean,UnityEngine.Object,System.String,System.Object[])
static void __M2N_vu1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"i1i1", __M2N_i1i1},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i8", __M2N_i1i8},
	{"i1i8i1", __M2N_i1i8i1},
	{"i1i8i2", __M2N_i1i8i2},
	{"i1i8i4", __M2N_i1i8i4},
	{"i1i8i4i8", __M2N_i1i8i4i8},
	{"i1i8i8", __M2N_i1i8i8},
	{"i1i8r4", __M2N_i1i8r4},
	{"i1i8r8", __M2N_i1i8r8},
	{"i1i8S1", __M2N_i1i8S1},
	{"i1i8S16", __M2N_i1i8S16},
	{"i1i8S8", __M2N_i1i8S8},
	{"i1i8u1", __M2N_i1i8u1},
	{"i1i8u2", __M2N_i1i8u2},
	{"i1i8u4", __M2N_i1i8u4},
	{"i1i8u8", __M2N_i1i8u8},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1S1", __M2N_i1S1},
	{"i1S16", __M2N_i1S16},
	{"i1S8", __M2N_i1S8},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i2i1", __M2N_i2i1},
	{"i2i2", __M2N_i2i2},
	{"i2i4", __M2N_i2i4},
	{"i2i8", __M2N_i2i8},
	{"i2i8i1", __M2N_i2i8i1},
	{"i2i8i2", __M2N_i2i8i2},
	{"i2i8i4", __M2N_i2i8i4},
	{"i2i8i4i8", __M2N_i2i8i4i8},
	{"i2i8i8", __M2N_i2i8i8},
	{"i2i8r4", __M2N_i2i8r4},
	{"i2i8r8", __M2N_i2i8r8},
	{"i2i8S1", __M2N_i2i8S1},
	{"i2i8S16", __M2N_i2i8S16},
	{"i2i8S8", __M2N_i2i8S8},
	{"i2i8u1", __M2N_i2i8u1},
	{"i2i8u2", __M2N_i2i8u2},
	{"i2i8u4", __M2N_i2i8u4},
	{"i2i8u8", __M2N_i2i8u8},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2S1", __M2N_i2S1},
	{"i2S16", __M2N_i2S16},
	{"i2S8", __M2N_i2S8},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i4", __M2N_i4},
	{"i4i1", __M2N_i4i1},
	{"i4i2", __M2N_i4i2},
	{"i4i4", __M2N_i4i4},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4i4i4", __M2N_i4i4i4i4},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i8", __M2N_i4i8},
	{"i4i8i1", __M2N_i4i8i1},
	{"i4i8i2", __M2N_i4i8i2},
	{"i4i8i4", __M2N_i4i8i4},
	{"i4i8i4i4", __M2N_i4i8i4i4},
	{"i4i8i4i4i4", __M2N_i4i8i4i4i4},
	{"i4i8i4i4i4i8", __M2N_i4i8i4i4i4i8},
	{"i4i8i4i4i8", __M2N_i4i8i4i4i8},
	{"i4i8i4i4i8i8", __M2N_i4i8i4i4i8i8},
	{"i4i8i4i4S12i8", __M2N_i4i8i4i4S12i8},
	{"i4i8i4i4S16i8", __M2N_i4i8i4i4S16i8},
	{"i4i8i4i4S20i8", __M2N_i4i8i4i4S20i8},
	{"i4i8i4i4S24i8", __M2N_i4i8i4i4S24i8},
	{"i4i8i4i4S4i8", __M2N_i4i8i4i4S4i8},
	{"i4i8i4i4S8i8", __M2N_i4i8i4i4S8i8},
	{"i4i8i4i4u1i8", __M2N_i4i8i4i4u1i8},
	{"i4i8i4i4u8i8", __M2N_i4i8i4i4u8i8},
	{"i4i8i4i8", __M2N_i4i8i4i8},
	{"i4i8i4i8i4i4", __M2N_i4i8i4i8i4i4},
	{"i4i8i4i8i4i4i4", __M2N_i4i8i4i8i4i4i4},
	{"i4i8i4i8i4i4i8i4", __M2N_i4i8i4i8i4i4i8i4},
	{"i4i8i4i8i4i4u1", __M2N_i4i8i4i8i4i4u1},
	{"i4i8i4i8i4i4u1i8", __M2N_i4i8i4i8i4i4u1i8},
	{"i4i8i4u1", __M2N_i4i8i4u1},
	{"i4i8i8", __M2N_i4i8i8},
	{"i4i8i8i4", __M2N_i4i8i8i4},
	{"i4i8i8i4i4", __M2N_i4i8i8i4i4},
	{"i4i8i8i4i4i4", __M2N_i4i8i8i4i4i4},
	{"i4i8i8i4i4i8", __M2N_i4i8i8i4i4i8},
	{"i4i8i8i4i4i8i4", __M2N_i4i8i8i4i4i8i4},
	{"i4i8i8i4i4i8i4i4i4", __M2N_i4i8i8i4i4i8i4i4i4},
	{"i4i8i8i4i4i8i4u1", __M2N_i4i8i8i4i4i8i4u1},
	{"i4i8i8i4i4u1", __M2N_i4i8i8i4i4u1},
	{"i4i8i8i4i8i4", __M2N_i4i8i8i4i8i4},
	{"i4i8i8i4i8i4u1", __M2N_i4i8i8i4i8i4u1},
	{"i4i8i8i4u1", __M2N_i4i8i8i4u1},
	{"i4i8i8i8", __M2N_i4i8i8i8},
	{"i4i8i8i8i4", __M2N_i4i8i8i8i4},
	{"i4i8i8i8i4i4i4", __M2N_i4i8i8i8i4i4i4},
	{"i4i8i8u1", __M2N_i4i8i8u1},
	{"i4i8i8u1i8", __M2N_i4i8i8u1i8},
	{"i4i8r4", __M2N_i4i8r4},
	{"i4i8r8", __M2N_i4i8r8},
	{"i4i8S1", __M2N_i4i8S1},
	{"i4i8S12", __M2N_i4i8S12},
	{"i4i8S12i4", __M2N_i4i8S12i4},
	{"i4i8S12i4i4", __M2N_i4i8S12i4i4},
	{"i4i8S12i8", __M2N_i4i8S12i8},
	{"i4i8S12S12", __M2N_i4i8S12S12},
	{"i4i8S16", __M2N_i4i8S16},
	{"i4i8S16i4", __M2N_i4i8S16i4},
	{"i4i8S16i4i4", __M2N_i4i8S16i4i4},
	{"i4i8S16i8", __M2N_i4i8S16i8},
	{"i4i8S16S16", __M2N_i4i8S16S16},
	{"i4i8S20S20", __M2N_i4i8S20S20},
	{"i4i8S24", __M2N_i4i8S24},
	{"i4i8S24i4", __M2N_i4i8S24i4},
	{"i4i8S24i4i4", __M2N_i4i8S24i4i4},
	{"i4i8S24i8", __M2N_i4i8S24i8},
	{"i4i8S24S24", __M2N_i4i8S24S24},
	{"i4i8S4", __M2N_i4i8S4},
	{"i4i8S4i4", __M2N_i4i8S4i4},
	{"i4i8S4i4i4", __M2N_i4i8S4i4i4},
	{"i4i8S4i8", __M2N_i4i8S4i8},
	{"i4i8S4S4", __M2N_i4i8S4S4},
	{"i4i8S8", __M2N_i4i8S8},
	{"i4i8S8i4", __M2N_i4i8S8i4},
	{"i4i8S8i4i4", __M2N_i4i8S8i4i4},
	{"i4i8S8i8", __M2N_i4i8S8i8},
	{"i4i8S8S8", __M2N_i4i8S8S8},
	{"i4i8S8u1", __M2N_i4i8S8u1},
	{"i4i8u1", __M2N_i4i8u1},
	{"i4i8u1i4", __M2N_i4i8u1i4},
	{"i4i8u1i4i4", __M2N_i4i8u1i4i4},
	{"i4i8u1i8", __M2N_i4i8u1i8},
	{"i4i8u1u1", __M2N_i4i8u1u1},
	{"i4i8u2", __M2N_i4i8u2},
	{"i4i8u2i4", __M2N_i4i8u2i4},
	{"i4i8u2i4i4", __M2N_i4i8u2i4i4},
	{"i4i8u4", __M2N_i4i8u4},
	{"i4i8u8", __M2N_i4i8u8},
	{"i4i8u8i4", __M2N_i4i8u8i4},
	{"i4i8u8i4i4", __M2N_i4i8u8i4i4},
	{"i4i8u8i8", __M2N_i4i8u8i8},
	{"i4i8u8u8", __M2N_i4i8u8u8},
	{"i4r4", __M2N_i4r4},
	{"i4r8", __M2N_i4r8},
	{"i4S1", __M2N_i4S1},
	{"i4S16", __M2N_i4S16},
	{"i4S4", __M2N_i4S4},
	{"i4S8", __M2N_i4S8},
	{"i4u1", __M2N_i4u1},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u8", __M2N_i4u8},
	{"i8", __M2N_i8},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i4", __M2N_i8i4},
	{"i8i4i4", __M2N_i8i4i4},
	{"i8i4i4i4u2i4", __M2N_i8i4i4i4u2i4},
	{"i8i4i8", __M2N_i8i4i8},
	{"i8i4i8i8", __M2N_i8i4i8i8},
	{"i8i4S8", __M2N_i8i4S8},
	{"i8i4u1", __M2N_i8i4u1},
	{"i8i8", __M2N_i8i8},
	{"i8i8i1", __M2N_i8i8i1},
	{"i8i8i1i8i8", __M2N_i8i8i1i8i8},
	{"i8i8i2", __M2N_i8i8i2},
	{"i8i8i2i8i8", __M2N_i8i8i2i8i8},
	{"i8i8i4", __M2N_i8i8i4},
	{"i8i8i4i4", __M2N_i8i8i4i4},
	{"i8i8i4i4i4", __M2N_i8i8i4i4i4},
	{"i8i8i4i4i4i4i8", __M2N_i8i8i4i4i4i4i8},
	{"i8i8i4i4i8", __M2N_i8i8i4i4i8},
	{"i8i8i4i4i8i8", __M2N_i8i8i4i4i8i8},
	{"i8i8i4i8", __M2N_i8i8i4i8},
	{"i8i8i4i8i4", __M2N_i8i8i4i8i4},
	{"i8i8i4i8i4i8i8", __M2N_i8i8i4i8i4i8i8},
	{"i8i8i4i8i8", __M2N_i8i8i4i8i8},
	{"i8i8i4i8i8i8", __M2N_i8i8i4i8i8i8},
	{"i8i8i4i8i8i8i8", __M2N_i8i8i4i8i8i8i8},
	{"i8i8i4i8i8i8i8i8i8", __M2N_i8i8i4i8i8i8i8i8i8},
	{"i8i8i4S8", __M2N_i8i8i4S8},
	{"i8i8i4u1", __M2N_i8i8i4u1},
	{"i8i8i4u1u1u1u1i8i4", __M2N_i8i8i4u1u1u1u1i8i4},
	{"i8i8i4u2", __M2N_i8i8i4u2},
	{"i8i8i8", __M2N_i8i8i8},
	{"i8i8i8i4", __M2N_i8i8i8i4},
	{"i8i8i8i4i4", __M2N_i8i8i8i4i4},
	{"i8i8i8i4i4i4", __M2N_i8i8i8i4i4i4},
	{"i8i8i8i4i4i8i8", __M2N_i8i8i8i4i4i8i8},
	{"i8i8i8i4i4i8u1i8i8i8", __M2N_i8i8i8i4i4i8u1i8i8i8},
	{"i8i8i8i4i8", __M2N_i8i8i8i4i8},
	{"i8i8i8i4i8i4i8i8", __M2N_i8i8i8i4i8i4i8i8},
	{"i8i8i8i4i8i8", __M2N_i8i8i8i4i8i8},
	{"i8i8i8i4i8i8i8", __M2N_i8i8i8i4i8i8i8},
	{"i8i8i8i4i8i8i8i8", __M2N_i8i8i8i4i8i8i8i8},
	{"i8i8i8i4i8i8i8i8i8i8", __M2N_i8i8i8i4i8i8i8i8i8i8},
	{"i8i8i8i4u1i8i8i8i8i8i8", __M2N_i8i8i8i4u1i8i8i8i8i8i8},
	{"i8i8i8i8", __M2N_i8i8i8i8},
	{"i8i8i8i8i4", __M2N_i8i8i8i8i4},
	{"i8i8i8i8i4i4", __M2N_i8i8i8i8i4i4},
	{"i8i8i8i8i4i8i8", __M2N_i8i8i8i8i4i8i8},
	{"i8i8i8i8i8", __M2N_i8i8i8i8i8},
	{"i8i8i8i8i8i4", __M2N_i8i8i8i8i8i4},
	{"i8i8i8i8i8i8", __M2N_i8i8i8i8i8i8},
	{"i8i8i8i8i8i8i8", __M2N_i8i8i8i8i8i8i8},
	{"i8i8i8i8i8i8i8i8", __M2N_i8i8i8i8i8i8i8i8},
	{"i8i8i8i8S16i8", __M2N_i8i8i8i8S16i8},
	{"i8i8i8i8S8i4i8", __M2N_i8i8i8i8S8i4i8},
	{"i8i8i8i8S8u1", __M2N_i8i8i8i8S8u1},
	{"i8i8i8i8u1", __M2N_i8i8i8i8u1},
	{"i8i8i8i8u1i8i8", __M2N_i8i8i8i8u1i8i8},
	{"i8i8i8i8u1u1", __M2N_i8i8i8i8u1u1},
	{"i8i8i8i8u1u1i8", __M2N_i8i8i8i8u1u1i8},
	{"i8i8i8S160i8i8", __M2N_i8i8i8S160i8i8},
	{"i8i8i8S16i8", __M2N_i8i8i8S16i8},
	{"i8i8i8S16i8i8", __M2N_i8i8i8S16i8i8},
	{"i8i8i8S8i4i8", __M2N_i8i8i8S8i4i8},
	{"i8i8i8u1", __M2N_i8i8i8u1},
	{"i8i8i8u1i8i8", __M2N_i8i8i8u1i8i8},
	{"i8i8i8u1S32i8i8", __M2N_i8i8i8u1S32i8i8},
	{"i8i8i8u1u1", __M2N_i8i8i8u1u1},
	{"i8i8r4", __M2N_i8i8r4},
	{"i8i8r4i8", __M2N_i8i8r4i8},
	{"i8i8r4i8i8", __M2N_i8i8r4i8i8},
	{"i8i8r8", __M2N_i8i8r8},
	{"i8i8r8i8", __M2N_i8i8r8i8},
	{"i8i8r8i8i8", __M2N_i8i8r8i8i8},
	{"i8i8S1", __M2N_i8i8S1},
	{"i8i8S12i8i8", __M2N_i8i8S12i8i8},
	{"i8i8S12S12i8i8", __M2N_i8i8S12S12i8i8},
	{"i8i8S16", __M2N_i8i8S16},
	{"i8i8S16i8", __M2N_i8i8S16i8},
	{"i8i8S16i8i8", __M2N_i8i8S16i8i8},
	{"i8i8S16i8i8i8", __M2N_i8i8S16i8i8i8},
	{"i8i8S16S16i8i8", __M2N_i8i8S16S16i8i8},
	{"i8i8S1i8i8", __M2N_i8i8S1i8i8},
	{"i8i8S20S20i8i8", __M2N_i8i8S20S20i8i8},
	{"i8i8S24i8i8", __M2N_i8i8S24i8i8},
	{"i8i8S24S24i8i8", __M2N_i8i8S24S24i8i8},
	{"i8i8S40i8i8", __M2N_i8i8S40i8i8},
	{"i8i8S4i4i8i8", __M2N_i8i8S4i4i8i8},
	{"i8i8S4i8i8", __M2N_i8i8S4i8i8},
	{"i8i8S4S4i8i8", __M2N_i8i8S4S4i8i8},
	{"i8i8S8", __M2N_i8i8S8},
	{"i8i8S8i8i8", __M2N_i8i8S8i8i8},
	{"i8i8S8i8i8i8i8", __M2N_i8i8S8i8i8i8i8},
	{"i8i8S8i8i8i8i8u1", __M2N_i8i8S8i8i8i8i8u1},
	{"i8i8S8S8i8i8", __M2N_i8i8S8S8i8i8},
	{"i8i8u1", __M2N_i8i8u1},
	{"i8i8u1i4i4i4i8i4i4i4i4u1i8", __M2N_i8i8u1i4i4i4i8i4i4i4i4u1i8},
	{"i8i8u1i8i8", __M2N_i8i8u1i8i8},
	{"i8i8u1u1", __M2N_i8i8u1u1},
	{"i8i8u1u1i8i8", __M2N_i8i8u1u1i8i8},
	{"i8i8u2", __M2N_i8i8u2},
	{"i8i8u2i4", __M2N_i8i8u2i4},
	{"i8i8u2i8i8", __M2N_i8i8u2i8i8},
	{"i8i8u2i8i8i8", __M2N_i8i8u2i8i8i8},
	{"i8i8u2u2", __M2N_i8i8u2u2},
	{"i8i8u2u2i4", __M2N_i8i8u2u2i4},
	{"i8i8u4", __M2N_i8i8u4},
	{"i8i8u4i8", __M2N_i8i8u4i8},
	{"i8i8u4i8i8", __M2N_i8i8u4i8i8},
	{"i8i8u8", __M2N_i8i8u8},
	{"i8i8u8i8", __M2N_i8i8u8i8},
	{"i8i8u8i8i8", __M2N_i8i8u8i8i8},
	{"i8i8u8u8i8i8", __M2N_i8i8u8u8i8i8},
	{"i8r4", __M2N_i8r4},
	{"i8r4i8i8", __M2N_i8r4i8i8},
	{"i8r8", __M2N_i8r8},
	{"i8r8i8i8", __M2N_i8r8i8i8},
	{"i8S1", __M2N_i8S1},
	{"i8S16", __M2N_i8S16},
	{"i8S16i4", __M2N_i8S16i4},
	{"i8S16i8i8", __M2N_i8S16i8i8},
	{"i8S24", __M2N_i8S24},
	{"i8S4", __M2N_i8S4},
	{"i8S8", __M2N_i8S8},
	{"i8S8S8", __M2N_i8S8S8},
	{"i8S8S8S8S24S24", __M2N_i8S8S8S8S24S24},
	{"i8S8u1", __M2N_i8S8u1},
	{"i8u1", __M2N_i8u1},
	{"i8u1u1i8i8", __M2N_i8u1u1i8i8},
	{"i8u2", __M2N_i8u2},
	{"i8u2i8", __M2N_i8u2i8},
	{"i8u4", __M2N_i8u4},
	{"i8u4i8i8", __M2N_i8u4i8i8},
	{"i8u8", __M2N_i8u8},
	{"i8u8i8i8", __M2N_i8u8i8i8},
	{"r4", __M2N_r4},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i8", __M2N_r4i8},
	{"r4i8i4", __M2N_r4i8i4},
	{"r4i8i4i8", __M2N_r4i8i4i8},
	{"r4i8i8", __M2N_r4i8i8},
	{"r4i8r4", __M2N_r4i8r4},
	{"r4i8r4r4", __M2N_r4i8r4r4},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4i8r4r4r4", __M2N_r4r4r4i8r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4S12", __M2N_r4S12},
	{"r4S12S12", __M2N_r4S12S12},
	{"r4S16", __M2N_r4S16},
	{"r4S16S16", __M2N_r4S16S16},
	{"r4S8S8", __M2N_r4S8S8},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i8", __M2N_r8i8},
	{"r8i8i4i8", __M2N_r8i8i4i8},
	{"r8i8i8", __M2N_r8i8i8},
	{"r8i8r8", __M2N_r8i8r8},
	{"r8i8r8r8", __M2N_r8i8r8r8},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8S16", __M2N_r8S16},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"S12", __M2N_S12},
	{"S12i8", __M2N_S12i8},
	{"S12i8i4", __M2N_S12i8i4},
	{"S12i8i8", __M2N_S12i8i8},
	{"S12i8r4", __M2N_S12i8r4},
	{"S12i8S12", __M2N_S12i8S12},
	{"S12i8S12i4", __M2N_S12i8S12i4},
	{"S12i8u1", __M2N_S12i8u1},
	{"S12S12", __M2N_S12S12},
	{"S12S12r4", __M2N_S12S12r4},
	{"S12S12S12", __M2N_S12S12S12},
	{"S12S12S12r4", __M2N_S12S12S12r4},
	{"S12S16S12", __M2N_S12S16S12},
	{"S12S8", __M2N_S12S8},
	{"S12u1", __M2N_S12u1},
	{"S16", __M2N_S16},
	{"S16i1", __M2N_S16i1},
	{"S16i2", __M2N_S16i2},
	{"S16i4", __M2N_S16i4},
	{"S16i8", __M2N_S16i8},
	{"S16i8i4", __M2N_S16i8i4},
	{"S16i8i4i4", __M2N_S16i8i4i4},
	{"S16i8i4i8", __M2N_S16i8i4i8},
	{"S16i8i8", __M2N_S16i8i8},
	{"S16i8i8S160", __M2N_S16i8i8S160},
	{"S16i8r4r4", __M2N_S16i8r4r4},
	{"S16i8S16i8", __M2N_S16i8S16i8},
	{"S16i8u1", __M2N_S16i8u1},
	{"S16r4", __M2N_S16r4},
	{"S16r8", __M2N_S16r8},
	{"S16S12", __M2N_S16S12},
	{"S16S16", __M2N_S16S16},
	{"S16S16i4", __M2N_S16S16i4},
	{"S16S16r4", __M2N_S16S16r4},
	{"S16S16S16r4", __M2N_S16S16S16r4},
	{"S16S4", __M2N_S16S4},
	{"S16S8", __M2N_S16S8},
	{"S16u1", __M2N_S16u1},
	{"S16u2", __M2N_S16u2},
	{"S16u4", __M2N_S16u4},
	{"S16u8", __M2N_S16u8},
	{"S1i8", __M2N_S1i8},
	{"S1i8i8", __M2N_S1i8i8},
	{"S20i8", __M2N_S20i8},
	{"S24", __M2N_S24},
	{"S24i8", __M2N_S24i8},
	{"S24i8i4", __M2N_S24i8i4},
	{"S24i8i8", __M2N_S24i8i8},
	{"S24i8S12", __M2N_S24i8S12},
	{"S24i8S12i4", __M2N_S24i8S12i4},
	{"S24S8i4i4", __M2N_S24S8i4i4},
	{"S24S8i4i4i4", __M2N_S24S8i4i4i4},
	{"S32i8", __M2N_S32i8},
	{"S4", __M2N_S4},
	{"S40i8", __M2N_S40i8},
	{"S48i8", __M2N_S48i8},
	{"S4i4", __M2N_S4i4},
	{"S4i8", __M2N_S4i8},
	{"S4i8i4", __M2N_S4i8i4},
	{"S4i8i8", __M2N_S4i8i8},
	{"S4S16", __M2N_S4S16},
	{"S4u8", __M2N_S4u8},
	{"S52i8", __M2N_S52i8},
	{"S64", __M2N_S64},
	{"S64i8", __M2N_S64i8},
	{"S64S12S16S12", __M2N_S64S12S16S12},
	{"S8", __M2N_S8},
	{"S8i8", __M2N_S8i8},
	{"S8i8i4", __M2N_S8i8i4},
	{"S8i8i4i4i4i4i4i4i4i4", __M2N_S8i8i4i4i4i4i4i4i4i4},
	{"S8i8i8", __M2N_S8i8i8},
	{"S8i8r8", __M2N_S8i8r8},
	{"S8i8S8", __M2N_S8i8S8},
	{"S8r8", __M2N_S8r8},
	{"S8S12", __M2N_S8S12},
	{"S8S8", __M2N_S8S8},
	{"S8S8i4", __M2N_S8S8i4},
	{"S8S8i8", __M2N_S8S8i8},
	{"S8S8i8i8", __M2N_S8S8i8i8},
	{"S8S8r4", __M2N_S8S8r4},
	{"S8S8S8", __M2N_S8S8S8},
	{"S96i8", __M2N_S96i8},
	{"S96i8i4", __M2N_S96i8i4},
	{"u1", __M2N_u1},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4i8i8i8", __M2N_u1i4i8i8i8},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i8", __M2N_u1i8},
	{"u1i8i1", __M2N_u1i8i1},
	{"u1i8i2", __M2N_u1i8i2},
	{"u1i8i4", __M2N_u1i8i4},
	{"u1i8i4i4", __M2N_u1i8i4i4},
	{"u1i8i4i8", __M2N_u1i8i4i8},
	{"u1i8i4i8i8", __M2N_u1i8i4i8i8},
	{"u1i8i4i8u1", __M2N_u1i8i4i8u1},
	{"u1i8i4S8", __M2N_u1i8i4S8},
	{"u1i8i4u1", __M2N_u1i8i4u1},
	{"u1i8i8", __M2N_u1i8i8},
	{"u1i8i8i4", __M2N_u1i8i8i4},
	{"u1i8i8i4i8", __M2N_u1i8i8i4i8},
	{"u1i8i8i8", __M2N_u1i8i8i8},
	{"u1i8i8i8i4", __M2N_u1i8i8i8i4},
	{"u1i8i8i8i4i4i4", __M2N_u1i8i8i8i4i4i4},
	{"u1i8i8i8i8", __M2N_u1i8i8i8i8},
	{"u1i8i8i8i8i4i8", __M2N_u1i8i8i8i8i4i8},
	{"u1i8i8u1", __M2N_u1i8i8u1},
	{"u1i8i8u1i8", __M2N_u1i8i8u1i8},
	{"u1i8i8u1i8i4", __M2N_u1i8i8u1i8i4},
	{"u1i8r4", __M2N_u1i8r4},
	{"u1i8r8", __M2N_u1i8r8},
	{"u1i8S1", __M2N_u1i8S1},
	{"u1i8S12", __M2N_u1i8S12},
	{"u1i8S12S12", __M2N_u1i8S12S12},
	{"u1i8S16", __M2N_u1i8S16},
	{"u1i8S16i4", __M2N_u1i8S16i4},
	{"u1i8S16i8", __M2N_u1i8S16i8},
	{"u1i8S16i8i4", __M2N_u1i8S16i8i4},
	{"u1i8S16S16", __M2N_u1i8S16S16},
	{"u1i8S16u1", __M2N_u1i8S16u1},
	{"u1i8S24", __M2N_u1i8S24},
	{"u1i8S24i8", __M2N_u1i8S24i8},
	{"u1i8S24S24", __M2N_u1i8S24S24},
	{"u1i8S28", __M2N_u1i8S28},
	{"u1i8S4", __M2N_u1i8S4},
	{"u1i8S40", __M2N_u1i8S40},
	{"u1i8S4S4", __M2N_u1i8S4S4},
	{"u1i8S64", __M2N_u1i8S64},
	{"u1i8S8", __M2N_u1i8S8},
	{"u1i8S8S8", __M2N_u1i8S8S8},
	{"u1i8u1", __M2N_u1i8u1},
	{"u1i8u1i8", __M2N_u1i8u1i8},
	{"u1i8u1u1", __M2N_u1i8u1u1},
	{"u1i8u2", __M2N_u1i8u2},
	{"u1i8u2i4", __M2N_u1i8u2i4},
	{"u1i8u2u2i4", __M2N_u1i8u2u2i4},
	{"u1i8u4", __M2N_u1i8u4},
	{"u1i8u8", __M2N_u1i8u8},
	{"u1i8u8i8", __M2N_u1i8u8i8},
	{"u1i8u8u8", __M2N_u1i8u8u8},
	{"u1r4", __M2N_u1r4},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r8", __M2N_u1r8},
	{"u1S1", __M2N_u1S1},
	{"u1S12S12", __M2N_u1S12S12},
	{"u1S16", __M2N_u1S16},
	{"u1S16S16", __M2N_u1S16S16},
	{"u1S24S24", __M2N_u1S24S24},
	{"u1S4S4", __M2N_u1S4S4},
	{"u1S8", __M2N_u1S8},
	{"u1S8S8", __M2N_u1S8S8},
	{"u1u1", __M2N_u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u8", __M2N_u1u8},
	{"u1u8u8", __M2N_u1u8u8},
	{"u2", __M2N_u2},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i8", __M2N_u2i8},
	{"u2i8i1", __M2N_u2i8i1},
	{"u2i8i2", __M2N_u2i8i2},
	{"u2i8i4", __M2N_u2i8i4},
	{"u2i8i4i8", __M2N_u2i8i4i8},
	{"u2i8i8", __M2N_u2i8i8},
	{"u2i8r4", __M2N_u2i8r4},
	{"u2i8r8", __M2N_u2i8r8},
	{"u2i8S1", __M2N_u2i8S1},
	{"u2i8S16", __M2N_u2i8S16},
	{"u2i8S8", __M2N_u2i8S8},
	{"u2i8u1", __M2N_u2i8u1},
	{"u2i8u2", __M2N_u2i8u2},
	{"u2i8u4", __M2N_u2i8u4},
	{"u2i8u8", __M2N_u2i8u8},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2S1", __M2N_u2S1},
	{"u2S16", __M2N_u2S16},
	{"u2S8", __M2N_u2S8},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u2i8", __M2N_u2u2i8},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u4", __M2N_u4},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i8", __M2N_u4i8},
	{"u4i8i1", __M2N_u4i8i1},
	{"u4i8i2", __M2N_u4i8i2},
	{"u4i8i4", __M2N_u4i8i4},
	{"u4i8i4i8", __M2N_u4i8i4i8},
	{"u4i8i8", __M2N_u4i8i8},
	{"u4i8r4", __M2N_u4i8r4},
	{"u4i8r8", __M2N_u4i8r8},
	{"u4i8S1", __M2N_u4i8S1},
	{"u4i8S16", __M2N_u4i8S16},
	{"u4i8S8", __M2N_u4i8S8},
	{"u4i8u1", __M2N_u4i8u1},
	{"u4i8u2", __M2N_u4i8u2},
	{"u4i8u4", __M2N_u4i8u4},
	{"u4i8u8", __M2N_u4i8u8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4S1", __M2N_u4S1},
	{"u4S16", __M2N_u4S16},
	{"u4S4", __M2N_u4S4},
	{"u4S8", __M2N_u4S8},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u4", __M2N_u4u4},
	{"u4u8", __M2N_u4u8},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i8", __M2N_u8i8},
	{"u8i8i1", __M2N_u8i8i1},
	{"u8i8i2", __M2N_u8i8i2},
	{"u8i8i4", __M2N_u8i8i4},
	{"u8i8i4i8", __M2N_u8i8i4i8},
	{"u8i8i8", __M2N_u8i8i8},
	{"u8i8r4", __M2N_u8i8r4},
	{"u8i8r8", __M2N_u8i8r8},
	{"u8i8S1", __M2N_u8i8S1},
	{"u8i8S16", __M2N_u8i8S16},
	{"u8i8S8", __M2N_u8i8S8},
	{"u8i8u1", __M2N_u8i8u1},
	{"u8i8u2", __M2N_u8i8u2},
	{"u8i8u4", __M2N_u8i8u4},
	{"u8i8u8", __M2N_u8i8u8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8S1", __M2N_u8S1},
	{"u8S16", __M2N_u8S16},
	{"u8S4", __M2N_u8S4},
	{"u8S8", __M2N_u8S8},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8u8", __M2N_u8u8},
	{"v", __M2N_v},
	{"vi4", __M2N_vi4},
	{"vi4i4i8i8i8", __M2N_vi4i4i8i8i8},
	{"vi4i8i8", __M2N_vi4i8i8},
	{"vi8", __M2N_vi8},
	{"vi8i1", __M2N_vi8i1},
	{"vi8i2", __M2N_vi8i2},
	{"vi8i4", __M2N_vi8i4},
	{"vi8i4i4", __M2N_vi8i4i4},
	{"vi8i4i4i4", __M2N_vi8i4i4i4},
	{"vi8i4i4i4i4", __M2N_vi8i4i4i4i4},
	{"vi8i4i4i4i4i4", __M2N_vi8i4i4i4i4i4},
	{"vi8i4i4i4i4i4i4", __M2N_vi8i4i4i4i4i4i4},
	{"vi8i4i4i4i4i4i4i4", __M2N_vi8i4i4i4i4i4i4i4},
	{"vi8i4i4i4i4i4i8", __M2N_vi8i4i4i4i4i4i8},
	{"vi8i4i4i4i4i4u1", __M2N_vi8i4i4i4i4i4u1},
	{"vi8i4i4i4i4u1", __M2N_vi8i4i4i4i4u1},
	{"vi8i4i4i4i4u1i8", __M2N_vi8i4i4i4i4u1i8},
	{"vi8i4i4i4i4u1u1", __M2N_vi8i4i4i4i4u1u1},
	{"vi8i4i4i4u1", __M2N_vi8i4i4i4u1},
	{"vi8i4i4i4u1u1", __M2N_vi8i4i4i4u1u1},
	{"vi8i4i4i8", __M2N_vi8i4i4i8},
	{"vi8i4i4i8i8i8", __M2N_vi8i4i4i8i8i8},
	{"vi8i4i4u1", __M2N_vi8i4i4u1},
	{"vi8i4i8", __M2N_vi8i4i8},
	{"vi8i4i8i4i4", __M2N_vi8i4i8i4i4},
	{"vi8i4i8i4i4i4", __M2N_vi8i4i8i4i4i4},
	{"vi8i4i8i4i8", __M2N_vi8i4i8i4i8},
	{"vi8i4i8i8", __M2N_vi8i4i8i8},
	{"vi8i4i8i8i8", __M2N_vi8i4i8i8i8},
	{"vi8i4i8i8i8i8i8", __M2N_vi8i4i8i8i8i8i8},
	{"vi8i4r4", __M2N_vi8i4r4},
	{"vi8i4r4i8", __M2N_vi8i4r4i8},
	{"vi8i4r4i8i8", __M2N_vi8i4r4i8i8},
	{"vi8i4S12", __M2N_vi8i4S12},
	{"vi8i4S16", __M2N_vi8i4S16},
	{"vi8i4S24", __M2N_vi8i4S24},
	{"vi8i4S4", __M2N_vi8i4S4},
	{"vi8i4S8", __M2N_vi8i4S8},
	{"vi8i4S96", __M2N_vi8i4S96},
	{"vi8i4u1", __M2N_vi8i4u1},
	{"vi8i4u1i8", __M2N_vi8i4u1i8},
	{"vi8i4u1u1i8", __M2N_vi8i4u1u1i8},
	{"vi8i4u1u1u1u1i4i8", __M2N_vi8i4u1u1u1u1i4i8},
	{"vi8i4u2", __M2N_vi8i4u2},
	{"vi8i4u8", __M2N_vi8i4u8},
	{"vi8i8", __M2N_vi8i8},
	{"vi8i8i2", __M2N_vi8i8i2},
	{"vi8i8i4", __M2N_vi8i8i4},
	{"vi8i8i4i4", __M2N_vi8i8i4i4},
	{"vi8i8i4i4i4", __M2N_vi8i8i4i4i4},
	{"vi8i8i4i4i4i4", __M2N_vi8i8i4i4i4i4},
	{"vi8i8i4i4i4u1i4", __M2N_vi8i8i4i4i4u1i4},
	{"vi8i8i4i4i8", __M2N_vi8i8i4i4i8},
	{"vi8i8i4i4i8i4", __M2N_vi8i8i4i4i8i4},
	{"vi8i8i4i4u1", __M2N_vi8i8i4i4u1},
	{"vi8i8i4i8", __M2N_vi8i8i4i8},
	{"vi8i8i4u1", __M2N_vi8i8i4u1},
	{"vi8i8i4u1i4", __M2N_vi8i8i4u1i4},
	{"vi8i8i4u1i8i8i8i8", __M2N_vi8i8i4u1i8i8i8i8},
	{"vi8i8i4u1u1u1u1i8i4", __M2N_vi8i8i4u1u1u1u1i8i4},
	{"vi8i8i8", __M2N_vi8i8i8},
	{"vi8i8i8i4", __M2N_vi8i8i8i4},
	{"vi8i8i8i4i4", __M2N_vi8i8i8i4i4},
	{"vi8i8i8i4i4i8", __M2N_vi8i8i8i4i4i8},
	{"vi8i8i8i4i8", __M2N_vi8i8i8i4i8},
	{"vi8i8i8i4i8i8", __M2N_vi8i8i8i4i8i8},
	{"vi8i8i8i4i8i8i4", __M2N_vi8i8i8i4i8i8i4},
	{"vi8i8i8i4i8i8i8", __M2N_vi8i8i8i4i8i8i8},
	{"vi8i8i8i4u1", __M2N_vi8i8i8i4u1},
	{"vi8i8i8i8", __M2N_vi8i8i8i8},
	{"vi8i8i8i8i4", __M2N_vi8i8i8i8i4},
	{"vi8i8i8i8i4i4i8", __M2N_vi8i8i8i8i4i4i8},
	{"vi8i8i8i8i8", __M2N_vi8i8i8i8i8},
	{"vi8i8i8i8i8i4i8", __M2N_vi8i8i8i8i8i4i8},
	{"vi8i8i8i8i8i8", __M2N_vi8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i8", __M2N_vi8i8i8i8i8i8i8},
	{"vi8i8i8i8S16i4", __M2N_vi8i8i8i8S16i4},
	{"vi8i8i8r4", __M2N_vi8i8i8r4},
	{"vi8i8i8S16", __M2N_vi8i8i8S16},
	{"vi8i8i8S8i4", __M2N_vi8i8i8S8i4},
	{"vi8i8i8S8S8", __M2N_vi8i8i8S8S8},
	{"vi8i8i8u1", __M2N_vi8i8i8u1},
	{"vi8i8i8u1i4", __M2N_vi8i8i8u1i4},
	{"vi8i8i8u1i4u1", __M2N_vi8i8i8u1i4u1},
	{"vi8i8r4", __M2N_vi8i8r4},
	{"vi8i8r4r4", __M2N_vi8i8r4r4},
	{"vi8i8S16", __M2N_vi8i8S16},
	{"vi8i8S16i8i8i4", __M2N_vi8i8S16i8i8i4},
	{"vi8i8S8", __M2N_vi8i8S8},
	{"vi8i8u1", __M2N_vi8i8u1},
	{"vi8i8u1i4", __M2N_vi8i8u1i4},
	{"vi8i8u1i8", __M2N_vi8i8u1i8},
	{"vi8i8u1i8i4", __M2N_vi8i8u1i8i4},
	{"vi8i8u1i8i8", __M2N_vi8i8u1i8i8},
	{"vi8i8u1S32", __M2N_vi8i8u1S32},
	{"vi8i8u1u1", __M2N_vi8i8u1u1},
	{"vi8i8u2", __M2N_vi8i8u2},
	{"vi8i8u8", __M2N_vi8i8u8},
	{"vi8r4", __M2N_vi8r4},
	{"vi8r4r4", __M2N_vi8r4r4},
	{"vi8r4r4r4", __M2N_vi8r4r4r4},
	{"vi8r4r4r4r4", __M2N_vi8r4r4r4r4},
	{"vi8r8", __M2N_vi8r8},
	{"vi8S1", __M2N_vi8S1},
	{"vi8S12", __M2N_vi8S12},
	{"vi8S12S12", __M2N_vi8S12S12},
	{"vi8S16", __M2N_vi8S16},
	{"vi8S16i4", __M2N_vi8S16i4},
	{"vi8S16i8", __M2N_vi8S16i8},
	{"vi8S16i8i4", __M2N_vi8S16i8i4},
	{"vi8S16i8i8", __M2N_vi8S16i8i8},
	{"vi8S16S16S16S16", __M2N_vi8S16S16S16S16},
	{"vi8S16S64", __M2N_vi8S16S64},
	{"vi8S16S64i8", __M2N_vi8S16S64i8},
	{"vi8S24", __M2N_vi8S24},
	{"vi8S24i8", __M2N_vi8S24i8},
	{"vi8S4", __M2N_vi8S4},
	{"vi8S40", __M2N_vi8S40},
	{"vi8S4i4", __M2N_vi8S4i4},
	{"vi8S4S4", __M2N_vi8S4S4},
	{"vi8S52", __M2N_vi8S52},
	{"vi8S8", __M2N_vi8S8},
	{"vi8S8i4i4i8", __M2N_vi8S8i4i4i8},
	{"vi8S8i8", __M2N_vi8S8i8},
	{"vi8S8i8i8", __M2N_vi8S8i8i8},
	{"vi8S8S8", __M2N_vi8S8S8},
	{"vi8S8u1", __M2N_vi8S8u1},
	{"vi8u1", __M2N_vi8u1},
	{"vi8u1i4", __M2N_vi8u1i4},
	{"vi8u1i4i8", __M2N_vi8u1i4i8},
	{"vi8u1i8", __M2N_vi8u1i8},
	{"vi8u1i8i8i8", __M2N_vi8u1i8i8i8},
	{"vi8u1i8i8i8i8i4i4i8", __M2N_vi8u1i8i8i8i8i4i4i8},
	{"vi8u1i8u1u1", __M2N_vi8u1i8u1u1},
	{"vi8u1u1", __M2N_vi8u1u1},
	{"vi8u1u1i4u1", __M2N_vi8u1u1i4u1},
	{"vi8u1u1u1", __M2N_vi8u1u1u1},
	{"vi8u1u1u1u1", __M2N_vi8u1u1u1u1},
	{"vi8u1u1u4u4u4", __M2N_vi8u1u1u4u4u4},
	{"vi8u2", __M2N_vi8u2},
	{"vi8u2i4", __M2N_vi8u2i4},
	{"vi8u2i4i4i4i4i4i4i4", __M2N_vi8u2i4i4i4i4i4i4i4},
	{"vi8u2i4u1u1u1", __M2N_vi8u2i4u1u1u1},
	{"vi8u2i8", __M2N_vi8u2i8},
	{"vi8u4", __M2N_vi8u4},
	{"vi8u4u2u2u1u1u1u1u1u1u1u1", __M2N_vi8u4u2u2u1u1u1u1u1u1u1u1},
	{"vi8u8", __M2N_vi8u8},
	{"vi8u8i8", __M2N_vi8u8i8},
	{"vS12S12", __M2N_vS12S12},
	{"vS12S12S16", __M2N_vS12S12S16},
	{"vS12S12S16r4", __M2N_vS12S12S16r4},
	{"vS12S12S16r4u1", __M2N_vS12S12S16r4u1},
	{"vS16", __M2N_vS16},
	{"vS24i8", __M2N_vS24i8},
	{"vS8", __M2N_vS8},
	{"vu1", __M2N_vu1},
	{"vu1i8", __M2N_vu1i8},
	{"vu1i8i8", __M2N_vu1i8i8},
	{"vu1i8i8i8", __M2N_vu1i8i8i8},
	{nullptr, nullptr},
};

// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.SByte System.IO.BinaryReader::ReadSByte()
static int8_t __N2M_i1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_i1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int8_t __N2M_i1u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int16 System.IO.BinaryReader::ReadInt16()
static int16_t __N2M_i2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_i2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int16_t __N2M_i2u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// TResult System.Func`1::Invoke()
static int32_t __N2M_i4(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 <>f__AnonymousType0`1::GetHashCode()
static int32_t __N2M_i4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static int32_t __N2M_i4i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static int32_t __N2M_i4i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Int32::CompareTo(System.Int32)
static int32_t __N2M_i4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
static int32_t __N2M_i4i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.Calendar::GetDaysInMonth(System.Int32,System.Int32,System.Int32)
static int32_t __N2M_i4i8i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 Microsoft.Win32.RegistryKeyComparer::GetHashCode(System.Object)
static int32_t __N2M_i4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
static int32_t __N2M_i4i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
static int32_t __N2M_i4i8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
static int32_t __N2M_i4i8i8i4i4i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_i4i8i8i4i4i8i4i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static int32_t __N2M_i4i8i8i4i4i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static int32_t __N2M_i4i8i8i4i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
static int32_t __N2M_i4i8i8i4i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean)
static int32_t __N2M_i4i8i8i4i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte*,System.Int32,System.Boolean)
static int32_t __N2M_i4i8i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 Mono.Globalization.Unicode.ContractionComparer::Compare(Mono.Globalization.Unicode.Contraction,Mono.Globalization.Unicode.Contraction)
static int32_t __N2M_i4i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions)
static int32_t __N2M_i4i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_i4i8i8i8i4i4i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Single::CompareTo(System.Single)
static int32_t __N2M_i4i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Double::CompareTo(System.Double)
static int32_t __N2M_i4i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T)
static int32_t __N2M_i4i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static int32_t __N2M_i4i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.NullableComparer`1::Compare(System.Nullable`1<T>,System.Nullable`1<T>)
static int32_t __N2M_i4i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i8S20S20(int64_t __arg0, ValueTypeSize<20> __arg1, ValueTypeSize<20> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_i4i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T)
static int32_t __N2M_i4i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static int32_t __N2M_i4i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Boolean::CompareTo(System.Boolean)
static int32_t __N2M_i4i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8u1u1(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Char::CompareTo(System.Char)
static int32_t __N2M_i4i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt32::CompareTo(System.UInt32)
static int32_t __N2M_i4i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static int32_t __N2M_i4i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S12S12(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static int32_t __N2M_i4S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S16S16(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S20S20(ValueTypeSize<20> __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S24S24(ValueTypeSize<24> __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S8S8(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u1u1(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int32_t __N2M_i4u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`1::Invoke()
static int64_t __N2M_i8(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String <>f__AnonymousType0`1::ToString()
static int64_t __N2M_i8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i1i8i8(int64_t __arg0, int8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i2i8i8(int64_t __arg0, int16_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int64_t __N2M_i8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i4i4i8i8(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.ConstructorInfo System.RuntimeType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static int64_t __N2M_i8i8i4i8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Console/WindowsConsole/WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.FieldInfo System.DefaultBinder::BindToField(System.Reflection.BindingFlags,System.Reflection.FieldInfo[],System.Object,System.Globalization.CultureInfo)
static int64_t __N2M_i8i8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.PropertyInfo System.DefaultBinder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
static int64_t __N2M_i8i8i4i8i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.MethodBase System.DefaultBinder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
static int64_t __N2M_i8i8i4i8i8i8i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String)
static int64_t __N2M_i8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.EventInfo System.RuntimeType::GetEvent(System.String,System.Reflection.BindingFlags)
static int64_t __N2M_i8i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.MemberInfo[] System.RuntimeType::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
static int64_t __N2M_i8i8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i4i4i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.MethodInfo System.RuntimeType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static int64_t __N2M_i8i8i8i4i8i4i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::BeginInvoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i4i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.DateTimeParse/MatchNumberDelegate::BeginInvoke(System.__DTString&,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i4i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Reflection.PropertyInfo System.RuntimeType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
static int64_t __N2M_i8i8i8i4i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.RuntimeType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
static int64_t __N2M_i8i8i8i4i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::BeginInvoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i4u1i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, int64_t __arg9, const MethodInfo* method)
{
    StackObject args[11] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9 };
    StackObject* ret = args + 10;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
static int64_t __N2M_i8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8i4i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object Microsoft.Win32.IRegistryApi::GetValue(Microsoft.Win32.RegistryKey,System.String,System.Object,Microsoft.Win32.RegistryValueOptions)
static int64_t __N2M_i8i8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`2::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`3::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`4::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int64_t __N2M_i8i8i8i8S16i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.IRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
static int64_t __N2M_i8i8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Func`4::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8i8u1i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Resources.ResourceSet System.Resources.FileBasedResourceGroveler::GrovelForResourceSet(System.Globalization.CultureInfo,System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
static int64_t __N2M_i8i8i8i8u1u1i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::BeginInvoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8S160i8i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<160> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int64_t __N2M_i8i8i8S16i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::BeginInvoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8S16i8i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object[] System.RuntimeType::GetCustomAttributes(System.Type,System.Boolean)
static int64_t __N2M_i8i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8u1i8i8(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`3::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8i8u1S32i8i8(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Resources.ResourceSet System.Resources.ResourceManager::GetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
static int64_t __N2M_i8i8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8r4i8i8(int64_t __arg0, float __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8r8i8i8(int64_t __arg0, double __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S12i8i8(int64_t __arg0, ValueTypeSize<12> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S12S12i8i8(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
static int64_t __N2M_i8i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Runtime.Serialization.SerializationEventHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S16i8i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S16S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S1i8i8(int64_t __arg0, ValueTypeSize<1> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S20S20i8i8(int64_t __arg0, ValueTypeSize<20> __arg1, ValueTypeSize<20> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S24i8i8(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S24S24i8i8(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::BeginInvoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S40i8i8(int64_t __arg0, ValueTypeSize<40> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S4i4i8i8(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S4i8i8(int64_t __arg0, ValueTypeSize<4> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S4S4i8i8(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S8i8i8(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8S8S8i8i8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object[] System.RuntimeType::GetCustomAttributes(System.Boolean)
static int64_t __N2M_i8i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u1i8i8(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u1u1i8i8(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u2i8i8(int64_t __arg0, uint16_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Action`2::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u2i8i8i8(int64_t __arg0, uint16_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Diagnostics.Tracing.PropertyAccessor`1::GetData(ContainerType)
static int64_t __N2M_i8i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::BeginInvoke(ValueType,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u4i8i8(int64_t __arg0, uint32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// TValue System.Collections.Generic.Dictionary`2::get_Item(TKey)
static int64_t __N2M_i8i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u8i8i8(int64_t __arg0, uint64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
static int64_t __N2M_i8i8u8u8i8i8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static int64_t __N2M_i8S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static int64_t __N2M_i8u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Single System.IO.BinaryReader::ReadSingle()
static float __N2M_r4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_r4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Double System.Random::Sample()
static double __N2M_r8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_r8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<1> __N2M_S1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<12> __N2M_S12i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<12> __N2M_S12i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSize<12> __N2M_S12i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
static ValueTypeSize<16> __N2M_S16i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<16> __N2M_S16i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static ValueTypeSize<16> __N2M_S16i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static ValueTypeSize<16> __N2M_S16i8i8S160(int64_t __arg0, int64_t __arg1, ValueTypeSize<160> __arg2, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static ValueTypeSize<16> __N2M_S16i8S160(int64_t __arg0, ValueTypeSize<160> __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static ValueTypeSize<16> __N2M_S16i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
static ValueTypeSize<16> __N2M_S16S16i8(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<1> __N2M_S1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// TResult System.Func`1::EndInvoke(System.IAsyncResult)
static ValueTypeSize<1> __N2M_S1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<20> __N2M_S20i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<20>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<24> __N2M_S24i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<24> __N2M_S24i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<4> __N2M_S4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<4> __N2M_S4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// System.RuntimeTypeHandle System.RuntimeType::get_TypeHandle()
static ValueTypeSize<8> __N2M_S8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<8> __N2M_S8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static ValueTypeSize<8> __N2M_S8i8i4i4i4i4i4i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.DateTime System.IConvertible::ToDateTime(System.IFormatProvider)
static ValueTypeSize<8> __N2M_S8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static ValueTypeSize<8> __N2M_S8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static ValueTypeSize<96> __N2M_S96i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<96>*)ret;
}


// TResult System.Func`1::Invoke()
static uint8_t __N2M_u1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::Invoke(System.Int32)
static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Microsoft.Win32.SafeHandles.SafeFileHandle::ReleaseHandle()
static uint8_t __N2M_u1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.SByte::Equals(System.SByte)
static uint8_t __N2M_u1i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Int16::Equals(System.Int16)
static uint8_t __N2M_u1i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Int32::Equals(System.Int32)
static uint8_t __N2M_u1i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Globalization.Calendar::IsLeapYear(System.Int32,System.Int32)
static uint8_t __N2M_u1i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeParse/MatchNumberDelegate::Invoke(System.__DTString&,System.Int32,System.Int32&)
static uint8_t __N2M_u1i8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
static uint8_t __N2M_u1i8i4u1(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean <>f__AnonymousType0`1::Equals(System.Object)
static uint8_t __N2M_u1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalDecoderBestFitFallbackBuffer::Fallback(System.Byte[],System.Int32)
static uint8_t __N2M_u1i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeParse/MatchNumberDelegate::Invoke(System.__DTString&,System.Int32,System.Int32&)
static uint8_t __N2M_u1i8i8i4i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Microsoft.Win32.RegistryKeyComparer::Equals(System.Object,System.Object)
static uint8_t __N2M_u1i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static uint8_t __N2M_u1i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeParse/MatchNumberDelegate::EndInvoke(System.__DTString&,System.Int32&,System.IAsyncResult)
static uint8_t __N2M_u1i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.RuntimeType::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_u1i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Single::Equals(System.Single)
static uint8_t __N2M_u1i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Double::Equals(System.Double)
static uint8_t __N2M_u1i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
static uint8_t __N2M_u1i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static uint8_t __N2M_u1i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static uint8_t __N2M_u1i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_u1i8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.NullableEqualityComparer`1::Equals(System.Nullable`1<T>,System.Nullable`1<T>)
static uint8_t __N2M_u1i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static uint8_t __N2M_u1i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
static uint8_t __N2M_u1i8S28(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
static uint8_t __N2M_u1i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
static uint8_t __N2M_u1i8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static uint8_t __N2M_u1i8S64(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static uint8_t __N2M_u1i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Boolean::Equals(System.Boolean)
static uint8_t __N2M_u1i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static uint8_t __N2M_u1i8u1u1(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Char::Equals(System.Char)
static uint8_t __N2M_u1i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Int32)
static uint8_t __N2M_u1i8u2i4(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static uint8_t __N2M_u1i8u2u2i4(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt32::Equals(System.UInt32)
static uint8_t __N2M_u1i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static uint8_t __N2M_u1i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static uint8_t __N2M_u1i8u8i8(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S24(ValueTypeSize<24> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint8_t __N2M_u1u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.CharEnumerator::get_Current()
static uint16_t __N2M_u2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_u2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static uint16_t __N2M_u2i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint16_t __N2M_u2u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IO.BinaryReader::ReadUInt32()
static uint32_t __N2M_u4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_u4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint32_t __N2M_u4u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IO.BinaryReader::ReadUInt64()
static uint64_t __N2M_u8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static uint64_t __N2M_u8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_u8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8S1(ValueTypeSize<1> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1/Transformer`1::Invoke(ValueType)
static uint64_t __N2M_u8u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.Action::Invoke()
static void __N2M_v(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::Invoke(UnityEngine.Windows.Speech.SpeechError)
static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`2::Invoke(T1,T2)
static void __N2M_vi4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __N2M_vi8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Int16)
static void __N2M_vi8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
static void __N2M_vi8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.TermInfoDriver::SetCursorPosition(System.Int32,System.Int32)
static void __N2M_vi8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
static void __N2M_vi8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Diagnostics.Tracing.EventSource/OverideEventProvider::OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32,System.Int32)
static void __N2M_vi8i4i8i4i4(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
static void __N2M_vi8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
static void __N2M_vi8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4S12(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4S16(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_vi8i4S24(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4S4(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4S8(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4u1(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::Invoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*)
static void __N2M_vi8i4u1i8i8i8i8(int64_t __arg0, int32_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi8i4u8(int64_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_vi8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Array::CopyTo(System.Array,System.Int32)
static void __N2M_vi8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
static void __N2M_vi8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::Invoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*)
static void __N2M_vi8i8i4u1i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __N2M_vi8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Diagnostics.Tracing.ArrayTypeInfo`1::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector,System.String,System.Diagnostics.Tracing.EventFieldFormat)
static void __N2M_vi8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
static void __N2M_vi8i8i8i4i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
static void __N2M_vi8i8i8i4i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`4::Invoke(T0,T1,T2,T3)
static void __N2M_vi8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi8i8i8S16(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_vi8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.AggregateException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi8i8S16(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
static void __N2M_vi8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi8i8u1S32(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_vi8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Single)
static void __N2M_vi8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Double)
static void __N2M_vi8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.SerializationEventHandler::Invoke(System.Runtime.Serialization.StreamingContext)
static void __N2M_vi8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Concurrent.ConcurrentDictionary`2::set_Item(TKey,TValue)
static void __N2M_vi8S16i4(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __N2M_vi8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_vi8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_vi8S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_vi8S16S64(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_vi8S16S64i8(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_vi8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __N2M_vi8S24i8(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vi8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __N2M_vi8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vi8S4i4(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vi8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
static void __N2M_vi8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
static void __N2M_vi8S8i8(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
static void __N2M_vi8S8i8i8(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
static void __N2M_vi8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi8u1S32(int64_t __arg0, uint8_t __arg1, ValueTypeSize<32> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Char)
static void __N2M_vi8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`2::Invoke(T1,T2)
static void __N2M_vi8u2i8(int64_t __arg0, uint16_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt32)
static void __N2M_vi8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt64)
static void __N2M_vi8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.Dictionary`2::set_Item(TKey,TValue)
static void __N2M_vi8u8i8(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vS12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.SerializationEventHandler::Invoke(System.Runtime.Serialization.StreamingContext)
static void __N2M_vS16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __N2M_vS16i8(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vS24(ValueTypeSize<24> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vS4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __N2M_vS40(ValueTypeSize<40> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vS4i4(ValueTypeSize<4> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vS4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
static void __N2M_vS8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`2::Invoke(T1,T2)
static void __N2M_vu2i8(uint16_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vu8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"i1i1", (Il2CppMethodPointer)__N2M_i1i1},
	{"i1i2", (Il2CppMethodPointer)__N2M_i1i2},
	{"i1i4", (Il2CppMethodPointer)__N2M_i1i4},
	{"i1i8", (Il2CppMethodPointer)__N2M_i1i8},
	{"i1i8i1", (Il2CppMethodPointer)__N2M_i1i8i1},
	{"i1i8i2", (Il2CppMethodPointer)__N2M_i1i8i2},
	{"i1i8i4", (Il2CppMethodPointer)__N2M_i1i8i4},
	{"i1i8i8", (Il2CppMethodPointer)__N2M_i1i8i8},
	{"i1i8r4", (Il2CppMethodPointer)__N2M_i1i8r4},
	{"i1i8r8", (Il2CppMethodPointer)__N2M_i1i8r8},
	{"i1i8S1", (Il2CppMethodPointer)__N2M_i1i8S1},
	{"i1i8S16", (Il2CppMethodPointer)__N2M_i1i8S16},
	{"i1i8S8", (Il2CppMethodPointer)__N2M_i1i8S8},
	{"i1i8u1", (Il2CppMethodPointer)__N2M_i1i8u1},
	{"i1i8u2", (Il2CppMethodPointer)__N2M_i1i8u2},
	{"i1i8u4", (Il2CppMethodPointer)__N2M_i1i8u4},
	{"i1i8u8", (Il2CppMethodPointer)__N2M_i1i8u8},
	{"i1r4", (Il2CppMethodPointer)__N2M_i1r4},
	{"i1r8", (Il2CppMethodPointer)__N2M_i1r8},
	{"i1S1", (Il2CppMethodPointer)__N2M_i1S1},
	{"i1S16", (Il2CppMethodPointer)__N2M_i1S16},
	{"i1S8", (Il2CppMethodPointer)__N2M_i1S8},
	{"i1u1", (Il2CppMethodPointer)__N2M_i1u1},
	{"i1u2", (Il2CppMethodPointer)__N2M_i1u2},
	{"i1u4", (Il2CppMethodPointer)__N2M_i1u4},
	{"i1u8", (Il2CppMethodPointer)__N2M_i1u8},
	{"i2i1", (Il2CppMethodPointer)__N2M_i2i1},
	{"i2i2", (Il2CppMethodPointer)__N2M_i2i2},
	{"i2i4", (Il2CppMethodPointer)__N2M_i2i4},
	{"i2i8", (Il2CppMethodPointer)__N2M_i2i8},
	{"i2i8i1", (Il2CppMethodPointer)__N2M_i2i8i1},
	{"i2i8i2", (Il2CppMethodPointer)__N2M_i2i8i2},
	{"i2i8i4", (Il2CppMethodPointer)__N2M_i2i8i4},
	{"i2i8i8", (Il2CppMethodPointer)__N2M_i2i8i8},
	{"i2i8r4", (Il2CppMethodPointer)__N2M_i2i8r4},
	{"i2i8r8", (Il2CppMethodPointer)__N2M_i2i8r8},
	{"i2i8S1", (Il2CppMethodPointer)__N2M_i2i8S1},
	{"i2i8S16", (Il2CppMethodPointer)__N2M_i2i8S16},
	{"i2i8S8", (Il2CppMethodPointer)__N2M_i2i8S8},
	{"i2i8u1", (Il2CppMethodPointer)__N2M_i2i8u1},
	{"i2i8u2", (Il2CppMethodPointer)__N2M_i2i8u2},
	{"i2i8u4", (Il2CppMethodPointer)__N2M_i2i8u4},
	{"i2i8u8", (Il2CppMethodPointer)__N2M_i2i8u8},
	{"i2r4", (Il2CppMethodPointer)__N2M_i2r4},
	{"i2r8", (Il2CppMethodPointer)__N2M_i2r8},
	{"i2S1", (Il2CppMethodPointer)__N2M_i2S1},
	{"i2S16", (Il2CppMethodPointer)__N2M_i2S16},
	{"i2S8", (Il2CppMethodPointer)__N2M_i2S8},
	{"i2u1", (Il2CppMethodPointer)__N2M_i2u1},
	{"i2u2", (Il2CppMethodPointer)__N2M_i2u2},
	{"i2u4", (Il2CppMethodPointer)__N2M_i2u4},
	{"i2u8", (Il2CppMethodPointer)__N2M_i2u8},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4i1", (Il2CppMethodPointer)__N2M_i4i1},
	{"i4i2", (Il2CppMethodPointer)__N2M_i4i2},
	{"i4i4", (Il2CppMethodPointer)__N2M_i4i4},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4i8", (Il2CppMethodPointer)__N2M_i4i8},
	{"i4i8i1", (Il2CppMethodPointer)__N2M_i4i8i1},
	{"i4i8i2", (Il2CppMethodPointer)__N2M_i4i8i2},
	{"i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i4},
	{"i4i8i4i4", (Il2CppMethodPointer)__N2M_i4i8i4i4},
	{"i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i4i4i4},
	{"i4i8i8", (Il2CppMethodPointer)__N2M_i4i8i8},
	{"i4i8i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4},
	{"i4i8i8i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4},
	{"i4i8i8i4i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4},
	{"i4i8i8i4i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4i4i4},
	{"i4i8i8i4i4i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4u1},
	{"i4i8i8i4i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i4u1},
	{"i4i8i8i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i8i4},
	{"i4i8i8i4i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i8i4u1},
	{"i4i8i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4u1},
	{"i4i8i8i8", (Il2CppMethodPointer)__N2M_i4i8i8i8},
	{"i4i8i8i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i8i4},
	{"i4i8i8i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i8i4i4i4},
	{"i4i8r4", (Il2CppMethodPointer)__N2M_i4i8r4},
	{"i4i8r8", (Il2CppMethodPointer)__N2M_i4i8r8},
	{"i4i8S1", (Il2CppMethodPointer)__N2M_i4i8S1},
	{"i4i8S12", (Il2CppMethodPointer)__N2M_i4i8S12},
	{"i4i8S12S12", (Il2CppMethodPointer)__N2M_i4i8S12S12},
	{"i4i8S16", (Il2CppMethodPointer)__N2M_i4i8S16},
	{"i4i8S16S16", (Il2CppMethodPointer)__N2M_i4i8S16S16},
	{"i4i8S20S20", (Il2CppMethodPointer)__N2M_i4i8S20S20},
	{"i4i8S24", (Il2CppMethodPointer)__N2M_i4i8S24},
	{"i4i8S24S24", (Il2CppMethodPointer)__N2M_i4i8S24S24},
	{"i4i8S4", (Il2CppMethodPointer)__N2M_i4i8S4},
	{"i4i8S4S4", (Il2CppMethodPointer)__N2M_i4i8S4S4},
	{"i4i8S8", (Il2CppMethodPointer)__N2M_i4i8S8},
	{"i4i8S8S8", (Il2CppMethodPointer)__N2M_i4i8S8S8},
	{"i4i8u1", (Il2CppMethodPointer)__N2M_i4i8u1},
	{"i4i8u1u1", (Il2CppMethodPointer)__N2M_i4i8u1u1},
	{"i4i8u2", (Il2CppMethodPointer)__N2M_i4i8u2},
	{"i4i8u4", (Il2CppMethodPointer)__N2M_i4i8u4},
	{"i4i8u8", (Il2CppMethodPointer)__N2M_i4i8u8},
	{"i4i8u8u8", (Il2CppMethodPointer)__N2M_i4i8u8u8},
	{"i4r4", (Il2CppMethodPointer)__N2M_i4r4},
	{"i4r8", (Il2CppMethodPointer)__N2M_i4r8},
	{"i4S1", (Il2CppMethodPointer)__N2M_i4S1},
	{"i4S12S12", (Il2CppMethodPointer)__N2M_i4S12S12},
	{"i4S16", (Il2CppMethodPointer)__N2M_i4S16},
	{"i4S16S16", (Il2CppMethodPointer)__N2M_i4S16S16},
	{"i4S20S20", (Il2CppMethodPointer)__N2M_i4S20S20},
	{"i4S24S24", (Il2CppMethodPointer)__N2M_i4S24S24},
	{"i4S4S4", (Il2CppMethodPointer)__N2M_i4S4S4},
	{"i4S8", (Il2CppMethodPointer)__N2M_i4S8},
	{"i4S8S8", (Il2CppMethodPointer)__N2M_i4S8S8},
	{"i4u1", (Il2CppMethodPointer)__N2M_i4u1},
	{"i4u1u1", (Il2CppMethodPointer)__N2M_i4u1u1},
	{"i4u2", (Il2CppMethodPointer)__N2M_i4u2},
	{"i4u4", (Il2CppMethodPointer)__N2M_i4u4},
	{"i4u8", (Il2CppMethodPointer)__N2M_i4u8},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i8", (Il2CppMethodPointer)__N2M_i8},
	{"i8i1", (Il2CppMethodPointer)__N2M_i8i1},
	{"i8i2", (Il2CppMethodPointer)__N2M_i8i2},
	{"i8i4", (Il2CppMethodPointer)__N2M_i8i4},
	{"i8i8", (Il2CppMethodPointer)__N2M_i8i8},
	{"i8i8i1", (Il2CppMethodPointer)__N2M_i8i8i1},
	{"i8i8i1i8i8", (Il2CppMethodPointer)__N2M_i8i8i1i8i8},
	{"i8i8i2", (Il2CppMethodPointer)__N2M_i8i8i2},
	{"i8i8i2i8i8", (Il2CppMethodPointer)__N2M_i8i8i2i8i8},
	{"i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i4},
	{"i8i8i4i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i4i8i8},
	{"i8i8i4i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i4i8i8},
	{"i8i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8},
	{"i8i8i4i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8},
	{"i8i8i4i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8i8},
	{"i8i8i4i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8i8i8i8},
	{"i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8},
	{"i8i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i8i4},
	{"i8i8i8i4i4", (Il2CppMethodPointer)__N2M_i8i8i8i4i4},
	{"i8i8i8i4i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i4i8i8},
	{"i8i8i8i4i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i4i8i8},
	{"i8i8i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8},
	{"i8i8i8i4i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8},
	{"i8i8i8i4i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8i8},
	{"i8i8i8i4i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8i8i8i8},
	{"i8i8i8i4u1i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4u1i8i8i8i8i8i8},
	{"i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8},
	{"i8i8i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i8i8i4},
	{"i8i8i8i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i4i8i8},
	{"i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8},
	{"i8i8i8i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i8i8i8i4},
	{"i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8i8},
	{"i8i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8i8i8},
	{"i8i8i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8i8i8i8},
	{"i8i8i8i8S16i8", (Il2CppMethodPointer)__N2M_i8i8i8i8S16i8},
	{"i8i8i8i8u1", (Il2CppMethodPointer)__N2M_i8i8i8i8u1},
	{"i8i8i8i8u1i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8u1i8i8},
	{"i8i8i8i8u1u1i8", (Il2CppMethodPointer)__N2M_i8i8i8i8u1u1i8},
	{"i8i8i8S160i8i8", (Il2CppMethodPointer)__N2M_i8i8i8S160i8i8},
	{"i8i8i8S16i8", (Il2CppMethodPointer)__N2M_i8i8i8S16i8},
	{"i8i8i8S16i8i8", (Il2CppMethodPointer)__N2M_i8i8i8S16i8i8},
	{"i8i8i8u1", (Il2CppMethodPointer)__N2M_i8i8i8u1},
	{"i8i8i8u1i8i8", (Il2CppMethodPointer)__N2M_i8i8i8u1i8i8},
	{"i8i8i8u1S32i8i8", (Il2CppMethodPointer)__N2M_i8i8i8u1S32i8i8},
	{"i8i8i8u1u1", (Il2CppMethodPointer)__N2M_i8i8i8u1u1},
	{"i8i8r4", (Il2CppMethodPointer)__N2M_i8i8r4},
	{"i8i8r4i8i8", (Il2CppMethodPointer)__N2M_i8i8r4i8i8},
	{"i8i8r8", (Il2CppMethodPointer)__N2M_i8i8r8},
	{"i8i8r8i8i8", (Il2CppMethodPointer)__N2M_i8i8r8i8i8},
	{"i8i8S1", (Il2CppMethodPointer)__N2M_i8i8S1},
	{"i8i8S12i8i8", (Il2CppMethodPointer)__N2M_i8i8S12i8i8},
	{"i8i8S12S12i8i8", (Il2CppMethodPointer)__N2M_i8i8S12S12i8i8},
	{"i8i8S16", (Il2CppMethodPointer)__N2M_i8i8S16},
	{"i8i8S16i8i8", (Il2CppMethodPointer)__N2M_i8i8S16i8i8},
	{"i8i8S16i8i8i8", (Il2CppMethodPointer)__N2M_i8i8S16i8i8i8},
	{"i8i8S16S16i8i8", (Il2CppMethodPointer)__N2M_i8i8S16S16i8i8},
	{"i8i8S1i8i8", (Il2CppMethodPointer)__N2M_i8i8S1i8i8},
	{"i8i8S20S20i8i8", (Il2CppMethodPointer)__N2M_i8i8S20S20i8i8},
	{"i8i8S24i8i8", (Il2CppMethodPointer)__N2M_i8i8S24i8i8},
	{"i8i8S24S24i8i8", (Il2CppMethodPointer)__N2M_i8i8S24S24i8i8},
	{"i8i8S40i8i8", (Il2CppMethodPointer)__N2M_i8i8S40i8i8},
	{"i8i8S4i4i8i8", (Il2CppMethodPointer)__N2M_i8i8S4i4i8i8},
	{"i8i8S4i8i8", (Il2CppMethodPointer)__N2M_i8i8S4i8i8},
	{"i8i8S4S4i8i8", (Il2CppMethodPointer)__N2M_i8i8S4S4i8i8},
	{"i8i8S8", (Il2CppMethodPointer)__N2M_i8i8S8},
	{"i8i8S8i8i8", (Il2CppMethodPointer)__N2M_i8i8S8i8i8},
	{"i8i8S8S8i8i8", (Il2CppMethodPointer)__N2M_i8i8S8S8i8i8},
	{"i8i8u1", (Il2CppMethodPointer)__N2M_i8i8u1},
	{"i8i8u1i8i8", (Il2CppMethodPointer)__N2M_i8i8u1i8i8},
	{"i8i8u1u1i8i8", (Il2CppMethodPointer)__N2M_i8i8u1u1i8i8},
	{"i8i8u2", (Il2CppMethodPointer)__N2M_i8i8u2},
	{"i8i8u2i8i8", (Il2CppMethodPointer)__N2M_i8i8u2i8i8},
	{"i8i8u2i8i8i8", (Il2CppMethodPointer)__N2M_i8i8u2i8i8i8},
	{"i8i8u4", (Il2CppMethodPointer)__N2M_i8i8u4},
	{"i8i8u4i8i8", (Il2CppMethodPointer)__N2M_i8i8u4i8i8},
	{"i8i8u8", (Il2CppMethodPointer)__N2M_i8i8u8},
	{"i8i8u8i8i8", (Il2CppMethodPointer)__N2M_i8i8u8i8i8},
	{"i8i8u8u8i8i8", (Il2CppMethodPointer)__N2M_i8i8u8u8i8i8},
	{"i8r4", (Il2CppMethodPointer)__N2M_i8r4},
	{"i8r8", (Il2CppMethodPointer)__N2M_i8r8},
	{"i8S1", (Il2CppMethodPointer)__N2M_i8S1},
	{"i8S16", (Il2CppMethodPointer)__N2M_i8S16},
	{"i8S8", (Il2CppMethodPointer)__N2M_i8S8},
	{"i8u1", (Il2CppMethodPointer)__N2M_i8u1},
	{"i8u2", (Il2CppMethodPointer)__N2M_i8u2},
	{"i8u4", (Il2CppMethodPointer)__N2M_i8u4},
	{"i8u8", (Il2CppMethodPointer)__N2M_i8u8},
	{"r4i8", (Il2CppMethodPointer)__N2M_r4i8},
	{"r4i8i8", (Il2CppMethodPointer)__N2M_r4i8i8},
	{"r8i8", (Il2CppMethodPointer)__N2M_r8i8},
	{"r8i8i8", (Il2CppMethodPointer)__N2M_r8i8i8},
	{"S1", (Il2CppMethodPointer)__N2M_S1},
	{"S12i8", (Il2CppMethodPointer)__N2M_S12i8},
	{"S12i8i4", (Il2CppMethodPointer)__N2M_S12i8i4},
	{"S12i8u1", (Il2CppMethodPointer)__N2M_S12i8u1},
	{"S16i8", (Il2CppMethodPointer)__N2M_S16i8},
	{"S16i8i4", (Il2CppMethodPointer)__N2M_S16i8i4},
	{"S16i8i8", (Il2CppMethodPointer)__N2M_S16i8i8},
	{"S16i8i8S160", (Il2CppMethodPointer)__N2M_S16i8i8S160},
	{"S16i8S160", (Il2CppMethodPointer)__N2M_S16i8S160},
	{"S16i8S16i8", (Il2CppMethodPointer)__N2M_S16i8S16i8},
	{"S16S16i8", (Il2CppMethodPointer)__N2M_S16S16i8},
	{"S1i8", (Il2CppMethodPointer)__N2M_S1i8},
	{"S1i8i8", (Il2CppMethodPointer)__N2M_S1i8i8},
	{"S20i8", (Il2CppMethodPointer)__N2M_S20i8},
	{"S24i8", (Il2CppMethodPointer)__N2M_S24i8},
	{"S24i8i4", (Il2CppMethodPointer)__N2M_S24i8i4},
	{"S4i8", (Il2CppMethodPointer)__N2M_S4i8},
	{"S4i8i4", (Il2CppMethodPointer)__N2M_S4i8i4},
	{"S8i8", (Il2CppMethodPointer)__N2M_S8i8},
	{"S8i8i4", (Il2CppMethodPointer)__N2M_S8i8i4},
	{"S8i8i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_S8i8i4i4i4i4i4i4i4i4},
	{"S8i8i8", (Il2CppMethodPointer)__N2M_S8i8i8},
	{"S8i8S8", (Il2CppMethodPointer)__N2M_S8i8S8},
	{"S96i8", (Il2CppMethodPointer)__N2M_S96i8},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1i1", (Il2CppMethodPointer)__N2M_u1i1},
	{"u1i2", (Il2CppMethodPointer)__N2M_u1i2},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i8", (Il2CppMethodPointer)__N2M_u1i8},
	{"u1i8i1", (Il2CppMethodPointer)__N2M_u1i8i1},
	{"u1i8i2", (Il2CppMethodPointer)__N2M_u1i8i2},
	{"u1i8i4", (Il2CppMethodPointer)__N2M_u1i8i4},
	{"u1i8i4i4", (Il2CppMethodPointer)__N2M_u1i8i4i4},
	{"u1i8i4i8", (Il2CppMethodPointer)__N2M_u1i8i4i8},
	{"u1i8i4u1", (Il2CppMethodPointer)__N2M_u1i8i4u1},
	{"u1i8i8", (Il2CppMethodPointer)__N2M_u1i8i8},
	{"u1i8i8i4", (Il2CppMethodPointer)__N2M_u1i8i8i4},
	{"u1i8i8i4i8", (Il2CppMethodPointer)__N2M_u1i8i8i4i8},
	{"u1i8i8i8", (Il2CppMethodPointer)__N2M_u1i8i8i8},
	{"u1i8i8i8i4", (Il2CppMethodPointer)__N2M_u1i8i8i8i4},
	{"u1i8i8i8i8", (Il2CppMethodPointer)__N2M_u1i8i8i8i8},
	{"u1i8i8u1", (Il2CppMethodPointer)__N2M_u1i8i8u1},
	{"u1i8r4", (Il2CppMethodPointer)__N2M_u1i8r4},
	{"u1i8r8", (Il2CppMethodPointer)__N2M_u1i8r8},
	{"u1i8S1", (Il2CppMethodPointer)__N2M_u1i8S1},
	{"u1i8S12", (Il2CppMethodPointer)__N2M_u1i8S12},
	{"u1i8S12S12", (Il2CppMethodPointer)__N2M_u1i8S12S12},
	{"u1i8S16", (Il2CppMethodPointer)__N2M_u1i8S16},
	{"u1i8S16i8", (Il2CppMethodPointer)__N2M_u1i8S16i8},
	{"u1i8S16i8i4", (Il2CppMethodPointer)__N2M_u1i8S16i8i4},
	{"u1i8S16S16", (Il2CppMethodPointer)__N2M_u1i8S16S16},
	{"u1i8S24", (Il2CppMethodPointer)__N2M_u1i8S24},
	{"u1i8S24S24", (Il2CppMethodPointer)__N2M_u1i8S24S24},
	{"u1i8S28", (Il2CppMethodPointer)__N2M_u1i8S28},
	{"u1i8S4", (Il2CppMethodPointer)__N2M_u1i8S4},
	{"u1i8S40", (Il2CppMethodPointer)__N2M_u1i8S40},
	{"u1i8S4S4", (Il2CppMethodPointer)__N2M_u1i8S4S4},
	{"u1i8S64", (Il2CppMethodPointer)__N2M_u1i8S64},
	{"u1i8S8", (Il2CppMethodPointer)__N2M_u1i8S8},
	{"u1i8S8S8", (Il2CppMethodPointer)__N2M_u1i8S8S8},
	{"u1i8u1", (Il2CppMethodPointer)__N2M_u1i8u1},
	{"u1i8u1u1", (Il2CppMethodPointer)__N2M_u1i8u1u1},
	{"u1i8u2", (Il2CppMethodPointer)__N2M_u1i8u2},
	{"u1i8u2i4", (Il2CppMethodPointer)__N2M_u1i8u2i4},
	{"u1i8u2u2i4", (Il2CppMethodPointer)__N2M_u1i8u2u2i4},
	{"u1i8u4", (Il2CppMethodPointer)__N2M_u1i8u4},
	{"u1i8u8", (Il2CppMethodPointer)__N2M_u1i8u8},
	{"u1i8u8i8", (Il2CppMethodPointer)__N2M_u1i8u8i8},
	{"u1i8u8u8", (Il2CppMethodPointer)__N2M_u1i8u8u8},
	{"u1r4", (Il2CppMethodPointer)__N2M_u1r4},
	{"u1r8", (Il2CppMethodPointer)__N2M_u1r8},
	{"u1S1", (Il2CppMethodPointer)__N2M_u1S1},
	{"u1S12", (Il2CppMethodPointer)__N2M_u1S12},
	{"u1S16", (Il2CppMethodPointer)__N2M_u1S16},
	{"u1S24", (Il2CppMethodPointer)__N2M_u1S24},
	{"u1S4", (Il2CppMethodPointer)__N2M_u1S4},
	{"u1S8", (Il2CppMethodPointer)__N2M_u1S8},
	{"u1u1", (Il2CppMethodPointer)__N2M_u1u1},
	{"u1u2", (Il2CppMethodPointer)__N2M_u1u2},
	{"u1u4", (Il2CppMethodPointer)__N2M_u1u4},
	{"u1u8", (Il2CppMethodPointer)__N2M_u1u8},
	{"u2i1", (Il2CppMethodPointer)__N2M_u2i1},
	{"u2i2", (Il2CppMethodPointer)__N2M_u2i2},
	{"u2i4", (Il2CppMethodPointer)__N2M_u2i4},
	{"u2i8", (Il2CppMethodPointer)__N2M_u2i8},
	{"u2i8i1", (Il2CppMethodPointer)__N2M_u2i8i1},
	{"u2i8i2", (Il2CppMethodPointer)__N2M_u2i8i2},
	{"u2i8i4", (Il2CppMethodPointer)__N2M_u2i8i4},
	{"u2i8i8", (Il2CppMethodPointer)__N2M_u2i8i8},
	{"u2i8r4", (Il2CppMethodPointer)__N2M_u2i8r4},
	{"u2i8r8", (Il2CppMethodPointer)__N2M_u2i8r8},
	{"u2i8S1", (Il2CppMethodPointer)__N2M_u2i8S1},
	{"u2i8S16", (Il2CppMethodPointer)__N2M_u2i8S16},
	{"u2i8S8", (Il2CppMethodPointer)__N2M_u2i8S8},
	{"u2i8u1", (Il2CppMethodPointer)__N2M_u2i8u1},
	{"u2i8u2", (Il2CppMethodPointer)__N2M_u2i8u2},
	{"u2i8u4", (Il2CppMethodPointer)__N2M_u2i8u4},
	{"u2i8u8", (Il2CppMethodPointer)__N2M_u2i8u8},
	{"u2r4", (Il2CppMethodPointer)__N2M_u2r4},
	{"u2r8", (Il2CppMethodPointer)__N2M_u2r8},
	{"u2S1", (Il2CppMethodPointer)__N2M_u2S1},
	{"u2S16", (Il2CppMethodPointer)__N2M_u2S16},
	{"u2S8", (Il2CppMethodPointer)__N2M_u2S8},
	{"u2u1", (Il2CppMethodPointer)__N2M_u2u1},
	{"u2u2", (Il2CppMethodPointer)__N2M_u2u2},
	{"u2u4", (Il2CppMethodPointer)__N2M_u2u4},
	{"u2u8", (Il2CppMethodPointer)__N2M_u2u8},
	{"u4i1", (Il2CppMethodPointer)__N2M_u4i1},
	{"u4i2", (Il2CppMethodPointer)__N2M_u4i2},
	{"u4i4", (Il2CppMethodPointer)__N2M_u4i4},
	{"u4i8", (Il2CppMethodPointer)__N2M_u4i8},
	{"u4i8i1", (Il2CppMethodPointer)__N2M_u4i8i1},
	{"u4i8i2", (Il2CppMethodPointer)__N2M_u4i8i2},
	{"u4i8i4", (Il2CppMethodPointer)__N2M_u4i8i4},
	{"u4i8i8", (Il2CppMethodPointer)__N2M_u4i8i8},
	{"u4i8r4", (Il2CppMethodPointer)__N2M_u4i8r4},
	{"u4i8r8", (Il2CppMethodPointer)__N2M_u4i8r8},
	{"u4i8S1", (Il2CppMethodPointer)__N2M_u4i8S1},
	{"u4i8S16", (Il2CppMethodPointer)__N2M_u4i8S16},
	{"u4i8S8", (Il2CppMethodPointer)__N2M_u4i8S8},
	{"u4i8u1", (Il2CppMethodPointer)__N2M_u4i8u1},
	{"u4i8u2", (Il2CppMethodPointer)__N2M_u4i8u2},
	{"u4i8u4", (Il2CppMethodPointer)__N2M_u4i8u4},
	{"u4i8u8", (Il2CppMethodPointer)__N2M_u4i8u8},
	{"u4r4", (Il2CppMethodPointer)__N2M_u4r4},
	{"u4r8", (Il2CppMethodPointer)__N2M_u4r8},
	{"u4S1", (Il2CppMethodPointer)__N2M_u4S1},
	{"u4S16", (Il2CppMethodPointer)__N2M_u4S16},
	{"u4S8", (Il2CppMethodPointer)__N2M_u4S8},
	{"u4u1", (Il2CppMethodPointer)__N2M_u4u1},
	{"u4u2", (Il2CppMethodPointer)__N2M_u4u2},
	{"u4u4", (Il2CppMethodPointer)__N2M_u4u4},
	{"u4u8", (Il2CppMethodPointer)__N2M_u4u8},
	{"u8i1", (Il2CppMethodPointer)__N2M_u8i1},
	{"u8i2", (Il2CppMethodPointer)__N2M_u8i2},
	{"u8i4", (Il2CppMethodPointer)__N2M_u8i4},
	{"u8i8", (Il2CppMethodPointer)__N2M_u8i8},
	{"u8i8i1", (Il2CppMethodPointer)__N2M_u8i8i1},
	{"u8i8i2", (Il2CppMethodPointer)__N2M_u8i8i2},
	{"u8i8i4", (Il2CppMethodPointer)__N2M_u8i8i4},
	{"u8i8i8", (Il2CppMethodPointer)__N2M_u8i8i8},
	{"u8i8r4", (Il2CppMethodPointer)__N2M_u8i8r4},
	{"u8i8r8", (Il2CppMethodPointer)__N2M_u8i8r8},
	{"u8i8S1", (Il2CppMethodPointer)__N2M_u8i8S1},
	{"u8i8S16", (Il2CppMethodPointer)__N2M_u8i8S16},
	{"u8i8S8", (Il2CppMethodPointer)__N2M_u8i8S8},
	{"u8i8u1", (Il2CppMethodPointer)__N2M_u8i8u1},
	{"u8i8u2", (Il2CppMethodPointer)__N2M_u8i8u2},
	{"u8i8u4", (Il2CppMethodPointer)__N2M_u8i8u4},
	{"u8i8u8", (Il2CppMethodPointer)__N2M_u8i8u8},
	{"u8r4", (Il2CppMethodPointer)__N2M_u8r4},
	{"u8r8", (Il2CppMethodPointer)__N2M_u8r8},
	{"u8S1", (Il2CppMethodPointer)__N2M_u8S1},
	{"u8S16", (Il2CppMethodPointer)__N2M_u8S16},
	{"u8S8", (Il2CppMethodPointer)__N2M_u8S8},
	{"u8u1", (Il2CppMethodPointer)__N2M_u8u1},
	{"u8u2", (Il2CppMethodPointer)__N2M_u8u2},
	{"u8u4", (Il2CppMethodPointer)__N2M_u8u4},
	{"u8u8", (Il2CppMethodPointer)__N2M_u8u8},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4i8", (Il2CppMethodPointer)__N2M_vi4i8},
	{"vi8", (Il2CppMethodPointer)__N2M_vi8},
	{"vi8i2", (Il2CppMethodPointer)__N2M_vi8i2},
	{"vi8i4", (Il2CppMethodPointer)__N2M_vi8i4},
	{"vi8i4i4", (Il2CppMethodPointer)__N2M_vi8i4i4},
	{"vi8i4i8", (Il2CppMethodPointer)__N2M_vi8i4i8},
	{"vi8i4i8i4i4", (Il2CppMethodPointer)__N2M_vi8i4i8i4i4},
	{"vi8i4i8i8", (Il2CppMethodPointer)__N2M_vi8i4i8i8},
	{"vi8i4i8i8i8", (Il2CppMethodPointer)__N2M_vi8i4i8i8i8},
	{"vi8i4S12", (Il2CppMethodPointer)__N2M_vi8i4S12},
	{"vi8i4S16", (Il2CppMethodPointer)__N2M_vi8i4S16},
	{"vi8i4S24", (Il2CppMethodPointer)__N2M_vi8i4S24},
	{"vi8i4S4", (Il2CppMethodPointer)__N2M_vi8i4S4},
	{"vi8i4S8", (Il2CppMethodPointer)__N2M_vi8i4S8},
	{"vi8i4u1", (Il2CppMethodPointer)__N2M_vi8i4u1},
	{"vi8i4u1i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i4u1i8i8i8i8},
	{"vi8i4u8", (Il2CppMethodPointer)__N2M_vi8i4u8},
	{"vi8i8", (Il2CppMethodPointer)__N2M_vi8i8},
	{"vi8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i4},
	{"vi8i8i4i4", (Il2CppMethodPointer)__N2M_vi8i8i4i4},
	{"vi8i8i4u1i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i4u1i8i8i8i8},
	{"vi8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8},
	{"vi8i8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i8i4},
	{"vi8i8i8i4i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i4i8i8},
	{"vi8i8i8i4i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i4i8i8i8},
	{"vi8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8},
	{"vi8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8},
	{"vi8i8i8S16", (Il2CppMethodPointer)__N2M_vi8i8i8S16},
	{"vi8i8i8u1", (Il2CppMethodPointer)__N2M_vi8i8i8u1},
	{"vi8i8S16", (Il2CppMethodPointer)__N2M_vi8i8S16},
	{"vi8i8u1", (Il2CppMethodPointer)__N2M_vi8i8u1},
	{"vi8i8u1S32", (Il2CppMethodPointer)__N2M_vi8i8u1S32},
	{"vi8i8u1u1", (Il2CppMethodPointer)__N2M_vi8i8u1u1},
	{"vi8r4", (Il2CppMethodPointer)__N2M_vi8r4},
	{"vi8r8", (Il2CppMethodPointer)__N2M_vi8r8},
	{"vi8S12", (Il2CppMethodPointer)__N2M_vi8S12},
	{"vi8S16", (Il2CppMethodPointer)__N2M_vi8S16},
	{"vi8S16i4", (Il2CppMethodPointer)__N2M_vi8S16i4},
	{"vi8S16i8", (Il2CppMethodPointer)__N2M_vi8S16i8},
	{"vi8S16i8i4", (Il2CppMethodPointer)__N2M_vi8S16i8i4},
	{"vi8S16i8i8", (Il2CppMethodPointer)__N2M_vi8S16i8i8},
	{"vi8S16S64", (Il2CppMethodPointer)__N2M_vi8S16S64},
	{"vi8S16S64i8", (Il2CppMethodPointer)__N2M_vi8S16S64i8},
	{"vi8S24", (Il2CppMethodPointer)__N2M_vi8S24},
	{"vi8S24i8", (Il2CppMethodPointer)__N2M_vi8S24i8},
	{"vi8S4", (Il2CppMethodPointer)__N2M_vi8S4},
	{"vi8S40", (Il2CppMethodPointer)__N2M_vi8S40},
	{"vi8S4i4", (Il2CppMethodPointer)__N2M_vi8S4i4},
	{"vi8S4S4", (Il2CppMethodPointer)__N2M_vi8S4S4},
	{"vi8S8", (Il2CppMethodPointer)__N2M_vi8S8},
	{"vi8S8i8", (Il2CppMethodPointer)__N2M_vi8S8i8},
	{"vi8S8i8i8", (Il2CppMethodPointer)__N2M_vi8S8i8i8},
	{"vi8u1", (Il2CppMethodPointer)__N2M_vi8u1},
	{"vi8u1S32", (Il2CppMethodPointer)__N2M_vi8u1S32},
	{"vi8u2", (Il2CppMethodPointer)__N2M_vi8u2},
	{"vi8u2i8", (Il2CppMethodPointer)__N2M_vi8u2i8},
	{"vi8u4", (Il2CppMethodPointer)__N2M_vi8u4},
	{"vi8u8", (Il2CppMethodPointer)__N2M_vi8u8},
	{"vi8u8i8", (Il2CppMethodPointer)__N2M_vi8u8i8},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vS12", (Il2CppMethodPointer)__N2M_vS12},
	{"vS16", (Il2CppMethodPointer)__N2M_vS16},
	{"vS16i8", (Il2CppMethodPointer)__N2M_vS16i8},
	{"vS24", (Il2CppMethodPointer)__N2M_vS24},
	{"vS4", (Il2CppMethodPointer)__N2M_vS4},
	{"vS40", (Il2CppMethodPointer)__N2M_vS40},
	{"vS4i4", (Il2CppMethodPointer)__N2M_vS4i4},
	{"vS4S4", (Il2CppMethodPointer)__N2M_vS4S4},
	{"vS8", (Il2CppMethodPointer)__N2M_vS8},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{"vu2i8", (Il2CppMethodPointer)__N2M_vu2i8},
	{"vu8", (Il2CppMethodPointer)__N2M_vu8},
	{nullptr, nullptr},
};

// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_AdjustorThunk_i1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_AdjustorThunk_i2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int32 Mono.Xml.SmallXmlParser/IAttrList::get_Length()
static int32_t __N2M_AdjustorThunk_i4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable::CompareTo(System.Object)
static int32_t __N2M_AdjustorThunk_i4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object)
static int32_t __N2M_AdjustorThunk_i4i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S20S20(int64_t __arg0, ValueTypeSize<20> __arg1, ValueTypeSize<20> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8u1u1(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names()
static int64_t __N2M_AdjustorThunk_i8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int64_t __N2M_AdjustorThunk_i8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String)
static int64_t __N2M_AdjustorThunk_i8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.IConvertible::ToType(System.Type,System.IFormatProvider)
static int64_t __N2M_AdjustorThunk_i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider)
static int64_t __N2M_AdjustorThunk_i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object Microsoft.Win32.IRegistryApi::GetValue(Microsoft.Win32.RegistryKey,System.String,System.Object,Microsoft.Win32.RegistryValueOptions)
static int64_t __N2M_AdjustorThunk_i8i8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int64_t __N2M_AdjustorThunk_i8i8i8i8S16i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.IRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
static int64_t __N2M_AdjustorThunk_i8i8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Resources.ResourceSet System.Resources.IResourceGroveler::GrovelForResourceSet(System.Globalization.CultureInfo,System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
static int64_t __N2M_AdjustorThunk_i8i8i8i8u1u1i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int64_t __N2M_AdjustorThunk_i8i8i8S16i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean)
static int64_t __N2M_AdjustorThunk_i8i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext)
static int64_t __N2M_AdjustorThunk_i8i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_AdjustorThunk_r4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_AdjustorThunk_r8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry()
static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<20> __N2M_AdjustorThunk_S20i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<20>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<24> __N2M_AdjustorThunk_S24i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<24> __N2M_AdjustorThunk_S24i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<4> __N2M_AdjustorThunk_S4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<4> __N2M_AdjustorThunk_S4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::get_CurrentLeaseTime()
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.DateTime System.IConvertible::ToDateTime(System.IFormatProvider)
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.Boolean System.Collections.ICollection::get_IsSynchronized()
static uint8_t __N2M_AdjustorThunk_u1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.ILogger::IsLogTypeAllowed(UnityEngine.LogType)
static uint8_t __N2M_AdjustorThunk_u1i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IConvertible::ToBoolean(System.IFormatProvider)
static uint8_t __N2M_AdjustorThunk_u1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Runtime.Remoting.IRemotingTypeInfo::CanCastTo(System.Type,System.Object)
static uint8_t __N2M_AdjustorThunk_u1i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_AdjustorThunk_u1i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IDictionary`2::TryGetValue(TKey,TValue&)
static uint8_t __N2M_AdjustorThunk_u1i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_AdjustorThunk_u1i8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S28(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S64(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint16_t __N2M_AdjustorThunk_u2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_AdjustorThunk_u2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_AdjustorThunk_u4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint64_t __N2M_AdjustorThunk_u8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static uint64_t __N2M_AdjustorThunk_u8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_AdjustorThunk_u8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.IDisposable::Dispose()
static void __N2M_AdjustorThunk_vi8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.IList::RemoveAt(System.Int32)
static void __N2M_AdjustorThunk_vi8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.IList::set_Item(System.Int32,System.Object)
static void __N2M_AdjustorThunk_vi8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
static void __N2M_AdjustorThunk_vi8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
static void __N2M_AdjustorThunk_vi8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4S12(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4S16(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4S24(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4S4(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4S8(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4u1(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi8i4u8(int64_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_AdjustorThunk_vi8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32)
static void __N2M_AdjustorThunk_vi8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
static void __N2M_AdjustorThunk_vi8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi8i8i8S16(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_AdjustorThunk_vi8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi8i8S16(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_AdjustorThunk_vi8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __N2M_AdjustorThunk_vi8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IDictionary`2::Add(TKey,TValue)
static void __N2M_AdjustorThunk_vi8S16i4(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IDictionary`2::Add(TKey,TValue)
static void __N2M_AdjustorThunk_vi8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_AdjustorThunk_vi8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_AdjustorThunk_vi8S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_AdjustorThunk_vi8S16S64(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_AdjustorThunk_vi8S16S64i8(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean)
static void __N2M_AdjustorThunk_vi8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"i1i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1i8i8},
	{"i2i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2i8i8},
	{"i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8},
	{"i4i8i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i1},
	{"i4i8i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i2},
	{"i4i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i4},
	{"i4i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i4i4},
	{"i4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8},
	{"i4i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8i8},
	{"i4i8r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8r4},
	{"i4i8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8r8},
	{"i4i8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S12},
	{"i4i8S12S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S12S12},
	{"i4i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S16},
	{"i4i8S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S16S16},
	{"i4i8S20S20", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S20S20},
	{"i4i8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S24},
	{"i4i8S24S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S24S24},
	{"i4i8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S4},
	{"i4i8S4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S4S4},
	{"i4i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S8},
	{"i4i8S8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S8S8},
	{"i4i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u1},
	{"i4i8u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u1u1},
	{"i4i8u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u2},
	{"i4i8u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u4},
	{"i4i8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u8},
	{"i4i8u8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u8u8},
	{"i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8},
	{"i8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i4},
	{"i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8},
	{"i8i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8},
	{"i8i8i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8i8},
	{"i8i8i8i8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8i8i4},
	{"i8i8i8i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8S16i8},
	{"i8i8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8u1},
	{"i8i8i8i8u1u1i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8u1u1i8},
	{"i8i8i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8S16i8},
	{"i8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8u1},
	{"i8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8S16},
	{"r4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4i8i8},
	{"r8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i8i8},
	{"S12i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8},
	{"S12i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8i4},
	{"S12i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8u1},
	{"S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8},
	{"S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8i4},
	{"S16i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8i8},
	{"S20i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S20i8},
	{"S24i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S24i8},
	{"S24i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S24i8i4},
	{"S4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i8},
	{"S4i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i8i4},
	{"S8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8},
	{"S8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8i4},
	{"S8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8i8},
	{"S8i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8S8},
	{"u1i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8},
	{"u1i8i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i1},
	{"u1i8i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i2},
	{"u1i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i4},
	{"u1i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i4i4},
	{"u1i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8},
	{"u1i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8i8},
	{"u1i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8u1},
	{"u1i8r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8r4},
	{"u1i8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8r8},
	{"u1i8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S12},
	{"u1i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16},
	{"u1i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16i8},
	{"u1i8S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16i8i4},
	{"u1i8S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16S16},
	{"u1i8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S24},
	{"u1i8S28", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S28},
	{"u1i8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S4},
	{"u1i8S40", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S40},
	{"u1i8S64", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S64},
	{"u1i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S8},
	{"u1i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u1},
	{"u1i8u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u2},
	{"u1i8u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u4},
	{"u1i8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u8},
	{"u1i8u8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u8u8},
	{"u2i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i8},
	{"u2i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i8i8},
	{"u4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4i8i8},
	{"u8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i8},
	{"u8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i8i4},
	{"u8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i8i8},
	{"vi8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8},
	{"vi8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4},
	{"vi8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i4},
	{"vi8i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8},
	{"vi8i4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8i8},
	{"vi8i4i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8i8i8},
	{"vi8i4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S12},
	{"vi8i4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S16},
	{"vi8i4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S24},
	{"vi8i4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S4},
	{"vi8i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S8},
	{"vi8i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4u1},
	{"vi8i4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4u8},
	{"vi8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8},
	{"vi8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i4},
	{"vi8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8},
	{"vi8i8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8S16},
	{"vi8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8u1},
	{"vi8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8S16},
	{"vi8i8u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8u1u1},
	{"vi8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S12},
	{"vi8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16},
	{"vi8S16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i4},
	{"vi8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i8},
	{"vi8S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i8i4},
	{"vi8S16i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i8i8},
	{"vi8S16S64", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16S64},
	{"vi8S16S64i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16S64i8},
	{"vi8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S24},
	{"vi8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S4},
	{"vi8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S8},
	{"vi8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8u1},
	{"vi8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8u8},
	{nullptr, nullptr},
};

//!!!}}CODE
#endif
