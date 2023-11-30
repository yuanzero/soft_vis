﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform>
struct Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0;
// System.Func`2<Unity.VisualScripting.IGraphRoot,Unity.VisualScripting.IGraphDebugData>
struct Func_2_t40C36E0B534A92095DCF3BF431C3A58067689D46;
// Unity.VisualScripting.IConnectionCollection`3<Unity.VisualScripting.IUnitRelation,Unity.VisualScripting.IUnitPort,Unity.VisualScripting.IUnitPort>
struct IConnectionCollection_3_t76FC7C9663708A197563F5FC2D4DBC157CC83B4C;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ControlInput>
struct IUnitPortCollection_1_tAA0AD804FAD342D31FB85BCB86DEC84C328464A0;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ControlOutput>
struct IUnitPortCollection_1_t59199647D105C0608F720AC01AC41F2FE9BE42BE;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.InvalidInput>
struct IUnitPortCollection_1_tF94BB9A78B4B057723FDC0CEB5C33520D881A35A;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.InvalidOutput>
struct IUnitPortCollection_1_t6EA2B3A2444BCA1667037E50F3959F3E50F9E04F;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ValueInput>
struct IUnitPortCollection_1_tB7A902D367ECF717DB9DE715F03BEDF9A71200ED;
// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ValueOutput>
struct IUnitPortCollection_1_t4C2F28F3D335AAB343568A3FAEF5AFFCB239D31F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraph>
struct List_1_tE8FD260FF166EC9654E9E69115C48AF813DF24A9;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphData>
struct List_1_tE6A778F5B5A7C8F11EEDFDD0964447354299197A;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphDebugData>
struct List_1_t48EA7E4E919DC2A630130A9B2BA60A7170037D2F;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParent>
struct List_1_t9E91ED1903D16D2BA2AB7AF0947B894CD4AAC2DC;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParentElement>
struct List_1_tE6B91B7E2E2B6D825BEDECA72CD307577175A4DE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_t6871B23F5EBB74EEB47F26FB7D22B3F2E27823BE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t97940011CC4587358E676F24EE19A1D3C34F35BD;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t3FF8A4EA60CCC8DBA9733F42B02339712E9279C9;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tE74410051B12CB896258AE87DE73A5786F1E0008;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_t4EA8B90287154DB4FB58C9BF451DCA37E204C299;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_tB042D98C21020928E5DCC3E489D38854685237EF;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Unity.VisualScripting.ControlInput
struct ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748;
// Unity.VisualScripting.ControlOutput
struct ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9;
// System.Exception
struct Exception_t;
// Unity.VisualScripting.FlowGraph
struct FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Unity.VisualScripting.IGraph
struct IGraph_t34C9D856FECAA5F6843226BDDCAAD40F3CB20A33;
// Unity.VisualScripting.IGraphRoot
struct IGraphRoot_t0B65DF0A445F8019808E27D25ADE99FC397E8292;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_tB96854B832897326062BFD0375B083FC175A47BB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t19C45B341792653E57D490903108EBC3174333FD;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// Unity.VisualScripting.Member
struct Member_t0254493A17B62C117C0BF6DC181852825D06A2C8;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// Unity.VisualScripting.ValueInput
struct ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082;
// Unity.VisualScripting.ValueOutput
struct ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t2082F239FC087013145046EA50A683BFA37475FD;

IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A ;
struct BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 ;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC;
struct IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82;
struct InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 ;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;
struct TriggerState_t2082F239FC087013145046EA50A683BFA37475FD ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct NOVTABLE IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE(IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Char>
struct NOVTABLE IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>
struct NOVTABLE IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int32>
struct NOVTABLE IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_keys_2)); }
	inline KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_values_3)); }
	inline ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_3), (void*)value);
	}
};


// Unity.VisualScripting.GraphPointer
struct GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6  : public RuntimeObject
{
public:
	// Unity.VisualScripting.IGraphRoot Unity.VisualScripting.GraphPointer::<root>k__BackingField
	RuntimeObject* ___U3CrootU3Ek__BackingField_0;
	// UnityEngine.GameObject Unity.VisualScripting.GraphPointer::<gameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CgameObjectU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParent> Unity.VisualScripting.GraphPointer::parentStack
	List_1_t9E91ED1903D16D2BA2AB7AF0947B894CD4AAC2DC * ___parentStack_2;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParentElement> Unity.VisualScripting.GraphPointer::parentElementStack
	List_1_tE6B91B7E2E2B6D825BEDECA72CD307577175A4DE * ___parentElementStack_3;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraph> Unity.VisualScripting.GraphPointer::graphStack
	List_1_tE8FD260FF166EC9654E9E69115C48AF813DF24A9 * ___graphStack_4;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphData> Unity.VisualScripting.GraphPointer::dataStack
	List_1_tE6A778F5B5A7C8F11EEDFDD0964447354299197A * ___dataStack_5;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphDebugData> Unity.VisualScripting.GraphPointer::debugDataStack
	List_1_t48EA7E4E919DC2A630130A9B2BA60A7170037D2F * ___debugDataStack_6;

public:
	inline static int32_t get_offset_of_U3CrootU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___U3CrootU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CrootU3Ek__BackingField_0() const { return ___U3CrootU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CrootU3Ek__BackingField_0() { return &___U3CrootU3Ek__BackingField_0; }
	inline void set_U3CrootU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CrootU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___U3CgameObjectU3Ek__BackingField_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CgameObjectU3Ek__BackingField_1() const { return ___U3CgameObjectU3Ek__BackingField_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CgameObjectU3Ek__BackingField_1() { return &___U3CgameObjectU3Ek__BackingField_1; }
	inline void set_U3CgameObjectU3Ek__BackingField_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CgameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_parentStack_2() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___parentStack_2)); }
	inline List_1_t9E91ED1903D16D2BA2AB7AF0947B894CD4AAC2DC * get_parentStack_2() const { return ___parentStack_2; }
	inline List_1_t9E91ED1903D16D2BA2AB7AF0947B894CD4AAC2DC ** get_address_of_parentStack_2() { return &___parentStack_2; }
	inline void set_parentStack_2(List_1_t9E91ED1903D16D2BA2AB7AF0947B894CD4AAC2DC * value)
	{
		___parentStack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentStack_2), (void*)value);
	}

	inline static int32_t get_offset_of_parentElementStack_3() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___parentElementStack_3)); }
	inline List_1_tE6B91B7E2E2B6D825BEDECA72CD307577175A4DE * get_parentElementStack_3() const { return ___parentElementStack_3; }
	inline List_1_tE6B91B7E2E2B6D825BEDECA72CD307577175A4DE ** get_address_of_parentElementStack_3() { return &___parentElementStack_3; }
	inline void set_parentElementStack_3(List_1_tE6B91B7E2E2B6D825BEDECA72CD307577175A4DE * value)
	{
		___parentElementStack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentElementStack_3), (void*)value);
	}

	inline static int32_t get_offset_of_graphStack_4() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___graphStack_4)); }
	inline List_1_tE8FD260FF166EC9654E9E69115C48AF813DF24A9 * get_graphStack_4() const { return ___graphStack_4; }
	inline List_1_tE8FD260FF166EC9654E9E69115C48AF813DF24A9 ** get_address_of_graphStack_4() { return &___graphStack_4; }
	inline void set_graphStack_4(List_1_tE8FD260FF166EC9654E9E69115C48AF813DF24A9 * value)
	{
		___graphStack_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphStack_4), (void*)value);
	}

	inline static int32_t get_offset_of_dataStack_5() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___dataStack_5)); }
	inline List_1_tE6A778F5B5A7C8F11EEDFDD0964447354299197A * get_dataStack_5() const { return ___dataStack_5; }
	inline List_1_tE6A778F5B5A7C8F11EEDFDD0964447354299197A ** get_address_of_dataStack_5() { return &___dataStack_5; }
	inline void set_dataStack_5(List_1_tE6A778F5B5A7C8F11EEDFDD0964447354299197A * value)
	{
		___dataStack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataStack_5), (void*)value);
	}

	inline static int32_t get_offset_of_debugDataStack_6() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6, ___debugDataStack_6)); }
	inline List_1_t48EA7E4E919DC2A630130A9B2BA60A7170037D2F * get_debugDataStack_6() const { return ___debugDataStack_6; }
	inline List_1_t48EA7E4E919DC2A630130A9B2BA60A7170037D2F ** get_address_of_debugDataStack_6() { return &___debugDataStack_6; }
	inline void set_debugDataStack_6(List_1_t48EA7E4E919DC2A630130A9B2BA60A7170037D2F * value)
	{
		___debugDataStack_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugDataStack_6), (void*)value);
	}
};

struct GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6_StaticFields
{
public:
	// System.Func`2<Unity.VisualScripting.IGraphRoot,Unity.VisualScripting.IGraphDebugData> Unity.VisualScripting.GraphPointer::<fetchRootDebugDataBinding>k__BackingField
	Func_2_t40C36E0B534A92095DCF3BF431C3A58067689D46 * ___U3CfetchRootDebugDataBindingU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CfetchRootDebugDataBindingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6_StaticFields, ___U3CfetchRootDebugDataBindingU3Ek__BackingField_7)); }
	inline Func_2_t40C36E0B534A92095DCF3BF431C3A58067689D46 * get_U3CfetchRootDebugDataBindingU3Ek__BackingField_7() const { return ___U3CfetchRootDebugDataBindingU3Ek__BackingField_7; }
	inline Func_2_t40C36E0B534A92095DCF3BF431C3A58067689D46 ** get_address_of_U3CfetchRootDebugDataBindingU3Ek__BackingField_7() { return &___U3CfetchRootDebugDataBindingU3Ek__BackingField_7; }
	inline void set_U3CfetchRootDebugDataBindingU3Ek__BackingField_7(Func_2_t40C36E0B534A92095DCF3BF431C3A58067689D46 * value)
	{
		___U3CfetchRootDebugDataBindingU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfetchRootDebugDataBindingU3Ek__BackingField_7), (void*)value);
	}
};


// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____match_0)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__match_0() const { return ____match_0; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____captureMap_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____groups_2)); }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList
struct HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84  : public RuntimeObject
{
public:
	// System.Collections.Hashtable Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::_dictionary
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____dictionary_0;
	// System.Collections.Generic.List`1<System.Object> Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::_insertionOrderList
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____insertionOrderList_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84, ____dictionary_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__dictionary_0() const { return ____dictionary_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of__insertionOrderList_1() { return static_cast<int32_t>(offsetof(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84, ____insertionOrderList_1)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__insertionOrderList_1() const { return ____insertionOrderList_1; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__insertionOrderList_1() { return &____insertionOrderList_1; }
	inline void set__insertionOrderList_1(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____insertionOrderList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____insertionOrderList_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB, ___firstValue_1)); }
	inline Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB, ___additionalValues_2)); }
	inline Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t6871B23F5EBB74EEB47F26FB7D22B3F2E27823BE* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995, ___firstValue_1)); }
	inline Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995, ___additionalValues_2)); }
	inline Action_2U5BU5D_t6871B23F5EBB74EEB47F26FB7D22B3F2E27823BE* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t6871B23F5EBB74EEB47F26FB7D22B3F2E27823BE** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t6871B23F5EBB74EEB47F26FB7D22B3F2E27823BE* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMeshPrimitiveAttributes
struct GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7  : public ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E
{
public:

public:
};


// Unity.VisualScripting.GraphStack
struct GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012  : public GraphPointer_tEE4D7FE16B1580CEBB80E08E14833810953C52A6
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// Windows.Foundation.HResult
struct HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t19C45B341792653E57D490903108EBC3174333FD * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E, ___m_EventPtr_0)); }
	inline InputEvent_t19C45B341792653E57D490903108EBC3174333FD * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t19C45B341792653E57D490903108EBC3174333FD ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t19C45B341792653E57D490903108EBC3174333FD * value)
	{
		___m_EventPtr_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852 
{
public:
	union
	{
		struct
		{
			// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer::FixedElementField
			Il2CppChar ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852, ___FixedElementField_0)); }
	inline Il2CppChar get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline Il2CppChar* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(Il2CppChar value)
	{
		___FixedElementField_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852__padding[128];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852__padding[128];
	};
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___m_DeviceArray_2;

public:
	inline static int32_t get_offset_of_m_HaveValue_0() { return static_cast<int32_t>(offsetof(DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978, ___m_HaveValue_0)); }
	inline bool get_m_HaveValue_0() const { return ___m_HaveValue_0; }
	inline bool* get_address_of_m_HaveValue_0() { return &___m_HaveValue_0; }
	inline void set_m_HaveValue_0(bool value)
	{
		___m_HaveValue_0 = value;
	}

	inline static int32_t get_offset_of_m_DeviceCount_1() { return static_cast<int32_t>(offsetof(DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978, ___m_DeviceCount_1)); }
	inline int32_t get_m_DeviceCount_1() const { return ___m_DeviceCount_1; }
	inline int32_t* get_address_of_m_DeviceCount_1() { return &___m_DeviceCount_1; }
	inline void set_m_DeviceCount_1(int32_t value)
	{
		___m_DeviceCount_1 = value;
	}

	inline static int32_t get_offset_of_m_DeviceArray_2() { return static_cast<int32_t>(offsetof(DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978, ___m_DeviceArray_2)); }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* get_m_DeviceArray_2() const { return ___m_DeviceArray_2; }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB** get_address_of_m_DeviceArray_2() { return &___m_DeviceArray_2; }
	inline void set_m_DeviceArray_2(InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* value)
	{
		___m_DeviceArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceArray_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t2082F239FC087013145046EA50A683BFA37475FD * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingAndComplexity
	uint16_t* ___controlGroupingAndComplexity_16;
	// System.Boolean UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingInitialized
	bool ___controlGroupingInitialized_17;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A * ___mapIndices_18;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___actionStates_7)); }
	inline TriggerState_t2082F239FC087013145046EA50A683BFA37475FD * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_t2082F239FC087013145046EA50A683BFA37475FD ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_t2082F239FC087013145046EA50A683BFA37475FD * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___bindingStates_8)); }
	inline BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___interactionStates_9)); }
	inline InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_controlGroupingAndComplexity_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___controlGroupingAndComplexity_16)); }
	inline uint16_t* get_controlGroupingAndComplexity_16() const { return ___controlGroupingAndComplexity_16; }
	inline uint16_t** get_address_of_controlGroupingAndComplexity_16() { return &___controlGroupingAndComplexity_16; }
	inline void set_controlGroupingAndComplexity_16(uint16_t* value)
	{
		___controlGroupingAndComplexity_16 = value;
	}

	inline static int32_t get_offset_of_controlGroupingInitialized_17() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___controlGroupingInitialized_17)); }
	inline bool get_controlGroupingInitialized_17() const { return ___controlGroupingInitialized_17; }
	inline bool* get_address_of_controlGroupingInitialized_17() { return &___controlGroupingInitialized_17; }
	inline void set_controlGroupingInitialized_17(bool value)
	{
		___controlGroupingInitialized_17 = value;
	}

	inline static int32_t get_offset_of_mapIndices_18() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21, ___mapIndices_18)); }
	inline ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A * get_mapIndices_18() const { return ___mapIndices_18; }
	inline ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A ** get_address_of_mapIndices_18() { return &___mapIndices_18; }
	inline void set_mapIndices_18(ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A * value)
	{
		___mapIndices_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21_marshaled_pinvoke
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t2082F239FC087013145046EA50A683BFA37475FD * ___actionStates_7;
	BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 * ___bindingStates_8;
	InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A * ___mapIndices_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21_marshaled_com
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t2082F239FC087013145046EA50A683BFA37475FD * ___actionStates_7;
	BindingState_tA630954B1E5FCC3EC89ABBD483262FABCC3B78B4 * ___bindingStates_8;
	InteractionState_t30E9F692107884303715E6E8A1EF8E704F1977C1 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t5086233F651D0FE6A9050704B4ACA5D9F242914A * ___mapIndices_18;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979, ___m_Callbacks_1)); }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tD46AB9DAA09A1671915DB4C6135FEEF0666C278E  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F, ___m_Callbacks_1)); }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t35465E649AA82DF8531EBA455FB8902C0131D6DB  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C, ___m_Callbacks_1)); }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t64989D78BAB554DD3E96F7734726B0592284E995  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// Unity.VisualScripting.GraphElement`1<Unity.VisualScripting.FlowGraph>
struct GraphElement_1_t1C00A92F646BEAD444CEA9F935E1B712889691A1  : public RuntimeObject
{
public:
	// System.Guid Unity.VisualScripting.GraphElement`1::<guid>k__BackingField
	Guid_t  ___U3CguidU3Ek__BackingField_0;
	// TGraph Unity.VisualScripting.GraphElement`1::<graph>k__BackingField
	FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB * ___U3CgraphU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CguidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GraphElement_1_t1C00A92F646BEAD444CEA9F935E1B712889691A1, ___U3CguidU3Ek__BackingField_0)); }
	inline Guid_t  get_U3CguidU3Ek__BackingField_0() const { return ___U3CguidU3Ek__BackingField_0; }
	inline Guid_t * get_address_of_U3CguidU3Ek__BackingField_0() { return &___U3CguidU3Ek__BackingField_0; }
	inline void set_U3CguidU3Ek__BackingField_0(Guid_t  value)
	{
		___U3CguidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CgraphU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GraphElement_1_t1C00A92F646BEAD444CEA9F935E1B712889691A1, ___U3CgraphU3Ek__BackingField_1)); }
	inline FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB * get_U3CgraphU3Ek__BackingField_1() const { return ___U3CgraphU3Ek__BackingField_1; }
	inline FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB ** get_address_of_U3CgraphU3Ek__BackingField_1() { return &___U3CgraphU3Ek__BackingField_1; }
	inline void set_U3CgraphU3Ek__BackingField_1(FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB * value)
	{
		___U3CgraphU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.VisualScripting.GraphElement`1<Unity.VisualScripting.IGraph>
struct GraphElement_1_t35E46D0B4A18FDFBAE0D1AFACEC8EB42003F2717  : public RuntimeObject
{
public:
	// System.Guid Unity.VisualScripting.GraphElement`1::<guid>k__BackingField
	Guid_t  ___U3CguidU3Ek__BackingField_0;
	// TGraph Unity.VisualScripting.GraphElement`1::<graph>k__BackingField
	RuntimeObject* ___U3CgraphU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CguidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GraphElement_1_t35E46D0B4A18FDFBAE0D1AFACEC8EB42003F2717, ___U3CguidU3Ek__BackingField_0)); }
	inline Guid_t  get_U3CguidU3Ek__BackingField_0() const { return ___U3CguidU3Ek__BackingField_0; }
	inline Guid_t * get_address_of_U3CguidU3Ek__BackingField_0() { return &___U3CguidU3Ek__BackingField_0; }
	inline void set_U3CguidU3Ek__BackingField_0(Guid_t  value)
	{
		___U3CguidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CgraphU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GraphElement_1_t35E46D0B4A18FDFBAE0D1AFACEC8EB42003F2717, ___U3CgraphU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CgraphU3Ek__BackingField_1() const { return ___U3CgraphU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CgraphU3Ek__BackingField_1() { return &___U3CgraphU3Ek__BackingField_1; }
	inline void set_U3CgraphU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CgraphU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphU3Ek__BackingField_1), (void*)value);
	}
};

// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B6DDCCD8C68053D2DD115C28EF11C303B1C139(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA * comReturnValue) = 0;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Position_0)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Position_0() const { return ___Position_0; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Normal_1)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Normal_1 = value;
	}
};


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// Windows.Graphics.Holographic.HolographicStereoTransform
struct HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A 
{
public:
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Left
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___Left_0;
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Right
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___Right_1;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A, ___Left_0)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_Left_0() const { return ___Left_0; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A, ___Right_1)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_Right_1() const { return ___Right_1; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___Right_1 = value;
	}
};


// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString::size
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.IMECompositionString::buffer
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852  ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852  ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB__padding[132];
	};

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB, ___buffer_1)); }
	inline U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852  get_buffer_1() const { return ___buffer_1; }
	inline U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852 * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852  value)
	{
		___buffer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_pinvoke ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_pinvoke ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB__padding[132];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_com ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_tBA109EE470960D36DBFBA5CAD161C17C544B4852_marshaled_com ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB__padding[132];
	};
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t8588B82CA7B3CF85BC4110282ADF5494CA2ACC48 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t8588B82CA7B3CF85BC4110282ADF5494CA2ACC48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VisualScripting.ScriptGraphContainerType
struct ScriptGraphContainerType_t34CE74ACAA2AFD392A8718E23C2515B9E0E6B122 
{
public:
	// System.Int32 Unity.VisualScripting.ScriptGraphContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScriptGraphContainerType_t34CE74ACAA2AFD392A8718E23C2515B9E0E6B122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VisualScripting.StateGraphContainerType
struct StateGraphContainerType_t363CAA54317CEA9E3CD44F778B01D0677EDDFCB4 
{
public:
	// System.Int32 Unity.VisualScripting.StateGraphContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateGraphContainerType_t363CAA54317CEA9E3CD44F778B01D0677EDDFCB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.VisualScripting.VariableKind
struct VariableKind_tDB0BF6D527819B0D5A0095D7931E87B0BAF5F81B 
{
public:
	// System.Int32 Unity.VisualScripting.VariableKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VariableKind_tDB0BF6D527819B0D5A0095D7931E87B0BAF5F81B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t1A13A4DB396283185CD4788500CE3109526675C3 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_t1A13A4DB396283185CD4788500CE3109526675C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionMap/Flags
struct Flags_t4DBABB9807A1ED9BF263AE3054513C9D1B930778 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t4DBABB9807A1ED9BF263AE3054513C9D1B930778, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_tA4A1BEBEFB00551BEB7826AF2D7502E0BA2C1818 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tA4A1BEBEFB00551BEB7826AF2D7502E0BA2C1818, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};

// Windows.Foundation.IReference`1<Windows.Perception.People.HandMeshVertex>
struct NOVTABLE IReference_1_t3D4FCBE36060381B5CC5FBB798A3E733EB478D51 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA70EBA5C48E14A1A690EA1F3B52F1E54D0832F44(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicStereoTransform>
struct NOVTABLE IReference_1_tC1A96561F96815F061B185E4266308230625C3AF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2B81449894D78ACAB82F0E5DD9B5154FF9BDB6F4(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>
struct NOVTABLE IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62C19D1B7765C61ECB51B5783983EF2B4587D423(int32_t* comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Unity.VisualScripting.GraphGroup
struct GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D  : public GraphElement_1_t35E46D0B4A18FDFBAE0D1AFACEC8EB42003F2717
{
public:
	// UnityEngine.Rect Unity.VisualScripting.GraphGroup::<position>k__BackingField
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CpositionU3Ek__BackingField_3;
	// System.String Unity.VisualScripting.GraphGroup::<label>k__BackingField
	String_t* ___U3ClabelU3Ek__BackingField_4;
	// System.String Unity.VisualScripting.GraphGroup::<comment>k__BackingField
	String_t* ___U3CcommentU3Ek__BackingField_5;
	// UnityEngine.Color Unity.VisualScripting.GraphGroup::<color>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CcolorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D, ___U3CpositionU3Ek__BackingField_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CpositionU3Ek__BackingField_3() const { return ___U3CpositionU3Ek__BackingField_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CpositionU3Ek__BackingField_3() { return &___U3CpositionU3Ek__BackingField_3; }
	inline void set_U3CpositionU3Ek__BackingField_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CpositionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3ClabelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D, ___U3ClabelU3Ek__BackingField_4)); }
	inline String_t* get_U3ClabelU3Ek__BackingField_4() const { return ___U3ClabelU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3ClabelU3Ek__BackingField_4() { return &___U3ClabelU3Ek__BackingField_4; }
	inline void set_U3ClabelU3Ek__BackingField_4(String_t* value)
	{
		___U3ClabelU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClabelU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcommentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D, ___U3CcommentU3Ek__BackingField_5)); }
	inline String_t* get_U3CcommentU3Ek__BackingField_5() const { return ___U3CcommentU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CcommentU3Ek__BackingField_5() { return &___U3CcommentU3Ek__BackingField_5; }
	inline void set_U3CcommentU3Ek__BackingField_5(String_t* value)
	{
		___U3CcommentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcommentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcolorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D, ___U3CcolorU3Ek__BackingField_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CcolorU3Ek__BackingField_6() const { return ___U3CcolorU3Ek__BackingField_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CcolorU3Ek__BackingField_6() { return &___U3CcolorU3Ek__BackingField_6; }
	inline void set_U3CcolorU3Ek__BackingField_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CcolorU3Ek__BackingField_6 = value;
	}
};

struct GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_StaticFields
{
public:
	// UnityEngine.Color Unity.VisualScripting.GraphGroup::defaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___defaultColor_2;

public:
	inline static int32_t get_offset_of_defaultColor_2() { return static_cast<int32_t>(offsetof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_StaticFields, ___defaultColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_defaultColor_2() const { return ___defaultColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_defaultColor_2() { return &___defaultColor_2; }
	inline void set_defaultColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___defaultColor_2 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Unity.VisualScripting.Unit
struct Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B  : public GraphElement_1_t1C00A92F646BEAD444CEA9F935E1B712889691A1
{
public:
	// System.Boolean Unity.VisualScripting.Unit::<isDefined>k__BackingField
	bool ___U3CisDefinedU3Ek__BackingField_2;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ControlInput> Unity.VisualScripting.Unit::<controlInputs>k__BackingField
	RuntimeObject* ___U3CcontrolInputsU3Ek__BackingField_3;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ControlOutput> Unity.VisualScripting.Unit::<controlOutputs>k__BackingField
	RuntimeObject* ___U3CcontrolOutputsU3Ek__BackingField_4;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.Unit::<valueInputs>k__BackingField
	RuntimeObject* ___U3CvalueInputsU3Ek__BackingField_5;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.ValueOutput> Unity.VisualScripting.Unit::<valueOutputs>k__BackingField
	RuntimeObject* ___U3CvalueOutputsU3Ek__BackingField_6;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.InvalidInput> Unity.VisualScripting.Unit::<invalidInputs>k__BackingField
	RuntimeObject* ___U3CinvalidInputsU3Ek__BackingField_7;
	// Unity.VisualScripting.IUnitPortCollection`1<Unity.VisualScripting.InvalidOutput> Unity.VisualScripting.Unit::<invalidOutputs>k__BackingField
	RuntimeObject* ___U3CinvalidOutputsU3Ek__BackingField_8;
	// System.Action Unity.VisualScripting.Unit::onPortsChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onPortsChanged_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.VisualScripting.Unit::<defaultValues>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CdefaultValuesU3Ek__BackingField_10;
	// Unity.VisualScripting.IConnectionCollection`3<Unity.VisualScripting.IUnitRelation,Unity.VisualScripting.IUnitPort,Unity.VisualScripting.IUnitPort> Unity.VisualScripting.Unit::<relations>k__BackingField
	RuntimeObject* ___U3CrelationsU3Ek__BackingField_11;
	// System.Boolean Unity.VisualScripting.Unit::<isControlRoot>k__BackingField
	bool ___U3CisControlRootU3Ek__BackingField_12;
	// UnityEngine.Vector2 Unity.VisualScripting.Unit::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// System.Exception Unity.VisualScripting.Unit::<definitionException>k__BackingField
	Exception_t * ___U3CdefinitionExceptionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CisDefinedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CisDefinedU3Ek__BackingField_2)); }
	inline bool get_U3CisDefinedU3Ek__BackingField_2() const { return ___U3CisDefinedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisDefinedU3Ek__BackingField_2() { return &___U3CisDefinedU3Ek__BackingField_2; }
	inline void set_U3CisDefinedU3Ek__BackingField_2(bool value)
	{
		___U3CisDefinedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CcontrolInputsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CcontrolInputsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CcontrolInputsU3Ek__BackingField_3() const { return ___U3CcontrolInputsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CcontrolInputsU3Ek__BackingField_3() { return &___U3CcontrolInputsU3Ek__BackingField_3; }
	inline void set_U3CcontrolInputsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CcontrolInputsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolInputsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontrolOutputsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CcontrolOutputsU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CcontrolOutputsU3Ek__BackingField_4() const { return ___U3CcontrolOutputsU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CcontrolOutputsU3Ek__BackingField_4() { return &___U3CcontrolOutputsU3Ek__BackingField_4; }
	inline void set_U3CcontrolOutputsU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CcontrolOutputsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolOutputsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueInputsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CvalueInputsU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CvalueInputsU3Ek__BackingField_5() const { return ___U3CvalueInputsU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CvalueInputsU3Ek__BackingField_5() { return &___U3CvalueInputsU3Ek__BackingField_5; }
	inline void set_U3CvalueInputsU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CvalueInputsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueInputsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueOutputsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CvalueOutputsU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CvalueOutputsU3Ek__BackingField_6() const { return ___U3CvalueOutputsU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CvalueOutputsU3Ek__BackingField_6() { return &___U3CvalueOutputsU3Ek__BackingField_6; }
	inline void set_U3CvalueOutputsU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CvalueOutputsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueOutputsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinvalidInputsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CinvalidInputsU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CinvalidInputsU3Ek__BackingField_7() const { return ___U3CinvalidInputsU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CinvalidInputsU3Ek__BackingField_7() { return &___U3CinvalidInputsU3Ek__BackingField_7; }
	inline void set_U3CinvalidInputsU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CinvalidInputsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinvalidInputsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinvalidOutputsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CinvalidOutputsU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CinvalidOutputsU3Ek__BackingField_8() const { return ___U3CinvalidOutputsU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CinvalidOutputsU3Ek__BackingField_8() { return &___U3CinvalidOutputsU3Ek__BackingField_8; }
	inline void set_U3CinvalidOutputsU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CinvalidOutputsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinvalidOutputsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_onPortsChanged_9() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___onPortsChanged_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onPortsChanged_9() const { return ___onPortsChanged_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onPortsChanged_9() { return &___onPortsChanged_9; }
	inline void set_onPortsChanged_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onPortsChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPortsChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultValuesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CdefaultValuesU3Ek__BackingField_10)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CdefaultValuesU3Ek__BackingField_10() const { return ___U3CdefaultValuesU3Ek__BackingField_10; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CdefaultValuesU3Ek__BackingField_10() { return &___U3CdefaultValuesU3Ek__BackingField_10; }
	inline void set_U3CdefaultValuesU3Ek__BackingField_10(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CdefaultValuesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultValuesU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrelationsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CrelationsU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CrelationsU3Ek__BackingField_11() const { return ___U3CrelationsU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CrelationsU3Ek__BackingField_11() { return &___U3CrelationsU3Ek__BackingField_11; }
	inline void set_U3CrelationsU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CrelationsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrelationsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisControlRootU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CisControlRootU3Ek__BackingField_12)); }
	inline bool get_U3CisControlRootU3Ek__BackingField_12() const { return ___U3CisControlRootU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisControlRootU3Ek__BackingField_12() { return &___U3CisControlRootU3Ek__BackingField_12; }
	inline void set_U3CisControlRootU3Ek__BackingField_12(bool value)
	{
		___U3CisControlRootU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdefinitionExceptionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B, ___U3CdefinitionExceptionU3Ek__BackingField_14)); }
	inline Exception_t * get_U3CdefinitionExceptionU3Ek__BackingField_14() const { return ___U3CdefinitionExceptionU3Ek__BackingField_14; }
	inline Exception_t ** get_address_of_U3CdefinitionExceptionU3Ek__BackingField_14() { return &___U3CdefinitionExceptionU3Ek__BackingField_14; }
	inline void set_U3CdefinitionExceptionU3Ek__BackingField_14(Exception_t * value)
	{
		___U3CdefinitionExceptionU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionExceptionU3Ek__BackingField_14), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364  ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C  ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979  ___onActionControlsChanged_2;

public:
	inline static int32_t get_offset_of_globalList_0() { return static_cast<int32_t>(offsetof(GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297, ___globalList_0)); }
	inline InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364  get_globalList_0() const { return ___globalList_0; }
	inline InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364 * get_address_of_globalList_0() { return &___globalList_0; }
	inline void set_globalList_0(InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364  value)
	{
		___globalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___globalList_0))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_onActionChange_1() { return static_cast<int32_t>(offsetof(GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297, ___onActionChange_1)); }
	inline CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C  get_onActionChange_1() const { return ___onActionChange_1; }
	inline CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C * get_address_of_onActionChange_1() { return &___onActionChange_1; }
	inline void set_onActionChange_1(CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C  value)
	{
		___onActionChange_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onActionControlsChanged_2() { return static_cast<int32_t>(offsetof(GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297, ___onActionControlsChanged_2)); }
	inline CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979  get_onActionControlsChanged_2() const { return ___onActionControlsChanged_2; }
	inline CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979 * get_address_of_onActionControlsChanged_2() { return &___onActionControlsChanged_2; }
	inline void set_onActionControlsChanged_2(CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979  value)
	{
		___onActionControlsChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297_marshaled_pinvoke
{
	InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364  ___globalList_0;
	CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C  ___onActionChange_1;
	CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979  ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297_marshaled_com
{
	InlinedArray_1_tF45C27B64E287F1F49B4B75D2B5BB4614C6F7364  ___globalList_0;
	CallbackArray_1_t993D0E79C6CB8001581149B9A54533B2F26FC18C  ___onActionChange_1;
	CallbackArray_1_tCA7C3046169E9D5B59896C976CC731E91D09D979  ___onActionControlsChanged_2;
};

// Unity.VisualScripting.GetGraph`3<Unity.VisualScripting.FlowGraph,Unity.VisualScripting.ScriptGraphAsset,Unity.VisualScripting.ScriptMachine>
struct GetGraph_3_tE350B1A731C3982CBE53DB125954238743725900  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetGraph`3::<gameObject>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgameObjectU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetGraph`3::<graphOutput>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CgraphOutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetGraph_3_tE350B1A731C3982CBE53DB125954238743725900, ___U3CgameObjectU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgameObjectU3Ek__BackingField_15() const { return ___U3CgameObjectU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgameObjectU3Ek__BackingField_15() { return &___U3CgameObjectU3Ek__BackingField_15; }
	inline void set_U3CgameObjectU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgameObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphOutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetGraph_3_tE350B1A731C3982CBE53DB125954238743725900, ___U3CgraphOutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CgraphOutputU3Ek__BackingField_16() const { return ___U3CgraphOutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CgraphOutputU3Ek__BackingField_16() { return &___U3CgraphOutputU3Ek__BackingField_16; }
	inline void set_U3CgraphOutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CgraphOutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphOutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.GetGraph`3<Unity.VisualScripting.StateGraph,Unity.VisualScripting.StateGraphAsset,Unity.VisualScripting.StateMachine>
struct GetGraph_3_tAAFA24447742A1872DBE41AA7D86447921CCE582  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetGraph`3::<gameObject>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgameObjectU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetGraph`3::<graphOutput>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CgraphOutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetGraph_3_tAAFA24447742A1872DBE41AA7D86447921CCE582, ___U3CgameObjectU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgameObjectU3Ek__BackingField_15() const { return ___U3CgameObjectU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgameObjectU3Ek__BackingField_15() { return &___U3CgameObjectU3Ek__BackingField_15; }
	inline void set_U3CgameObjectU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgameObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphOutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetGraph_3_tAAFA24447742A1872DBE41AA7D86447921CCE582, ___U3CgraphOutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CgraphOutputU3Ek__BackingField_16() const { return ___U3CgraphOutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CgraphOutputU3Ek__BackingField_16() { return &___U3CgraphOutputU3Ek__BackingField_16; }
	inline void set_U3CgraphOutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CgraphOutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphOutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.GetGraphs`3<Unity.VisualScripting.FlowGraph,Unity.VisualScripting.ScriptGraphAsset,Unity.VisualScripting.ScriptMachine>
struct GetGraphs_3_tFEB4B4C6359C8C61949A5A3D93198A4BA2047FA0  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetGraphs`3::<gameObject>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgameObjectU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetGraphs`3::<graphList>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CgraphListU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetGraphs_3_tFEB4B4C6359C8C61949A5A3D93198A4BA2047FA0, ___U3CgameObjectU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgameObjectU3Ek__BackingField_15() const { return ___U3CgameObjectU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgameObjectU3Ek__BackingField_15() { return &___U3CgameObjectU3Ek__BackingField_15; }
	inline void set_U3CgameObjectU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgameObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphListU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetGraphs_3_tFEB4B4C6359C8C61949A5A3D93198A4BA2047FA0, ___U3CgraphListU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CgraphListU3Ek__BackingField_16() const { return ___U3CgraphListU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CgraphListU3Ek__BackingField_16() { return &___U3CgraphListU3Ek__BackingField_16; }
	inline void set_U3CgraphListU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CgraphListU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphListU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.GetGraphs`3<Unity.VisualScripting.StateGraph,Unity.VisualScripting.StateGraphAsset,Unity.VisualScripting.StateMachine>
struct GetGraphs_3_tCBB6D8503D1276D4B041EC665E48EF290FE8DBB9  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetGraphs`3::<gameObject>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgameObjectU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetGraphs`3::<graphList>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CgraphListU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetGraphs_3_tCBB6D8503D1276D4B041EC665E48EF290FE8DBB9, ___U3CgameObjectU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgameObjectU3Ek__BackingField_15() const { return ___U3CgameObjectU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgameObjectU3Ek__BackingField_15() { return &___U3CgameObjectU3Ek__BackingField_15; }
	inline void set_U3CgameObjectU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgameObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphListU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetGraphs_3_tCBB6D8503D1276D4B041EC665E48EF290FE8DBB9, ___U3CgraphListU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CgraphListU3Ek__BackingField_16() const { return ___U3CgraphListU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CgraphListU3Ek__BackingField_16() { return &___U3CgraphListU3Ek__BackingField_16; }
	inline void set_U3CgraphListU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CgraphListU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphListU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.HasGraph`3<Unity.VisualScripting.FlowGraph,Unity.VisualScripting.ScriptGraphAsset,Unity.VisualScripting.ScriptMachine>
struct HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.HasGraph`3::<enter>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CenterU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.HasGraph`3::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.HasGraph`3::<graphInput>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgraphInputU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.HasGraph`3::<hasGraphOutput>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3ChasGraphOutputU3Ek__BackingField_18;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.HasGraph`3::<exit>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CexitU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CenterU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424, ___U3CenterU3Ek__BackingField_15)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CenterU3Ek__BackingField_15() const { return ___U3CenterU3Ek__BackingField_15; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CenterU3Ek__BackingField_15() { return &___U3CenterU3Ek__BackingField_15; }
	inline void set_U3CenterU3Ek__BackingField_15(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CenterU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenterU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphInputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424, ___U3CgraphInputU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgraphInputU3Ek__BackingField_17() const { return ___U3CgraphInputU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgraphInputU3Ek__BackingField_17() { return &___U3CgraphInputU3Ek__BackingField_17; }
	inline void set_U3CgraphInputU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgraphInputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphInputU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChasGraphOutputU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424, ___U3ChasGraphOutputU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3ChasGraphOutputU3Ek__BackingField_18() const { return ___U3ChasGraphOutputU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3ChasGraphOutputU3Ek__BackingField_18() { return &___U3ChasGraphOutputU3Ek__BackingField_18; }
	inline void set_U3ChasGraphOutputU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3ChasGraphOutputU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChasGraphOutputU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexitU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424, ___U3CexitU3Ek__BackingField_19)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CexitU3Ek__BackingField_19() const { return ___U3CexitU3Ek__BackingField_19; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CexitU3Ek__BackingField_19() { return &___U3CexitU3Ek__BackingField_19; }
	inline void set_U3CexitU3Ek__BackingField_19(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CexitU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexitU3Ek__BackingField_19), (void*)value);
	}
};


// Unity.VisualScripting.HasGraph`3<Unity.VisualScripting.StateGraph,Unity.VisualScripting.StateGraphAsset,Unity.VisualScripting.StateMachine>
struct HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.HasGraph`3::<enter>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CenterU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.HasGraph`3::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.HasGraph`3::<graphInput>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CgraphInputU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.HasGraph`3::<hasGraphOutput>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3ChasGraphOutputU3Ek__BackingField_18;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.HasGraph`3::<exit>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CexitU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CenterU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC, ___U3CenterU3Ek__BackingField_15)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CenterU3Ek__BackingField_15() const { return ___U3CenterU3Ek__BackingField_15; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CenterU3Ek__BackingField_15() { return &___U3CenterU3Ek__BackingField_15; }
	inline void set_U3CenterU3Ek__BackingField_15(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CenterU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenterU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgraphInputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC, ___U3CgraphInputU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CgraphInputU3Ek__BackingField_17() const { return ___U3CgraphInputU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CgraphInputU3Ek__BackingField_17() { return &___U3CgraphInputU3Ek__BackingField_17; }
	inline void set_U3CgraphInputU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CgraphInputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphInputU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChasGraphOutputU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC, ___U3ChasGraphOutputU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3ChasGraphOutputU3Ek__BackingField_18() const { return ___U3ChasGraphOutputU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3ChasGraphOutputU3Ek__BackingField_18() { return &___U3ChasGraphOutputU3Ek__BackingField_18; }
	inline void set_U3ChasGraphOutputU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3ChasGraphOutputU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChasGraphOutputU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexitU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC, ___U3CexitU3Ek__BackingField_19)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CexitU3Ek__BackingField_19() const { return ___U3CexitU3Ek__BackingField_19; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CexitU3Ek__BackingField_19() { return &___U3CexitU3Ek__BackingField_19; }
	inline void set_U3CexitU3Ek__BackingField_19(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CexitU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexitU3Ek__BackingField_19), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29 
{
public:
	// T System.Nullable`1::value
	InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29, ___value_0)); }
	inline InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A  get_value_0() const { return ___value_0; }
	inline InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_tF9BD4E528AB8D442FF54B115B93DF922C73AB41A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB  : public BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___activePointersToConfig_17)); }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Unity.VisualScripting.BinaryComparisonUnit
struct BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.BinaryComparisonUnit::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.BinaryComparisonUnit::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.BinaryComparisonUnit::<comparison>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CcomparisonU3Ek__BackingField_17;
	// System.Boolean Unity.VisualScripting.BinaryComparisonUnit::<numeric>k__BackingField
	bool ___U3CnumericU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcomparisonU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6, ___U3CcomparisonU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CcomparisonU3Ek__BackingField_17() const { return ___U3CcomparisonU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CcomparisonU3Ek__BackingField_17() { return &___U3CcomparisonU3Ek__BackingField_17; }
	inline void set_U3CcomparisonU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CcomparisonU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcomparisonU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnumericU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6, ___U3CnumericU3Ek__BackingField_18)); }
	inline bool get_U3CnumericU3Ek__BackingField_18() const { return ___U3CnumericU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CnumericU3Ek__BackingField_18() { return &___U3CnumericU3Ek__BackingField_18; }
	inline void set_U3CnumericU3Ek__BackingField_18(bool value)
	{
		___U3CnumericU3Ek__BackingField_18 = value;
	}
};


// Unity.VisualScripting.GetDictionaryItem
struct GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetDictionaryItem::<dictionary>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdictionaryU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetDictionaryItem::<key>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CkeyU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetDictionaryItem::<value>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CvalueU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdictionaryU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF, ___U3CdictionaryU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdictionaryU3Ek__BackingField_15() const { return ___U3CdictionaryU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdictionaryU3Ek__BackingField_15() { return &___U3CdictionaryU3Ek__BackingField_15; }
	inline void set_U3CdictionaryU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdictionaryU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdictionaryU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkeyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF, ___U3CkeyU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CkeyU3Ek__BackingField_16() const { return ___U3CkeyU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CkeyU3Ek__BackingField_16() { return &___U3CkeyU3Ek__BackingField_16; }
	inline void set_U3CkeyU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CkeyU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CkeyU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF, ___U3CvalueU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CvalueU3Ek__BackingField_17() const { return ___U3CvalueU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CvalueU3Ek__BackingField_17() { return &___U3CvalueU3Ek__BackingField_17; }
	inline void set_U3CvalueU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CvalueU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.GetListItem
struct GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetListItem::<list>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3ClistU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetListItem::<index>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CindexU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetListItem::<item>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CitemU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3ClistU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06, ___U3ClistU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3ClistU3Ek__BackingField_15() const { return ___U3ClistU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3ClistU3Ek__BackingField_15() { return &___U3ClistU3Ek__BackingField_15; }
	inline void set_U3ClistU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3ClistU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClistU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06, ___U3CindexU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CindexU3Ek__BackingField_16() const { return ___U3CindexU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CindexU3Ek__BackingField_16() { return &___U3CindexU3Ek__BackingField_16; }
	inline void set_U3CindexU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CindexU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CindexU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CitemU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06, ___U3CitemU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CitemU3Ek__BackingField_17() const { return ___U3CitemU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CitemU3Ek__BackingField_17() { return &___U3CitemU3Ek__BackingField_17; }
	inline void set_U3CitemU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CitemU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CitemU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.GraphInput
struct GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:

public:
};


// Unity.VisualScripting.GraphOutput
struct GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F  : public BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * ___handPhysicsServiceProfile_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CHandPhysicsServiceRootU3Ek__BackingField_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_18;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * ___jointKinematicBodies_22;

public:
	inline static int32_t get_offset_of_handPhysicsServiceProfile_13() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___handPhysicsServiceProfile_13)); }
	inline HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * get_handPhysicsServiceProfile_13() const { return ___handPhysicsServiceProfile_13; }
	inline HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 ** get_address_of_handPhysicsServiceProfile_13() { return &___handPhysicsServiceProfile_13; }
	inline void set_handPhysicsServiceProfile_13(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * value)
	{
		___handPhysicsServiceProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPhysicsServiceProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsServiceRootU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CHandPhysicsServiceRootU3Ek__BackingField_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CHandPhysicsServiceRootU3Ek__BackingField_14() const { return ___U3CHandPhysicsServiceRootU3Ek__BackingField_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CHandPhysicsServiceRootU3Ek__BackingField_14() { return &___U3CHandPhysicsServiceRootU3Ek__BackingField_14; }
	inline void set_U3CHandPhysicsServiceRootU3Ek__BackingField_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CHandPhysicsServiceRootU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandPhysicsServiceRootU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsLayerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CHandPhysicsLayerU3Ek__BackingField_15)); }
	inline int32_t get_U3CHandPhysicsLayerU3Ek__BackingField_15() const { return ___U3CHandPhysicsLayerU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CHandPhysicsLayerU3Ek__BackingField_15() { return &___U3CHandPhysicsLayerU3Ek__BackingField_15; }
	inline void set_U3CHandPhysicsLayerU3Ek__BackingField_15(int32_t value)
	{
		___U3CHandPhysicsLayerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CUsePalmKinematicBodyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CUsePalmKinematicBodyU3Ek__BackingField_16)); }
	inline bool get_U3CUsePalmKinematicBodyU3Ek__BackingField_16() const { return ___U3CUsePalmKinematicBodyU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CUsePalmKinematicBodyU3Ek__BackingField_16() { return &___U3CUsePalmKinematicBodyU3Ek__BackingField_16; }
	inline void set_U3CUsePalmKinematicBodyU3Ek__BackingField_16(bool value)
	{
		___U3CUsePalmKinematicBodyU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_17() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___fingerTipKinematicBodyPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_17() const { return ___fingerTipKinematicBodyPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_17() { return &___fingerTipKinematicBodyPrefab_17; }
	inline void set_fingerTipKinematicBodyPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_18() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___palmKinematicBodyPrefab_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_18() const { return ___palmKinematicBodyPrefab_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_18() { return &___palmKinematicBodyPrefab_18; }
	inline void set_palmKinematicBodyPrefab_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_18), (void*)value);
	}

	inline static int32_t get_offset_of_handJointService_19() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___handJointService_19)); }
	inline RuntimeObject* get_handJointService_19() const { return ___handJointService_19; }
	inline RuntimeObject** get_address_of_handJointService_19() { return &___handJointService_19; }
	inline void set_handJointService_19(RuntimeObject* value)
	{
		___handJointService_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_19), (void*)value);
	}

	inline static int32_t get_offset_of_jointKinematicBodies_22() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___jointKinematicBodies_22)); }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * get_jointKinematicBodies_22() const { return ___jointKinematicBodies_22; }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 ** get_address_of_jointKinematicBodies_22() { return &___jointKinematicBodies_22; }
	inline void set_jointKinematicBodies_22(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * value)
	{
		___jointKinematicBodies_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointKinematicBodies_22), (void*)value);
	}
};

struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* ___handednessTypes_20;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* ___fingerTipTypes_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_23;

public:
	inline static int32_t get_offset_of_handednessTypes_20() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___handednessTypes_20)); }
	inline HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* get_handednessTypes_20() const { return ___handednessTypes_20; }
	inline HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754** get_address_of_handednessTypes_20() { return &___handednessTypes_20; }
	inline void set_handednessTypes_20(HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* value)
	{
		___handednessTypes_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handednessTypes_20), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTipTypes_21() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___fingerTipTypes_21)); }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* get_fingerTipTypes_21() const { return ___fingerTipTypes_21; }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F** get_address_of_fingerTipTypes_21() { return &___fingerTipTypes_21; }
	inline void set_fingerTipTypes_21(TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* value)
	{
		___fingerTipTypes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipTypes_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___UpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_23() const { return ___UpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_23() { return &___UpdatePerfMarker_23; }
	inline void set_UpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_23 = value;
	}
};


// Unity.VisualScripting.If
struct If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.If::<enter>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CenterU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.If::<condition>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CconditionU3Ek__BackingField_16;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.If::<ifTrue>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CifTrueU3Ek__BackingField_17;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.If::<ifFalse>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CifFalseU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CenterU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974, ___U3CenterU3Ek__BackingField_15)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CenterU3Ek__BackingField_15() const { return ___U3CenterU3Ek__BackingField_15; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CenterU3Ek__BackingField_15() { return &___U3CenterU3Ek__BackingField_15; }
	inline void set_U3CenterU3Ek__BackingField_15(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CenterU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenterU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconditionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974, ___U3CconditionU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CconditionU3Ek__BackingField_16() const { return ___U3CconditionU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CconditionU3Ek__BackingField_16() { return &___U3CconditionU3Ek__BackingField_16; }
	inline void set_U3CconditionU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CconditionU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconditionU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CifTrueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974, ___U3CifTrueU3Ek__BackingField_17)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CifTrueU3Ek__BackingField_17() const { return ___U3CifTrueU3Ek__BackingField_17; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CifTrueU3Ek__BackingField_17() { return &___U3CifTrueU3Ek__BackingField_17; }
	inline void set_U3CifTrueU3Ek__BackingField_17(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CifTrueU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CifTrueU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CifFalseU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974, ___U3CifFalseU3Ek__BackingField_18)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CifFalseU3Ek__BackingField_18() const { return ___U3CifFalseU3Ek__BackingField_18; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CifFalseU3Ek__BackingField_18() { return &___U3CifFalseU3Ek__BackingField_18; }
	inline void set_U3CifFalseU3Ek__BackingField_18(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CifFalseU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CifFalseU3Ek__BackingField_18), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t97940011CC4587358E676F24EE19A1D3C34F35BD* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_tB042D98C21020928E5DCC3E489D38854685237EF* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tE74410051B12CB896258AE87DE73A5786F1E0008* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputActionState::m_CurrentlyProcessingThisEvent
	InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E  ___m_CurrentlyProcessingThisEvent_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_12;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_13;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___maps_1)); }
	inline InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___controls_2)); }
	inline InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___interactions_3)); }
	inline IInputInteractionU5BU5D_t97940011CC4587358E676F24EE19A1D3C34F35BD* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_t97940011CC4587358E676F24EE19A1D3C34F35BD** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_t97940011CC4587358E676F24EE19A1D3C34F35BD* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___processors_4)); }
	inline InputProcessorU5BU5D_tB042D98C21020928E5DCC3E489D38854685237EF* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_tB042D98C21020928E5DCC3E489D38854685237EF** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_tB042D98C21020928E5DCC3E489D38854685237EF* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_tE74410051B12CB896258AE87DE73A5786F1E0008* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_tE74410051B12CB896258AE87DE73A5786F1E0008** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_tE74410051B12CB896258AE87DE73A5786F1E0008* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___memory_7)); }
	inline UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_t1CA6DEDC27C15B052EAAC8C5049836D9838E4E21  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_InProcessControlStateChange_10() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_InProcessControlStateChange_10)); }
	inline bool get_m_InProcessControlStateChange_10() const { return ___m_InProcessControlStateChange_10; }
	inline bool* get_address_of_m_InProcessControlStateChange_10() { return &___m_InProcessControlStateChange_10; }
	inline void set_m_InProcessControlStateChange_10(bool value)
	{
		___m_InProcessControlStateChange_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentlyProcessingThisEvent_11() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_CurrentlyProcessingThisEvent_11)); }
	inline InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E  get_m_CurrentlyProcessingThisEvent_11() const { return ___m_CurrentlyProcessingThisEvent_11; }
	inline InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E * get_address_of_m_CurrentlyProcessingThisEvent_11() { return &___m_CurrentlyProcessingThisEvent_11; }
	inline void set_m_CurrentlyProcessingThisEvent_11(InputEventPtr_t8879838A943E746139E6EDB4F34B722BD132FF5E  value)
	{
		___m_CurrentlyProcessingThisEvent_11 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_12() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_OnBeforeUpdateDelegate_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_12() const { return ___m_OnBeforeUpdateDelegate_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_12() { return &___m_OnBeforeUpdateDelegate_12; }
	inline void set_m_OnBeforeUpdateDelegate_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_13() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0, ___m_OnAfterUpdateDelegate_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_13() const { return ___m_OnAfterUpdateDelegate_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_13() { return &___m_OnAfterUpdateDelegate_13; }
	inline void set_m_OnAfterUpdateDelegate_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_13), (void*)value);
	}
};

struct InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_StaticFields
{
public:
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297  ___s_GlobalState_14;

public:
	inline static int32_t get_offset_of_s_GlobalState_14() { return static_cast<int32_t>(offsetof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_StaticFields, ___s_GlobalState_14)); }
	inline GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297  get_s_GlobalState_14() const { return ___s_GlobalState_14; }
	inline GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297 * get_address_of_s_GlobalState_14() { return &___s_GlobalState_14; }
	inline void set_s_GlobalState_14(GlobalState_tBF4E930CF32E8305B9A4DA577F3D105DFD6CA297  value)
	{
		___s_GlobalState_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_14))->___globalList_0))->___additionalValues_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// Unity.VisualScripting.MemberUnit
struct MemberUnit_t71EC5C209238824A1A0259007BF2B81A41C2A98E  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.Member Unity.VisualScripting.MemberUnit::<member>k__BackingField
	Member_t0254493A17B62C117C0BF6DC181852825D06A2C8 * ___U3CmemberU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MemberUnit::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CmemberU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MemberUnit_t71EC5C209238824A1A0259007BF2B81A41C2A98E, ___U3CmemberU3Ek__BackingField_15)); }
	inline Member_t0254493A17B62C117C0BF6DC181852825D06A2C8 * get_U3CmemberU3Ek__BackingField_15() const { return ___U3CmemberU3Ek__BackingField_15; }
	inline Member_t0254493A17B62C117C0BF6DC181852825D06A2C8 ** get_address_of_U3CmemberU3Ek__BackingField_15() { return &___U3CmemberU3Ek__BackingField_15; }
	inline void set_U3CmemberU3Ek__BackingField_15(Member_t0254493A17B62C117C0BF6DC181852825D06A2C8 * value)
	{
		___U3CmemberU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmemberU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MemberUnit_t71EC5C209238824A1A0259007BF2B81A41C2A98E, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.UnifiedVariableUnit
struct UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.VariableKind Unity.VisualScripting.UnifiedVariableUnit::<kind>k__BackingField
	int32_t ___U3CkindU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.UnifiedVariableUnit::<name>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CnameU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.UnifiedVariableUnit::<object>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CobjectU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CkindU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86, ___U3CkindU3Ek__BackingField_15)); }
	inline int32_t get_U3CkindU3Ek__BackingField_15() const { return ___U3CkindU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CkindU3Ek__BackingField_15() { return &___U3CkindU3Ek__BackingField_15; }
	inline void set_U3CkindU3Ek__BackingField_15(int32_t value)
	{
		___U3CkindU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86, ___U3CnameU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CnameU3Ek__BackingField_16() const { return ___U3CnameU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CnameU3Ek__BackingField_16() { return &___U3CnameU3Ek__BackingField_16; }
	inline void set_U3CnameU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CnameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CobjectU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86, ___U3CobjectU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CobjectU3Ek__BackingField_17() const { return ___U3CobjectU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CobjectU3Ek__BackingField_17() { return &___U3CobjectU3Ek__BackingField_17; }
	inline void set_U3CobjectU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CobjectU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjectU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.VariableUnit
struct VariableUnit_t19851B289BCF167B288FDD1172BFFBE0955BBCF7  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.String Unity.VisualScripting.VariableUnit::<defaultName>k__BackingField
	String_t* ___U3CdefaultNameU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.VariableUnit::<name>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CnameU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CdefaultNameU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(VariableUnit_t19851B289BCF167B288FDD1172BFFBE0955BBCF7, ___U3CdefaultNameU3Ek__BackingField_15)); }
	inline String_t* get_U3CdefaultNameU3Ek__BackingField_15() const { return ___U3CdefaultNameU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CdefaultNameU3Ek__BackingField_15() { return &___U3CdefaultNameU3Ek__BackingField_15; }
	inline void set_U3CdefaultNameU3Ek__BackingField_15(String_t* value)
	{
		___U3CdefaultNameU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultNameU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VariableUnit_t19851B289BCF167B288FDD1172BFFBE0955BBCF7, ___U3CnameU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CnameU3Ek__BackingField_16() const { return ___U3CnameU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CnameU3Ek__BackingField_16() { return &___U3CnameU3Ek__BackingField_16; }
	inline void set_U3CnameU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CnameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.GetMember
struct GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202  : public MemberUnit_t71EC5C209238824A1A0259007BF2B81A41C2A98E
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetMember::<value>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CvalueU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202, ___U3CvalueU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CvalueU3Ek__BackingField_17() const { return ___U3CvalueU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CvalueU3Ek__BackingField_17() { return &___U3CvalueU3Ek__BackingField_17; }
	inline void set_U3CvalueU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CvalueU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.GetScriptGraph
struct GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1  : public GetGraph_3_tE350B1A731C3982CBE53DB125954238743725900
{
public:

public:
};


// Unity.VisualScripting.GetScriptGraphs
struct GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5  : public GetGraphs_3_tFEB4B4C6359C8C61949A5A3D93198A4BA2047FA0
{
public:

public:
};


// Unity.VisualScripting.GetStateGraph
struct GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7  : public GetGraph_3_tAAFA24447742A1872DBE41AA7D86447921CCE582
{
public:

public:
};


// Unity.VisualScripting.GetStateGraphs
struct GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25  : public GetGraphs_3_tCBB6D8503D1276D4B041EC665E48EF290FE8DBB9
{
public:

public:
};


// Unity.VisualScripting.GetVariable
struct GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E  : public UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetVariable::<value>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CvalueU3Ek__BackingField_18;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetVariable::<fallback>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CfallbackU3Ek__BackingField_19;
	// System.Boolean Unity.VisualScripting.GetVariable::<specifyFallback>k__BackingField
	bool ___U3CspecifyFallbackU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E, ___U3CvalueU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CvalueU3Ek__BackingField_18() const { return ___U3CvalueU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CvalueU3Ek__BackingField_18() { return &___U3CvalueU3Ek__BackingField_18; }
	inline void set_U3CvalueU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CvalueU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfallbackU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E, ___U3CfallbackU3Ek__BackingField_19)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CfallbackU3Ek__BackingField_19() const { return ___U3CfallbackU3Ek__BackingField_19; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CfallbackU3Ek__BackingField_19() { return &___U3CfallbackU3Ek__BackingField_19; }
	inline void set_U3CfallbackU3Ek__BackingField_19(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CfallbackU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfallbackU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CspecifyFallbackU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E, ___U3CspecifyFallbackU3Ek__BackingField_20)); }
	inline bool get_U3CspecifyFallbackU3Ek__BackingField_20() const { return ___U3CspecifyFallbackU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CspecifyFallbackU3Ek__BackingField_20() { return &___U3CspecifyFallbackU3Ek__BackingField_20; }
	inline void set_U3CspecifyFallbackU3Ek__BackingField_20(bool value)
	{
		___U3CspecifyFallbackU3Ek__BackingField_20 = value;
	}
};


// Unity.VisualScripting.GetVariableUnit
struct GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E  : public VariableUnit_t19851B289BCF167B288FDD1172BFFBE0955BBCF7
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.GetVariableUnit::<value>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CvalueU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E, ___U3CvalueU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CvalueU3Ek__BackingField_17() const { return ___U3CvalueU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CvalueU3Ek__BackingField_17() { return &___U3CvalueU3Ek__BackingField_17; }
	inline void set_U3CvalueU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CvalueU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Greater
struct Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B  : public BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6
{
public:

public:
};


// Unity.VisualScripting.GreaterOrEqual
struct GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2  : public BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.HandJointService
struct HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointService::leftHand
	RuntimeObject* ___leftHand_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointService::rightHand
	RuntimeObject* ___rightHand_22;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Input.HandJointService::leftHandFauxJoints
	Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * ___leftHandFauxJoints_23;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Input.HandJointService::rightHandFauxJoints
	Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * ___rightHandFauxJoints_24;

public:
	inline static int32_t get_offset_of_leftHand_21() { return static_cast<int32_t>(offsetof(HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01, ___leftHand_21)); }
	inline RuntimeObject* get_leftHand_21() const { return ___leftHand_21; }
	inline RuntimeObject** get_address_of_leftHand_21() { return &___leftHand_21; }
	inline void set_leftHand_21(RuntimeObject* value)
	{
		___leftHand_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHand_21), (void*)value);
	}

	inline static int32_t get_offset_of_rightHand_22() { return static_cast<int32_t>(offsetof(HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01, ___rightHand_22)); }
	inline RuntimeObject* get_rightHand_22() const { return ___rightHand_22; }
	inline RuntimeObject** get_address_of_rightHand_22() { return &___rightHand_22; }
	inline void set_rightHand_22(RuntimeObject* value)
	{
		___rightHand_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHand_22), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandFauxJoints_23() { return static_cast<int32_t>(offsetof(HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01, ___leftHandFauxJoints_23)); }
	inline Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * get_leftHandFauxJoints_23() const { return ___leftHandFauxJoints_23; }
	inline Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 ** get_address_of_leftHandFauxJoints_23() { return &___leftHandFauxJoints_23; }
	inline void set_leftHandFauxJoints_23(Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * value)
	{
		___leftHandFauxJoints_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandFauxJoints_23), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandFauxJoints_24() { return static_cast<int32_t>(offsetof(HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01, ___rightHandFauxJoints_24)); }
	inline Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * get_rightHandFauxJoints_24() const { return ___rightHandFauxJoints_24; }
	inline Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 ** get_address_of_rightHandFauxJoints_24() { return &___rightHandFauxJoints_24; }
	inline void set_rightHandFauxJoints_24(Dictionary_2_tA53F3555D0817097C0F0836B3A4FCEEBB564BAD0 * value)
	{
		___rightHandFauxJoints_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandFauxJoints_24), (void*)value);
	}
};


// Unity.VisualScripting.HasScriptGraph
struct HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943  : public HasGraph_3_t8806371109C6B09DE1696CA913CC67F3DAFC5424
{
public:
	// Unity.VisualScripting.ScriptGraphContainerType Unity.VisualScripting.HasScriptGraph::<containerType>k__BackingField
	int32_t ___U3CcontainerTypeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CcontainerTypeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943, ___U3CcontainerTypeU3Ek__BackingField_20)); }
	inline int32_t get_U3CcontainerTypeU3Ek__BackingField_20() const { return ___U3CcontainerTypeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CcontainerTypeU3Ek__BackingField_20() { return &___U3CcontainerTypeU3Ek__BackingField_20; }
	inline void set_U3CcontainerTypeU3Ek__BackingField_20(int32_t value)
	{
		___U3CcontainerTypeU3Ek__BackingField_20 = value;
	}
};


// Unity.VisualScripting.HasStateGraph
struct HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2  : public HasGraph_3_t8B8568FDE804718F54067E7A3677527A972A05FC
{
public:
	// Unity.VisualScripting.StateGraphContainerType Unity.VisualScripting.HasStateGraph::<containerType>k__BackingField
	int32_t ___U3CcontainerTypeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CcontainerTypeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2, ___U3CcontainerTypeU3Ek__BackingField_20)); }
	inline int32_t get_U3CcontainerTypeU3Ek__BackingField_20() const { return ___U3CcontainerTypeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CcontainerTypeU3Ek__BackingField_20() { return &___U3CcontainerTypeU3Ek__BackingField_20; }
	inline void set_U3CcontainerTypeU3Ek__BackingField_20(int32_t value)
	{
		___U3CcontainerTypeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_BindingMask_8)); }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_9() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_BindingsStartIndex_9)); }
	inline int32_t get_m_BindingsStartIndex_9() const { return ___m_BindingsStartIndex_9; }
	inline int32_t* get_address_of_m_BindingsStartIndex_9() { return &___m_BindingsStartIndex_9; }
	inline void set_m_BindingsStartIndex_9(int32_t value)
	{
		___m_BindingsStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_10() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_BindingsCount_10)); }
	inline int32_t get_m_BindingsCount_10() const { return ___m_BindingsCount_10; }
	inline int32_t* get_address_of_m_BindingsCount_10() { return &___m_BindingsCount_10; }
	inline void set_m_BindingsCount_10(int32_t value)
	{
		___m_BindingsCount_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_11() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_ControlStartIndex_11)); }
	inline int32_t get_m_ControlStartIndex_11() const { return ___m_ControlStartIndex_11; }
	inline int32_t* get_address_of_m_ControlStartIndex_11() { return &___m_ControlStartIndex_11; }
	inline void set_m_ControlStartIndex_11(int32_t value)
	{
		___m_ControlStartIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_12() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_ControlCount_12)); }
	inline int32_t get_m_ControlCount_12() const { return ___m_ControlCount_12; }
	inline int32_t* get_address_of_m_ControlCount_12() { return &___m_ControlCount_12; }
	inline void set_m_ControlCount_12(int32_t value)
	{
		___m_ControlCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_13() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_ActionIndexInState_13)); }
	inline int32_t get_m_ActionIndexInState_13() const { return ___m_ActionIndexInState_13; }
	inline int32_t* get_address_of_m_ActionIndexInState_13() { return &___m_ActionIndexInState_13; }
	inline void set_m_ActionIndexInState_13(int32_t value)
	{
		___m_ActionIndexInState_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_ActionMap_14)); }
	inline InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_OnStarted_15)); }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  value)
	{
		___m_OnStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_16() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_OnCanceled_16)); }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  get_m_OnCanceled_16() const { return ___m_OnCanceled_16; }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F * get_address_of_m_OnCanceled_16() { return &___m_OnCanceled_16; }
	inline void set_m_OnCanceled_16(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  value)
	{
		___m_OnCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49, ___m_OnPerformed_17)); }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  value)
	{
		___m_OnPerformed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_t4EA8B90287154DB4FB58C9BF451DCA37E204C299* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  ___m_Devices_11;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_t7E71EBC884AB1C604AD6E150C1614B418D19E8E3* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_t4EA8B90287154DB4FB58C9BF451DCA37E204C299* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_t4EA8B90287154DB4FB58C9BF451DCA37E204C299** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_t4EA8B90287154DB4FB58C9BF451DCA37E204C299* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_BindingMask_8)); }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ParameterOverridesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_ParameterOverridesCount_9)); }
	inline int32_t get_m_ParameterOverridesCount_9() const { return ___m_ParameterOverridesCount_9; }
	inline int32_t* get_address_of_m_ParameterOverridesCount_9() { return &___m_ParameterOverridesCount_9; }
	inline void set_m_ParameterOverridesCount_9(int32_t value)
	{
		___m_ParameterOverridesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ParameterOverrides_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_ParameterOverrides_10)); }
	inline ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* get_m_ParameterOverrides_10() const { return ___m_ParameterOverrides_10; }
	inline ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930** get_address_of_m_ParameterOverrides_10() { return &___m_ParameterOverrides_10; }
	inline void set_m_ParameterOverrides_10(ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* value)
	{
		___m_ParameterOverrides_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParameterOverrides_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Devices_11() { return static_cast<int32_t>(offsetof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F, ___m_Devices_11)); }
	inline DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  get_m_Devices_11() const { return ___m_Devices_11; }
	inline DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978 * get_address_of_m_Devices_11() { return &___m_Devices_11; }
	inline void set_m_Devices_11(DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  value)
	{
		___m_Devices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Devices_11))->___m_DeviceArray_2), (void*)NULL);
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t3FF8A4EA60CCC8DBA9733F42B02339712E9279C9* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_ActionIndexByNameOrId_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Asset_2)); }
	inline InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Actions_3)); }
	inline InputActionU5BU5D_t3FF8A4EA60CCC8DBA9733F42B02339712E9279C9* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t3FF8A4EA60CCC8DBA9733F42B02339712E9279C9** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t3FF8A4EA60CCC8DBA9733F42B02339712E9279C9* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_tC050A62D7A828685A7D3EBEC45556BAD25A19D58* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_tA1D68A3F1D1D8B450A6EA8742C253DD4474DF189* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_SingletonAction_8)); }
	inline InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_State_10)); }
	inline InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0 * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_11() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_BindingMask_11)); }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  get_m_BindingMask_11() const { return ___m_BindingMask_11; }
	inline Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29 * get_address_of_m_BindingMask_11() { return &___m_BindingMask_11; }
	inline void set_m_BindingMask_11(Nullable_1_t1D9EE632CB0B8D32A4C332307E52637C00521F29  value)
	{
		___m_BindingMask_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_11))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Flags_12() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Flags_12)); }
	inline int32_t get_m_Flags_12() const { return ___m_Flags_12; }
	inline int32_t* get_address_of_m_Flags_12() { return &___m_Flags_12; }
	inline void set_m_Flags_12(int32_t value)
	{
		___m_Flags_12 = value;
	}

	inline static int32_t get_offset_of_m_ParameterOverridesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_ParameterOverridesCount_13)); }
	inline int32_t get_m_ParameterOverridesCount_13() const { return ___m_ParameterOverridesCount_13; }
	inline int32_t* get_address_of_m_ParameterOverridesCount_13() { return &___m_ParameterOverridesCount_13; }
	inline void set_m_ParameterOverridesCount_13(int32_t value)
	{
		___m_ParameterOverridesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_ParameterOverrides_14() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_ParameterOverrides_14)); }
	inline ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* get_m_ParameterOverrides_14() const { return ___m_ParameterOverrides_14; }
	inline ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930** get_address_of_m_ParameterOverrides_14() { return &___m_ParameterOverrides_14; }
	inline void set_m_ParameterOverrides_14(ParameterOverrideU5BU5D_t467F367AE90569A97522EFED1F84C13115CA7930* value)
	{
		___m_ParameterOverrides_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParameterOverrides_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Devices_15() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_Devices_15)); }
	inline DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  get_m_Devices_15() const { return ___m_Devices_15; }
	inline DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978 * get_address_of_m_Devices_15() { return &___m_Devices_15; }
	inline void set_m_Devices_15(DeviceArray_t98FFFB14903F96BDCE335865B9F3EE3CF5322978  value)
	{
		___m_Devices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Devices_15))->___m_DeviceArray_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_16() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_ActionCallbacks_16)); }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  get_m_ActionCallbacks_16() const { return ___m_ActionCallbacks_16; }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F * get_address_of_m_ActionCallbacks_16() { return &___m_ActionCallbacks_16; }
	inline void set_m_ActionCallbacks_16(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  value)
	{
		___m_ActionCallbacks_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionCallbacks_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ActionIndexByNameOrId_17() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F, ___m_ActionIndexByNameOrId_17)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_ActionIndexByNameOrId_17() const { return ___m_ActionIndexByNameOrId_17; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_ActionIndexByNameOrId_17() { return &___m_ActionIndexByNameOrId_17; }
	inline void set_m_ActionIndexByNameOrId_17(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_ActionIndexByNameOrId_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionIndexByNameOrId_17), (void*)value);
	}
};

struct InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_18() { return static_cast<int32_t>(offsetof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_StaticFields, ___s_DeferBindingResolution_18)); }
	inline int32_t get_s_DeferBindingResolution_18() const { return ___s_DeferBindingResolution_18; }
	inline int32_t* get_address_of_s_DeferBindingResolution_18() { return &___s_DeferBindingResolution_18; }
	inline void set_s_DeferBindingResolution_18(int32_t value)
	{
		___s_DeferBindingResolution_18 = value;
	}
};


// Unity.VisualScripting.GetApplicationVariable
struct GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE  : public GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E
{
public:

public:
};


// Unity.VisualScripting.GetGraphVariable
struct GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F  : public GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E
{
public:

public:
};


// Unity.VisualScripting.GetObjectVariable
struct GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817  : public GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.GetObjectVariable::<source>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsourceU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CsourceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817, ___U3CsourceU3Ek__BackingField_18)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsourceU3Ek__BackingField_18() const { return ___U3CsourceU3Ek__BackingField_18; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsourceU3Ek__BackingField_18() { return &___U3CsourceU3Ek__BackingField_18; }
	inline void set_U3CsourceU3Ek__BackingField_18(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsourceU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.GetSavedVariable
struct GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920  : public GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E
{
public:

public:
};


// Unity.VisualScripting.GetSceneVariable
struct GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0  : public GetVariableUnit_tF37C07ABC905AD7CADDB1ECA799FFB75DA3A875E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1);
il2cpp_hresult_t IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);


// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for Unity.VisualScripting.GetApplicationVariable
struct GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetApplicationVariable_t60CA3F7F581935224D2091A3301BD1AB1AB1FACE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetDictionaryItem
struct GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetDictionaryItem_tF81FA8B8939101F8AED8EB7846AC2C50D480F2AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetGraphVariable
struct GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetGraphVariable_t2CA462D0C56CD9FA4D99DDC6B0DFA3E2FF3E2A3F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetListItem
struct GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetListItem_tBC08E2B83061E73FD178833182B4B80E1A846C06_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetMember
struct GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetMember_tFF8E85B1FB03E088BF16333C7B04904F71E78202_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetObjectVariable
struct GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetObjectVariable_t3B8371DC4E0E20EF7A4018A935DDE3E4D7D16817_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetSavedVariable
struct GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetSavedVariable_t5D900822E7BA90B5A644B8B2FA5A2076D886A920_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetSceneVariable
struct GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetSceneVariable_tC4EF940C527A429F50CFD37A58CD4BF5FF59DCD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetScriptGraph
struct GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetScriptGraph_t87A34A886D26FE30B0FAB87DC6AAEDCCAFF0FEA1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetScriptGraphs
struct GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetScriptGraphs_t3F0A8C7BD134B8C9E8C2161946A74FCC68ED31E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetStateGraph
struct GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetStateGraph_t93871443581A08213CCC7A0C26461346CA063FD7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetStateGraphs
struct GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetStateGraphs_t6CF0D749D6D666C473A99CB5A2AD9F80F3A4FE25_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GetVariable
struct GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetVariable_t7CCC62DC35740AFE423CC45560F897675DF1847E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMeshPrimitiveAttributes
struct GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper>, IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599, IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82
{
	inline GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599::IID;
		interfaceIds[1] = IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5(Il2CppHString ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE(IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6(Il2CppHString ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GltfMeshPrimitiveAttributes_tA00CB88DE5087BC3C6C20E2DDF7A1287DADA97E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GraphGroup
struct GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GraphGroup_t9BB247BA2682F62D7D4BC216BC4DC5561B88347D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GraphInput
struct GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GraphInput_t66473B7160B24C5E9E1EBE5AC7C3756D88DE0D3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GraphOutput
struct GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GraphOutput_tCB1EC1FC6B73237E55C4A8453B5B971EF24926CE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GraphStack
struct GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GraphStack_t4B690E901AF31DF56C64167D7724E4A9330E6012_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Greater
struct Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Greater_t01CEF235C16B20165A584AAAD05BBCE03CFD772B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.GreaterOrEqual
struct GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GreaterOrEqual_tA12ADDEAC63C5EB26279CE05FD1E1133A0F358C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Guid
struct Guid_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>, IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Guid_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 16;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		String_t* returnValue;
		try
		{
			String_t* il2cppRetVal;
			il2cppRetVal = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75(static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var)), NULL);
			returnValue = il2cppRetVal;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppHString _returnValue_marshaled = NULL;
		if (returnValue == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL);
		}
		_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Guid_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Guid_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Guid_t_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.HResult
struct HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper>, IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t88F8CC754B456310029BFAF58B0155A1D9C739E7::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B6DDCCD8C68053D2DD115C28EF11C303B1C139(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA  returnValue;
		try
		{
			returnValue = *static_cast<HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA *>(UnBox(GetManagedObjectInline(), HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HResult_tB5F48F254B0E2F1D32395D0F507C6AB0128D5DBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.HandJointService
struct HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HandJointService_tF8EC011C9E5A34FAF6DE66104B419644FA4F2A01_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Perception.People.HandMeshVertex
struct HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper>, IReference_1_t3D4FCBE36060381B5CC5FBB798A3E733EB478D51, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t3D4FCBE36060381B5CC5FBB798A3E733EB478D51::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3D4FCBE36060381B5CC5FBB798A3E733EB478D51*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t3D4FCBE36060381B5CC5FBB798A3E733EB478D51::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA70EBA5C48E14A1A690EA1F3B52F1E54D0832F44(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  returnValue;
		try
		{
			returnValue = *static_cast<HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 *>(UnBox(GetManagedObjectInline(), HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.HasScriptGraph
struct HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HasScriptGraph_t3021A994F54246B30BAA0643FA3153C9A6C65943_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.HasStateGraph
struct HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HasStateGraph_tE4AF7A9379AF4F055BA22BB60876A4ABC0369AD2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Antlr3.Runtime.Collections.HashList
struct HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Graphics.Holographic.HolographicStereoTransform
struct HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper>, IReference_1_tC1A96561F96815F061B185E4266308230625C3AF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tC1A96561F96815F061B185E4266308230625C3AF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tC1A96561F96815F061B185E4266308230625C3AF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tC1A96561F96815F061B185E4266308230625C3AF::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2B81449894D78ACAB82F0E5DD9B5154FF9BDB6F4(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  returnValue;
		try
		{
			returnValue = *static_cast<HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A *>(UnBox(GetManagedObjectInline(), HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper>, IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62C19D1B7765C61ECB51B5783983EF2B4587D423(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper>, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IMECompositionString_t1B53AAD8593402A8A03338E129371FC5DFB758EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.If
struct If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) If_tFFA9F86D7B94DD83DDBDB22044C555FACC49B974_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputAction
struct InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputAction_tF9510087E1EDDB1FE2873BE8AF2596948C18CD49_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionState
struct InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputActionState_tBF7135023E0D75D3CF6E61291AD62A2702C962C0_ComCallableWrapper(obj));
}
