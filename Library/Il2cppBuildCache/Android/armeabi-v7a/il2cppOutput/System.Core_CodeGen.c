#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x0000000C System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000012 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000013 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000015 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000016 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003D System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000003F TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x00000041 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x00000042 System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x00000043 System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x00000044 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x00000045 System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x00000046 System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x00000047 System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x00000048 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000049 TElement[] System.Linq.Buffer`1::ToArray()
static Il2CppMethodPointer s_methodPointers[73] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[73] = 
{
	2005,
	2005,
	2100,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1774,
	1774,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	999,
	1209,
	1200,
	1174,
	1209,
	1184,
	1184,
	1184,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[27] = 
{
	{ 0x02000004, { 49, 4 } },
	{ 0x02000005, { 53, 9 } },
	{ 0x02000006, { 64, 7 } },
	{ 0x02000007, { 73, 10 } },
	{ 0x02000008, { 85, 11 } },
	{ 0x02000009, { 99, 9 } },
	{ 0x0200000A, { 111, 12 } },
	{ 0x0200000B, { 126, 1 } },
	{ 0x0200000C, { 127, 2 } },
	{ 0x0200000E, { 129, 4 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 2 } },
	{ 0x0600000A, { 35, 3 } },
	{ 0x0600000D, { 38, 1 } },
	{ 0x0600000E, { 39, 3 } },
	{ 0x0600000F, { 42, 2 } },
	{ 0x06000010, { 44, 5 } },
	{ 0x06000020, { 62, 2 } },
	{ 0x06000025, { 71, 2 } },
	{ 0x0600002A, { 83, 2 } },
	{ 0x06000030, { 96, 3 } },
	{ 0x06000035, { 108, 3 } },
	{ 0x0600003A, { 123, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[133] = 
{
	{ (Il2CppRGCTXDataType)2, 1021 },
	{ (Il2CppRGCTXDataType)3, 2829 },
	{ (Il2CppRGCTXDataType)2, 1616 },
	{ (Il2CppRGCTXDataType)2, 1339 },
	{ (Il2CppRGCTXDataType)3, 4875 },
	{ (Il2CppRGCTXDataType)2, 1073 },
	{ (Il2CppRGCTXDataType)2, 1346 },
	{ (Il2CppRGCTXDataType)3, 4928 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)3, 4883 },
	{ (Il2CppRGCTXDataType)2, 1022 },
	{ (Il2CppRGCTXDataType)3, 2830 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)2, 1348 },
	{ (Il2CppRGCTXDataType)3, 4936 },
	{ (Il2CppRGCTXDataType)2, 1075 },
	{ (Il2CppRGCTXDataType)2, 1356 },
	{ (Il2CppRGCTXDataType)3, 5026 },
	{ (Il2CppRGCTXDataType)2, 1352 },
	{ (Il2CppRGCTXDataType)3, 4977 },
	{ (Il2CppRGCTXDataType)2, 367 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)3, 21 },
	{ (Il2CppRGCTXDataType)2, 651 },
	{ (Il2CppRGCTXDataType)3, 2072 },
	{ (Il2CppRGCTXDataType)2, 368 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 656 },
	{ (Il2CppRGCTXDataType)3, 2075 },
	{ (Il2CppRGCTXDataType)2, 473 },
	{ (Il2CppRGCTXDataType)3, 467 },
	{ (Il2CppRGCTXDataType)3, 468 },
	{ (Il2CppRGCTXDataType)2, 1074 },
	{ (Il2CppRGCTXDataType)3, 3126 },
	{ (Il2CppRGCTXDataType)2, 829 },
	{ (Il2CppRGCTXDataType)2, 880 },
	{ (Il2CppRGCTXDataType)3, 2073 },
	{ (Il2CppRGCTXDataType)2, 823 },
	{ (Il2CppRGCTXDataType)2, 824 },
	{ (Il2CppRGCTXDataType)2, 878 },
	{ (Il2CppRGCTXDataType)3, 2071 },
	{ (Il2CppRGCTXDataType)2, 768 },
	{ (Il2CppRGCTXDataType)3, 6126 },
	{ (Il2CppRGCTXDataType)3, 1874 },
	{ (Il2CppRGCTXDataType)2, 612 },
	{ (Il2CppRGCTXDataType)2, 826 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)2, 920 },
	{ (Il2CppRGCTXDataType)3, 2831 },
	{ (Il2CppRGCTXDataType)3, 2833 },
	{ (Il2CppRGCTXDataType)2, 253 },
	{ (Il2CppRGCTXDataType)3, 2832 },
	{ (Il2CppRGCTXDataType)3, 2841 },
	{ (Il2CppRGCTXDataType)2, 1025 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)3, 4884 },
	{ (Il2CppRGCTXDataType)3, 2842 },
	{ (Il2CppRGCTXDataType)2, 853 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)3, 2080 },
	{ (Il2CppRGCTXDataType)3, 6106 },
	{ (Il2CppRGCTXDataType)2, 1353 },
	{ (Il2CppRGCTXDataType)3, 4978 },
	{ (Il2CppRGCTXDataType)3, 2834 },
	{ (Il2CppRGCTXDataType)2, 1024 },
	{ (Il2CppRGCTXDataType)2, 1340 },
	{ (Il2CppRGCTXDataType)3, 4876 },
	{ (Il2CppRGCTXDataType)3, 2079 },
	{ (Il2CppRGCTXDataType)3, 2835 },
	{ (Il2CppRGCTXDataType)3, 6105 },
	{ (Il2CppRGCTXDataType)2, 1349 },
	{ (Il2CppRGCTXDataType)3, 4937 },
	{ (Il2CppRGCTXDataType)3, 2848 },
	{ (Il2CppRGCTXDataType)2, 1026 },
	{ (Il2CppRGCTXDataType)2, 1347 },
	{ (Il2CppRGCTXDataType)3, 4929 },
	{ (Il2CppRGCTXDataType)3, 3144 },
	{ (Il2CppRGCTXDataType)3, 1567 },
	{ (Il2CppRGCTXDataType)3, 2081 },
	{ (Il2CppRGCTXDataType)3, 1566 },
	{ (Il2CppRGCTXDataType)3, 2849 },
	{ (Il2CppRGCTXDataType)3, 6107 },
	{ (Il2CppRGCTXDataType)2, 1357 },
	{ (Il2CppRGCTXDataType)3, 5027 },
	{ (Il2CppRGCTXDataType)3, 2862 },
	{ (Il2CppRGCTXDataType)2, 1028 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 4980 },
	{ (Il2CppRGCTXDataType)3, 2863 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)2, 897 },
	{ (Il2CppRGCTXDataType)3, 2085 },
	{ (Il2CppRGCTXDataType)3, 2084 },
	{ (Il2CppRGCTXDataType)2, 1344 },
	{ (Il2CppRGCTXDataType)3, 4886 },
	{ (Il2CppRGCTXDataType)3, 6116 },
	{ (Il2CppRGCTXDataType)2, 1354 },
	{ (Il2CppRGCTXDataType)3, 4979 },
	{ (Il2CppRGCTXDataType)3, 2855 },
	{ (Il2CppRGCTXDataType)2, 1027 },
	{ (Il2CppRGCTXDataType)2, 1351 },
	{ (Il2CppRGCTXDataType)3, 4939 },
	{ (Il2CppRGCTXDataType)3, 2083 },
	{ (Il2CppRGCTXDataType)3, 2082 },
	{ (Il2CppRGCTXDataType)3, 2856 },
	{ (Il2CppRGCTXDataType)2, 1343 },
	{ (Il2CppRGCTXDataType)3, 4885 },
	{ (Il2CppRGCTXDataType)3, 6115 },
	{ (Il2CppRGCTXDataType)2, 1350 },
	{ (Il2CppRGCTXDataType)3, 4938 },
	{ (Il2CppRGCTXDataType)3, 2869 },
	{ (Il2CppRGCTXDataType)2, 1029 },
	{ (Il2CppRGCTXDataType)2, 1359 },
	{ (Il2CppRGCTXDataType)3, 5029 },
	{ (Il2CppRGCTXDataType)3, 3145 },
	{ (Il2CppRGCTXDataType)3, 1569 },
	{ (Il2CppRGCTXDataType)3, 2087 },
	{ (Il2CppRGCTXDataType)3, 2086 },
	{ (Il2CppRGCTXDataType)3, 1568 },
	{ (Il2CppRGCTXDataType)3, 2870 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 4887 },
	{ (Il2CppRGCTXDataType)3, 6117 },
	{ (Il2CppRGCTXDataType)2, 1358 },
	{ (Il2CppRGCTXDataType)3, 5028 },
	{ (Il2CppRGCTXDataType)3, 2077 },
	{ (Il2CppRGCTXDataType)3, 2078 },
	{ (Il2CppRGCTXDataType)3, 2088 },
	{ (Il2CppRGCTXDataType)2, 769 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)2, 839 },
	{ (Il2CppRGCTXDataType)2, 881 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	73,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	27,
	s_rgctxIndices,
	133,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
