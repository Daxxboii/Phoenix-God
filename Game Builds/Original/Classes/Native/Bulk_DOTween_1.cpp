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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4BFAE477B0634F6EDB1E268DE3A4B995744CD738;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B;
// DG.Tweening.EaseFunction
struct EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t79168FE69AE981A42BFC4EBE040918DE6EBEB314;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2;
// DG.Tweening.Sequence
struct Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997;
// DG.Tweening.Tween
struct Tween_t119487E0AB84EF563521F1043116BDBAE68AC437;
// DG.Tweening.TweenCallback
struct TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1;
// DG.Tweening.Tweener
struct Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t57BB69F1AC3759152D9E750F6120000328D367B8;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean>
struct Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var;
extern RuntimeClass* DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var;
extern RuntimeClass* DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteralF25D7E65A8BD2882BB6473AF9F51EFECCE24B0A3;
extern const RuntimeMethod* DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var;
extern const RuntimeMethod* DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var;
extern const RuntimeMethod* DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF_RuntimeMethod_var;
extern const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B_m5780683876391EAC61FAE26A182786D488E44EDF_RuntimeMethod_var;
extern const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92_RuntimeMethod_var;
extern const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__0_mA37AB6CC0EDFA789A63F37E518FDE9130F65B8D8_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__1_m9B4BBBE1745115729B314E4B3A54AD4234CD0A9B_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__0_mF14E40C93E8335DAC99184A3E7C2AF364C185E3F_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__1_m21EA33520A520BE57874649C81D9B3918A128515_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__0_m6B0E3686ABCA0128F13CDA1D19C00930E8A50ADE_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__1_mD7C8F38B247EF8B2F10704CBBBBF9A2FD68053DD_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__0_m18C11775AA9B5336D74168E62EC0999CBB9E0A31_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__1_mDF77A62D08D0DB1C857F68C9F355DB811041CE72_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__0_mBBF7944CADB2E69CED840A007D06E63BF0A15789_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__1_mAB1A2F4499CE98930F063700EB644DF33B6A77A8_RuntimeMethod_var;
extern const uint32_t ShortcutExtensions_DOLocalMove_mE97AF6634A95152031B43C492A95B36DFB8BE3A4_MetadataUsageId;
extern const uint32_t ShortcutExtensions_DOLocalPath_m013A73B1B719B979EE123BFCB85EB704338386BB_MetadataUsageId;
extern const uint32_t ShortcutExtensions_DOMove_m47D32E8D8582DD4D41DC89A31FC36CF07C26D2BE_MetadataUsageId;
extern const uint32_t ShortcutExtensions_DOPath_mAAC4D21CE468AB2DF0BAA6FCF9AA777296B6EEFF_MetadataUsageId;
extern const uint32_t ShortcutExtensions_DOScale_m6984EC8F984976934A3E7AA659D7BB469C14C723_MetadataUsageId;
extern const uint32_t TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F_MetadataUsageId;
extern const uint32_t TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C_MetadataUsageId;
extern const uint32_t Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


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
#ifndef ABSTWEENPLUGIN_3_T4B150004C6035544DAF0205D76D11C3A5ADFE3D3_H
#define ABSTWEENPLUGIN_3_T4B150004C6035544DAF0205D76D11C3A5ADFE3D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTWEENPLUGIN_3_T4B150004C6035544DAF0205D76D11C3A5ADFE3D3_H
#ifndef SHORTCUTEXTENSIONS_T6551D100BBB9E0A80E6197A1DE743833FF1D0ED8_H
#define SHORTCUTEXTENSIONS_T6551D100BBB9E0A80E6197A1DE743833FF1D0ED8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions
struct ShortcutExtensions_t6551D100BBB9E0A80E6197A1DE743833FF1D0ED8  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCUTEXTENSIONS_T6551D100BBB9E0A80E6197A1DE743833FF1D0ED8_H
#ifndef U3CU3EC__DISPLAYCLASS32_0_T6BFFD86389C90745CC434795EBFB8214462AEB2F_H
#define U3CU3EC__DISPLAYCLASS32_0_T6BFFD86389C90745CC434795EBFB8214462AEB2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS32_0_T6BFFD86389C90745CC434795EBFB8214462AEB2F_H
#ifndef U3CU3EC__DISPLAYCLASS36_0_TA71D2003D06895FF152CC3D6092C2BCFDE409EE4_H
#define U3CU3EC__DISPLAYCLASS36_0_TA71D2003D06895FF152CC3D6092C2BCFDE409EE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS36_0_TA71D2003D06895FF152CC3D6092C2BCFDE409EE4_H
#ifndef U3CU3EC__DISPLAYCLASS45_0_T9CE7989470D6C04B04C4B01C9B5983160DBCB5CE_H
#define U3CU3EC__DISPLAYCLASS45_0_T9CE7989470D6C04B04C4B01C9B5983160DBCB5CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS45_0_T9CE7989470D6C04B04C4B01C9B5983160DBCB5CE_H
#ifndef U3CU3EC__DISPLAYCLASS65_0_T4C80C1D14DE7027914D4AC3AB3185FE912A398E7_H
#define U3CU3EC__DISPLAYCLASS65_0_T4C80C1D14DE7027914D4AC3AB3185FE912A398E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS65_0_T4C80C1D14DE7027914D4AC3AB3185FE912A398E7_H
#ifndef U3CU3EC__DISPLAYCLASS66_0_TC078E5A6C5E7531F93A21516D5C22208B4193997_H
#define U3CU3EC__DISPLAYCLASS66_0_TC078E5A6C5E7531F93A21516D5C22208B4193997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS66_0_TC078E5A6C5E7531F93A21516D5C22208B4193997_H
#ifndef TWEENEXTENSIONS_T78459AB2239BB3B0E4273A32381FAF97BF0B308D_H
#define TWEENEXTENSIONS_T78459AB2239BB3B0E4273A32381FAF97BF0B308D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenExtensions
struct TweenExtensions_t78459AB2239BB3B0E4273A32381FAF97BF0B308D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENEXTENSIONS_T78459AB2239BB3B0E4273A32381FAF97BF0B308D_H
#ifndef TWEENSETTINGSEXTENSIONS_T61A3DCA4F25E31E73F0104D8DE15B2D9AC78CCCA_H
#define TWEENSETTINGSEXTENSIONS_T61A3DCA4F25E31E73F0104D8DE15B2D9AC78CCCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenSettingsExtensions
struct TweenSettingsExtensions_t61A3DCA4F25E31E73F0104D8DE15B2D9AC78CCCA  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENSETTINGSEXTENSIONS_T61A3DCA4F25E31E73F0104D8DE15B2D9AC78CCCA_H
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef SAFEMODEREPORT_T7322E92D043786EC9B23410CF9536FFC1085E12A_H
#define SAFEMODEREPORT_T7322E92D043786EC9B23410CF9536FFC1085E12A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.SafeModeReport
struct SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totMissingTargetOrFieldErrors>k__BackingField
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totCallbackErrors>k__BackingField
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField_1;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totStartupErrors>k__BackingField
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField_2;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totUnsetErrors>k__BackingField
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() const { return ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return &___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline void set_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotCallbackErrorsU3Ek__BackingField_1)); }
	inline int32_t get_U3CtotCallbackErrorsU3Ek__BackingField_1() const { return ___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return &___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline void set_U3CtotCallbackErrorsU3Ek__BackingField_1(int32_t value)
	{
		___U3CtotCallbackErrorsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotStartupErrorsU3Ek__BackingField_2)); }
	inline int32_t get_U3CtotStartupErrorsU3Ek__BackingField_2() const { return ___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return &___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline void set_U3CtotStartupErrorsU3Ek__BackingField_2(int32_t value)
	{
		___U3CtotStartupErrorsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotUnsetErrorsU3Ek__BackingField_3)); }
	inline int32_t get_U3CtotUnsetErrorsU3Ek__BackingField_3() const { return ___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return &___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline void set_U3CtotUnsetErrorsU3Ek__BackingField_3(int32_t value)
	{
		___U3CtotUnsetErrorsU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEMODEREPORT_T7322E92D043786EC9B23410CF9536FFC1085E12A_H
#ifndef COLOROPTIONS_TD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_H
#define COLOROPTIONS_TD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshaled_com
{
	int32_t ___alphaOnly_0;
};
#endif // COLOROPTIONS_TD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct IntPtr_t 
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef AUTOPLAY_T17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12_H
#define AUTOPLAY_T17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.AutoPlay
struct AutoPlay_t17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12 
{
public:
	// System.Int32 DG.Tweening.AutoPlay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoPlay_t17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOPLAY_T17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12_H
#ifndef AXISCONSTRAINT_T6929580E28515C207FCC805981F73EC49354E48A_H
#define AXISCONSTRAINT_T6929580E28515C207FCC805981F73EC49354E48A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.AxisConstraint
struct AxisConstraint_t6929580E28515C207FCC805981F73EC49354E48A 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_t6929580E28515C207FCC805981F73EC49354E48A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISCONSTRAINT_T6929580E28515C207FCC805981F73EC49354E48A_H
#ifndef NESTEDTWEENFAILUREBEHAVIOUR_TC6EED7548BA8FCF6B20E0909C2D7355CD09BB183_H
#define NESTEDTWEENFAILUREBEHAVIOUR_TC6EED7548BA8FCF6B20E0909C2D7355CD09BB183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour
struct NestedTweenFailureBehaviour_tC6EED7548BA8FCF6B20E0909C2D7355CD09BB183 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.NestedTweenFailureBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NestedTweenFailureBehaviour_tC6EED7548BA8FCF6B20E0909C2D7355CD09BB183, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NESTEDTWEENFAILUREBEHAVIOUR_TC6EED7548BA8FCF6B20E0909C2D7355CD09BB183_H
#ifndef REWINDCALLBACKMODE_T2F1DD72D77203C98698C6FDD4C6B5683E019F84A_H
#define REWINDCALLBACKMODE_T2F1DD72D77203C98698C6FDD4C6B5683E019F84A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.RewindCallbackMode
struct RewindCallbackMode_t2F1DD72D77203C98698C6FDD4C6B5683E019F84A 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.RewindCallbackMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RewindCallbackMode_t2F1DD72D77203C98698C6FDD4C6B5683E019F84A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWINDCALLBACKMODE_T2F1DD72D77203C98698C6FDD4C6B5683E019F84A_H
#ifndef SAFEMODELOGBEHAVIOUR_T0827C661947C9A5882B1E8A304964D557882815B_H
#define SAFEMODELOGBEHAVIOUR_T0827C661947C9A5882B1E8A304964D557882815B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.SafeModeLogBehaviour
struct SafeModeLogBehaviour_t0827C661947C9A5882B1E8A304964D557882815B 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SafeModeLogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeLogBehaviour_t0827C661947C9A5882B1E8A304964D557882815B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEMODELOGBEHAVIOUR_T0827C661947C9A5882B1E8A304964D557882815B_H
#ifndef SPECIALSTARTUPMODE_TE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49_H
#define SPECIALSTARTUPMODE_TE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALSTARTUPMODE_TE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49_H
#ifndef UPDATEMODE_TF271804A5FF87FE0CBFBD3FF6011D9499D5C6662_H
#define UPDATEMODE_TF271804A5FF87FE0CBFBD3FF6011D9499D5C6662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.UpdateMode
struct UpdateMode_tF271804A5FF87FE0CBFBD3FF6011D9499D5C6662 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_tF271804A5FF87FE0CBFBD3FF6011D9499D5C6662, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEMODE_TF271804A5FF87FE0CBFBD3FF6011D9499D5C6662_H
#ifndef UPDATENOTICE_T03AF68BDDDBD2D8575BA411C06D96FC886C74D39_H
#define UPDATENOTICE_T03AF68BDDDBD2D8575BA411C06D96FC886C74D39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Enums.UpdateNotice
struct UpdateNotice_t03AF68BDDDBD2D8575BA411C06D96FC886C74D39 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateNotice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateNotice_t03AF68BDDDBD2D8575BA411C06D96FC886C74D39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATENOTICE_T03AF68BDDDBD2D8575BA411C06D96FC886C74D39_H
#ifndef SAFEMODEREPORTTYPE_T4B366E7F25192A80094CD2BAC43B1A470103B5E2_H
#define SAFEMODEREPORTTYPE_T4B366E7F25192A80094CD2BAC43B1A470103B5E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.SafeModeReport_SafeModeReportType
struct SafeModeReportType_t4B366E7F25192A80094CD2BAC43B1A470103B5E2 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport_SafeModeReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeReportType_t4B366E7F25192A80094CD2BAC43B1A470103B5E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEMODEREPORTTYPE_T4B366E7F25192A80094CD2BAC43B1A470103B5E2_H
#ifndef EASE_TC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E_H
#define EASE_TC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Ease
struct Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASE_TC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E_H
#ifndef LOGBEHAVIOUR_TD1A4AACD65E9C63844373CF59B8E9A576814F813_H
#define LOGBEHAVIOUR_TD1A4AACD65E9C63844373CF59B8E9A576814F813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.LogBehaviour
struct LogBehaviour_tD1A4AACD65E9C63844373CF59B8E9A576814F813 
{
public:
	// System.Int32 DG.Tweening.LogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogBehaviour_tD1A4AACD65E9C63844373CF59B8E9A576814F813, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGBEHAVIOUR_TD1A4AACD65E9C63844373CF59B8E9A576814F813_H
#ifndef LOOPTYPE_T1F864F717700724AC772E79CCF167C3C44D6EE1A_H
#define LOOPTYPE_T1F864F717700724AC772E79CCF167C3C44D6EE1A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.LoopType
struct LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPTYPE_T1F864F717700724AC772E79CCF167C3C44D6EE1A_H
#ifndef PATHMODE_T2ACD9081A852C6AE7EBBC384C9BC14805080366B_H
#define PATHMODE_T2ACD9081A852C6AE7EBBC384C9BC14805080366B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.PathMode
struct PathMode_t2ACD9081A852C6AE7EBBC384C9BC14805080366B 
{
public:
	// System.Int32 DG.Tweening.PathMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathMode_t2ACD9081A852C6AE7EBBC384C9BC14805080366B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHMODE_T2ACD9081A852C6AE7EBBC384C9BC14805080366B_H
#ifndef PATHTYPE_T90AD7223A91AEA11EEF2E0646D064AFE49C92BCD_H
#define PATHTYPE_T90AD7223A91AEA11EEF2E0646D064AFE49C92BCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.PathType
struct PathType_t90AD7223A91AEA11EEF2E0646D064AFE49C92BCD 
{
public:
	// System.Int32 DG.Tweening.PathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathType_t90AD7223A91AEA11EEF2E0646D064AFE49C92BCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHTYPE_T90AD7223A91AEA11EEF2E0646D064AFE49C92BCD_H
#ifndef ORIENTTYPE_TA561E2F4F794660D71F18B057A4C6488691EA237_H
#define ORIENTTYPE_TA561E2F4F794660D71F18B057A4C6488691EA237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.OrientType
struct OrientType_tA561E2F4F794660D71F18B057A4C6488691EA237 
{
public:
	// System.Int32 DG.Tweening.Plugins.Options.OrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientType_tA561E2F4F794660D71F18B057A4C6488691EA237, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTTYPE_TA561E2F4F794660D71F18B057A4C6488691EA237_H
#ifndef TWEENTYPE_T13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F_H
#define TWEENTYPE_T13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenType
struct TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENTYPE_T13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F_H
#ifndef UPDATETYPE_T0EBAB258B7D72D4959A3835E554B7958CAFDAF63_H
#define UPDATETYPE_T0EBAB258B7D72D4959A3835E554B7958CAFDAF63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.UpdateType
struct UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T0EBAB258B7D72D4959A3835E554B7958CAFDAF63_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef NULLABLE_1_TCE53BD40AA999E709C1D2369B2A531373CDD89EE_H
#define NULLABLE_1_TCE53BD40AA999E709C1D2369B2A531373CDD89EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_TCE53BD40AA999E709C1D2369B2A531373CDD89EE_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef ABSSEQUENTIABLE_TDA1366907669973CC0BB553EF4159D45FC46A757_H
#define ABSSEQUENTIABLE_TDA1366907669973CC0BB553EF4159D45FC46A757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___onStart_3)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((&___onStart_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSSEQUENTIABLE_TDA1366907669973CC0BB553EF4159D45FC46A757_H
#ifndef DOTWEEN_T6BB48F76E494B12781696AF3D0733CA8DC367E8D_H
#define DOTWEEN_T6BB48F76E494B12781696AF3D0733CA8DC367E8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTween
struct DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D  : public RuntimeObject
{
public:

public:
};

struct DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// DG.Tweening.Core.Enums.SafeModeLogBehaviour DG.Tweening.DOTween::safeModeLogBehaviour
	int32_t ___safeModeLogBehaviour_2;
	// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour DG.Tweening.DOTween::nestedTweenFailureBehaviour
	int32_t ___nestedTweenFailureBehaviour_3;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_5;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_6;
	// System.Single DG.Tweening.DOTween::maxSmoothUnscaledTime
	float ___maxSmoothUnscaledTime_7;
	// DG.Tweening.Core.Enums.RewindCallbackMode DG.Tweening.DOTween::rewindCallbackMode
	int32_t ___rewindCallbackMode_8;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_9;
	// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean> DG.Tweening.DOTween::onWillLog
	Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * ___onWillLog_10;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_11;
	// System.Boolean DG.Tweening.DOTween::debugMode
	bool ___debugMode_12;
	// System.Boolean DG.Tweening.DOTween::_fooDebugStoreTargetId
	bool ____fooDebugStoreTargetId_13;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_14;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_15;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_16;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_17;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_18;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_19;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_20;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_21;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_22;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * ___instance_23;
	// System.Boolean DG.Tweening.DOTween::_foo_isQuitting
	bool ____foo_isQuitting_24;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_25;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_26;
	// DG.Tweening.Core.SafeModeReport DG.Tweening.DOTween::safeModeReport
	SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  ___safeModeReport_27;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * ___GizmosDelegates_28;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_29;
	// System.Int32 DG.Tweening.DOTween::_isQuittingFrame
	int32_t ____isQuittingFrame_30;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version_0), value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_safeModeLogBehaviour_2() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___safeModeLogBehaviour_2)); }
	inline int32_t get_safeModeLogBehaviour_2() const { return ___safeModeLogBehaviour_2; }
	inline int32_t* get_address_of_safeModeLogBehaviour_2() { return &___safeModeLogBehaviour_2; }
	inline void set_safeModeLogBehaviour_2(int32_t value)
	{
		___safeModeLogBehaviour_2 = value;
	}

	inline static int32_t get_offset_of_nestedTweenFailureBehaviour_3() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___nestedTweenFailureBehaviour_3)); }
	inline int32_t get_nestedTweenFailureBehaviour_3() const { return ___nestedTweenFailureBehaviour_3; }
	inline int32_t* get_address_of_nestedTweenFailureBehaviour_3() { return &___nestedTweenFailureBehaviour_3; }
	inline void set_nestedTweenFailureBehaviour_3(int32_t value)
	{
		___nestedTweenFailureBehaviour_3 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_4() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___showUnityEditorReport_4)); }
	inline bool get_showUnityEditorReport_4() const { return ___showUnityEditorReport_4; }
	inline bool* get_address_of_showUnityEditorReport_4() { return &___showUnityEditorReport_4; }
	inline void set_showUnityEditorReport_4(bool value)
	{
		___showUnityEditorReport_4 = value;
	}

	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of_useSmoothDeltaTime_6() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___useSmoothDeltaTime_6)); }
	inline bool get_useSmoothDeltaTime_6() const { return ___useSmoothDeltaTime_6; }
	inline bool* get_address_of_useSmoothDeltaTime_6() { return &___useSmoothDeltaTime_6; }
	inline void set_useSmoothDeltaTime_6(bool value)
	{
		___useSmoothDeltaTime_6 = value;
	}

	inline static int32_t get_offset_of_maxSmoothUnscaledTime_7() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxSmoothUnscaledTime_7)); }
	inline float get_maxSmoothUnscaledTime_7() const { return ___maxSmoothUnscaledTime_7; }
	inline float* get_address_of_maxSmoothUnscaledTime_7() { return &___maxSmoothUnscaledTime_7; }
	inline void set_maxSmoothUnscaledTime_7(float value)
	{
		___maxSmoothUnscaledTime_7 = value;
	}

	inline static int32_t get_offset_of_rewindCallbackMode_8() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___rewindCallbackMode_8)); }
	inline int32_t get_rewindCallbackMode_8() const { return ___rewindCallbackMode_8; }
	inline int32_t* get_address_of_rewindCallbackMode_8() { return &___rewindCallbackMode_8; }
	inline void set_rewindCallbackMode_8(int32_t value)
	{
		___rewindCallbackMode_8 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_9() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____logBehaviour_9)); }
	inline int32_t get__logBehaviour_9() const { return ____logBehaviour_9; }
	inline int32_t* get_address_of__logBehaviour_9() { return &____logBehaviour_9; }
	inline void set__logBehaviour_9(int32_t value)
	{
		____logBehaviour_9 = value;
	}

	inline static int32_t get_offset_of_onWillLog_10() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___onWillLog_10)); }
	inline Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * get_onWillLog_10() const { return ___onWillLog_10; }
	inline Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB ** get_address_of_onWillLog_10() { return &___onWillLog_10; }
	inline void set_onWillLog_10(Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * value)
	{
		___onWillLog_10 = value;
		Il2CppCodeGenWriteBarrier((&___onWillLog_10), value);
	}

	inline static int32_t get_offset_of_drawGizmos_11() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___drawGizmos_11)); }
	inline bool get_drawGizmos_11() const { return ___drawGizmos_11; }
	inline bool* get_address_of_drawGizmos_11() { return &___drawGizmos_11; }
	inline void set_drawGizmos_11(bool value)
	{
		___drawGizmos_11 = value;
	}

	inline static int32_t get_offset_of_debugMode_12() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___debugMode_12)); }
	inline bool get_debugMode_12() const { return ___debugMode_12; }
	inline bool* get_address_of_debugMode_12() { return &___debugMode_12; }
	inline void set_debugMode_12(bool value)
	{
		___debugMode_12 = value;
	}

	inline static int32_t get_offset_of__fooDebugStoreTargetId_13() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____fooDebugStoreTargetId_13)); }
	inline bool get__fooDebugStoreTargetId_13() const { return ____fooDebugStoreTargetId_13; }
	inline bool* get_address_of__fooDebugStoreTargetId_13() { return &____fooDebugStoreTargetId_13; }
	inline void set__fooDebugStoreTargetId_13(bool value)
	{
		____fooDebugStoreTargetId_13 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_14() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultUpdateType_14)); }
	inline int32_t get_defaultUpdateType_14() const { return ___defaultUpdateType_14; }
	inline int32_t* get_address_of_defaultUpdateType_14() { return &___defaultUpdateType_14; }
	inline void set_defaultUpdateType_14(int32_t value)
	{
		___defaultUpdateType_14 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_15() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultTimeScaleIndependent_15)); }
	inline bool get_defaultTimeScaleIndependent_15() const { return ___defaultTimeScaleIndependent_15; }
	inline bool* get_address_of_defaultTimeScaleIndependent_15() { return &___defaultTimeScaleIndependent_15; }
	inline void set_defaultTimeScaleIndependent_15(bool value)
	{
		___defaultTimeScaleIndependent_15 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_16() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultAutoPlay_16)); }
	inline int32_t get_defaultAutoPlay_16() const { return ___defaultAutoPlay_16; }
	inline int32_t* get_address_of_defaultAutoPlay_16() { return &___defaultAutoPlay_16; }
	inline void set_defaultAutoPlay_16(int32_t value)
	{
		___defaultAutoPlay_16 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_17() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultAutoKill_17)); }
	inline bool get_defaultAutoKill_17() const { return ___defaultAutoKill_17; }
	inline bool* get_address_of_defaultAutoKill_17() { return &___defaultAutoKill_17; }
	inline void set_defaultAutoKill_17(bool value)
	{
		___defaultAutoKill_17 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_18() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultLoopType_18)); }
	inline int32_t get_defaultLoopType_18() const { return ___defaultLoopType_18; }
	inline int32_t* get_address_of_defaultLoopType_18() { return &___defaultLoopType_18; }
	inline void set_defaultLoopType_18(int32_t value)
	{
		___defaultLoopType_18 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_19() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultRecyclable_19)); }
	inline bool get_defaultRecyclable_19() const { return ___defaultRecyclable_19; }
	inline bool* get_address_of_defaultRecyclable_19() { return &___defaultRecyclable_19; }
	inline void set_defaultRecyclable_19(bool value)
	{
		___defaultRecyclable_19 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_20() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEaseType_20)); }
	inline int32_t get_defaultEaseType_20() const { return ___defaultEaseType_20; }
	inline int32_t* get_address_of_defaultEaseType_20() { return &___defaultEaseType_20; }
	inline void set_defaultEaseType_20(int32_t value)
	{
		___defaultEaseType_20 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_21() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEaseOvershootOrAmplitude_21)); }
	inline float get_defaultEaseOvershootOrAmplitude_21() const { return ___defaultEaseOvershootOrAmplitude_21; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_21() { return &___defaultEaseOvershootOrAmplitude_21; }
	inline void set_defaultEaseOvershootOrAmplitude_21(float value)
	{
		___defaultEaseOvershootOrAmplitude_21 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_22() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEasePeriod_22)); }
	inline float get_defaultEasePeriod_22() const { return ___defaultEasePeriod_22; }
	inline float* get_address_of_defaultEasePeriod_22() { return &___defaultEasePeriod_22; }
	inline void set_defaultEasePeriod_22(float value)
	{
		___defaultEasePeriod_22 = value;
	}

	inline static int32_t get_offset_of_instance_23() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___instance_23)); }
	inline DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * get_instance_23() const { return ___instance_23; }
	inline DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F ** get_address_of_instance_23() { return &___instance_23; }
	inline void set_instance_23(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * value)
	{
		___instance_23 = value;
		Il2CppCodeGenWriteBarrier((&___instance_23), value);
	}

	inline static int32_t get_offset_of__foo_isQuitting_24() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____foo_isQuitting_24)); }
	inline bool get__foo_isQuitting_24() const { return ____foo_isQuitting_24; }
	inline bool* get_address_of__foo_isQuitting_24() { return &____foo_isQuitting_24; }
	inline void set__foo_isQuitting_24(bool value)
	{
		____foo_isQuitting_24 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_25() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxActiveTweenersReached_25)); }
	inline int32_t get_maxActiveTweenersReached_25() const { return ___maxActiveTweenersReached_25; }
	inline int32_t* get_address_of_maxActiveTweenersReached_25() { return &___maxActiveTweenersReached_25; }
	inline void set_maxActiveTweenersReached_25(int32_t value)
	{
		___maxActiveTweenersReached_25 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_26() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxActiveSequencesReached_26)); }
	inline int32_t get_maxActiveSequencesReached_26() const { return ___maxActiveSequencesReached_26; }
	inline int32_t* get_address_of_maxActiveSequencesReached_26() { return &___maxActiveSequencesReached_26; }
	inline void set_maxActiveSequencesReached_26(int32_t value)
	{
		___maxActiveSequencesReached_26 = value;
	}

	inline static int32_t get_offset_of_safeModeReport_27() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___safeModeReport_27)); }
	inline SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  get_safeModeReport_27() const { return ___safeModeReport_27; }
	inline SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A * get_address_of_safeModeReport_27() { return &___safeModeReport_27; }
	inline void set_safeModeReport_27(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  value)
	{
		___safeModeReport_27 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_28() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___GizmosDelegates_28)); }
	inline List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * get_GizmosDelegates_28() const { return ___GizmosDelegates_28; }
	inline List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 ** get_address_of_GizmosDelegates_28() { return &___GizmosDelegates_28; }
	inline void set_GizmosDelegates_28(List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * value)
	{
		___GizmosDelegates_28 = value;
		Il2CppCodeGenWriteBarrier((&___GizmosDelegates_28), value);
	}

	inline static int32_t get_offset_of_initialized_29() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___initialized_29)); }
	inline bool get_initialized_29() const { return ___initialized_29; }
	inline bool* get_address_of_initialized_29() { return &___initialized_29; }
	inline void set_initialized_29(bool value)
	{
		___initialized_29 = value;
	}

	inline static int32_t get_offset_of__isQuittingFrame_30() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____isQuittingFrame_30)); }
	inline int32_t get__isQuittingFrame_30() const { return ____isQuittingFrame_30; }
	inline int32_t* get_address_of__isQuittingFrame_30() { return &____isQuittingFrame_30; }
	inline void set__isQuittingFrame_30(int32_t value)
	{
		____isQuittingFrame_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOTWEEN_T6BB48F76E494B12781696AF3D0733CA8DC367E8D_H
#ifndef PATHOPTIONS_TE44D7F93669AF298F0376DB1276BFAF8902F65A7_H
#define PATHOPTIONS_TE44D7F93669AF298F0376DB1276BFAF8902F65A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 
{
public:
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody2D
	bool ___isRigidbody2D_13;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_14;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_17;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_18;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_orientType_1() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___orientType_1)); }
	inline int32_t get_orientType_1() const { return ___orientType_1; }
	inline int32_t* get_address_of_orientType_1() { return &___orientType_1; }
	inline void set_orientType_1(int32_t value)
	{
		___orientType_1 = value;
	}

	inline static int32_t get_offset_of_lockPositionAxis_2() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lockPositionAxis_2)); }
	inline int32_t get_lockPositionAxis_2() const { return ___lockPositionAxis_2; }
	inline int32_t* get_address_of_lockPositionAxis_2() { return &___lockPositionAxis_2; }
	inline void set_lockPositionAxis_2(int32_t value)
	{
		___lockPositionAxis_2 = value;
	}

	inline static int32_t get_offset_of_lockRotationAxis_3() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lockRotationAxis_3)); }
	inline int32_t get_lockRotationAxis_3() const { return ___lockRotationAxis_3; }
	inline int32_t* get_address_of_lockRotationAxis_3() { return &___lockRotationAxis_3; }
	inline void set_lockRotationAxis_3(int32_t value)
	{
		___lockRotationAxis_3 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_4() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isClosedPath_4)); }
	inline bool get_isClosedPath_4() const { return ___isClosedPath_4; }
	inline bool* get_address_of_isClosedPath_4() { return &___isClosedPath_4; }
	inline void set_isClosedPath_4(bool value)
	{
		___isClosedPath_4 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_5() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAtPosition_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lookAtPosition_5() const { return ___lookAtPosition_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lookAtPosition_5() { return &___lookAtPosition_5; }
	inline void set_lookAtPosition_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lookAtPosition_5 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_6() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAtTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_lookAtTransform_6() const { return ___lookAtTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_lookAtTransform_6() { return &___lookAtTransform_6; }
	inline void set_lookAtTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___lookAtTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___lookAtTransform_6), value);
	}

	inline static int32_t get_offset_of_lookAhead_7() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAhead_7)); }
	inline float get_lookAhead_7() const { return ___lookAhead_7; }
	inline float* get_address_of_lookAhead_7() { return &___lookAhead_7; }
	inline void set_lookAhead_7(float value)
	{
		___lookAhead_7 = value;
	}

	inline static int32_t get_offset_of_hasCustomForwardDirection_8() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___hasCustomForwardDirection_8)); }
	inline bool get_hasCustomForwardDirection_8() const { return ___hasCustomForwardDirection_8; }
	inline bool* get_address_of_hasCustomForwardDirection_8() { return &___hasCustomForwardDirection_8; }
	inline void set_hasCustomForwardDirection_8(bool value)
	{
		___hasCustomForwardDirection_8 = value;
	}

	inline static int32_t get_offset_of_forward_9() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___forward_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_forward_9() const { return ___forward_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_forward_9() { return &___forward_9; }
	inline void set_forward_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___forward_9 = value;
	}

	inline static int32_t get_offset_of_useLocalPosition_10() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___useLocalPosition_10)); }
	inline bool get_useLocalPosition_10() const { return ___useLocalPosition_10; }
	inline bool* get_address_of_useLocalPosition_10() { return &___useLocalPosition_10; }
	inline void set_useLocalPosition_10(bool value)
	{
		___useLocalPosition_10 = value;
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___parent_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_parent_11() const { return ___parent_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier((&___parent_11), value);
	}

	inline static int32_t get_offset_of_isRigidbody_12() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isRigidbody_12)); }
	inline bool get_isRigidbody_12() const { return ___isRigidbody_12; }
	inline bool* get_address_of_isRigidbody_12() { return &___isRigidbody_12; }
	inline void set_isRigidbody_12(bool value)
	{
		___isRigidbody_12 = value;
	}

	inline static int32_t get_offset_of_isRigidbody2D_13() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isRigidbody2D_13)); }
	inline bool get_isRigidbody2D_13() const { return ___isRigidbody2D_13; }
	inline bool* get_address_of_isRigidbody2D_13() { return &___isRigidbody2D_13; }
	inline void set_isRigidbody2D_13(bool value)
	{
		___isRigidbody2D_13 = value;
	}

	inline static int32_t get_offset_of_stableZRotation_14() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___stableZRotation_14)); }
	inline bool get_stableZRotation_14() const { return ___stableZRotation_14; }
	inline bool* get_address_of_stableZRotation_14() { return &___stableZRotation_14; }
	inline void set_stableZRotation_14(bool value)
	{
		___stableZRotation_14 = value;
	}

	inline static int32_t get_offset_of_startupRot_15() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___startupRot_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_startupRot_15() const { return ___startupRot_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_startupRot_15() { return &___startupRot_15; }
	inline void set_startupRot_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___startupRot_15 = value;
	}

	inline static int32_t get_offset_of_startupZRot_16() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___startupZRot_16)); }
	inline float get_startupZRot_16() const { return ___startupZRot_16; }
	inline float* get_address_of_startupZRot_16() { return &___startupZRot_16; }
	inline void set_startupZRot_16(float value)
	{
		___startupZRot_16 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_17() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___addedExtraStartWp_17)); }
	inline bool get_addedExtraStartWp_17() const { return ___addedExtraStartWp_17; }
	inline bool* get_address_of_addedExtraStartWp_17() { return &___addedExtraStartWp_17; }
	inline void set_addedExtraStartWp_17(bool value)
	{
		___addedExtraStartWp_17 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_18() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___addedExtraEndWp_18)); }
	inline bool get_addedExtraEndWp_18() const { return ___addedExtraEndWp_18; }
	inline bool* get_address_of_addedExtraEndWp_18() { return &___addedExtraEndWp_18; }
	inline void set_addedExtraEndWp_18(bool value)
	{
		___addedExtraEndWp_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
#endif // PATHOPTIONS_TE44D7F93669AF298F0376DB1276BFAF8902F65A7_H
#ifndef VECTOROPTIONS_T385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_H
#define VECTOROPTIONS_T385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
#endif // VECTOROPTIONS_T385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef DOGETTER_1_T6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_H
#define DOGETTER_1_T6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOGETTER_1_T6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_H
#ifndef DOSETTER_1_T528C4470268C88CABD1BFDF039B98D72E012AF46_H
#define DOSETTER_1_T528C4470268C88CABD1BFDF039B98D72E012AF46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOSETTER_1_T528C4470268C88CABD1BFDF039B98D72E012AF46_H
#ifndef EASEFUNCTION_TAC315FE3B057AC8DA87991C785F2595F3B761691_H
#define EASEFUNCTION_TAC315FE3B057AC8DA87991C785F2595F3B761691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.EaseFunction
struct EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASEFUNCTION_TAC315FE3B057AC8DA87991C785F2595F3B761691_H
#ifndef PATH_TCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_H
#define PATH_TCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2  : public RuntimeObject
{
public:
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___wpLengths_0;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___wps_1;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_2;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_3;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_4;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* ___controlPoints_5;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_6;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_7;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___timesTable_8;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengthsTable_9;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_10;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_11;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_12;
	// DG.Tweening.Plugins.Options.PathOptions DG.Tweening.Plugins.Core.PathCore.Path::plugOptions
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  ___plugOptions_13;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ____incrementalClone_14;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_15;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * ____decoder_16;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_17;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___nonLinearDrawWps_18;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition_19;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___lookAtPosition_20;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___gizmoColor_21;

public:
	inline static int32_t get_offset_of_wpLengths_0() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___wpLengths_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_wpLengths_0() const { return ___wpLengths_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_wpLengths_0() { return &___wpLengths_0; }
	inline void set_wpLengths_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___wpLengths_0 = value;
		Il2CppCodeGenWriteBarrier((&___wpLengths_0), value);
	}

	inline static int32_t get_offset_of_wps_1() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___wps_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_wps_1() const { return ___wps_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_wps_1() { return &___wps_1; }
	inline void set_wps_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___wps_1 = value;
		Il2CppCodeGenWriteBarrier((&___wps_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_3() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___subdivisionsXSegment_3)); }
	inline int32_t get_subdivisionsXSegment_3() const { return ___subdivisionsXSegment_3; }
	inline int32_t* get_address_of_subdivisionsXSegment_3() { return &___subdivisionsXSegment_3; }
	inline void set_subdivisionsXSegment_3(int32_t value)
	{
		___subdivisionsXSegment_3 = value;
	}

	inline static int32_t get_offset_of_subdivisions_4() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___subdivisions_4)); }
	inline int32_t get_subdivisions_4() const { return ___subdivisions_4; }
	inline int32_t* get_address_of_subdivisions_4() { return &___subdivisions_4; }
	inline void set_subdivisions_4(int32_t value)
	{
		___subdivisions_4 = value;
	}

	inline static int32_t get_offset_of_controlPoints_5() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___controlPoints_5)); }
	inline ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* get_controlPoints_5() const { return ___controlPoints_5; }
	inline ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23** get_address_of_controlPoints_5() { return &___controlPoints_5; }
	inline void set_controlPoints_5(ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* value)
	{
		___controlPoints_5 = value;
		Il2CppCodeGenWriteBarrier((&___controlPoints_5), value);
	}

	inline static int32_t get_offset_of_length_6() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___length_6)); }
	inline float get_length_6() const { return ___length_6; }
	inline float* get_address_of_length_6() { return &___length_6; }
	inline void set_length_6(float value)
	{
		___length_6 = value;
	}

	inline static int32_t get_offset_of_isFinalized_7() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___isFinalized_7)); }
	inline bool get_isFinalized_7() const { return ___isFinalized_7; }
	inline bool* get_address_of_isFinalized_7() { return &___isFinalized_7; }
	inline void set_isFinalized_7(bool value)
	{
		___isFinalized_7 = value;
	}

	inline static int32_t get_offset_of_timesTable_8() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___timesTable_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_timesTable_8() const { return ___timesTable_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_timesTable_8() { return &___timesTable_8; }
	inline void set_timesTable_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___timesTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___timesTable_8), value);
	}

	inline static int32_t get_offset_of_lengthsTable_9() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___lengthsTable_9)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_lengthsTable_9() const { return ___lengthsTable_9; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_lengthsTable_9() { return &___lengthsTable_9; }
	inline void set_lengthsTable_9(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___lengthsTable_9 = value;
		Il2CppCodeGenWriteBarrier((&___lengthsTable_9), value);
	}

	inline static int32_t get_offset_of_linearWPIndex_10() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___linearWPIndex_10)); }
	inline int32_t get_linearWPIndex_10() const { return ___linearWPIndex_10; }
	inline int32_t* get_address_of_linearWPIndex_10() { return &___linearWPIndex_10; }
	inline void set_linearWPIndex_10(int32_t value)
	{
		___linearWPIndex_10 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_11() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___addedExtraStartWp_11)); }
	inline bool get_addedExtraStartWp_11() const { return ___addedExtraStartWp_11; }
	inline bool* get_address_of_addedExtraStartWp_11() { return &___addedExtraStartWp_11; }
	inline void set_addedExtraStartWp_11(bool value)
	{
		___addedExtraStartWp_11 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_12() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___addedExtraEndWp_12)); }
	inline bool get_addedExtraEndWp_12() const { return ___addedExtraEndWp_12; }
	inline bool* get_address_of_addedExtraEndWp_12() { return &___addedExtraEndWp_12; }
	inline void set_addedExtraEndWp_12(bool value)
	{
		___addedExtraEndWp_12 = value;
	}

	inline static int32_t get_offset_of_plugOptions_13() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___plugOptions_13)); }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  get_plugOptions_13() const { return ___plugOptions_13; }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * get_address_of_plugOptions_13() { return &___plugOptions_13; }
	inline void set_plugOptions_13(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  value)
	{
		___plugOptions_13 = value;
	}

	inline static int32_t get_offset_of__incrementalClone_14() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____incrementalClone_14)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get__incrementalClone_14() const { return ____incrementalClone_14; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of__incrementalClone_14() { return &____incrementalClone_14; }
	inline void set__incrementalClone_14(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		____incrementalClone_14 = value;
		Il2CppCodeGenWriteBarrier((&____incrementalClone_14), value);
	}

	inline static int32_t get_offset_of__incrementalIndex_15() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____incrementalIndex_15)); }
	inline int32_t get__incrementalIndex_15() const { return ____incrementalIndex_15; }
	inline int32_t* get_address_of__incrementalIndex_15() { return &____incrementalIndex_15; }
	inline void set__incrementalIndex_15(int32_t value)
	{
		____incrementalIndex_15 = value;
	}

	inline static int32_t get_offset_of__decoder_16() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____decoder_16)); }
	inline ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * get__decoder_16() const { return ____decoder_16; }
	inline ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 ** get_address_of__decoder_16() { return &____decoder_16; }
	inline void set__decoder_16(ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * value)
	{
		____decoder_16 = value;
		Il2CppCodeGenWriteBarrier((&____decoder_16), value);
	}

	inline static int32_t get_offset_of__changed_17() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____changed_17)); }
	inline bool get__changed_17() const { return ____changed_17; }
	inline bool* get_address_of__changed_17() { return &____changed_17; }
	inline void set__changed_17(bool value)
	{
		____changed_17 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_18() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___nonLinearDrawWps_18)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_nonLinearDrawWps_18() const { return ___nonLinearDrawWps_18; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_nonLinearDrawWps_18() { return &___nonLinearDrawWps_18; }
	inline void set_nonLinearDrawWps_18(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___nonLinearDrawWps_18 = value;
		Il2CppCodeGenWriteBarrier((&___nonLinearDrawWps_18), value);
	}

	inline static int32_t get_offset_of_targetPosition_19() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___targetPosition_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetPosition_19() const { return ___targetPosition_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetPosition_19() { return &___targetPosition_19; }
	inline void set_targetPosition_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetPosition_19 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_20() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___lookAtPosition_20)); }
	inline Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  get_lookAtPosition_20() const { return ___lookAtPosition_20; }
	inline Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * get_address_of_lookAtPosition_20() { return &___lookAtPosition_20; }
	inline void set_lookAtPosition_20(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  value)
	{
		___lookAtPosition_20 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_21() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___gizmoColor_21)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_gizmoColor_21() const { return ___gizmoColor_21; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_gizmoColor_21() { return &___gizmoColor_21; }
	inline void set_gizmoColor_21(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___gizmoColor_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_TCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_H
#ifndef TWEEN_T119487E0AB84EF563521F1043116BDBAE68AC437_H
#define TWEEN_T119487E0AB84EF563521F1043116BDBAE68AC437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Tween
struct Tween_t119487E0AB84EF563521F1043116BDBAE68AC437  : public ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((&___id_7), value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((&___stringId_8), value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((&___target_10), value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPlay_13)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((&___onPlay_13), value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPause_14)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((&___onPause_14), value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onRewind_15)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((&___onRewind_15), value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onUpdate_16)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_16), value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onStepComplete_17)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((&___onStepComplete_17), value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onComplete_18)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((&___onComplete_18), value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onKill_19)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((&___onKill_19), value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onWaypointChange_20)); }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((&___onWaypointChange_20), value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___customEase_32)); }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((&___customEase_32), value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((&___debugTargetId_35), value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((&___typeofT1_36), value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((&___typeofT2_37), value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((&___typeofTPlugOptions_38), value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___sequenceParent_41)); }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((&___sequenceParent_41), value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEEN_T119487E0AB84EF563521F1043116BDBAE68AC437_H
#ifndef TWEENCALLBACK_TD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83_H
#define TWEENCALLBACK_TD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenCallback
struct TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENCALLBACK_TD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83_H
#ifndef TWEENCALLBACK_1_T46CB97F053453C4F41F8AE6213792813E455DDE1_H
#define TWEENCALLBACK_1_T46CB97F053453C4F41F8AE6213792813E455DDE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENCALLBACK_1_T46CB97F053453C4F41F8AE6213792813E455DDE1_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef SEQUENCE_TA6FA099F465933113D131DDC0EECB6A19A27BCB2_H
#define SEQUENCE_TA6FA099F465933113D131DDC0EECB6A19A27BCB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Sequence
struct Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2  : public Tween_t119487E0AB84EF563521F1043116BDBAE68AC437
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;

public:
	inline static int32_t get_offset_of_sequencedTweens_55() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ___sequencedTweens_55)); }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * get_sequencedTweens_55() const { return ___sequencedTweens_55; }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 ** get_address_of_sequencedTweens_55() { return &___sequencedTweens_55; }
	inline void set_sequencedTweens_55(List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * value)
	{
		___sequencedTweens_55 = value;
		Il2CppCodeGenWriteBarrier((&___sequencedTweens_55), value);
	}

	inline static int32_t get_offset_of__sequencedObjs_56() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ____sequencedObjs_56)); }
	inline List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * get__sequencedObjs_56() const { return ____sequencedObjs_56; }
	inline List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED ** get_address_of__sequencedObjs_56() { return &____sequencedObjs_56; }
	inline void set__sequencedObjs_56(List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * value)
	{
		____sequencedObjs_56 = value;
		Il2CppCodeGenWriteBarrier((&____sequencedObjs_56), value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_57() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ___lastTweenInsertTime_57)); }
	inline float get_lastTweenInsertTime_57() const { return ___lastTweenInsertTime_57; }
	inline float* get_address_of_lastTweenInsertTime_57() { return &___lastTweenInsertTime_57; }
	inline void set_lastTweenInsertTime_57(float value)
	{
		___lastTweenInsertTime_57 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENCE_TA6FA099F465933113D131DDC0EECB6A19A27BCB2_H
#ifndef TWEENER_T9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_H
#define TWEENER_T9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Tweener
struct Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8  : public Tween_t119487E0AB84EF563521F1043116BDBAE68AC437
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENER_T9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_H
#ifndef TWEENERCORE_3_T135A028153B5C8F7030BB331039A6C1C8B41AC65_H
#define TWEENERCORE_3_T135A028153B5C8F7030BB331039A6C1C8B41AC65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_65;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___startValue_57)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_startValue_57() const { return ___startValue_57; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___endValue_58)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_endValue_58() const { return ___endValue_58; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___changeValue_59)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___plugOptions_60)); }
	inline ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___getter_61)); }
	inline DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((&___getter_61), value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___setter_62)); }
	inline DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((&___setter_62), value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((&___tweenPlugin_63), value);
	}

	inline static int32_t get_offset_of__colorType_64() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ____colorType_64)); }
	inline Type_t * get__colorType_64() const { return ____colorType_64; }
	inline Type_t ** get_address_of__colorType_64() { return &____colorType_64; }
	inline void set__colorType_64(Type_t * value)
	{
		____colorType_64 = value;
		Il2CppCodeGenWriteBarrier((&____colorType_64), value);
	}

	inline static int32_t get_offset_of__color32Type_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ____color32Type_65)); }
	inline Type_t * get__color32Type_65() const { return ____color32Type_65; }
	inline Type_t ** get_address_of__color32Type_65() { return &____color32Type_65; }
	inline void set__color32Type_65(Type_t * value)
	{
		____color32Type_65 = value;
		Il2CppCodeGenWriteBarrier((&____color32Type_65), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENERCORE_3_T135A028153B5C8F7030BB331039A6C1C8B41AC65_H
#ifndef TWEENERCORE_3_TB8E672121CDE6F3B5895C573FE30EF8B42170AB1_H
#define TWEENERCORE_3_TB8E672121CDE6F3B5895C573FE30EF8B42170AB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_65;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___startValue_57)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_startValue_57() const { return ___startValue_57; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((&___startValue_57), value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___endValue_58)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_endValue_58() const { return ___endValue_58; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((&___endValue_58), value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___changeValue_59)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_changeValue_59() const { return ___changeValue_59; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((&___changeValue_59), value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___plugOptions_60)); }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  get_plugOptions_60() const { return ___plugOptions_60; }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___getter_61)); }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((&___getter_61), value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___setter_62)); }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((&___setter_62), value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((&___tweenPlugin_63), value);
	}

	inline static int32_t get_offset_of__colorType_64() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ____colorType_64)); }
	inline Type_t * get__colorType_64() const { return ____colorType_64; }
	inline Type_t ** get_address_of__colorType_64() { return &____colorType_64; }
	inline void set__colorType_64(Type_t * value)
	{
		____colorType_64 = value;
		Il2CppCodeGenWriteBarrier((&____colorType_64), value);
	}

	inline static int32_t get_offset_of__color32Type_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ____color32Type_65)); }
	inline Type_t * get__color32Type_65() const { return ____color32Type_65; }
	inline Type_t ** get_address_of__color32Type_65() { return &____color32Type_65; }
	inline void set__color32Type_65(Type_t * value)
	{
		____color32Type_65 = value;
		Il2CppCodeGenWriteBarrier((&____color32Type_65), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENERCORE_3_TB8E672121CDE6F3B5895C573FE30EF8B42170AB1_H
#ifndef TWEENERCORE_3_T104C232CA5A703780F416D4E8F2D71E42FE9C46B_H
#define TWEENERCORE_3_T104C232CA5A703780F416D4E8F2D71E42FE9C46B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_65;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___startValue_57)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___endValue_58)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___changeValue_59)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___plugOptions_60)); }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___getter_61)); }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((&___getter_61), value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___setter_62)); }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((&___setter_62), value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((&___tweenPlugin_63), value);
	}

	inline static int32_t get_offset_of__colorType_64() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ____colorType_64)); }
	inline Type_t * get__colorType_64() const { return ____colorType_64; }
	inline Type_t ** get_address_of__colorType_64() { return &____colorType_64; }
	inline void set__colorType_64(Type_t * value)
	{
		____colorType_64 = value;
		Il2CppCodeGenWriteBarrier((&____colorType_64), value);
	}

	inline static int32_t get_offset_of__color32Type_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ____color32Type_65)); }
	inline Type_t * get__color32Type_65() const { return ____color32Type_65; }
	inline Type_t ** get_address_of__color32Type_65() { return &____color32Type_65; }
	inline void set__color32Type_65(Type_t * value)
	{
		____color32Type_65 = value;
		Il2CppCodeGenWriteBarrier((&____color32Type_65), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENERCORE_3_T104C232CA5A703780F416D4E8F2D71E42FE9C46B_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_gshared (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_gshared (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetTarget_TisRuntimeObject_mDB6721FAFCA2D26E6E803B08F2C23A7BC127625B_gshared (RuntimeObject * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_t4BFAE477B0634F6EDB1E268DE3A4B995744CD738 * DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisRuntimeObject_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_m192BAD52A54B95EB759DE6607A474827FB62AD1C_gshared (ABSTweenPlugin_3_t79168FE69AE981A42BFC4EBE040918DE6EBEB314 * ___plugin0, DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter1, DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter2, RuntimeObject * ___endValue3, float ___duration4, const RuntimeMethod* method);

// System.Void DG.Tweening.ShortcutExtensions/<>c__DisplayClass32_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mCF5270DD50B15D9B7DBE969548C91795D1CDF288 (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_gshared)(__this, p0, p1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9 (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_gshared)(__this, p0, p1, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * DOTween_To_m3D7A4AD510CE1D40F6E5E8C0EF6648CFD6BC7F60 (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter0, DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue2, float ___duration3, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m24B2A6FDAC0B998DFA33B4B0E2BB736C65F01937 (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, bool ___snapping1, const RuntimeMethod* method);
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tweener>(T,System.Object)
inline Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9 (Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	return ((  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * (*) (Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 *, RuntimeObject *, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mDB6721FAFCA2D26E6E803B08F2C23A7BC127625B_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.ShortcutExtensions/<>c__DisplayClass36_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m023A119F1DFB79AA8FFD5B35C7E440FBE0059B8D (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.ShortcutExtensions/<>c__DisplayClass45_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m81422299A588744AA0AC331766B20BA571996C84 (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,System.Object)
inline TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B_m5780683876391EAC61FAE26A182786D488E44EDF (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * (*) (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B *, RuntimeObject *, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mDB6721FAFCA2D26E6E803B08F2C23A7BC127625B_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.ShortcutExtensions/<>c__DisplayClass65_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_mE9A18BFCF7467244132DCFEA3483C896982974FD (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, const RuntimeMethod* method);
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.Plugins.PathPlugin::Get()
extern "C" IL2CPP_METHOD_ATTR ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * PathPlugin_Get_m1F187E36CEC59D06433B08923CE667F8DCF287EA (const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
inline TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF (ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * ___plugin0, DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter1, DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter2, Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___endValue3, float ___duration4, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * (*) (ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 *, DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *, DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *, Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 *, float, const RuntimeMethod*))DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisRuntimeObject_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_m192BAD52A54B95EB759DE6607A474827FB62AD1C_gshared)(___plugin0, ___getter1, ___setter2, ___endValue3, ___duration4, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>>(T,System.Object)
inline TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92 (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * (*) (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 *, RuntimeObject *, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mDB6721FAFCA2D26E6E803B08F2C23A7BC127625B_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.ShortcutExtensions/<>c__DisplayClass66_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m868845212A1E3C070074A8E598D2655203115742 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_playedOnce(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_position(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_playedOnce()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback,DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR bool Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_active()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Single DG.Tweening.Tween::get_position()
extern "C" IL2CPP_METHOD_ATTR float Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_hasLoops()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.Debugger::ShouldLogSafeModeCapturedError()
extern "C" IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_m95BE116E00DBF31A416096091AA64D1F23DD6513 (const RuntimeMethod* method);
// System.Reflection.MethodBase System.Exception::get_TargetSite()
extern "C" IL2CPP_METHOD_ATTR MethodBase_t * Exception_get_TargetSite_m8EEF23C6BD91447A8DC7CA686737D1E1C9FC834B (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogSafeModeCapturedError(System.Object,DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_mF24B818E481B2CA0C8626606801C63F04A3ADDED (RuntimeObject * ___message0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.SafeModeReport::Add(DG.Tweening.Core.SafeModeReport/SafeModeReportType)
extern "C" IL2CPP_METHOD_ATTR void SafeModeReport_Add_m1596E2CEE9DC3BBA6649AA1326936821F6995891 (SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.ABSSequentiable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ABSSequentiable__ctor_mC0A3D985974279B385789BC4FA4EFD616033DD31 (ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___withCallbacks1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
extern "C" IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096 (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNestedTween(DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C" IL2CPP_METHOD_ATTR bool TweenManager_Complete_m7E5BF65A61D0EEB6CF4605C35F9D6B56EF6CF7EC (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___modifyActiveLists1, int32_t ___updateMode2, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TweenManager_Rewind_mEEBAAC2FEA9A2CE7B3739002EB030D0AADD8C150 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ShortcutExtensions_DOMove_m47D32E8D8582DD4D41DC89A31FC36CF07C26D2BE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutExtensions_DOMove_m47D32E8D8582DD4D41DC89A31FC36CF07C26D2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * L_0 = (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_mCF5270DD50B15D9B7DBE969548C91795D1CDF288(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * L_1 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * L_3 = V_0;
		DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * L_4 = (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *)il2cpp_codegen_object_new(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__0_mA37AB6CC0EDFA789A63F37E518FDE9130F65B8D8_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * L_5 = V_0;
		DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * L_6 = (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *)il2cpp_codegen_object_new(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__1_m9B4BBBE1745115729B314E4B3A54AD4234CD0A9B_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___endValue1;
		float L_8 = ___duration2;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_9 = DOTween_To_m3D7A4AD510CE1D40F6E5E8C0EF6648CFD6BC7F60(L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_10 = L_9;
		bool L_11 = ___snapping3;
		Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * L_12 = TweenSettingsExtensions_SetOptions_m24B2A6FDAC0B998DFA33B4B0E2BB736C65F01937(L_10, L_11, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * L_13 = V_0;
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = L_13->get_target_0();
		TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9(L_12, L_14, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9_RuntimeMethod_var);
		return L_10;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ShortcutExtensions_DOLocalMove_mE97AF6634A95152031B43C492A95B36DFB8BE3A4 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutExtensions_DOLocalMove_mE97AF6634A95152031B43C492A95B36DFB8BE3A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * L_0 = (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass36_0__ctor_m023A119F1DFB79AA8FFD5B35C7E440FBE0059B8D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * L_1 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * L_3 = V_0;
		DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * L_4 = (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *)il2cpp_codegen_object_new(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__0_mF14E40C93E8335DAC99184A3E7C2AF364C185E3F_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * L_5 = V_0;
		DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * L_6 = (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *)il2cpp_codegen_object_new(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__1_m21EA33520A520BE57874649C81D9B3918A128515_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___endValue1;
		float L_8 = ___duration2;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_9 = DOTween_To_m3D7A4AD510CE1D40F6E5E8C0EF6648CFD6BC7F60(L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_10 = L_9;
		bool L_11 = ___snapping3;
		Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * L_12 = TweenSettingsExtensions_SetOptions_m24B2A6FDAC0B998DFA33B4B0E2BB736C65F01937(L_10, L_11, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * L_13 = V_0;
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = L_13->get_target_0();
		TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9(L_12, L_14, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8_m78231435FFDA509FAE9B838183E37731A7C296E9_RuntimeMethod_var);
		return L_10;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ShortcutExtensions_DOScale_m6984EC8F984976934A3E7AA659D7BB469C14C723 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutExtensions_DOScale_m6984EC8F984976934A3E7AA659D7BB469C14C723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * L_0 = (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass45_0__ctor_m81422299A588744AA0AC331766B20BA571996C84(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * L_1 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		float L_3 = ___endValue1;
		float L_4 = ___endValue1;
		float L_5 = ___endValue1;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), L_3, L_4, L_5, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * L_6 = V_0;
		DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * L_7 = (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *)il2cpp_codegen_object_new(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__0_m6B0E3686ABCA0128F13CDA1D19C00930E8A50ADE_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * L_8 = V_0;
		DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * L_9 = (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *)il2cpp_codegen_object_new(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__1_mD7C8F38B247EF8B2F10704CBBBBF9A2FD68053DD_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_1;
		float L_11 = ___duration2;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_12 = DOTween_To_m3D7A4AD510CE1D40F6E5E8C0EF6648CFD6BC7F60(L_7, L_9, L_10, L_11, /*hidden argument*/NULL);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_13 = L_12;
		U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * L_14 = V_0;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = L_14->get_target_0();
		TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B_m5780683876391EAC61FAE26A182786D488E44EDF(L_13, L_15, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B_m5780683876391EAC61FAE26A182786D488E44EDF_RuntimeMethod_var);
		return L_13;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ShortcutExtensions_DOPath_mAAC4D21CE468AB2DF0BAA6FCF9AA777296B6EEFF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutExtensions_DOPath_mAAC4D21CE468AB2DF0BAA6FCF9AA777296B6EEFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * L_0 = (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass65_0__ctor_mE9A18BFCF7467244132DCFEA3483C896982974FD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * L_1 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * L_3 = PathPlugin_Get_m1F187E36CEC59D06433B08923CE667F8DCF287EA(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * L_4 = V_0;
		DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * L_5 = (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *)il2cpp_codegen_object_new(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__0_m18C11775AA9B5336D74168E62EC0999CBB9E0A31_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * L_6 = V_0;
		DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * L_7 = (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *)il2cpp_codegen_object_new(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__1_mDF77A62D08D0DB1C857F68C9F355DB811041CE72_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_8 = ___path1;
		float L_9 = ___duration2;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_10 = DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF(L_3, L_5, L_7, L_8, L_9, /*hidden argument*/DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF_RuntimeMethod_var);
		U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * L_11 = V_0;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = L_11->get_target_0();
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_13 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92(L_10, L_12, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92_RuntimeMethod_var);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_14 = L_13;
		NullCheck(L_14);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_15 = L_14->get_address_of_plugOptions_60();
		int32_t L_16 = ___pathMode3;
		L_15->set_mode_0(L_16);
		return L_14;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOLocalPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern "C" IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ShortcutExtensions_DOLocalPath_m013A73B1B719B979EE123BFCB85EB704338386BB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutExtensions_DOLocalPath_m013A73B1B719B979EE123BFCB85EB704338386BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * L_0 = (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass66_0__ctor_m868845212A1E3C070074A8E598D2655203115742(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * L_1 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * L_3 = PathPlugin_Get_m1F187E36CEC59D06433B08923CE667F8DCF287EA(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * L_4 = V_0;
		DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * L_5 = (DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 *)il2cpp_codegen_object_new(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__0_mBBF7944CADB2E69CED840A007D06E63BF0A15789_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mFB043008D2AB3D6E04EDB9E5C25F8C20C8F8576A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * L_6 = V_0;
		DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * L_7 = (DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 *)il2cpp_codegen_object_new(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__1_mAB1A2F4499CE98930F063700EB644DF33B6A77A8_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m42061607CA8F489D5BDC8F673309C3F7D7439DF9_RuntimeMethod_var);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_8 = ___path1;
		float L_9 = ___duration2;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_10 = DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF(L_3, L_5, L_7, L_8, L_9, /*hidden argument*/DOTween_To_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_TisPath_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_TisPathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_mA863D2E592242DF449209C71D9FCB959061E0BDF_RuntimeMethod_var);
		U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * L_11 = V_0;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = L_11->get_target_0();
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_13 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92(L_10, L_12, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_m3BBC366662BD59DDD7EFE7422C886A5ADFF01D92_RuntimeMethod_var);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_14 = L_13;
		NullCheck(L_14);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_15 = L_14->get_address_of_plugOptions_60();
		int32_t L_16 = ___pathMode3;
		L_15->set_mode_0(L_16);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_17 = L_14;
		NullCheck(L_17);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_18 = L_17->get_address_of_plugOptions_60();
		L_18->set_useLocalPosition_10((bool)1);
		return L_17;
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mCF5270DD50B15D9B7DBE969548C91795D1CDF288 (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::<DOMove>b__0()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__0_mA37AB6CC0EDFA789A63F37E518FDE9130F65B8D8 (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::<DOMove>b__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__1_m9B4BBBE1745115729B314E4B3A54AD4234CD0A9B (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m023A119F1DFB79AA8FFD5B35C7E440FBE0059B8D (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::<DOLocalMove>b__0()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__0_mF14E40C93E8335DAC99184A3E7C2AF364C185E3F (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::<DOLocalMove>b__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__1_m21EA33520A520BE57874649C81D9B3918A128515 (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m81422299A588744AA0AC331766B20BA571996C84 (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::<DOScale>b__0()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__0_m6B0E3686ABCA0128F13CDA1D19C00930E8A50ADE (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::<DOScale>b__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__1_mD7C8F38B247EF8B2F10704CBBBBF9A2FD68053DD (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_mE9A18BFCF7467244132DCFEA3483C896982974FD (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::<DOPath>b__0()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__0_m18C11775AA9B5336D74168E62EC0999CBB9E0A31 (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::<DOPath>b__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__1_mDF77A62D08D0DB1C857F68C9F355DB811041CE72 (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m868845212A1E3C070074A8E598D2655203115742 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::<DOLocalPath>b__0()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__0_mBBF7944CADB2E69CED840A007D06E63BF0A15789 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::<DOLocalPath>b__1(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__1_mAB1A2F4499CE98930F063700EB644DF33B6A77A8 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Boolean DG.Tweening.Tween::get_isRelative()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisRelativeU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Boolean DG.Tweening.Tween::get_active()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CactiveU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_active(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_active_m8D47B88C314554514ED04A6A0C921F83F6B40168 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CactiveU3Ek__BackingField_39(L_0);
		return;
	}
}
// System.Boolean DG.Tweening.Tween::get_hasLoops()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_loops_27();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_loops_27();
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tween::get_playedOnce()
extern "C" IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CplayedOnceU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_playedOnce(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CplayedOnceU3Ek__BackingField_46(L_0);
		return;
	}
}
// System.Single DG.Tweening.Tween::get_position()
extern "C" IL2CPP_METHOD_ATTR float Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CpositionU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_position(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_47(L_0);
		return;
	}
}
// System.Void DG.Tweening.Tween::Reset()
extern "C" IL2CPP_METHOD_ATTR void Tween_Reset_m19FD86205257E86C439326E56D63778D37C9CB25 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		__this->set_timeScale_4((1.0f));
		__this->set_isBackwards_5((bool)0);
		__this->set_id_7(NULL);
		__this->set_stringId_8((String_t*)NULL);
		__this->set_intId_9(((int32_t)-999));
		__this->set_isIndependentUpdate_12((bool)0);
		V_0 = (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL;
		__this->set_onKill_19((TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_1 = L_0;
		V_0 = L_1;
		__this->set_onStepComplete_17(L_1);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_2 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = L_2;
		V_0 = L_3;
		__this->set_onComplete_18(L_3);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_4 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_5 = L_4;
		V_0 = L_5;
		__this->set_onUpdate_16(L_5);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_7 = L_6;
		V_0 = L_7;
		__this->set_onRewind_15(L_7);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_8 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_9 = L_8;
		V_0 = L_9;
		__this->set_onPlay_13(L_9);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_10 = V_0;
		((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)__this)->set_onStart_3(L_10);
		__this->set_onWaypointChange_20((TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 *)NULL);
		__this->set_debugTargetId_35((String_t*)NULL);
		__this->set_target_10(NULL);
		__this->set_isFrom_21((bool)0);
		__this->set_isBlendable_22((bool)0);
		__this->set_isSpeedBased_24((bool)0);
		__this->set_duration_26((0.0f));
		__this->set_loops_27(1);
		__this->set_delay_29((0.0f));
		Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_customEase_32((EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 *)NULL);
		__this->set_isSequenced_40((bool)0);
		__this->set_sequenceParent_41((Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 *)NULL);
		__this->set_specialStartupMode_43(0);
		int32_t L_11 = 0;
		V_1 = (bool)L_11;
		Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB(__this, (bool)L_11, /*hidden argument*/NULL);
		bool L_12 = V_1;
		bool L_13 = L_12;
		V_1 = L_13;
		__this->set_startupDone_45(L_13);
		bool L_14 = V_1;
		__this->set_creationLocked_44(L_14);
		int32_t L_15 = 0;
		V_2 = L_15;
		__this->set_completedLoops_49(L_15);
		int32_t L_16 = V_2;
		float L_17 = (((float)((float)L_16)));
		V_3 = L_17;
		__this->set_fullDuration_48(L_17);
		float L_18 = V_3;
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = 0;
		V_1 = (bool)L_19;
		__this->set_isComplete_51((bool)L_19);
		bool L_20 = V_1;
		__this->set_isPlaying_50(L_20);
		__this->set_elapsedDelay_52((0.0f));
		__this->set_delayComplete_53((bool)1);
		__this->set_miscInt_54((-1));
		return;
	}
}
// System.Single DG.Tweening.Tween::UpdateDelay(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Tween_UpdateDelay_mEA7AF731935210EF6B87485EB0F2A342C49B73F6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___elapsed0, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
extern "C" IL2CPP_METHOD_ATTR bool Tween_DoGoto_mB1D6E7D8535744E5030B21129B9B396CEC6BBE60 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___toPosition1, int32_t ___toCompletedLoops2, int32_t ___updateMode3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B45_0 = NULL;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B46_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B66_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = L_0->get_startupDone_45();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean DG.Tweening.Tween::Startup() */, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___updateMode3;
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB(L_7, (bool)1, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_8 = ___t0;
		NullCheck(L_8);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_9 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_8)->get_onStart_3();
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		NullCheck(L_10);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_11 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_10)->get_onStart_3();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_12 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_11, L_12, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_13 = ___t0;
		NullCheck(L_13);
		bool L_14 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		NullCheck(L_15);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_16 = L_15->get_onPlay_13();
		if (!L_16)
		{
			goto IL_0062;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_17 = ___t0;
		NullCheck(L_17);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_18 = L_17->get_onPlay_13();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_18, L_19, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_20 = ___t0;
		NullCheck(L_20);
		bool L_21 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0062;
		}
	}
	{
		return (bool)1;
	}

IL_0062:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_22 = ___t0;
		NullCheck(L_22);
		float L_23 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_24 = ___t0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_completedLoops_49();
		V_1 = L_25;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_26 = ___t0;
		int32_t L_27 = ___toCompletedLoops2;
		NullCheck(L_26);
		L_26->set_completedLoops_49(L_27);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_28 = ___t0;
		NullCheck(L_28);
		float L_29 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_28, /*hidden argument*/NULL);
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_30 = V_1;
		G_B14_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 0;
	}

IL_008e:
	{
		V_2 = (bool)G_B14_0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_31 = ___t0;
		NullCheck(L_31);
		bool L_32 = L_31->get_isComplete_51();
		V_3 = L_32;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_33 = ___t0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_loops_27();
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00b3;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_35 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_36 = ___t0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_completedLoops_49();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_38 = ___t0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_loops_27();
		NullCheck(L_35);
		L_35->set_isComplete_51((bool)((((int32_t)L_37) == ((int32_t)L_39))? 1 : 0));
	}

IL_00b3:
	{
		V_4 = 0;
		int32_t L_40 = ___updateMode3;
		if (L_40)
		{
			goto IL_0108;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_41 = ___t0;
		NullCheck(L_41);
		bool L_42 = L_41->get_isBackwards_5();
		if (!L_42)
		{
			goto IL_00f0;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_43 = ___t0;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_completedLoops_49();
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00db;
		}
	}
	{
		float L_46 = ___toPosition1;
		if ((!(((float)L_46) <= ((float)(0.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		bool L_47 = V_2;
		if (!L_47)
		{
			goto IL_00d8;
		}
	}

IL_00d5:
	{
		G_B24_0 = 0;
		goto IL_00e3;
	}

IL_00d8:
	{
		G_B24_0 = 1;
		goto IL_00e3;
	}

IL_00db:
	{
		int32_t L_48 = V_1;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_49 = ___t0;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_completedLoops_49();
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_50));
	}

IL_00e3:
	{
		V_4 = G_B24_0;
		bool L_51 = V_3;
		if (!L_51)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1));
		goto IL_0120;
	}

IL_00f0:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_53 = ___t0;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_completedLoops_49();
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) > ((int32_t)L_55)))
		{
			goto IL_00fc;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_0104;
	}

IL_00fc:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_56 = ___t0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_completedLoops_49();
		int32_t L_58 = V_1;
		G_B29_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)L_58));
	}

IL_0104:
	{
		V_4 = G_B29_0;
		goto IL_0120;
	}

IL_0108:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_59 = ___t0;
		NullCheck(L_59);
		int32_t L_60 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_59)->get_tweenType_0();
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_61 = V_1;
		int32_t L_62 = ___toCompletedLoops2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_62));
		int32_t L_63 = V_4;
		if ((((int32_t)L_63) >= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_64 = V_4;
		V_4 = ((-L_64));
	}

IL_0120:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_65 = ___t0;
		float L_66 = ___toPosition1;
		NullCheck(L_65);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F(L_65, L_66, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_67 = ___t0;
		NullCheck(L_67);
		float L_68 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_67, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_69 = ___t0;
		NullCheck(L_69);
		float L_70 = L_69->get_duration_26();
		if ((!(((float)L_68) > ((float)L_70))))
		{
			goto IL_0143;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_71 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_72 = ___t0;
		NullCheck(L_72);
		float L_73 = L_72->get_duration_26();
		NullCheck(L_71);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F(L_71, L_73, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_0143:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_74 = ___t0;
		NullCheck(L_74);
		float L_75 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_74, /*hidden argument*/NULL);
		if ((!(((float)L_75) <= ((float)(0.0f)))))
		{
			goto IL_017a;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_76 = ___t0;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_completedLoops_49();
		if ((((int32_t)L_77) > ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_78 = ___t0;
		NullCheck(L_78);
		bool L_79 = L_78->get_isComplete_51();
		if (!L_79)
		{
			goto IL_016f;
		}
	}

IL_0161:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_80 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_81 = ___t0;
		NullCheck(L_81);
		float L_82 = L_81->get_duration_26();
		NullCheck(L_80);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F(L_80, L_82, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_016f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_83 = ___t0;
		NullCheck(L_83);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F(L_83, (0.0f), /*hidden argument*/NULL);
	}

IL_017a:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_84 = ___t0;
		NullCheck(L_84);
		bool L_85 = L_84->get_isPlaying_50();
		V_5 = L_85;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_86 = ___t0;
		NullCheck(L_86);
		bool L_87 = L_86->get_isPlaying_50();
		if (!L_87)
		{
			goto IL_01c1;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_88 = ___t0;
		NullCheck(L_88);
		bool L_89 = L_88->get_isBackwards_5();
		if (L_89)
		{
			goto IL_01a3;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_90 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_91 = ___t0;
		NullCheck(L_91);
		bool L_92 = L_91->get_isComplete_51();
		NullCheck(L_90);
		L_90->set_isPlaying_50((bool)((((int32_t)L_92) == ((int32_t)0))? 1 : 0));
		goto IL_01c1;
	}

IL_01a3:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_93 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_94 = ___t0;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_completedLoops_49();
		G_B44_0 = L_93;
		if (L_95)
		{
			G_B45_0 = L_93;
			goto IL_01bb;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_96 = ___t0;
		NullCheck(L_96);
		float L_97 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_96, /*hidden argument*/NULL);
		G_B46_0 = ((!(((float)L_97) <= ((float)(0.0f))))? 1 : 0);
		G_B46_1 = G_B44_0;
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B46_0 = 1;
		G_B46_1 = G_B45_0;
	}

IL_01bc:
	{
		NullCheck(G_B46_1);
		G_B46_1->set_isPlaying_50((bool)G_B46_0);
	}

IL_01c1:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_98 = ___t0;
		NullCheck(L_98);
		bool L_99 = Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_01fa;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_100 = ___t0;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_loopType_28();
		if ((!(((uint32_t)L_101) == ((uint32_t)1))))
		{
			goto IL_01fa;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_102 = ___t0;
		NullCheck(L_102);
		float L_103 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_102, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_104 = ___t0;
		NullCheck(L_104);
		float L_105 = L_104->get_duration_26();
		if ((((float)L_103) < ((float)L_105)))
		{
			goto IL_01ed;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_106 = ___t0;
		NullCheck(L_106);
		int32_t L_107 = L_106->get_completedLoops_49();
		G_B53_0 = ((((int32_t)((int32_t)((int32_t)L_107%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		goto IL_01fb;
	}

IL_01ed:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_108 = ___t0;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_completedLoops_49();
		G_B53_0 = ((!(((uint32_t)((int32_t)((int32_t)L_109%(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01fb;
	}

IL_01fa:
	{
		G_B53_0 = 0;
	}

IL_01fb:
	{
		V_6 = (bool)G_B53_0;
		bool L_110 = V_2;
		if (L_110)
		{
			goto IL_0249;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_111 = ___t0;
		NullCheck(L_111);
		int32_t L_112 = L_111->get_loopType_28();
		if (L_112)
		{
			goto IL_0228;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_113 = ___t0;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_completedLoops_49();
		int32_t L_115 = V_1;
		if ((((int32_t)L_114) == ((int32_t)L_115)))
		{
			goto IL_0228;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_116 = ___t0;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_loops_27();
		if ((((int32_t)L_117) == ((int32_t)(-1))))
		{
			goto IL_0246;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_118 = ___t0;
		NullCheck(L_118);
		int32_t L_119 = L_118->get_completedLoops_49();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_120 = ___t0;
		NullCheck(L_120);
		int32_t L_121 = L_120->get_loops_27();
		if ((((int32_t)L_119) < ((int32_t)L_121)))
		{
			goto IL_0246;
		}
	}

IL_0228:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_122 = ___t0;
		NullCheck(L_122);
		float L_123 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_122, /*hidden argument*/NULL);
		if ((!(((float)L_123) <= ((float)(0.0f)))))
		{
			goto IL_0243;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_124 = ___t0;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_completedLoops_49();
		G_B63_0 = ((((int32_t)((((int32_t)L_125) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_024a;
	}

IL_0243:
	{
		G_B63_0 = 0;
		goto IL_024a;
	}

IL_0246:
	{
		G_B63_0 = 1;
		goto IL_024a;
	}

IL_0249:
	{
		G_B63_0 = 0;
	}

IL_024a:
	{
		if (G_B63_0)
		{
			goto IL_024f;
		}
	}
	{
		G_B66_0 = 0;
		goto IL_0250;
	}

IL_024f:
	{
		G_B66_0 = 1;
	}

IL_0250:
	{
		V_7 = G_B66_0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_126 = ___t0;
		float L_127 = V_0;
		int32_t L_128 = V_1;
		int32_t L_129 = V_4;
		bool L_130 = V_6;
		int32_t L_131 = ___updateMode3;
		int32_t L_132 = V_7;
		NullCheck(L_126);
		bool L_133 = VirtFuncInvoker6< bool, float, int32_t, int32_t, bool, int32_t, int32_t >::Invoke(7 /* System.Boolean DG.Tweening.Tween::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice) */, L_126, L_127, L_128, L_129, L_130, L_131, L_132);
		if (!L_133)
		{
			goto IL_0265;
		}
	}
	{
		return (bool)1;
	}

IL_0265:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_134 = ___t0;
		NullCheck(L_134);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_135 = L_134->get_onUpdate_16();
		if (!L_135)
		{
			goto IL_027e;
		}
	}
	{
		int32_t L_136 = ___updateMode3;
		if ((((int32_t)L_136) == ((int32_t)2)))
		{
			goto IL_027e;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_137 = ___t0;
		NullCheck(L_137);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_138 = L_137->get_onUpdate_16();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_139 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_138, L_139, /*hidden argument*/NULL);
	}

IL_027e:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_140 = ___t0;
		NullCheck(L_140);
		float L_141 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52(L_140, /*hidden argument*/NULL);
		if ((!(((float)L_141) <= ((float)(0.0f)))))
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_142 = ___t0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_completedLoops_49();
		if ((((int32_t)L_143) > ((int32_t)0)))
		{
			goto IL_02ac;
		}
	}
	{
		bool L_144 = V_2;
		if (L_144)
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_145 = ___t0;
		NullCheck(L_145);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_146 = L_145->get_onRewind_15();
		if (!L_146)
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_147 = ___t0;
		NullCheck(L_147);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_148 = L_147->get_onRewind_15();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_149 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_148, L_149, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		int32_t L_150 = V_4;
		if ((((int32_t)L_150) <= ((int32_t)0)))
		{
			goto IL_02e2;
		}
	}
	{
		int32_t L_151 = ___updateMode3;
		if (L_151)
		{
			goto IL_02e2;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_152 = ___t0;
		NullCheck(L_152);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_153 = L_152->get_onStepComplete_17();
		if (!L_153)
		{
			goto IL_02e2;
		}
	}
	{
		V_8 = 0;
		goto IL_02dc;
	}

IL_02c1:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_154 = ___t0;
		NullCheck(L_154);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_155 = L_154->get_onStepComplete_17();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_156 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_155, L_156, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_157 = ___t0;
		NullCheck(L_157);
		bool L_158 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_157, /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_02e2;
		}
	}
	{
		int32_t L_159 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_02dc:
	{
		int32_t L_160 = V_8;
		int32_t L_161 = V_4;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_02c1;
		}
	}

IL_02e2:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_162 = ___t0;
		NullCheck(L_162);
		bool L_163 = L_162->get_isComplete_51();
		if (!L_163)
		{
			goto IL_0306;
		}
	}
	{
		bool L_164 = V_3;
		if (L_164)
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_165 = ___updateMode3;
		if ((((int32_t)L_165) == ((int32_t)3)))
		{
			goto IL_0306;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_166 = ___t0;
		NullCheck(L_166);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_167 = L_166->get_onComplete_18();
		if (!L_167)
		{
			goto IL_0306;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_168 = ___t0;
		NullCheck(L_168);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_169 = L_168->get_onComplete_18();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_170 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_169, L_170, /*hidden argument*/NULL);
	}

IL_0306:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_171 = ___t0;
		NullCheck(L_171);
		bool L_172 = L_171->get_isPlaying_50();
		bool L_173 = V_5;
		if (!((int32_t)((int32_t)((((int32_t)L_172) == ((int32_t)0))? 1 : 0)&(int32_t)L_173)))
		{
			goto IL_0339;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_174 = ___t0;
		NullCheck(L_174);
		bool L_175 = L_174->get_isComplete_51();
		if (!L_175)
		{
			goto IL_0324;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_176 = ___t0;
		NullCheck(L_176);
		bool L_177 = L_176->get_autoKill_25();
		if (L_177)
		{
			goto IL_0339;
		}
	}

IL_0324:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_178 = ___t0;
		NullCheck(L_178);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_179 = L_178->get_onPause_14();
		if (!L_179)
		{
			goto IL_0339;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_180 = ___t0;
		NullCheck(L_180);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_181 = L_180->get_onPause_14();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_182 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_181, L_182, /*hidden argument*/NULL);
	}

IL_0339:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_183 = ___t0;
		NullCheck(L_183);
		bool L_184 = L_183->get_autoKill_25();
		if (!L_184)
		{
			goto IL_0348;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_185 = ___t0;
		NullCheck(L_185);
		bool L_186 = L_185->get_isComplete_51();
		return L_186;
	}

IL_0348:
	{
		return (bool)0;
	}
}
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback,DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR bool Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		bool L_0 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_0)
		{
			goto IL_0048;
		}
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_1 = ___callback0;
		NullCheck(L_1);
		TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E(L_1, /*hidden argument*/NULL);
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			bool L_2 = Debugger_ShouldLogSafeModeCapturedError_m95BE116E00DBF31A416096091AA64D1F23DD6513(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0039;
			}
		}

IL_0017:
		{
			Exception_t * L_3 = V_0;
			NullCheck(L_3);
			MethodBase_t * L_4 = Exception_get_TargetSite_m8EEF23C6BD91447A8DC7CA686737D1E1C9FC834B(L_3, /*hidden argument*/NULL);
			Exception_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralF25D7E65A8BD2882BB6473AF9F51EFECCE24B0A3, L_4, L_6, L_8, /*hidden argument*/NULL);
			Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t1;
			Debugger_LogSafeModeCapturedError_mF24B818E481B2CA0C8626606801C63F04A3ADDED(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
			SafeModeReport_Add_m1596E2CEE9DC3BBA6649AA1326936821F6995891((SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A *)(((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_address_of_safeModeReport_27()), 2, /*hidden argument*/NULL);
			V_1 = (bool)0;
			goto IL_0050;
		}
	} // end catch (depth: 1)

IL_0048:
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_11 = ___callback0;
		NullCheck(L_11);
		TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return (bool)1;
	}

IL_0050:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Void DG.Tweening.Tween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		__this->set_intId_9(((int32_t)-999));
		__this->set_activeId_42((-1));
		__this->set_delayComplete_53((bool)1);
		__this->set_miscInt_54((-1));
		ABSSequentiable__ctor_mC0A3D985974279B385789BC4FA4EFD616033DD31(__this, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TweenCallback__ctor_m55F59E9F7AA5CC1559E7CA16B1A98A6852F1E864 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DG.Tweening.TweenCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DG.Tweening.TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenCallback_BeginInvoke_m6971EB2B3843E5A9E4ED89FB60626B8E12A3AB65 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void DG.Tweening.TweenCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TweenCallback_EndInvoke_m29A82E195EE45C05780890F98577BADE319C0F72 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween)
extern "C" IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m2D7930B127444FC11872F868A7B581892526DD1F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___withCallbacks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B14_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B14_1 = NULL;
	int32_t G_B13_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B15_2 = NULL;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		bool L_12 = ___withCallbacks1;
		G_B13_0 = 1;
		G_B13_1 = L_11;
		if (L_12)
		{
			G_B14_0 = 1;
			G_B14_1 = L_11;
			goto IL_0048;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Complete_m7E5BF65A61D0EEB6CF4605C35F9D6B56EF6CF7EC(G_B15_2, (bool)G_B15_1, G_B15_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		bool L_12 = ___includeDelay1;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Rewind_mEEBAAC2FEA9A2CE7B3739002EB030D0AADD8C150(L_11, L_12, /*hidden argument*/NULL);
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
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m24B2A6FDAC0B998DFA33B4B0E2BB736C65F01937 (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_1(L_6);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m91F3015F32F080493FFBFB24F144D4112D86B6A8 (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * ___t0, bool ___alphaOnly1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_4 = ___t0;
		NullCheck(L_4);
		ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___alphaOnly1;
		L_5->set_alphaOnly_0(L_6);
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_7 = ___t0;
		return L_7;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.Tweener::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tweener__ctor_mA00C2693990531C2636134E4443E6E515EEE33FC (Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isFromAllowed_56((bool)1);
		Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
