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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_t6B044356939312E9F36DCC73BC69F47AB8DD89F7;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t3FE2882F62414F518256A76FD0447626D64A034A;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/InteractionProfileType,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>
struct Dictionary_2_t94AD2FD9BACFB3E1D767F33B06365B6C5C665DC4;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B;
// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_t5CC7153B06726AA568974DECD09BB55832EFC5E3;
// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>
struct List_1_tBB4E3C761B5560BE6149BFBABE9020694810429A;
// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig>
struct List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_t21249B431B3E6DF902035A9CD592DF003798D738;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t39814C73B44B5BC590BC5893EC375BAD22924907;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_t0C6E2A2037D3706E582CEAE9EA9F367980F9CB67;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t4098972D4090C628421F2D7296BDBD254F949FB4;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_tE586104C3A92A328ACA2110051E4E7140AFACE10;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_tCA1FDE16A1400AAD3547FB64188338E5390E4DDB;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_tE48FE9596BF8E0459266EA21F5CA5C6354E6B2E5;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t73F388F47FA3589675EF39A026BE26BAEEC732D1;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t860518117F5A5F306A715C3630E552C4A8BEC6B2;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27;
// System.Reflection.Assembly
struct Assembly_t;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// System.Runtime.Serialization.FixupHolderList
struct FixupHolderList_t98FCFDD9352A87A246F7E475733C94C8A7F86BF8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_tC20BD4E08AA053727BE2CC53F4B95E9A2C4BEF8D;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_t58968FDD4FA8FFF05CC402114A1F32684FB43789;
// UnityEngine.InputSystem.InputValue
struct InputValue_t44BF460E8D7E8F054CB97CCE71D6691867C3F7EC;
// System.Runtime.Serialization.LongList
struct LongList_tB13F421A6BB4E3BB28AEAA7B91E9A937EB7A7D23;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Runtime.Serialization.MemberHolder
struct MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Microsoft.MixedReality.Toolkit.Utilities.MeshOutline
struct MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// Microsoft.MixedReality.Toolkit.Utilities.MeshSmoother
struct MeshSmoother_t380DED3558E2EE466E85D31240670C54A3A6FDC1;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping
struct MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF;
// System.ModifierSpec
struct ModifierSpec_t329130037E411891DCA0029BE3125EDD8E477F29;
// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7;
// System.Diagnostics.Tracing.NameInfo
struct NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6;
// Unity.VisualScripting.Namespace
struct Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
struct ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E;
// System.Runtime.Serialization.ObjectHolder
struct ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName
struct ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData
struct ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED;
// UnityEngine.Events.PersistentCall
struct PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9;
// Uduino.Pin
struct Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3;
// System.Runtime.Serialization.TypeLoadExceptionHolder
struct TypeLoadExceptionHolder_t20AB0C4A3995BE52D344B37DDEFAE330659147E2;
// Uduino.UduinoDevice
struct UduinoDevice_t52CA447181BAE51803B38F8BD20350ECFF87FC2F;
// Uduino.UduinoManager
struct UduinoManager_t2A3AF214E4C7B5FFFCBC480E213BC4BB579EA768;
// System.Runtime.Serialization.ValueTypeFixupInfo
struct ValueTypeFixupInfo_tBA01D7B8EF22CA79A46AA25F4EFCE2B312E9E547;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.VisualScripting.Namespace/Collection
struct Collection_tA0822199F92FA2FCB2C0EB6CBF497C6C6F0BA59A;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t4E51D8991642FBDBCCE97D5F149880352DFB4D4D;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tCEE7D2D1940DC6295D3BAA199A7B6748F32004C1;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_tC7ED618F6C4CC415617D85B69A95ABB89744B3ED;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A;
struct InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26 ;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;
struct UserData_t3995EF8443FFC017103BB0A01A0D1AC9859B8962_marshaled_com;
struct UserData_t3995EF8443FFC017103BB0A01A0D1AC9859B8962_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E;
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E;
struct MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40;
struct MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29;
struct MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0;
struct MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA;
struct MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4;
struct MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700;
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
struct MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01;
struct MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3;
struct MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358;
struct ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328;
struct ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A;
struct NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED;
struct NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5;
struct NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC;
struct NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988;
struct NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91;
struct NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E;
struct ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703;
struct OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401;
struct OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC;
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A;
struct ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96;
struct PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8;
struct PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7;
struct PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4;
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
struct PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Object>
struct NOVTABLE IReferenceArray_1_t77BFB9BB36865CD5C30321BC37E85B3B5F8C49AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m804662C65919470E0BB3A6CB1F7A534D30CF850B(uint32_t* comReturnValueArraySize, Il2CppIInspectable*** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Object>
struct NOVTABLE IVector_1_tB40846096830E0925EE1F0A5D58AB19E68B6D748 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB2CB881D873E9E8F73FC049FB169256BA79DD4D5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m7CC9B1F524D27B40133AF95E66098C5AECDFB1B4(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mBF8122EE9ED356287CE0F283387F620B6624109A(IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3E2B37EA58F46C9A7F8482AC393A78B3980F3F2C(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m061982E3136B86E9C3E16680F3BF81F0A1675479(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m61114E640A85205C9321737BF9A3DE430CCCF967(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mCB00E2AC94D393E45E03421114B653166DCA9B55(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m5E6D02609DF748FB392EF493C297202889E70DE8(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mEDF552A013BAB9F67B23D6006FAC388BED02B1A4() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m703D3245B9139D12900A84A817B0066D6BF9455D() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m0B13BDF917194523DD7D898F456311BEE2569DB5(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mDAEDC66896AAC6B70440BE34FBAD7711C2D8DF50(uint32_t ___items0ArraySize, Il2CppIInspectable** ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};

// System.Object


// System.Diagnostics.Tracing.ConcurrentSetItem`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags>,System.Diagnostics.Tracing.NameInfo>
struct ConcurrentSetItem_2_t1D2C6578D0E33EAABBE11648D81D8671CC1E7154  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.VisualScripting.Namespace
struct Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Namespace Unity.VisualScripting.Namespace::<Root>k__BackingField
	Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * ___U3CRootU3Ek__BackingField_0;
	// Unity.VisualScripting.Namespace Unity.VisualScripting.Namespace::<Parent>k__BackingField
	Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * ___U3CParentU3Ek__BackingField_1;
	// System.String Unity.VisualScripting.Namespace::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_2;
	// System.String Unity.VisualScripting.Namespace::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Boolean Unity.VisualScripting.Namespace::<IsRoot>k__BackingField
	bool ___U3CIsRootU3Ek__BackingField_4;
	// System.Boolean Unity.VisualScripting.Namespace::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CRootU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CRootU3Ek__BackingField_0)); }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * get_U3CRootU3Ek__BackingField_0() const { return ___U3CRootU3Ek__BackingField_0; }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 ** get_address_of_U3CRootU3Ek__BackingField_0() { return &___U3CRootU3Ek__BackingField_0; }
	inline void set_U3CRootU3Ek__BackingField_0(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * value)
	{
		___U3CRootU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRootU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CParentU3Ek__BackingField_1)); }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * get_U3CParentU3Ek__BackingField_1() const { return ___U3CParentU3Ek__BackingField_1; }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 ** get_address_of_U3CParentU3Ek__BackingField_1() { return &___U3CParentU3Ek__BackingField_1; }
	inline void set_U3CParentU3Ek__BackingField_1(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * value)
	{
		___U3CParentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFullNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CFullNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CFullNameU3Ek__BackingField_2() const { return ___U3CFullNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CFullNameU3Ek__BackingField_2() { return &___U3CFullNameU3Ek__BackingField_2; }
	inline void set_U3CFullNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CFullNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFullNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsRootU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CIsRootU3Ek__BackingField_4)); }
	inline bool get_U3CIsRootU3Ek__BackingField_4() const { return ___U3CIsRootU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRootU3Ek__BackingField_4() { return &___U3CIsRootU3Ek__BackingField_4; }
	inline void set_U3CIsRootU3Ek__BackingField_4(bool value)
	{
		___U3CIsRootU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsGlobalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46, ___U3CIsGlobalU3Ek__BackingField_5)); }
	inline bool get_U3CIsGlobalU3Ek__BackingField_5() const { return ___U3CIsGlobalU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsGlobalU3Ek__BackingField_5() { return &___U3CIsGlobalU3Ek__BackingField_5; }
	inline void set_U3CIsGlobalU3Ek__BackingField_5(bool value)
	{
		___U3CIsGlobalU3Ek__BackingField_5 = value;
	}
};

struct Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46_StaticFields
{
public:
	// Unity.VisualScripting.Namespace/Collection Unity.VisualScripting.Namespace::collection
	Collection_tA0822199F92FA2FCB2C0EB6CBF497C6C6F0BA59A * ___collection_6;
	// Unity.VisualScripting.Namespace Unity.VisualScripting.Namespace::<Global>k__BackingField
	Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * ___U3CGlobalU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_collection_6() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46_StaticFields, ___collection_6)); }
	inline Collection_tA0822199F92FA2FCB2C0EB6CBF497C6C6F0BA59A * get_collection_6() const { return ___collection_6; }
	inline Collection_tA0822199F92FA2FCB2C0EB6CBF497C6C6F0BA59A ** get_address_of_collection_6() { return &___collection_6; }
	inline void set_collection_6(Collection_tA0822199F92FA2FCB2C0EB6CBF497C6C6F0BA59A * value)
	{
		___collection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collection_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGlobalU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46_StaticFields, ___U3CGlobalU3Ek__BackingField_7)); }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * get_U3CGlobalU3Ek__BackingField_7() const { return ___U3CGlobalU3Ek__BackingField_7; }
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 ** get_address_of_U3CGlobalU3Ek__BackingField_7() { return &___U3CGlobalU3Ek__BackingField_7; }
	inline void set_U3CGlobalU3Ek__BackingField_7(Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * value)
	{
		___U3CGlobalU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGlobalU3Ek__BackingField_7), (void*)value);
	}
};


// System.Runtime.Serialization.ObjectHolder
struct ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Serialization.ObjectHolder::m_object
	RuntimeObject * ___m_object_0;
	// System.Int64 System.Runtime.Serialization.ObjectHolder::m_id
	int64_t ___m_id_1;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_missingElementsRemaining
	int32_t ___m_missingElementsRemaining_2;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_missingDecendents
	int32_t ___m_missingDecendents_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectHolder::m_serInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___m_serInfo_4;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectHolder::m_surrogate
	RuntimeObject* ___m_surrogate_5;
	// System.Runtime.Serialization.FixupHolderList System.Runtime.Serialization.ObjectHolder::m_missingElements
	FixupHolderList_t98FCFDD9352A87A246F7E475733C94C8A7F86BF8 * ___m_missingElements_6;
	// System.Runtime.Serialization.LongList System.Runtime.Serialization.ObjectHolder::m_dependentObjects
	LongList_tB13F421A6BB4E3BB28AEAA7B91E9A937EB7A7D23 * ___m_dependentObjects_7;
	// System.Runtime.Serialization.ObjectHolder System.Runtime.Serialization.ObjectHolder::m_next
	ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * ___m_next_8;
	// System.Int32 System.Runtime.Serialization.ObjectHolder::m_flags
	int32_t ___m_flags_9;
	// System.Boolean System.Runtime.Serialization.ObjectHolder::m_markForFixupWhenAvailable
	bool ___m_markForFixupWhenAvailable_10;
	// System.Runtime.Serialization.ValueTypeFixupInfo System.Runtime.Serialization.ObjectHolder::m_valueFixup
	ValueTypeFixupInfo_tBA01D7B8EF22CA79A46AA25F4EFCE2B312E9E547 * ___m_valueFixup_11;
	// System.Runtime.Serialization.TypeLoadExceptionHolder System.Runtime.Serialization.ObjectHolder::m_typeLoad
	TypeLoadExceptionHolder_t20AB0C4A3995BE52D344B37DDEFAE330659147E2 * ___m_typeLoad_12;
	// System.Boolean System.Runtime.Serialization.ObjectHolder::m_reachable
	bool ___m_reachable_13;

public:
	inline static int32_t get_offset_of_m_object_0() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_object_0)); }
	inline RuntimeObject * get_m_object_0() const { return ___m_object_0; }
	inline RuntimeObject ** get_address_of_m_object_0() { return &___m_object_0; }
	inline void set_m_object_0(RuntimeObject * value)
	{
		___m_object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_object_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_id_1() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_id_1)); }
	inline int64_t get_m_id_1() const { return ___m_id_1; }
	inline int64_t* get_address_of_m_id_1() { return &___m_id_1; }
	inline void set_m_id_1(int64_t value)
	{
		___m_id_1 = value;
	}

	inline static int32_t get_offset_of_m_missingElementsRemaining_2() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_missingElementsRemaining_2)); }
	inline int32_t get_m_missingElementsRemaining_2() const { return ___m_missingElementsRemaining_2; }
	inline int32_t* get_address_of_m_missingElementsRemaining_2() { return &___m_missingElementsRemaining_2; }
	inline void set_m_missingElementsRemaining_2(int32_t value)
	{
		___m_missingElementsRemaining_2 = value;
	}

	inline static int32_t get_offset_of_m_missingDecendents_3() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_missingDecendents_3)); }
	inline int32_t get_m_missingDecendents_3() const { return ___m_missingDecendents_3; }
	inline int32_t* get_address_of_m_missingDecendents_3() { return &___m_missingDecendents_3; }
	inline void set_m_missingDecendents_3(int32_t value)
	{
		___m_missingDecendents_3 = value;
	}

	inline static int32_t get_offset_of_m_serInfo_4() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_serInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get_m_serInfo_4() const { return ___m_serInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of_m_serInfo_4() { return &___m_serInfo_4; }
	inline void set_m_serInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		___m_serInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_surrogate_5() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_surrogate_5)); }
	inline RuntimeObject* get_m_surrogate_5() const { return ___m_surrogate_5; }
	inline RuntimeObject** get_address_of_m_surrogate_5() { return &___m_surrogate_5; }
	inline void set_m_surrogate_5(RuntimeObject* value)
	{
		___m_surrogate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogate_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_missingElements_6() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_missingElements_6)); }
	inline FixupHolderList_t98FCFDD9352A87A246F7E475733C94C8A7F86BF8 * get_m_missingElements_6() const { return ___m_missingElements_6; }
	inline FixupHolderList_t98FCFDD9352A87A246F7E475733C94C8A7F86BF8 ** get_address_of_m_missingElements_6() { return &___m_missingElements_6; }
	inline void set_m_missingElements_6(FixupHolderList_t98FCFDD9352A87A246F7E475733C94C8A7F86BF8 * value)
	{
		___m_missingElements_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_missingElements_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_dependentObjects_7() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_dependentObjects_7)); }
	inline LongList_tB13F421A6BB4E3BB28AEAA7B91E9A937EB7A7D23 * get_m_dependentObjects_7() const { return ___m_dependentObjects_7; }
	inline LongList_tB13F421A6BB4E3BB28AEAA7B91E9A937EB7A7D23 ** get_address_of_m_dependentObjects_7() { return &___m_dependentObjects_7; }
	inline void set_m_dependentObjects_7(LongList_tB13F421A6BB4E3BB28AEAA7B91E9A937EB7A7D23 * value)
	{
		___m_dependentObjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dependentObjects_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_next_8() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_next_8)); }
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * get_m_next_8() const { return ___m_next_8; }
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A ** get_address_of_m_next_8() { return &___m_next_8; }
	inline void set_m_next_8(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * value)
	{
		___m_next_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_next_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_flags_9() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_flags_9)); }
	inline int32_t get_m_flags_9() const { return ___m_flags_9; }
	inline int32_t* get_address_of_m_flags_9() { return &___m_flags_9; }
	inline void set_m_flags_9(int32_t value)
	{
		___m_flags_9 = value;
	}

	inline static int32_t get_offset_of_m_markForFixupWhenAvailable_10() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_markForFixupWhenAvailable_10)); }
	inline bool get_m_markForFixupWhenAvailable_10() const { return ___m_markForFixupWhenAvailable_10; }
	inline bool* get_address_of_m_markForFixupWhenAvailable_10() { return &___m_markForFixupWhenAvailable_10; }
	inline void set_m_markForFixupWhenAvailable_10(bool value)
	{
		___m_markForFixupWhenAvailable_10 = value;
	}

	inline static int32_t get_offset_of_m_valueFixup_11() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_valueFixup_11)); }
	inline ValueTypeFixupInfo_tBA01D7B8EF22CA79A46AA25F4EFCE2B312E9E547 * get_m_valueFixup_11() const { return ___m_valueFixup_11; }
	inline ValueTypeFixupInfo_tBA01D7B8EF22CA79A46AA25F4EFCE2B312E9E547 ** get_address_of_m_valueFixup_11() { return &___m_valueFixup_11; }
	inline void set_m_valueFixup_11(ValueTypeFixupInfo_tBA01D7B8EF22CA79A46AA25F4EFCE2B312E9E547 * value)
	{
		___m_valueFixup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFixup_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeLoad_12() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_typeLoad_12)); }
	inline TypeLoadExceptionHolder_t20AB0C4A3995BE52D344B37DDEFAE330659147E2 * get_m_typeLoad_12() const { return ___m_typeLoad_12; }
	inline TypeLoadExceptionHolder_t20AB0C4A3995BE52D344B37DDEFAE330659147E2 ** get_address_of_m_typeLoad_12() { return &___m_typeLoad_12; }
	inline void set_m_typeLoad_12(TypeLoadExceptionHolder_t20AB0C4A3995BE52D344B37DDEFAE330659147E2 * value)
	{
		___m_typeLoad_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_typeLoad_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_reachable_13() { return static_cast<int32_t>(offsetof(ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A, ___m_reachable_13)); }
	inline bool get_m_reachable_13() const { return ___m_reachable_13; }
	inline bool* get_address_of_m_reachable_13() { return &___m_reachable_13; }
	inline void set_m_reachable_13(bool value)
	{
		___m_reachable_13 = value;
	}
};


// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName
struct ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98  : public RuntimeObject
{
public:
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<AssemblyDescriptionString>k__BackingField
	String_t* ___U3CAssemblyDescriptionStringU3Ek__BackingField_0;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<TypeName>k__BackingField
	String_t* ___U3CTypeNameU3Ek__BackingField_1;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<ShortAssemblyName>k__BackingField
	String_t* ___U3CShortAssemblyNameU3Ek__BackingField_2;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_3;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<Culture>k__BackingField
	String_t* ___U3CCultureU3Ek__BackingField_4;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<PublicKeyToken>k__BackingField
	String_t* ___U3CPublicKeyTokenU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<GenericParameters>k__BackingField
	List_1_tBB4E3C761B5560BE6149BFBABE9020694810429A * ___U3CGenericParametersU3Ek__BackingField_6;
	// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<GenericParameterCount>k__BackingField
	int32_t ___U3CGenericParameterCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAssemblyDescriptionStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CAssemblyDescriptionStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CAssemblyDescriptionStringU3Ek__BackingField_0() const { return ___U3CAssemblyDescriptionStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAssemblyDescriptionStringU3Ek__BackingField_0() { return &___U3CAssemblyDescriptionStringU3Ek__BackingField_0; }
	inline void set_U3CAssemblyDescriptionStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CAssemblyDescriptionStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssemblyDescriptionStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CTypeNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeNameU3Ek__BackingField_1() const { return ___U3CTypeNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeNameU3Ek__BackingField_1() { return &___U3CTypeNameU3Ek__BackingField_1; }
	inline void set_U3CTypeNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShortAssemblyNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CShortAssemblyNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CShortAssemblyNameU3Ek__BackingField_2() const { return ___U3CShortAssemblyNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CShortAssemblyNameU3Ek__BackingField_2() { return &___U3CShortAssemblyNameU3Ek__BackingField_2; }
	inline void set_U3CShortAssemblyNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CShortAssemblyNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShortAssemblyNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CVersionU3Ek__BackingField_3)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_3() const { return ___U3CVersionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_3() { return &___U3CVersionU3Ek__BackingField_3; }
	inline void set_U3CVersionU3Ek__BackingField_3(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCultureU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CCultureU3Ek__BackingField_4)); }
	inline String_t* get_U3CCultureU3Ek__BackingField_4() const { return ___U3CCultureU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCultureU3Ek__BackingField_4() { return &___U3CCultureU3Ek__BackingField_4; }
	inline void set_U3CCultureU3Ek__BackingField_4(String_t* value)
	{
		___U3CCultureU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCultureU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublicKeyTokenU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CPublicKeyTokenU3Ek__BackingField_5)); }
	inline String_t* get_U3CPublicKeyTokenU3Ek__BackingField_5() const { return ___U3CPublicKeyTokenU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPublicKeyTokenU3Ek__BackingField_5() { return &___U3CPublicKeyTokenU3Ek__BackingField_5; }
	inline void set_U3CPublicKeyTokenU3Ek__BackingField_5(String_t* value)
	{
		___U3CPublicKeyTokenU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPublicKeyTokenU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGenericParametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CGenericParametersU3Ek__BackingField_6)); }
	inline List_1_tBB4E3C761B5560BE6149BFBABE9020694810429A * get_U3CGenericParametersU3Ek__BackingField_6() const { return ___U3CGenericParametersU3Ek__BackingField_6; }
	inline List_1_tBB4E3C761B5560BE6149BFBABE9020694810429A ** get_address_of_U3CGenericParametersU3Ek__BackingField_6() { return &___U3CGenericParametersU3Ek__BackingField_6; }
	inline void set_U3CGenericParametersU3Ek__BackingField_6(List_1_tBB4E3C761B5560BE6149BFBABE9020694810429A * value)
	{
		___U3CGenericParametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGenericParametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGenericParameterCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98, ___U3CGenericParameterCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CGenericParameterCountU3Ek__BackingField_7() const { return ___U3CGenericParameterCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CGenericParameterCountU3Ek__BackingField_7() { return &___U3CGenericParameterCountU3Ek__BackingField_7; }
	inline void set_U3CGenericParameterCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CGenericParameterCountU3Ek__BackingField_7 = value;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t6B044356939312E9F36DCC73BC69F47AB8DD89F7 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t21249B431B3E6DF902035A9CD592DF003798D738* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666, ___firstValue_1)); }
	inline Action_1_t6B044356939312E9F36DCC73BC69F47AB8DD89F7 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t6B044356939312E9F36DCC73BC69F47AB8DD89F7 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t6B044356939312E9F36DCC73BC69F47AB8DD89F7 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666, ___additionalValues_2)); }
	inline Action_1U5BU5D_t21249B431B3E6DF902035A9CD592DF003798D738* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t21249B431B3E6DF902035A9CD592DF003798D738** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t21249B431B3E6DF902035A9CD592DF003798D738* value)
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


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t0C6E2A2037D3706E582CEAE9EA9F367980F9CB67* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A, ___firstValue_1)); }
	inline Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A, ___additionalValues_2)); }
	inline Action_2U5BU5D_t0C6E2A2037D3706E582CEAE9EA9F367980F9CB67* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t0C6E2A2037D3706E582CEAE9EA9F367980F9CB67** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t0C6E2A2037D3706E582CEAE9EA9F367980F9CB67* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t4098972D4090C628421F2D7296BDBD254F949FB4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB, ___firstValue_1)); }
	inline Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB, ___additionalValues_2)); }
	inline Action_3U5BU5D_t4098972D4090C628421F2D7296BDBD254F949FB4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_3U5BU5D_t4098972D4090C628421F2D7296BDBD254F949FB4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_3U5BU5D_t4098972D4090C628421F2D7296BDBD254F949FB4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_tE586104C3A92A328ACA2110051E4E7140AFACE10* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20, ___firstValue_1)); }
	inline Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * get_firstValue_1() const { return ___firstValue_1; }
	inline Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20, ___additionalValues_2)); }
	inline Func_3U5BU5D_tE586104C3A92A328ACA2110051E4E7140AFACE10* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Func_3U5BU5D_tE586104C3A92A328ACA2110051E4E7140AFACE10** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Func_3U5BU5D_tE586104C3A92A328ACA2110051E4E7140AFACE10* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4, ___m_Array_0)); }
	inline NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC* get_m_Array_0() const { return ___m_Array_0; }
	inline NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.XR.MeshId
struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F 
{
public:
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 * ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F, ___device_0)); }
	inline InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 * get_device_0() const { return ___device_0; }
	inline InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_0), (void*)value);
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F, ___userId_1)); }
	inline uint32_t get_userId_1() const { return ___userId_1; }
	inline uint32_t* get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(uint32_t value)
	{
		___userId_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F_marshaled_pinvoke
{
	InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 * ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F_marshaled_com
{
	InputDevice_t932877CB731972B15656CAF1D18E9BCE13B6CE50 * ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7, ___m_Callbacks_1)); }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tE9229B9E0026FAD2BC764B9F9D47C9A606D7E666  value)
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


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC, ___m_Callbacks_1)); }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t9509C393425FAE89E00A5FF4735581E685CDCD5A  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8, ___m_Callbacks_1)); }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t3DF5DE687DA9F4F54C91CB700C616BD27A44C3AB  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A, ___m_Callbacks_1)); }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t2B1A34A7D8030466BBF6973A52B40E7FBB59AE20  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_tE48FE9596BF8E0459266EA21F5CA5C6354E6B2E5* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F, ___firstValue_1)); }
	inline OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F  get_firstValue_1() const { return ___firstValue_1; }
	inline OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(OngoingAccountSelection_tCA70C45A030C426241A270FA00A9786C50A6002F  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___device_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F, ___additionalValues_2)); }
	inline OngoingAccountSelectionU5BU5D_tE48FE9596BF8E0459266EA21F5CA5C6354E6B2E5* get_additionalValues_2() const { return ___additionalValues_2; }
	inline OngoingAccountSelectionU5BU5D_tE48FE9596BF8E0459266EA21F5CA5C6354E6B2E5** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(OngoingAccountSelectionU5BU5D_tE48FE9596BF8E0459266EA21F5CA5C6354E6B2E5* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventTags
struct EventTags_t6712DD5B62AA97E89B779D09C0E33F384A19ABD3 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventTags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventTags_t6712DD5B62AA97E89B779D09C0E33F384A19ABD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GestureInputType
struct GestureInputType_t48C1114DC238A36AEB1D86080D115B053CBD722E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureInputType_t48C1114DC238A36AEB1D86080D115B053CBD722E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshChangeState
struct MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4  ___U3CparametersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C, ___U3CparametersU3Ek__BackingField_1)); }
	inline ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4  get_U3CparametersU3Ek__BackingField_1() const { return ___U3CparametersU3Ek__BackingField_1; }
	inline ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4 * get_address_of_U3CparametersU3Ek__BackingField_1() { return &___U3CparametersU3Ek__BackingField_1; }
	inline void set_U3CparametersU3Ek__BackingField_1(ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4  value)
	{
		___U3CparametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4  ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t37FD3674BAF266BFED238DB22E3FA708545B8DA4  ___U3CparametersU3Ek__BackingField_1;
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

// Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode
struct ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Name
	String_t* ___Name_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Offset_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Radius
	float ___Radius_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Transform_3;
	// UnityEngine.Collider[] Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode::Colliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___Colliders_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E, ___Offset_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Offset_1() const { return ___Offset_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Radius_2() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E, ___Radius_2)); }
	inline float get_Radius_2() const { return ___Radius_2; }
	inline float* get_address_of_Radius_2() { return &___Radius_2; }
	inline void set_Radius_2(float value)
	{
		___Radius_2 = value;
	}

	inline static int32_t get_offset_of_Transform_3() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E, ___Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Transform_3() const { return ___Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Transform_3() { return &___Transform_3; }
	inline void set_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Transform_3), (void*)value);
	}

	inline static int32_t get_offset_of_Colliders_4() { return static_cast<int32_t>(offsetof(ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E, ___Colliders_4)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_Colliders_4() const { return ___Colliders_4; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_Colliders_4() { return &___Colliders_4; }
	inline void set_Colliders_4(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___Colliders_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colliders_4), (void*)value);
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Intersection_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Velocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData
struct ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData::radiusInMeter
	float ___radiusInMeter_1;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData::intensity
	float ___intensity_2;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData::rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotation_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_radiusInMeter_1() { return static_cast<int32_t>(offsetof(ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED, ___radiusInMeter_1)); }
	inline float get_radiusInMeter_1() const { return ___radiusInMeter_1; }
	inline float* get_address_of_radiusInMeter_1() { return &___radiusInMeter_1; }
	inline void set_radiusInMeter_1(float value)
	{
		___radiusInMeter_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED, ___intensity_2)); }
	inline float get_intensity_2() const { return ___intensity_2; }
	inline float* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(float value)
	{
		___intensity_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED, ___color_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_3() const { return ___color_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED, ___rotation_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotation_4() const { return ___rotation_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotation_4 = value;
	}
};


// UnityEngine.Events.PersistentListenerMode
struct PersistentListenerMode_t8C14676A2C0B75B241D48EDF3BEC3956E768DEED 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t8C14676A2C0B75B241D48EDF3BEC3956E768DEED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.PinMode
struct PinMode_tF507FB616EC5618CCD6159687D500FE3E87AF2C8 
{
public:
	// System.Int32 Uduino.PinMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PinMode_tF507FB616EC5618CCD6159687D500FE3E87AF2C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.PlayerNotifications
struct PlayerNotifications_tC7D0E3D641827E0E3DB5F00533AF01B34BAE8F0E 
{
public:
	// System.Int32 UnityEngine.InputSystem.PlayerNotifications::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerNotifications_tC7D0E3D641827E0E3DB5F00533AF01B34BAE8F0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.MixedReality.Toolkit.UI.SliderAxis
struct SliderAxis_t678A81BAF2FC7FB65D2DCE532AB425CDD4C3BFE2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.SliderAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SliderAxis_t678A81BAF2FC7FB65D2DCE532AB425CDD4C3BFE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct SupportedPlatforms_tB8BE01FCCB7C5E29F0BDE8B83D22C7BE84F7A1D8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tB8BE01FCCB7C5E29F0BDE8B83D22C7BE84F7A1D8, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Input.TouchableEventType
struct TouchableEventType_t0A8DA88A716660DD13782401F83F81A28E10BAB0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.TouchableEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchableEventType_t0A8DA88A716660DD13782401F83F81A28E10BAB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Events.UnityEventCallState
struct UnityEventCallState_t0C02178C38AC6CEA1C9CEAF96EFD05FE755C14A5 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityEventCallState_t0C02178C38AC6CEA1C9CEAF96EFD05FE755C14A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis>
struct Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.MeshInfo
struct MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D, ___componentType_0)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D_marshaled_pinvoke
{
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D_marshaled_com
{
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___settingsProfile_4;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40 
{
public:
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<KeyCode>k__BackingField
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<AxisCodeX>k__BackingField
	String_t* ___U3CAxisCodeXU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<AxisCodeY>k__BackingField
	String_t* ___U3CAxisCodeYU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<InvertXAxis>k__BackingField
	bool ___U3CInvertXAxisU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<InvertYAxis>k__BackingField
	bool ___U3CInvertYAxisU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CKeyCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40, ___U3CKeyCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CKeyCodeU3Ek__BackingField_0() const { return ___U3CKeyCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CKeyCodeU3Ek__BackingField_0() { return &___U3CKeyCodeU3Ek__BackingField_0; }
	inline void set_U3CKeyCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CKeyCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAxisCodeXU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40, ___U3CAxisCodeXU3Ek__BackingField_1)); }
	inline String_t* get_U3CAxisCodeXU3Ek__BackingField_1() const { return ___U3CAxisCodeXU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAxisCodeXU3Ek__BackingField_1() { return &___U3CAxisCodeXU3Ek__BackingField_1; }
	inline void set_U3CAxisCodeXU3Ek__BackingField_1(String_t* value)
	{
		___U3CAxisCodeXU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAxisCodeXU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAxisCodeYU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40, ___U3CAxisCodeYU3Ek__BackingField_2)); }
	inline String_t* get_U3CAxisCodeYU3Ek__BackingField_2() const { return ___U3CAxisCodeYU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAxisCodeYU3Ek__BackingField_2() { return &___U3CAxisCodeYU3Ek__BackingField_2; }
	inline void set_U3CAxisCodeYU3Ek__BackingField_2(String_t* value)
	{
		___U3CAxisCodeYU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAxisCodeYU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInvertXAxisU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40, ___U3CInvertXAxisU3Ek__BackingField_3)); }
	inline bool get_U3CInvertXAxisU3Ek__BackingField_3() const { return ___U3CInvertXAxisU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CInvertXAxisU3Ek__BackingField_3() { return &___U3CInvertXAxisU3Ek__BackingField_3; }
	inline void set_U3CInvertXAxisU3Ek__BackingField_3(bool value)
	{
		___U3CInvertXAxisU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInvertYAxisU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40, ___U3CInvertYAxisU3Ek__BackingField_4)); }
	inline bool get_U3CInvertYAxisU3Ek__BackingField_4() const { return ___U3CInvertYAxisU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CInvertYAxisU3Ek__BackingField_4() { return &___U3CInvertYAxisU3Ek__BackingField_4; }
	inline void set_U3CInvertYAxisU3Ek__BackingField_4(bool value)
	{
		___U3CInvertYAxisU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40_marshaled_pinvoke
{
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	char* ___U3CAxisCodeXU3Ek__BackingField_1;
	char* ___U3CAxisCodeYU3Ek__BackingField_2;
	int32_t ___U3CInvertXAxisU3Ek__BackingField_3;
	int32_t ___U3CInvertYAxisU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40_marshaled_com
{
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	Il2CppChar* ___U3CAxisCodeXU3Ek__BackingField_1;
	Il2CppChar* ___U3CAxisCodeYU3Ek__BackingField_2;
	int32_t ___U3CInvertXAxisU3Ek__BackingField_3;
	int32_t ___U3CInvertYAxisU3Ek__BackingField_4;
};

// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_3), (void*)value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fqname_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopename_6), (void*)value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeNameIgnoreCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.Diagnostics.Tracing.NameInfo
struct NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6  : public ConcurrentSetItem_2_t1D2C6578D0E33EAABBE11648D81D8671CC1E7154
{
public:
	// System.String System.Diagnostics.Tracing.NameInfo::name
	String_t* ___name_1;
	// System.Diagnostics.Tracing.EventTags System.Diagnostics.Tracing.NameInfo::tags
	int32_t ___tags_2;
	// System.Int32 System.Diagnostics.Tracing.NameInfo::identity
	int32_t ___identity_3;
	// System.Byte[] System.Diagnostics.Tracing.NameInfo::nameMetadata
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___nameMetadata_4;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_tags_2() { return static_cast<int32_t>(offsetof(NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6, ___tags_2)); }
	inline int32_t get_tags_2() const { return ___tags_2; }
	inline int32_t* get_address_of_tags_2() { return &___tags_2; }
	inline void set_tags_2(int32_t value)
	{
		___tags_2 = value;
	}

	inline static int32_t get_offset_of_identity_3() { return static_cast<int32_t>(offsetof(NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6, ___identity_3)); }
	inline int32_t get_identity_3() const { return ___identity_3; }
	inline int32_t* get_address_of_identity_3() { return &___identity_3; }
	inline void set_identity_3(int32_t value)
	{
		___identity_3 = value;
	}

	inline static int32_t get_offset_of_nameMetadata_4() { return static_cast<int32_t>(offsetof(NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6, ___nameMetadata_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_nameMetadata_4() const { return ___nameMetadata_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_nameMetadata_4() { return &___nameMetadata_4; }
	inline void set_nameMetadata_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___nameMetadata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameMetadata_4), (void*)value);
	}
};

struct NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6_StaticFields
{
public:
	// System.Int32 System.Diagnostics.Tracing.NameInfo::lastIdentity
	int32_t ___lastIdentity_0;

public:
	inline static int32_t get_offset_of_lastIdentity_0() { return static_cast<int32_t>(offsetof(NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6_StaticFields, ___lastIdentity_0)); }
	inline int32_t get_lastIdentity_0() const { return ___lastIdentity_0; }
	inline int32_t* get_address_of_lastIdentity_0() { return &___lastIdentity_0; }
	inline void set_lastIdentity_0(int32_t value)
	{
		___lastIdentity_0 = value;
	}
};


// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// UnityEngine.Events.PersistentCall
struct PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_TargetAssemblyTypeName
	String_t* ___m_TargetAssemblyTypeName_1;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_2;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_3;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * ___m_Arguments_4;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Target_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_TargetAssemblyTypeName_1)); }
	inline String_t* get_m_TargetAssemblyTypeName_1() const { return ___m_TargetAssemblyTypeName_1; }
	inline String_t** get_address_of_m_TargetAssemblyTypeName_1() { return &___m_TargetAssemblyTypeName_1; }
	inline void set_m_TargetAssemblyTypeName_1(String_t* value)
	{
		___m_TargetAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetAssemblyTypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MethodName_2() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_MethodName_2)); }
	inline String_t* get_m_MethodName_2() const { return ___m_MethodName_2; }
	inline String_t** get_address_of_m_MethodName_2() { return &___m_MethodName_2; }
	inline void set_m_MethodName_2(String_t* value)
	{
		___m_MethodName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MethodName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mode_3() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Mode_3)); }
	inline int32_t get_m_Mode_3() const { return ___m_Mode_3; }
	inline int32_t* get_address_of_m_Mode_3() { return &___m_Mode_3; }
	inline void set_m_Mode_3(int32_t value)
	{
		___m_Mode_3 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_4() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_Arguments_4)); }
	inline ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * get_m_Arguments_4() const { return ___m_Arguments_4; }
	inline ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 ** get_address_of_m_Arguments_4() { return &___m_Arguments_4; }
	inline void set_m_Arguments_4(ArgumentCache_t4D7FB57CCBE856231DAF2D883AD4C1EB6726CB27 * value)
	{
		___m_Arguments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Arguments_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallState_5() { return static_cast<int32_t>(offsetof(PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9, ___m_CallState_5)); }
	inline int32_t get_m_CallState_5() const { return ___m_CallState_5; }
	inline int32_t* get_address_of_m_CallState_5() { return &___m_CallState_5; }
	inline void set_m_CallState_5(int32_t value)
	{
		___m_CallState_5 = value;
	}
};


// Uduino.Pin
struct Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459  : public RuntimeObject
{
public:
	// Uduino.UduinoManager Uduino.Pin::manager
	UduinoManager_t2A3AF214E4C7B5FFFCBC480E213BC4BB579EA768 * ___manager_0;
	// Uduino.UduinoDevice Uduino.Pin::device
	UduinoDevice_t52CA447181BAE51803B38F8BD20350ECFF87FC2F * ___device_1;
	// System.String Uduino.Pin::arduinoName
	String_t* ___arduinoName_2;
	// Uduino.PinMode Uduino.Pin::pinMode
	int32_t ___pinMode_3;
	// Uduino.PinMode Uduino.Pin::prevPinMode
	int32_t ___prevPinMode_4;
	// System.Int32 Uduino.Pin::currentPin
	int32_t ___currentPin_5;
	// System.Int32 Uduino.Pin::prevPin
	int32_t ___prevPin_6;
	// System.Boolean Uduino.Pin::isEditorPin
	bool ___isEditorPin_7;
	// System.Boolean Uduino.Pin::isInit
	bool ___isInit_8;
	// System.Int32 Uduino.Pin::sendValue
	int32_t ___sendValue_9;
	// System.Int32 Uduino.Pin::prevSendValue
	int32_t ___prevSendValue_10;
	// System.Int32 Uduino.Pin::lastReadValue
	int32_t ___lastReadValue_11;

public:
	inline static int32_t get_offset_of_manager_0() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___manager_0)); }
	inline UduinoManager_t2A3AF214E4C7B5FFFCBC480E213BC4BB579EA768 * get_manager_0() const { return ___manager_0; }
	inline UduinoManager_t2A3AF214E4C7B5FFFCBC480E213BC4BB579EA768 ** get_address_of_manager_0() { return &___manager_0; }
	inline void set_manager_0(UduinoManager_t2A3AF214E4C7B5FFFCBC480E213BC4BB579EA768 * value)
	{
		___manager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_0), (void*)value);
	}

	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___device_1)); }
	inline UduinoDevice_t52CA447181BAE51803B38F8BD20350ECFF87FC2F * get_device_1() const { return ___device_1; }
	inline UduinoDevice_t52CA447181BAE51803B38F8BD20350ECFF87FC2F ** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(UduinoDevice_t52CA447181BAE51803B38F8BD20350ECFF87FC2F * value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_1), (void*)value);
	}

	inline static int32_t get_offset_of_arduinoName_2() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___arduinoName_2)); }
	inline String_t* get_arduinoName_2() const { return ___arduinoName_2; }
	inline String_t** get_address_of_arduinoName_2() { return &___arduinoName_2; }
	inline void set_arduinoName_2(String_t* value)
	{
		___arduinoName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arduinoName_2), (void*)value);
	}

	inline static int32_t get_offset_of_pinMode_3() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___pinMode_3)); }
	inline int32_t get_pinMode_3() const { return ___pinMode_3; }
	inline int32_t* get_address_of_pinMode_3() { return &___pinMode_3; }
	inline void set_pinMode_3(int32_t value)
	{
		___pinMode_3 = value;
	}

	inline static int32_t get_offset_of_prevPinMode_4() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___prevPinMode_4)); }
	inline int32_t get_prevPinMode_4() const { return ___prevPinMode_4; }
	inline int32_t* get_address_of_prevPinMode_4() { return &___prevPinMode_4; }
	inline void set_prevPinMode_4(int32_t value)
	{
		___prevPinMode_4 = value;
	}

	inline static int32_t get_offset_of_currentPin_5() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___currentPin_5)); }
	inline int32_t get_currentPin_5() const { return ___currentPin_5; }
	inline int32_t* get_address_of_currentPin_5() { return &___currentPin_5; }
	inline void set_currentPin_5(int32_t value)
	{
		___currentPin_5 = value;
	}

	inline static int32_t get_offset_of_prevPin_6() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___prevPin_6)); }
	inline int32_t get_prevPin_6() const { return ___prevPin_6; }
	inline int32_t* get_address_of_prevPin_6() { return &___prevPin_6; }
	inline void set_prevPin_6(int32_t value)
	{
		___prevPin_6 = value;
	}

	inline static int32_t get_offset_of_isEditorPin_7() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___isEditorPin_7)); }
	inline bool get_isEditorPin_7() const { return ___isEditorPin_7; }
	inline bool* get_address_of_isEditorPin_7() { return &___isEditorPin_7; }
	inline void set_isEditorPin_7(bool value)
	{
		___isEditorPin_7 = value;
	}

	inline static int32_t get_offset_of_isInit_8() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___isInit_8)); }
	inline bool get_isInit_8() const { return ___isInit_8; }
	inline bool* get_address_of_isInit_8() { return &___isInit_8; }
	inline void set_isInit_8(bool value)
	{
		___isInit_8 = value;
	}

	inline static int32_t get_offset_of_sendValue_9() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___sendValue_9)); }
	inline int32_t get_sendValue_9() const { return ___sendValue_9; }
	inline int32_t* get_address_of_sendValue_9() { return &___sendValue_9; }
	inline void set_sendValue_9(int32_t value)
	{
		___sendValue_9 = value;
	}

	inline static int32_t get_offset_of_prevSendValue_10() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___prevSendValue_10)); }
	inline int32_t get_prevSendValue_10() const { return ___prevSendValue_10; }
	inline int32_t* get_address_of_prevSendValue_10() { return &___prevSendValue_10; }
	inline void set_prevSendValue_10(int32_t value)
	{
		___prevSendValue_10 = value;
	}

	inline static int32_t get_offset_of_lastReadValue_11() { return static_cast<int32_t>(offsetof(Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459, ___lastReadValue_11)); }
	inline int32_t get_lastReadValue_11() const { return ___lastReadValue_11; }
	inline int32_t* get_address_of_lastReadValue_11() { return &___lastReadValue_11; }
	inline void set_lastReadValue_11(int32_t value)
	{
		___lastReadValue_11 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceObject_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846 
{
public:
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_tCA1FDE16A1400AAD3547FB64188338E5390E4DDB* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t73F388F47FA3589675EF39A026BE26BAEEC732D1* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F  ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8  ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC  ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A  ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t3FE2882F62414F518256A76FD0447626D64A034A * ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;

public:
	inline static int32_t get_offset_of_pairingStateVersion_0() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___pairingStateVersion_0)); }
	inline int32_t get_pairingStateVersion_0() const { return ___pairingStateVersion_0; }
	inline int32_t* get_address_of_pairingStateVersion_0() { return &___pairingStateVersion_0; }
	inline void set_pairingStateVersion_0(int32_t value)
	{
		___pairingStateVersion_0 = value;
	}

	inline static int32_t get_offset_of_lastUserId_1() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___lastUserId_1)); }
	inline uint32_t get_lastUserId_1() const { return ___lastUserId_1; }
	inline uint32_t* get_address_of_lastUserId_1() { return &___lastUserId_1; }
	inline void set_lastUserId_1(uint32_t value)
	{
		___lastUserId_1 = value;
	}

	inline static int32_t get_offset_of_allUserCount_2() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allUserCount_2)); }
	inline int32_t get_allUserCount_2() const { return ___allUserCount_2; }
	inline int32_t* get_address_of_allUserCount_2() { return &___allUserCount_2; }
	inline void set_allUserCount_2(int32_t value)
	{
		___allUserCount_2 = value;
	}

	inline static int32_t get_offset_of_allPairedDeviceCount_3() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allPairedDeviceCount_3)); }
	inline int32_t get_allPairedDeviceCount_3() const { return ___allPairedDeviceCount_3; }
	inline int32_t* get_address_of_allPairedDeviceCount_3() { return &___allPairedDeviceCount_3; }
	inline void set_allPairedDeviceCount_3(int32_t value)
	{
		___allPairedDeviceCount_3 = value;
	}

	inline static int32_t get_offset_of_allLostDeviceCount_4() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allLostDeviceCount_4)); }
	inline int32_t get_allLostDeviceCount_4() const { return ___allLostDeviceCount_4; }
	inline int32_t* get_address_of_allLostDeviceCount_4() { return &___allLostDeviceCount_4; }
	inline void set_allLostDeviceCount_4(int32_t value)
	{
		___allLostDeviceCount_4 = value;
	}

	inline static int32_t get_offset_of_allUsers_5() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allUsers_5)); }
	inline InputUserU5BU5D_tCA1FDE16A1400AAD3547FB64188338E5390E4DDB* get_allUsers_5() const { return ___allUsers_5; }
	inline InputUserU5BU5D_tCA1FDE16A1400AAD3547FB64188338E5390E4DDB** get_address_of_allUsers_5() { return &___allUsers_5; }
	inline void set_allUsers_5(InputUserU5BU5D_tCA1FDE16A1400AAD3547FB64188338E5390E4DDB* value)
	{
		___allUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_allUserData_6() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allUserData_6)); }
	inline UserDataU5BU5D_t73F388F47FA3589675EF39A026BE26BAEEC732D1* get_allUserData_6() const { return ___allUserData_6; }
	inline UserDataU5BU5D_t73F388F47FA3589675EF39A026BE26BAEEC732D1** get_address_of_allUserData_6() { return &___allUserData_6; }
	inline void set_allUserData_6(UserDataU5BU5D_t73F388F47FA3589675EF39A026BE26BAEEC732D1* value)
	{
		___allUserData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allUserData_6), (void*)value);
	}

	inline static int32_t get_offset_of_allPairedDevices_7() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allPairedDevices_7)); }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* get_allPairedDevices_7() const { return ___allPairedDevices_7; }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB** get_address_of_allPairedDevices_7() { return &___allPairedDevices_7; }
	inline void set_allPairedDevices_7(InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* value)
	{
		___allPairedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allPairedDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_allLostDevices_8() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___allLostDevices_8)); }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* get_allLostDevices_8() const { return ___allLostDevices_8; }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB** get_address_of_allLostDevices_8() { return &___allLostDevices_8; }
	inline void set_allLostDevices_8(InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* value)
	{
		___allLostDevices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLostDevices_8), (void*)value);
	}

	inline static int32_t get_offset_of_ongoingAccountSelections_9() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___ongoingAccountSelections_9)); }
	inline InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F  get_ongoingAccountSelections_9() const { return ___ongoingAccountSelections_9; }
	inline InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F * get_address_of_ongoingAccountSelections_9() { return &___ongoingAccountSelections_9; }
	inline void set_ongoingAccountSelections_9(InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F  value)
	{
		___ongoingAccountSelections_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___ongoingAccountSelections_9))->___firstValue_1))->___device_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ongoingAccountSelections_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onChange_10() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onChange_10)); }
	inline CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8  get_onChange_10() const { return ___onChange_10; }
	inline CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8 * get_address_of_onChange_10() { return &___onChange_10; }
	inline void set_onChange_10(CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8  value)
	{
		___onChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onUnpairedDeviceUsed_11() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onUnpairedDeviceUsed_11)); }
	inline CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC  get_onUnpairedDeviceUsed_11() const { return ___onUnpairedDeviceUsed_11; }
	inline CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC * get_address_of_onUnpairedDeviceUsed_11() { return &___onUnpairedDeviceUsed_11; }
	inline void set_onUnpairedDeviceUsed_11(CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC  value)
	{
		___onUnpairedDeviceUsed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onPreFilterUnpairedDeviceUsed_12() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onPreFilterUnpairedDeviceUsed_12)); }
	inline CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A  get_onPreFilterUnpairedDeviceUsed_12() const { return ___onPreFilterUnpairedDeviceUsed_12; }
	inline CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A * get_address_of_onPreFilterUnpairedDeviceUsed_12() { return &___onPreFilterUnpairedDeviceUsed_12; }
	inline void set_onPreFilterUnpairedDeviceUsed_12(CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A  value)
	{
		___onPreFilterUnpairedDeviceUsed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_actionChangeDelegate_13() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___actionChangeDelegate_13)); }
	inline Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * get_actionChangeDelegate_13() const { return ___actionChangeDelegate_13; }
	inline Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F ** get_address_of_actionChangeDelegate_13() { return &___actionChangeDelegate_13; }
	inline void set_actionChangeDelegate_13(Action_2_t12B70C073E22394CA70C7855F3A95E407E5CD42F * value)
	{
		___actionChangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionChangeDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onDeviceChangeDelegate_14() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onDeviceChangeDelegate_14)); }
	inline Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * get_onDeviceChangeDelegate_14() const { return ___onDeviceChangeDelegate_14; }
	inline Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 ** get_address_of_onDeviceChangeDelegate_14() { return &___onDeviceChangeDelegate_14; }
	inline void set_onDeviceChangeDelegate_14(Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * value)
	{
		___onDeviceChangeDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDeviceChangeDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onEventDelegate_15() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onEventDelegate_15)); }
	inline Action_2_t3FE2882F62414F518256A76FD0447626D64A034A * get_onEventDelegate_15() const { return ___onEventDelegate_15; }
	inline Action_2_t3FE2882F62414F518256A76FD0447626D64A034A ** get_address_of_onEventDelegate_15() { return &___onEventDelegate_15; }
	inline void set_onEventDelegate_15(Action_2_t3FE2882F62414F518256A76FD0447626D64A034A * value)
	{
		___onEventDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onEventDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onActionChangeHooked_16() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onActionChangeHooked_16)); }
	inline bool get_onActionChangeHooked_16() const { return ___onActionChangeHooked_16; }
	inline bool* get_address_of_onActionChangeHooked_16() { return &___onActionChangeHooked_16; }
	inline void set_onActionChangeHooked_16(bool value)
	{
		___onActionChangeHooked_16 = value;
	}

	inline static int32_t get_offset_of_onDeviceChangeHooked_17() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onDeviceChangeHooked_17)); }
	inline bool get_onDeviceChangeHooked_17() const { return ___onDeviceChangeHooked_17; }
	inline bool* get_address_of_onDeviceChangeHooked_17() { return &___onDeviceChangeHooked_17; }
	inline void set_onDeviceChangeHooked_17(bool value)
	{
		___onDeviceChangeHooked_17 = value;
	}

	inline static int32_t get_offset_of_onEventHooked_18() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___onEventHooked_18)); }
	inline bool get_onEventHooked_18() const { return ___onEventHooked_18; }
	inline bool* get_address_of_onEventHooked_18() { return &___onEventHooked_18; }
	inline void set_onEventHooked_18(bool value)
	{
		___onEventHooked_18 = value;
	}

	inline static int32_t get_offset_of_listenForUnpairedDeviceActivity_19() { return static_cast<int32_t>(offsetof(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846, ___listenForUnpairedDeviceActivity_19)); }
	inline int32_t get_listenForUnpairedDeviceActivity_19() const { return ___listenForUnpairedDeviceActivity_19; }
	inline int32_t* get_address_of_listenForUnpairedDeviceActivity_19() { return &___listenForUnpairedDeviceActivity_19; }
	inline void set_listenForUnpairedDeviceActivity_19(int32_t value)
	{
		___listenForUnpairedDeviceActivity_19 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26 * ___allUsers_5;
	UserData_t3995EF8443FFC017103BB0A01A0D1AC9859B8962_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allPairedDevices_7;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allLostDevices_8;
	InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F  ___ongoingAccountSelections_9;
	CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8  ___onChange_10;
	CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC  ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A  ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26 * ___allUsers_5;
	UserData_t3995EF8443FFC017103BB0A01A0D1AC9859B8962_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allPairedDevices_7;
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___allLostDevices_8;
	InlinedArray_1_t014FE7143EAB8B104BD89FB62D5236263876919F  ___ongoingAccountSelections_9;
	CallbackArray_1_t553B9801BEEB2EB4E6508055DBFAFDD2AD6E5BF8  ___onChange_10;
	CallbackArray_1_t0A3F585F56E46E9FB080BDAE1093ABD18C0985DC  ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t3B74FC3639BEC62A2D3C6FAD8BEE73DB63C76B6A  ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.Users.InputUser
struct InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26 
{
public:
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26, ___m_Id_1)); }
	inline uint32_t get_m_Id_1() const { return ___m_Id_1; }
	inline uint32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(uint32_t value)
	{
		___m_Id_1 = value;
	}
};

struct InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26_StaticFields
{
public:
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846  ___s_GlobalState_2;

public:
	inline static int32_t get_offset_of_s_GlobalState_2() { return static_cast<int32_t>(offsetof(InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26_StaticFields, ___s_GlobalState_2)); }
	inline GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846  get_s_GlobalState_2() const { return ___s_GlobalState_2; }
	inline GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846 * get_address_of_s_GlobalState_2() { return &___s_GlobalState_2; }
	inline void set_s_GlobalState_2(GlobalState_t1D79C0A76EA6EB831FB99715367800185627E846  value)
	{
		___s_GlobalState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allUsers_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allUserData_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allPairedDevices_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allLostDevices_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___ongoingAccountSelections_9))->___firstValue_1))->___device_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___ongoingAccountSelections_9))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___actionChangeDelegate_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___onDeviceChangeDelegate_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___onEventDelegate_15), (void*)NULL);
		#endif
	}
};


// System.Runtime.Serialization.MemberHolder
struct MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.MemberHolder::memberType
	Type_t * ___memberType_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.MemberHolder::context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context_1;

public:
	inline static int32_t get_offset_of_memberType_0() { return static_cast<int32_t>(offsetof(MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB, ___memberType_0)); }
	inline Type_t * get_memberType_0() const { return ___memberType_0; }
	inline Type_t ** get_address_of_memberType_0() { return &___memberType_0; }
	inline void set_memberType_0(Type_t * value)
	{
		___memberType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberType_0), (void*)value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB, ___context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_context_1() const { return ___context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___context_1))->___m_additionalContext_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___action_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_0), (void*)value);
	}

	inline static int32_t get_offset_of_gestureType_1() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84, ___gestureType_1)); }
	inline int32_t get_gestureType_1() const { return ___gestureType_1; }
	inline int32_t* get_address_of_gestureType_1() { return &___gestureType_1; }
	inline void set_gestureType_1(int32_t value)
	{
		___gestureType_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84, ___action_2)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_2))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com ___action_2;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping
struct MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping::axisType
	int32_t ___axisType_1;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping::inputType
	int32_t ___inputType_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping::inputAction
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___inputAction_3;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_0), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_1() { return static_cast<int32_t>(offsetof(MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879, ___axisType_1)); }
	inline int32_t get_axisType_1() const { return ___axisType_1; }
	inline int32_t* get_address_of_axisType_1() { return &___axisType_1; }
	inline void set_axisType_1(int32_t value)
	{
		___axisType_1 = value;
	}

	inline static int32_t get_offset_of_inputType_2() { return static_cast<int32_t>(offsetof(MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879, ___inputType_2)); }
	inline int32_t get_inputType_2() const { return ___inputType_2; }
	inline int32_t* get_address_of_inputType_2() { return &___inputType_2; }
	inline void set_inputType_2(int32_t value)
	{
		___inputType_2 = value;
	}

	inline static int32_t get_offset_of_inputAction_3() { return static_cast<int32_t>(offsetof(MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879, ___inputAction_3)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_inputAction_3() const { return ___inputAction_3; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_inputAction_3() { return &___inputAction_3; }
	inline void set_inputAction_3(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___inputAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_3))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputAction_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___poseData_17)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___poseData_17 = value;
	}
};


// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3  ___U3CvalueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37, ___U3CvalueU3Ek__BackingField_2)); }
	inline PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3  get_U3CvalueU3Ek__BackingField_2() const { return ___U3CvalueU3Ek__BackingField_2; }
	inline PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3 * get_address_of_U3CvalueU3Ek__BackingField_2() { return &___U3CvalueU3Ek__BackingField_2; }
	inline void set_U3CvalueU3Ek__BackingField_2(PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3  value)
	{
		___U3CvalueU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tA6A5663008BE411709FB15D3751E66EBF547B6F3_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureIdInternal_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___featureIdInternal_9)); }
	inline String_t* get_featureIdInternal_9() const { return ___featureIdInternal_9; }
	inline String_t** get_address_of_featureIdInternal_9() { return &___featureIdInternal_9; }
	inline void set_featureIdInternal_9(String_t* value)
	{
		___featureIdInternal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureIdInternal_9), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_10)); }
	inline String_t* get_openxrExtensionStrings_10() const { return ___openxrExtensionStrings_10; }
	inline String_t** get_address_of_openxrExtensionStrings_10() { return &___openxrExtensionStrings_10; }
	inline void set_openxrExtensionStrings_10(String_t* value)
	{
		___openxrExtensionStrings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_10), (void*)value);
	}

	inline static int32_t get_offset_of_company_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_11)); }
	inline String_t* get_company_11() const { return ___company_11; }
	inline String_t** get_address_of_company_11() { return &___company_11; }
	inline void set_company_11(String_t* value)
	{
		___company_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_11), (void*)value);
	}

	inline static int32_t get_offset_of_priority_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_12)); }
	inline int32_t get_priority_12() const { return ___priority_12; }
	inline int32_t* get_address_of_priority_12() { return &___priority_12; }
	inline void set_priority_12(int32_t value)
	{
		___priority_12 = value;
	}

	inline static int32_t get_offset_of_required_13() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_13)); }
	inline bool get_required_13() const { return ___required_13; }
	inline bool* get_address_of_required_13() { return &___required_13; }
	inline void set_required_13(bool value)
	{
		___required_13 = value;
	}

	inline static int32_t get_offset_of_internalFieldsUpdated_14() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___internalFieldsUpdated_14)); }
	inline bool get_internalFieldsUpdated_14() const { return ___internalFieldsUpdated_14; }
	inline bool* get_address_of_internalFieldsUpdated_14() { return &___internalFieldsUpdated_14; }
	inline void set_internalFieldsUpdated_14(bool value)
	{
		___internalFieldsUpdated_14 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:

public:
};

struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::m_CreatedActionMaps
	List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * ___m_CreatedActionMaps_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/InteractionProfileType,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::m_InteractionProfileEnabledMaps
	Dictionary_2_t94AD2FD9BACFB3E1D767F33B06365B6C5C665DC4 * ___m_InteractionProfileEnabledMaps_17;

public:
	inline static int32_t get_offset_of_m_CreatedActionMaps_16() { return static_cast<int32_t>(offsetof(OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43_StaticFields, ___m_CreatedActionMaps_16)); }
	inline List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * get_m_CreatedActionMaps_16() const { return ___m_CreatedActionMaps_16; }
	inline List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 ** get_address_of_m_CreatedActionMaps_16() { return &___m_CreatedActionMaps_16; }
	inline void set_m_CreatedActionMaps_16(List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * value)
	{
		___m_CreatedActionMaps_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreatedActionMaps_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionProfileEnabledMaps_17() { return static_cast<int32_t>(offsetof(OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43_StaticFields, ___m_InteractionProfileEnabledMaps_17)); }
	inline Dictionary_2_t94AD2FD9BACFB3E1D767F33B06365B6C5C665DC4 * get_m_InteractionProfileEnabledMaps_17() const { return ___m_InteractionProfileEnabledMaps_17; }
	inline Dictionary_2_t94AD2FD9BACFB3E1D767F33B06365B6C5C665DC4 ** get_address_of_m_InteractionProfileEnabledMaps_17() { return &___m_InteractionProfileEnabledMaps_17; }
	inline void set_m_InteractionProfileEnabledMaps_17(Dictionary_2_t94AD2FD9BACFB3E1D767F33B06365B6C5C665DC4 * value)
	{
		___m_InteractionProfileEnabledMaps_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionProfileEnabledMaps_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.BaseMeshOutline
struct BaseMeshOutline_t7497123FDBE7448DC043FBFA8DB12BB36AAB690E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Utilities.BaseMeshOutline::outlineMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outlineMaterial_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.BaseMeshOutline::outlineWidth
	float ___outlineWidth_5;

public:
	inline static int32_t get_offset_of_outlineMaterial_4() { return static_cast<int32_t>(offsetof(BaseMeshOutline_t7497123FDBE7448DC043FBFA8DB12BB36AAB690E, ___outlineMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outlineMaterial_4() const { return ___outlineMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outlineMaterial_4() { return &___outlineMaterial_4; }
	inline void set_outlineMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outlineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_outlineWidth_5() { return static_cast<int32_t>(offsetof(BaseMeshOutline_t7497123FDBE7448DC043FBFA8DB12BB36AAB690E, ___outlineWidth_5)); }
	inline float get_outlineWidth_5() const { return ___outlineWidth_5; }
	inline float* get_address_of_outlineWidth_5() { return &___outlineWidth_5; }
	inline void set_outlineWidth_5(float value)
	{
		___outlineWidth_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_tF68142DCCF5FDA607EDB06E6B7B3A55E80237370  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Input.TouchableEventType Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::eventsToReceive
	int32_t ___eventsToReceive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::debounceThreshold
	float ___debounceThreshold_5;

public:
	inline static int32_t get_offset_of_eventsToReceive_4() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_tF68142DCCF5FDA607EDB06E6B7B3A55E80237370, ___eventsToReceive_4)); }
	inline int32_t get_eventsToReceive_4() const { return ___eventsToReceive_4; }
	inline int32_t* get_address_of_eventsToReceive_4() { return &___eventsToReceive_4; }
	inline void set_eventsToReceive_4(int32_t value)
	{
		___eventsToReceive_4 = value;
	}

	inline static int32_t get_offset_of_debounceThreshold_5() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_tF68142DCCF5FDA607EDB06E6B7B3A55E80237370, ___debounceThreshold_5)); }
	inline float get_debounceThreshold_5() const { return ___debounceThreshold_5; }
	inline float* get_address_of_debounceThreshold_5() { return &___debounceThreshold_5; }
	inline void set_debounceThreshold_5(float value)
	{
		___debounceThreshold_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * ___newProfile_10;

public:
	inline static int32_t get_offset_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___U3CIsProfileSwitchingU3Ek__BackingField_8)); }
	inline bool get_U3CIsProfileSwitchingU3Ek__BackingField_8() const { return ___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return &___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline void set_U3CIsProfileSwitchingU3Ek__BackingField_8(bool value)
	{
		___U3CIsProfileSwitchingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_activeProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___activeProfile_9)); }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * get_activeProfile_9() const { return ___activeProfile_9; }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF ** get_address_of_activeProfile_9() { return &___activeProfile_9; }
	inline void set_activeProfile_9(MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * value)
	{
		___activeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_newProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___newProfile_10)); }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * get_newProfile_10() const { return ___newProfile_10; }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF ** get_address_of_newProfile_10() { return &___newProfile_10; }
	inline void set_newProfile_10(MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * value)
	{
		___newProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newProfile_10), (void*)value);
	}
};

struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesReverseOrderPerfMarker_21;

public:
	inline static int32_t get_offset_of_isInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___isInitializing_4)); }
	inline bool get_isInitializing_4() const { return ___isInitializing_4; }
	inline bool* get_address_of_isInitializing_4() { return &___isInitializing_4; }
	inline void set_isInitializing_4(bool value)
	{
		___isInitializing_4 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___isApplicationQuitting_5)); }
	inline bool get_isApplicationQuitting_5() const { return ___isApplicationQuitting_5; }
	inline bool* get_address_of_isApplicationQuitting_5() { return &___isApplicationQuitting_5; }
	inline void set_isApplicationQuitting_5(bool value)
	{
		___isApplicationQuitting_5 = value;
	}

	inline static int32_t get_offset_of_internalShutdown_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___internalShutdown_6)); }
	inline bool get_internalShutdown_6() const { return ___internalShutdown_6; }
	inline bool* get_address_of_internalShutdown_6() { return &___internalShutdown_6; }
	inline void set_internalShutdown_6(bool value)
	{
		___internalShutdown_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___activeSystems_11)); }
	inline Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * get_activeSystems_11() const { return ___activeSystems_11; }
	inline Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC ** get_address_of_activeSystems_11() { return &___activeSystems_11; }
	inline void set_activeSystems_11(Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * value)
	{
		___activeSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___registeredMixedRealityServices_12)); }
	inline List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * get_registeredMixedRealityServices_12() const { return ___registeredMixedRealityServices_12; }
	inline List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 ** get_address_of_registeredMixedRealityServices_12() { return &___registeredMixedRealityServices_12; }
	inline void set_registeredMixedRealityServices_12(List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * value)
	{
		___registeredMixedRealityServices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_12), (void*)value);
	}

	inline static int32_t get_offset_of_activeInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___activeInstance_13)); }
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * get_activeInstance_13() const { return ___activeInstance_13; }
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE ** get_address_of_activeInstance_13() { return &___activeInstance_13; }
	inline void set_activeInstance_13(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * value)
	{
		___activeInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInstance_13), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___newInstanceBeingInitialized_14)); }
	inline bool get_newInstanceBeingInitialized_14() const { return ___newInstanceBeingInitialized_14; }
	inline bool* get_address_of_newInstanceBeingInitialized_14() { return &___newInstanceBeingInitialized_14; }
	inline void set_newInstanceBeingInitialized_14(bool value)
	{
		___newInstanceBeingInitialized_14 = value;
	}

	inline static int32_t get_offset_of_toolkitInstances_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___toolkitInstances_17)); }
	inline List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * get_toolkitInstances_17() const { return ___toolkitInstances_17; }
	inline List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 ** get_address_of_toolkitInstances_17() { return &___toolkitInstances_17; }
	inline void set_toolkitInstances_17(List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * value)
	{
		___toolkitInstances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolkitInstances_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAllServicesPerfMarker_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___UpdateAllServicesPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateAllServicesPerfMarker_18() const { return ___UpdateAllServicesPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateAllServicesPerfMarker_18() { return &___UpdateAllServicesPerfMarker_18; }
	inline void set_UpdateAllServicesPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateAllServicesPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdateAllServicesPerfMarker_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___LateUpdateAllServicesPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdateAllServicesPerfMarker_19() const { return ___LateUpdateAllServicesPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdateAllServicesPerfMarker_19() { return &___LateUpdateAllServicesPerfMarker_19; }
	inline void set_LateUpdateAllServicesPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdateAllServicesPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___ExecuteOnAllServicesInOrderPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesInOrderPerfMarker_20() const { return ___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return &___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline void set_ExecuteOnAllServicesInOrderPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesInOrderPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___ExecuteOnAllServicesReverseOrderPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesReverseOrderPerfMarker_21() const { return ___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return &___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline void set_ExecuteOnAllServicesReverseOrderPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesReverseOrderPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::IsBoundsHandles
	bool ___IsBoundsHandles_5;

public:
	inline static int32_t get_offset_of_ShowTetherWhenManipulating_4() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF, ___ShowTetherWhenManipulating_4)); }
	inline bool get_ShowTetherWhenManipulating_4() const { return ___ShowTetherWhenManipulating_4; }
	inline bool* get_address_of_ShowTetherWhenManipulating_4() { return &___ShowTetherWhenManipulating_4; }
	inline void set_ShowTetherWhenManipulating_4(bool value)
	{
		___ShowTetherWhenManipulating_4 = value;
	}

	inline static int32_t get_offset_of_IsBoundsHandles_5() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF, ___IsBoundsHandles_5)); }
	inline bool get_IsBoundsHandles_5() const { return ___IsBoundsHandles_5; }
	inline bool* get_address_of_IsBoundsHandles_5() { return &___IsBoundsHandles_5; }
	inline void set_IsBoundsHandles_5(bool value)
	{
		___IsBoundsHandles_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbRoot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___thumbRoot_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::isTouchable
	bool ___isTouchable_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::snapToPosition
	bool ___snapToPosition_6;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___thumbCollider_7;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::touchCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___touchCollider_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderValue
	float ___sliderValue_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::useSliderStepDivisions
	bool ___useSliderStepDivisions_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStepDivisions
	int32_t ___sliderStepDivisions_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::trackVisuals
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trackVisuals_12;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::tickMarks
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tickMarks_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbVisuals
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___thumbVisuals_14;
	// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderAxis
	int32_t ___sliderAxis_15;
	// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis> Microsoft.MixedReality.Toolkit.UI.PinchSlider::previousSliderAxis
	Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3  ___previousSliderAxis_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStartDistance
	float ___sliderStartDistance_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderEndDistance
	float ___sliderEndDistance_18;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnValueUpdated
	SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * ___OnValueUpdated_19;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionStarted
	SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * ___OnInteractionStarted_20;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionEnded
	SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * ___OnInteractionEnded_21;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverEntered
	SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * ___OnHoverEntered_22;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverExited
	SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * ___OnHoverExited_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderThumbOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___sliderThumbOffset_24;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartSliderValue>k__BackingField
	float ___U3CStartSliderValueU3Ek__BackingField_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartPointerPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CStartPointerPositionU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.PinchSlider::<ActivePointer>k__BackingField
	RuntimeObject* ___U3CActivePointerU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_thumbRoot_4() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___thumbRoot_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_thumbRoot_4() const { return ___thumbRoot_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_thumbRoot_4() { return &___thumbRoot_4; }
	inline void set_thumbRoot_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___thumbRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbRoot_4), (void*)value);
	}

	inline static int32_t get_offset_of_isTouchable_5() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___isTouchable_5)); }
	inline bool get_isTouchable_5() const { return ___isTouchable_5; }
	inline bool* get_address_of_isTouchable_5() { return &___isTouchable_5; }
	inline void set_isTouchable_5(bool value)
	{
		___isTouchable_5 = value;
	}

	inline static int32_t get_offset_of_snapToPosition_6() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___snapToPosition_6)); }
	inline bool get_snapToPosition_6() const { return ___snapToPosition_6; }
	inline bool* get_address_of_snapToPosition_6() { return &___snapToPosition_6; }
	inline void set_snapToPosition_6(bool value)
	{
		___snapToPosition_6 = value;
	}

	inline static int32_t get_offset_of_thumbCollider_7() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___thumbCollider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_thumbCollider_7() const { return ___thumbCollider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_thumbCollider_7() { return &___thumbCollider_7; }
	inline void set_thumbCollider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___thumbCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of_touchCollider_8() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___touchCollider_8)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_touchCollider_8() const { return ___touchCollider_8; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_touchCollider_8() { return &___touchCollider_8; }
	inline void set_touchCollider_8(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___touchCollider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchCollider_8), (void*)value);
	}

	inline static int32_t get_offset_of_sliderValue_9() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderValue_9)); }
	inline float get_sliderValue_9() const { return ___sliderValue_9; }
	inline float* get_address_of_sliderValue_9() { return &___sliderValue_9; }
	inline void set_sliderValue_9(float value)
	{
		___sliderValue_9 = value;
	}

	inline static int32_t get_offset_of_useSliderStepDivisions_10() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___useSliderStepDivisions_10)); }
	inline bool get_useSliderStepDivisions_10() const { return ___useSliderStepDivisions_10; }
	inline bool* get_address_of_useSliderStepDivisions_10() { return &___useSliderStepDivisions_10; }
	inline void set_useSliderStepDivisions_10(bool value)
	{
		___useSliderStepDivisions_10 = value;
	}

	inline static int32_t get_offset_of_sliderStepDivisions_11() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderStepDivisions_11)); }
	inline int32_t get_sliderStepDivisions_11() const { return ___sliderStepDivisions_11; }
	inline int32_t* get_address_of_sliderStepDivisions_11() { return &___sliderStepDivisions_11; }
	inline void set_sliderStepDivisions_11(int32_t value)
	{
		___sliderStepDivisions_11 = value;
	}

	inline static int32_t get_offset_of_trackVisuals_12() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___trackVisuals_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trackVisuals_12() const { return ___trackVisuals_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trackVisuals_12() { return &___trackVisuals_12; }
	inline void set_trackVisuals_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trackVisuals_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackVisuals_12), (void*)value);
	}

	inline static int32_t get_offset_of_tickMarks_13() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___tickMarks_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tickMarks_13() const { return ___tickMarks_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tickMarks_13() { return &___tickMarks_13; }
	inline void set_tickMarks_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tickMarks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tickMarks_13), (void*)value);
	}

	inline static int32_t get_offset_of_thumbVisuals_14() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___thumbVisuals_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_thumbVisuals_14() const { return ___thumbVisuals_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_thumbVisuals_14() { return &___thumbVisuals_14; }
	inline void set_thumbVisuals_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___thumbVisuals_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbVisuals_14), (void*)value);
	}

	inline static int32_t get_offset_of_sliderAxis_15() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderAxis_15)); }
	inline int32_t get_sliderAxis_15() const { return ___sliderAxis_15; }
	inline int32_t* get_address_of_sliderAxis_15() { return &___sliderAxis_15; }
	inline void set_sliderAxis_15(int32_t value)
	{
		___sliderAxis_15 = value;
	}

	inline static int32_t get_offset_of_previousSliderAxis_16() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___previousSliderAxis_16)); }
	inline Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3  get_previousSliderAxis_16() const { return ___previousSliderAxis_16; }
	inline Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3 * get_address_of_previousSliderAxis_16() { return &___previousSliderAxis_16; }
	inline void set_previousSliderAxis_16(Nullable_1_t92F5760966FC3E12D913444A132AD4F575C089E3  value)
	{
		___previousSliderAxis_16 = value;
	}

	inline static int32_t get_offset_of_sliderStartDistance_17() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderStartDistance_17)); }
	inline float get_sliderStartDistance_17() const { return ___sliderStartDistance_17; }
	inline float* get_address_of_sliderStartDistance_17() { return &___sliderStartDistance_17; }
	inline void set_sliderStartDistance_17(float value)
	{
		___sliderStartDistance_17 = value;
	}

	inline static int32_t get_offset_of_sliderEndDistance_18() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderEndDistance_18)); }
	inline float get_sliderEndDistance_18() const { return ___sliderEndDistance_18; }
	inline float* get_address_of_sliderEndDistance_18() { return &___sliderEndDistance_18; }
	inline void set_sliderEndDistance_18(float value)
	{
		___sliderEndDistance_18 = value;
	}

	inline static int32_t get_offset_of_OnValueUpdated_19() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___OnValueUpdated_19)); }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * get_OnValueUpdated_19() const { return ___OnValueUpdated_19; }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A ** get_address_of_OnValueUpdated_19() { return &___OnValueUpdated_19; }
	inline void set_OnValueUpdated_19(SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * value)
	{
		___OnValueUpdated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueUpdated_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionStarted_20() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___OnInteractionStarted_20)); }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * get_OnInteractionStarted_20() const { return ___OnInteractionStarted_20; }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A ** get_address_of_OnInteractionStarted_20() { return &___OnInteractionStarted_20; }
	inline void set_OnInteractionStarted_20(SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * value)
	{
		___OnInteractionStarted_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionStarted_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnInteractionEnded_21() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___OnInteractionEnded_21)); }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * get_OnInteractionEnded_21() const { return ___OnInteractionEnded_21; }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A ** get_address_of_OnInteractionEnded_21() { return &___OnInteractionEnded_21; }
	inline void set_OnInteractionEnded_21(SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * value)
	{
		___OnInteractionEnded_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInteractionEnded_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverEntered_22() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___OnHoverEntered_22)); }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * get_OnHoverEntered_22() const { return ___OnHoverEntered_22; }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A ** get_address_of_OnHoverEntered_22() { return &___OnHoverEntered_22; }
	inline void set_OnHoverEntered_22(SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * value)
	{
		___OnHoverEntered_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverEntered_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverExited_23() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___OnHoverExited_23)); }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * get_OnHoverExited_23() const { return ___OnHoverExited_23; }
	inline SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A ** get_address_of_OnHoverExited_23() { return &___OnHoverExited_23; }
	inline void set_OnHoverExited_23(SliderEvent_tA3EEFC6ECD84EB2ABFDD8E5D635D59BFAA30F28A * value)
	{
		___OnHoverExited_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverExited_23), (void*)value);
	}

	inline static int32_t get_offset_of_sliderThumbOffset_24() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___sliderThumbOffset_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_sliderThumbOffset_24() const { return ___sliderThumbOffset_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_sliderThumbOffset_24() { return &___sliderThumbOffset_24; }
	inline void set_sliderThumbOffset_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___sliderThumbOffset_24 = value;
	}

	inline static int32_t get_offset_of_U3CStartSliderValueU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___U3CStartSliderValueU3Ek__BackingField_25)); }
	inline float get_U3CStartSliderValueU3Ek__BackingField_25() const { return ___U3CStartSliderValueU3Ek__BackingField_25; }
	inline float* get_address_of_U3CStartSliderValueU3Ek__BackingField_25() { return &___U3CStartSliderValueU3Ek__BackingField_25; }
	inline void set_U3CStartSliderValueU3Ek__BackingField_25(float value)
	{
		___U3CStartSliderValueU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStartPointerPositionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___U3CStartPointerPositionU3Ek__BackingField_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CStartPointerPositionU3Ek__BackingField_26() const { return ___U3CStartPointerPositionU3Ek__BackingField_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CStartPointerPositionU3Ek__BackingField_26() { return &___U3CStartPointerPositionU3Ek__BackingField_26; }
	inline void set_U3CStartPointerPositionU3Ek__BackingField_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CStartPointerPositionU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CActivePointerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB, ___U3CActivePointerU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CActivePointerU3Ek__BackingField_27() const { return ___U3CActivePointerU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CActivePointerU3Ek__BackingField_27() { return &___U3CActivePointerU3Ek__BackingField_27; }
	inline void set_U3CActivePointerU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CActivePointerU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActivePointerU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_t58968FDD4FA8FFF05CC402114A1F32684FB43789 * ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tCEE7D2D1940DC6295D3BAA199A7B6748F32004C1 * ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_tC7ED618F6C4CC415617D85B69A95ABB89744B3ED * ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t4E51D8991642FBDBCCE97D5F149880352DFB4D4D * ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t860518117F5A5F306A715C3630E552C4A8BEC6B2* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t44BF460E8D7E8F054CB97CCE71D6691867C3F7EC * ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26  ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;

public:
	inline static int32_t get_offset_of_m_Actions_7() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_Actions_7)); }
	inline InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * get_m_Actions_7() const { return ___m_Actions_7; }
	inline InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F ** get_address_of_m_Actions_7() { return &___m_Actions_7; }
	inline void set_m_Actions_7(InputActionAsset_tD4F1AB4684F41AA6DBBBDB86727E574040F3ED4F * value)
	{
		___m_Actions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_NotificationBehavior_8() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_NotificationBehavior_8)); }
	inline int32_t get_m_NotificationBehavior_8() const { return ___m_NotificationBehavior_8; }
	inline int32_t* get_address_of_m_NotificationBehavior_8() { return &___m_NotificationBehavior_8; }
	inline void set_m_NotificationBehavior_8(int32_t value)
	{
		___m_NotificationBehavior_8 = value;
	}

	inline static int32_t get_offset_of_m_UIInputModule_9() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_UIInputModule_9)); }
	inline InputSystemUIInputModule_t58968FDD4FA8FFF05CC402114A1F32684FB43789 * get_m_UIInputModule_9() const { return ___m_UIInputModule_9; }
	inline InputSystemUIInputModule_t58968FDD4FA8FFF05CC402114A1F32684FB43789 ** get_address_of_m_UIInputModule_9() { return &___m_UIInputModule_9; }
	inline void set_m_UIInputModule_9(InputSystemUIInputModule_t58968FDD4FA8FFF05CC402114A1F32684FB43789 * value)
	{
		___m_UIInputModule_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UIInputModule_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceLostEvent_10() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DeviceLostEvent_10)); }
	inline DeviceLostEvent_tCEE7D2D1940DC6295D3BAA199A7B6748F32004C1 * get_m_DeviceLostEvent_10() const { return ___m_DeviceLostEvent_10; }
	inline DeviceLostEvent_tCEE7D2D1940DC6295D3BAA199A7B6748F32004C1 ** get_address_of_m_DeviceLostEvent_10() { return &___m_DeviceLostEvent_10; }
	inline void set_m_DeviceLostEvent_10(DeviceLostEvent_tCEE7D2D1940DC6295D3BAA199A7B6748F32004C1 * value)
	{
		___m_DeviceLostEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceLostEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRegainedEvent_11() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DeviceRegainedEvent_11)); }
	inline DeviceRegainedEvent_tC7ED618F6C4CC415617D85B69A95ABB89744B3ED * get_m_DeviceRegainedEvent_11() const { return ___m_DeviceRegainedEvent_11; }
	inline DeviceRegainedEvent_tC7ED618F6C4CC415617D85B69A95ABB89744B3ED ** get_address_of_m_DeviceRegainedEvent_11() { return &___m_DeviceRegainedEvent_11; }
	inline void set_m_DeviceRegainedEvent_11(DeviceRegainedEvent_tC7ED618F6C4CC415617D85B69A95ABB89744B3ED * value)
	{
		___m_DeviceRegainedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRegainedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsChangedEvent_12() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ControlsChangedEvent_12)); }
	inline ControlsChangedEvent_t4E51D8991642FBDBCCE97D5F149880352DFB4D4D * get_m_ControlsChangedEvent_12() const { return ___m_ControlsChangedEvent_12; }
	inline ControlsChangedEvent_t4E51D8991642FBDBCCE97D5F149880352DFB4D4D ** get_address_of_m_ControlsChangedEvent_12() { return &___m_ControlsChangedEvent_12; }
	inline void set_m_ControlsChangedEvent_12(ControlsChangedEvent_t4E51D8991642FBDBCCE97D5F149880352DFB4D4D * value)
	{
		___m_ControlsChangedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsChangedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionEvents_13() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ActionEvents_13)); }
	inline ActionEventU5BU5D_t860518117F5A5F306A715C3630E552C4A8BEC6B2* get_m_ActionEvents_13() const { return ___m_ActionEvents_13; }
	inline ActionEventU5BU5D_t860518117F5A5F306A715C3630E552C4A8BEC6B2** get_address_of_m_ActionEvents_13() { return &___m_ActionEvents_13; }
	inline void set_m_ActionEvents_13(ActionEventU5BU5D_t860518117F5A5F306A715C3630E552C4A8BEC6B2* value)
	{
		___m_ActionEvents_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionEvents_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeverAutoSwitchControlSchemes_14() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_NeverAutoSwitchControlSchemes_14)); }
	inline bool get_m_NeverAutoSwitchControlSchemes_14() const { return ___m_NeverAutoSwitchControlSchemes_14; }
	inline bool* get_address_of_m_NeverAutoSwitchControlSchemes_14() { return &___m_NeverAutoSwitchControlSchemes_14; }
	inline void set_m_NeverAutoSwitchControlSchemes_14(bool value)
	{
		___m_NeverAutoSwitchControlSchemes_14 = value;
	}

	inline static int32_t get_offset_of_m_DefaultControlScheme_15() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DefaultControlScheme_15)); }
	inline String_t* get_m_DefaultControlScheme_15() const { return ___m_DefaultControlScheme_15; }
	inline String_t** get_address_of_m_DefaultControlScheme_15() { return &___m_DefaultControlScheme_15; }
	inline void set_m_DefaultControlScheme_15(String_t* value)
	{
		___m_DefaultControlScheme_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultControlScheme_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultActionMap_16() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DefaultActionMap_16)); }
	inline String_t* get_m_DefaultActionMap_16() const { return ___m_DefaultActionMap_16; }
	inline String_t** get_address_of_m_DefaultActionMap_16() { return &___m_DefaultActionMap_16; }
	inline void set_m_DefaultActionMap_16(String_t* value)
	{
		___m_DefaultActionMap_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultActionMap_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_SplitScreenIndex_17() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_SplitScreenIndex_17)); }
	inline int32_t get_m_SplitScreenIndex_17() const { return ___m_SplitScreenIndex_17; }
	inline int32_t* get_address_of_m_SplitScreenIndex_17() { return &___m_SplitScreenIndex_17; }
	inline void set_m_SplitScreenIndex_17(int32_t value)
	{
		___m_SplitScreenIndex_17 = value;
	}

	inline static int32_t get_offset_of_m_Camera_18() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_Camera_18)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_18() const { return ___m_Camera_18; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_18() { return &___m_Camera_18; }
	inline void set_m_Camera_18(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputValueObject_19() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_InputValueObject_19)); }
	inline InputValue_t44BF460E8D7E8F054CB97CCE71D6691867C3F7EC * get_m_InputValueObject_19() const { return ___m_InputValueObject_19; }
	inline InputValue_t44BF460E8D7E8F054CB97CCE71D6691867C3F7EC ** get_address_of_m_InputValueObject_19() { return &___m_InputValueObject_19; }
	inline void set_m_InputValueObject_19(InputValue_t44BF460E8D7E8F054CB97CCE71D6691867C3F7EC * value)
	{
		___m_InputValueObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValueObject_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActionMap_20() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_CurrentActionMap_20)); }
	inline InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * get_m_CurrentActionMap_20() const { return ___m_CurrentActionMap_20; }
	inline InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F ** get_address_of_m_CurrentActionMap_20() { return &___m_CurrentActionMap_20; }
	inline void set_m_CurrentActionMap_20(InputActionMap_tB38943F9FAE2F46B5DDBEB1C88B85370DF3CF07F * value)
	{
		___m_CurrentActionMap_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActionMap_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerIndex_21() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_PlayerIndex_21)); }
	inline int32_t get_m_PlayerIndex_21() const { return ___m_PlayerIndex_21; }
	inline int32_t* get_address_of_m_PlayerIndex_21() { return &___m_PlayerIndex_21; }
	inline void set_m_PlayerIndex_21(int32_t value)
	{
		___m_PlayerIndex_21 = value;
	}

	inline static int32_t get_offset_of_m_InputActive_22() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_InputActive_22)); }
	inline bool get_m_InputActive_22() const { return ___m_InputActive_22; }
	inline bool* get_address_of_m_InputActive_22() { return &___m_InputActive_22; }
	inline void set_m_InputActive_22(bool value)
	{
		___m_InputActive_22 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_23() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_Enabled_23)); }
	inline bool get_m_Enabled_23() const { return ___m_Enabled_23; }
	inline bool* get_address_of_m_Enabled_23() { return &___m_Enabled_23; }
	inline void set_m_Enabled_23(bool value)
	{
		___m_Enabled_23 = value;
	}

	inline static int32_t get_offset_of_m_ActionsInitialized_24() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ActionsInitialized_24)); }
	inline bool get_m_ActionsInitialized_24() const { return ___m_ActionsInitialized_24; }
	inline bool* get_address_of_m_ActionsInitialized_24() { return &___m_ActionsInitialized_24; }
	inline void set_m_ActionsInitialized_24(bool value)
	{
		___m_ActionsInitialized_24 = value;
	}

	inline static int32_t get_offset_of_m_ActionMessageNames_25() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ActionMessageNames_25)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_m_ActionMessageNames_25() const { return ___m_ActionMessageNames_25; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_m_ActionMessageNames_25() { return &___m_ActionMessageNames_25; }
	inline void set_m_ActionMessageNames_25(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___m_ActionMessageNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMessageNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputUser_26() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_InputUser_26)); }
	inline InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26  get_m_InputUser_26() const { return ___m_InputUser_26; }
	inline InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26 * get_address_of_m_InputUser_26() { return &___m_InputUser_26; }
	inline void set_m_InputUser_26(InputUser_t7D684918C08FB80B3C6855D17F1C3BE1A0753F26  value)
	{
		___m_InputUser_26 = value;
	}

	inline static int32_t get_offset_of_m_ActionTriggeredDelegate_27() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ActionTriggeredDelegate_27)); }
	inline Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * get_m_ActionTriggeredDelegate_27() const { return ___m_ActionTriggeredDelegate_27; }
	inline Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 ** get_address_of_m_ActionTriggeredDelegate_27() { return &___m_ActionTriggeredDelegate_27; }
	inline void set_m_ActionTriggeredDelegate_27(Action_1_tC37E206A62EF7DFB69F70B483520F2953D78AEB0 * value)
	{
		___m_ActionTriggeredDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionTriggeredDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceLostCallbacks_28() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DeviceLostCallbacks_28)); }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  get_m_DeviceLostCallbacks_28() const { return ___m_DeviceLostCallbacks_28; }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7 * get_address_of_m_DeviceLostCallbacks_28() { return &___m_DeviceLostCallbacks_28; }
	inline void set_m_DeviceLostCallbacks_28(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  value)
	{
		___m_DeviceLostCallbacks_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DeviceRegainedCallbacks_29() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DeviceRegainedCallbacks_29)); }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  get_m_DeviceRegainedCallbacks_29() const { return ___m_DeviceRegainedCallbacks_29; }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7 * get_address_of_m_DeviceRegainedCallbacks_29() { return &___m_DeviceRegainedCallbacks_29; }
	inline void set_m_DeviceRegainedCallbacks_29(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  value)
	{
		___m_DeviceRegainedCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlsChangedCallbacks_30() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ControlsChangedCallbacks_30)); }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  get_m_ControlsChangedCallbacks_30() const { return ___m_ControlsChangedCallbacks_30; }
	inline CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7 * get_address_of_m_ControlsChangedCallbacks_30() { return &___m_ControlsChangedCallbacks_30; }
	inline void set_m_ControlsChangedCallbacks_30(CallbackArray_1_tB63BBD408B1EA0B1E7A9AEEA83EF5329D518C6B7  value)
	{
		___m_ControlsChangedCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ActionTriggeredCallbacks_31() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_ActionTriggeredCallbacks_31)); }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  get_m_ActionTriggeredCallbacks_31() const { return ___m_ActionTriggeredCallbacks_31; }
	inline CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F * get_address_of_m_ActionTriggeredCallbacks_31() { return &___m_ActionTriggeredCallbacks_31; }
	inline void set_m_ActionTriggeredCallbacks_31(CallbackArray_1_t8A182DF11A9AFD4F68983B9FB94FC7A3C8B1913F  value)
	{
		___m_ActionTriggeredCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_UnpairedDeviceUsedDelegate_32() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_UnpairedDeviceUsedDelegate_32)); }
	inline Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * get_m_UnpairedDeviceUsedDelegate_32() const { return ___m_UnpairedDeviceUsedDelegate_32; }
	inline Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB ** get_address_of_m_UnpairedDeviceUsedDelegate_32() { return &___m_UnpairedDeviceUsedDelegate_32; }
	inline void set_m_UnpairedDeviceUsedDelegate_32(Action_2_t6473C640AFE68C31B445C650769BA7DCEFBEB5DB * value)
	{
		___m_UnpairedDeviceUsedDelegate_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnpairedDeviceUsedDelegate_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreFilterUnpairedDeviceUsedDelegate_33() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_PreFilterUnpairedDeviceUsedDelegate_33)); }
	inline Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * get_m_PreFilterUnpairedDeviceUsedDelegate_33() const { return ___m_PreFilterUnpairedDeviceUsedDelegate_33; }
	inline Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B ** get_address_of_m_PreFilterUnpairedDeviceUsedDelegate_33() { return &___m_PreFilterUnpairedDeviceUsedDelegate_33; }
	inline void set_m_PreFilterUnpairedDeviceUsedDelegate_33(Func_3_tF85F40C0A907148BBE948C7A1503FE0E81A5FF3B * value)
	{
		___m_PreFilterUnpairedDeviceUsedDelegate_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreFilterUnpairedDeviceUsedDelegate_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnUnpairedDeviceUsedHooked_34() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_OnUnpairedDeviceUsedHooked_34)); }
	inline bool get_m_OnUnpairedDeviceUsedHooked_34() const { return ___m_OnUnpairedDeviceUsedHooked_34; }
	inline bool* get_address_of_m_OnUnpairedDeviceUsedHooked_34() { return &___m_OnUnpairedDeviceUsedHooked_34; }
	inline void set_m_OnUnpairedDeviceUsedHooked_34(bool value)
	{
		___m_OnUnpairedDeviceUsedHooked_34 = value;
	}

	inline static int32_t get_offset_of_m_DeviceChangeDelegate_35() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_DeviceChangeDelegate_35)); }
	inline Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * get_m_DeviceChangeDelegate_35() const { return ___m_DeviceChangeDelegate_35; }
	inline Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 ** get_address_of_m_DeviceChangeDelegate_35() { return &___m_DeviceChangeDelegate_35; }
	inline void set_m_DeviceChangeDelegate_35(Action_2_t119F7453B126DC3B9D6B5E9D209A271C4F2DAD24 * value)
	{
		___m_DeviceChangeDelegate_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceChangeDelegate_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeviceChangeHooked_36() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284, ___m_OnDeviceChangeHooked_36)); }
	inline bool get_m_OnDeviceChangeHooked_36() const { return ___m_OnDeviceChangeHooked_36; }
	inline bool* get_address_of_m_OnDeviceChangeHooked_36() { return &___m_OnDeviceChangeHooked_36; }
	inline void set_m_OnDeviceChangeHooked_36(bool value)
	{
		___m_OnDeviceChangeHooked_36 = value;
	}
};

struct PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;

public:
	inline static int32_t get_offset_of_s_AllActivePlayersCount_37() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_AllActivePlayersCount_37)); }
	inline int32_t get_s_AllActivePlayersCount_37() const { return ___s_AllActivePlayersCount_37; }
	inline int32_t* get_address_of_s_AllActivePlayersCount_37() { return &___s_AllActivePlayersCount_37; }
	inline void set_s_AllActivePlayersCount_37(int32_t value)
	{
		___s_AllActivePlayersCount_37 = value;
	}

	inline static int32_t get_offset_of_s_AllActivePlayers_38() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_AllActivePlayers_38)); }
	inline PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8* get_s_AllActivePlayers_38() const { return ___s_AllActivePlayers_38; }
	inline PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8** get_address_of_s_AllActivePlayers_38() { return &___s_AllActivePlayers_38; }
	inline void set_s_AllActivePlayers_38(PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8* value)
	{
		___s_AllActivePlayers_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AllActivePlayers_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_UserChangeDelegate_39() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_UserChangeDelegate_39)); }
	inline Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * get_s_UserChangeDelegate_39() const { return ___s_UserChangeDelegate_39; }
	inline Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 ** get_address_of_s_UserChangeDelegate_39() { return &___s_UserChangeDelegate_39; }
	inline void set_s_UserChangeDelegate_39(Action_3_tC558851DD4FF5DBA23BE39F0435FFF993302F933 * value)
	{
		___s_UserChangeDelegate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UserChangeDelegate_39), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitPairWithDevicesCount_40() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_InitPairWithDevicesCount_40)); }
	inline int32_t get_s_InitPairWithDevicesCount_40() const { return ___s_InitPairWithDevicesCount_40; }
	inline int32_t* get_address_of_s_InitPairWithDevicesCount_40() { return &___s_InitPairWithDevicesCount_40; }
	inline void set_s_InitPairWithDevicesCount_40(int32_t value)
	{
		___s_InitPairWithDevicesCount_40 = value;
	}

	inline static int32_t get_offset_of_s_InitPairWithDevices_41() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_InitPairWithDevices_41)); }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* get_s_InitPairWithDevices_41() const { return ___s_InitPairWithDevices_41; }
	inline InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB** get_address_of_s_InitPairWithDevices_41() { return &___s_InitPairWithDevices_41; }
	inline void set_s_InitPairWithDevices_41(InputDeviceU5BU5D_t9D485BE41736BD607BC3AD78683C9E1D10324FDB* value)
	{
		___s_InitPairWithDevices_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitPairWithDevices_41), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitPlayerIndex_42() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_InitPlayerIndex_42)); }
	inline int32_t get_s_InitPlayerIndex_42() const { return ___s_InitPlayerIndex_42; }
	inline int32_t* get_address_of_s_InitPlayerIndex_42() { return &___s_InitPlayerIndex_42; }
	inline void set_s_InitPlayerIndex_42(int32_t value)
	{
		___s_InitPlayerIndex_42 = value;
	}

	inline static int32_t get_offset_of_s_InitSplitScreenIndex_43() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_InitSplitScreenIndex_43)); }
	inline int32_t get_s_InitSplitScreenIndex_43() const { return ___s_InitSplitScreenIndex_43; }
	inline int32_t* get_address_of_s_InitSplitScreenIndex_43() { return &___s_InitSplitScreenIndex_43; }
	inline void set_s_InitSplitScreenIndex_43(int32_t value)
	{
		___s_InitSplitScreenIndex_43 = value;
	}

	inline static int32_t get_offset_of_s_InitControlScheme_44() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_InitControlScheme_44)); }
	inline String_t* get_s_InitControlScheme_44() const { return ___s_InitControlScheme_44; }
	inline String_t** get_address_of_s_InitControlScheme_44() { return &___s_InitControlScheme_44; }
	inline void set_s_InitControlScheme_44(String_t* value)
	{
		___s_InitControlScheme_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitControlScheme_44), (void*)value);
	}

	inline static int32_t get_offset_of_s_DestroyIfDeviceSetupUnsuccessful_45() { return static_cast<int32_t>(offsetof(PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284_StaticFields, ___s_DestroyIfDeviceSetupUnsuccessful_45)); }
	inline bool get_s_DestroyIfDeviceSetupUnsuccessful_45() const { return ___s_DestroyIfDeviceSetupUnsuccessful_45; }
	inline bool* get_address_of_s_DestroyIfDeviceSetupUnsuccessful_45() { return &___s_DestroyIfDeviceSetupUnsuccessful_45; }
	inline void set_s_DestroyIfDeviceSetupUnsuccessful_45(bool value)
	{
		___s_DestroyIfDeviceSetupUnsuccessful_45 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MeshOutline
struct MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A  : public BaseMeshOutline_t7497123FDBE7448DC043FBFA8DB12BB36AAB690E
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Utilities.MeshOutline::meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer_9;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Utilities.MeshOutline::propertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___propertyBlock_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MeshOutline::vertexExtrusionValueID
	int32_t ___vertexExtrusionValueID_11;
	// UnityEngine.Material[] Microsoft.MixedReality.Toolkit.Utilities.MeshOutline::defaultMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___defaultMaterials_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MeshSmoother Microsoft.MixedReality.Toolkit.Utilities.MeshOutline::createdMeshSmoother
	MeshSmoother_t380DED3558E2EE466E85D31240670C54A3A6FDC1 * ___createdMeshSmoother_13;

public:
	inline static int32_t get_offset_of_meshRenderer_9() { return static_cast<int32_t>(offsetof(MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A, ___meshRenderer_9)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer_9() const { return ___meshRenderer_9; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer_9() { return &___meshRenderer_9; }
	inline void set_meshRenderer_9(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_9), (void*)value);
	}

	inline static int32_t get_offset_of_propertyBlock_10() { return static_cast<int32_t>(offsetof(MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A, ___propertyBlock_10)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_propertyBlock_10() const { return ___propertyBlock_10; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_propertyBlock_10() { return &___propertyBlock_10; }
	inline void set_propertyBlock_10(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___propertyBlock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyBlock_10), (void*)value);
	}

	inline static int32_t get_offset_of_vertexExtrusionValueID_11() { return static_cast<int32_t>(offsetof(MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A, ___vertexExtrusionValueID_11)); }
	inline int32_t get_vertexExtrusionValueID_11() const { return ___vertexExtrusionValueID_11; }
	inline int32_t* get_address_of_vertexExtrusionValueID_11() { return &___vertexExtrusionValueID_11; }
	inline void set_vertexExtrusionValueID_11(int32_t value)
	{
		___vertexExtrusionValueID_11 = value;
	}

	inline static int32_t get_offset_of_defaultMaterials_12() { return static_cast<int32_t>(offsetof(MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A, ___defaultMaterials_12)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_defaultMaterials_12() const { return ___defaultMaterials_12; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_defaultMaterials_12() { return &___defaultMaterials_12; }
	inline void set_defaultMaterials_12(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___defaultMaterials_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterials_12), (void*)value);
	}

	inline static int32_t get_offset_of_createdMeshSmoother_13() { return static_cast<int32_t>(offsetof(MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A, ___createdMeshSmoother_13)); }
	inline MeshSmoother_t380DED3558E2EE466E85D31240670C54A3A6FDC1 * get_createdMeshSmoother_13() const { return ___createdMeshSmoother_13; }
	inline MeshSmoother_t380DED3558E2EE466E85D31240670C54A3A6FDC1 ** get_address_of_createdMeshSmoother_13() { return &___createdMeshSmoother_13; }
	inline void set_createdMeshSmoother_13(MeshSmoother_t380DED3558E2EE466E85D31240670C54A3A6FDC1 * value)
	{
		___createdMeshSmoother_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createdMeshSmoother_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_tF40D96A7ADB9BB79034D75B468ECB54E59806084  : public BaseNearInteractionTouchable_tF68142DCCF5FDA607EDB06E6B7B3A55E80237370
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001  : public NearInteractionTouchableSurface_tF40D96A7ADB9BB79034D75B468ECB54E59806084
{
public:
	// System.Lazy`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::rectTransform
	Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * ___rectTransform_6;

public:
	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001, ___rectTransform_6)); }
	inline Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_6), (void*)value);
	}
};

struct NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001_StaticFields
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::instances
	List_1_t5CC7153B06726AA568974DECD09BB55832EFC5E3 * ___instances_7;

public:
	inline static int32_t get_offset_of_instances_7() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001_StaticFields, ___instances_7)); }
	inline List_1_t5CC7153B06726AA568974DECD09BB55832EFC5E3 * get_instances_7() const { return ___instances_7; }
	inline List_1_t5CC7153B06726AA568974DECD09BB55832EFC5E3 ** get_address_of_instances_7() { return &___instances_7; }
	inline void set_instances_7(List_1_t5CC7153B06726AA568974DECD09BB55832EFC5E3 * value)
	{
		___instances_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Runtime.Serialization.MemberHolder[]
struct MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * m_Items[1];

public:
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  m_Items[1];

public:
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  m_Items[1];

public:
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MeshOutline[]
struct MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A * m_Items[1];

public:
	inline MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshOutline_tB7B23F8FE21284541659AB6DD8894F434C6EE55A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodBase_t * m_Items[1];

public:
	inline MethodBase_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodBase_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodBase_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodBase_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodBase_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodBase_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t1BF4B2AE03BC5B33530F2B4B12862C9AB381419D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84  m_Items[1];

public:
	inline MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
	inline MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_t11BAA5F739EA9D1EB84EA0075F03EB7A32161F84  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction[]
struct MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  m_Items[1];

public:
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_2), (void*)NULL);
	}
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_2), (void*)NULL);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping[]
struct MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 * m_Items[1];

public:
	inline MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInputActionMapping_t26AFABC4ED4C2E7AEE37BEE70B1F1D8F077B0879 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[]
struct MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40  m_Items[1];

public:
	inline MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeXU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeYU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
	inline MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMappingLegacyInput_t8E7DA46AA394CCDB13ED6E579011B7061E178B40  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeXU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeYU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  m_Items[1];

public:
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit[]
struct MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * m_Items[1];

public:
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ModifierSpec[]
struct ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Module[]
struct ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * m_Items[1];

public:
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C  m_Items[1];

public:
	inline NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
	inline NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameAndParameters_tF9E6D8E3CF0CAAF639CAB69B26A549738D58092C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
};
// System.Diagnostics.Tracing.NameInfo[]
struct NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 * m_Items[1];

public:
	inline NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameInfo_t2DD2EDFE2718426F00C3454C22C0ACAA24B5F9D6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37  m_Items[1];

public:
	inline NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_1), (void*)NULL);
	}
	inline NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NamedValue_t7F37C27A459F40CDDB319E32C85C758A45CFFE37  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_1), (void*)NULL);
	}
};
// Unity.VisualScripting.Namespace[]
struct NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * m_Items[1];

public:
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Namespace_t729ADE48B297C06FB42D90B5F74EC160B723FA46 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable[]
struct NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * m_Items[1];

public:
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI[]
struct NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 * m_Items[1];

public:
	inline NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NearInteractionTouchableUnityUI_tEA3FADBF358FC42279B1AF7C296AE278EA902001 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode[]
struct ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E * m_Items[1];

public:
	inline ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectCollectionNode_t812FA3C17957FD7687D595FFF579B534E1347F8E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.Serialization.ObjectHolder[]
struct ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * m_Items[1];

public:
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectHolder_tCD7C3D18FDFE14A3D8D34E7194437D6657B43A9A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * m_Items[1];

public:
	inline OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature[]
struct OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * m_Items[1];

public:
	inline OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName[]
struct ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 * m_Items[1];

public:
	inline ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParsedAssemblyQualifiedName_t598FAC4F3F036AD9E5E8AA776952E110BD23CE98 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  m_Items[1];

public:
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData[]
struct ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED * m_Items[1];

public:
	inline ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleHeatmapParticleData_tA8894A5C83FD784F18172613410D107E7F1ADAED * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * m_Items[1];

public:
	inline PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PersistentCall_tD4B4BC3A0C50BD829EB4511AEB9862EF8045C8E9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Uduino.Pin[]
struct PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 * m_Items[1];

public:
	inline Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pin_t6692D3863F265FBF3C32A7A8C65C28512A473459 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.PinchSlider[]
struct PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB * m_Items[1];

public:
	inline PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PinchSlider_tEA96A3D58C33C120815BF4BA2AF6336535C976AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  m_Items[1];

public:
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 * m_Items[1];

public:
	inline PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerInput_t3087A6B5D1C20FE1EFC0D7E3FCD38E837851A284 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetAt_mB2CB881D873E9E8F73FC049FB169256BA79DD4D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m7CC9B1F524D27B40133AF95E66098C5AECDFB1B4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mBF8122EE9ED356287CE0F283387F620B6624109A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m3E2B37EA58F46C9A7F8482AC393A78B3980F3F2C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m061982E3136B86E9C3E16680F3BF81F0A1675479_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m61114E640A85205C9321737BF9A3DE430CCCF967_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mCB00E2AC94D393E45E03421114B653166DCA9B55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m5E6D02609DF748FB392EF493C297202889E70DE8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mEDF552A013BAB9F67B23D6006FAC388BED02B1A4_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m703D3245B9139D12900A84A817B0066D6BF9455D_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m0B13BDF917194523DD7D898F456311BEE2569DB5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mDAEDC66896AAC6B70440BE34FBAD7711C2D8DF50_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppIInspectable** ___items0);



// COM Callable Wrapper for System.Runtime.Serialization.MemberHolder[]
struct MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemberHolderU5BU5D_t525C70319A49234B15142AC5FAEB14891AF9E82E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MeshOutline[]
struct MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MeshOutlineU5BU5D_t8FB4C1A95A9FE42E2C1421DFC5172B215FE5CB29_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodBaseU5BU5D_t6F71C0D70C29C9733A65F76A38FDCF619F9712C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSettingsConfigurationU5BU5D_t2C96291C8CEB498128C550B089EE513A51C044F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityGestureMappingU5BU5D_tEFBB9CF1D0748398E0D5977B34CD9AFEC2F307DA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction[]
struct MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputActionU5BU5D_tDC9E66154D001D8F93CDCAE4FF73352CC65892A4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionMapping[]
struct MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputActionMappingU5BU5D_tC49C1318C28E06D0F9F1903F94F55CB95776B700_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[]
struct MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInteractionMappingLegacyInputU5BU5D_t49E15BD59F2C2BB84CD4CDDB89D259D555358D01_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityPoseU5BU5D_t026EFFF754B5DE5ECB80777FB4FBB5352A4946B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.MixedRealityToolkit[]
struct MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityToolkitU5BU5D_tD6B9177CE2250805B4E024F19537953A34D38358_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ModifierSpec[]
struct ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ModifierSpecU5BU5D_tDFAB65C8F7603BD20D73D2B16817503518659328_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.Module[]
struct ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ModuleU5BU5D_tAA28E913DE93D09F4F14AF37DFB1EF4007AF460A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NameAndParametersU5BU5D_tFA6160E27B219FBB8536ED2170A62901758267ED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.NameInfo[]
struct NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NameInfoU5BU5D_t7F5094B76F82A1DB0C7C2579373A44B4C82AA2F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NamedValueU5BU5D_t061778B9E7BB098CB3A96CCB2B3475966AB310FC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Namespace[]
struct NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NamespaceU5BU5D_t13997AD0767A7DD9080E9C4B7C897CE4095EF988_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable[]
struct NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NearInteractionGrabbableU5BU5D_t4847FB54DC7CDB98D6A3C72C1D400500B40A0D91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI[]
struct NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NearInteractionTouchableUnityUIU5BU5D_t800B4D268079AAF568651C4EEB47FFFCB29477A4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper>, IVector_1_tB40846096830E0925EE1F0A5D58AB19E68B6D748, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t77BFB9BB36865CD5C30321BC37E85B3B5F8C49AD, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_tB40846096830E0925EE1F0A5D58AB19E68B6D748::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tB40846096830E0925EE1F0A5D58AB19E68B6D748*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t77BFB9BB36865CD5C30321BC37E85B3B5F8C49AD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t77BFB9BB36865CD5C30321BC37E85B3B5F8C49AD*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_tB40846096830E0925EE1F0A5D58AB19E68B6D748::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t77BFB9BB36865CD5C30321BC37E85B3B5F8C49AD::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB2CB881D873E9E8F73FC049FB169256BA79DD4D5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mB2CB881D873E9E8F73FC049FB169256BA79DD4D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m7CC9B1F524D27B40133AF95E66098C5AECDFB1B4(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m7CC9B1F524D27B40133AF95E66098C5AECDFB1B4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mBF8122EE9ED356287CE0F283387F620B6624109A(IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mBF8122EE9ED356287CE0F283387F620B6624109A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3E2B37EA58F46C9A7F8482AC393A78B3980F3F2C(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m3E2B37EA58F46C9A7F8482AC393A78B3980F3F2C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m061982E3136B86E9C3E16680F3BF81F0A1675479(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m061982E3136B86E9C3E16680F3BF81F0A1675479_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m61114E640A85205C9321737BF9A3DE430CCCF967(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m61114E640A85205C9321737BF9A3DE430CCCF967_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mCB00E2AC94D393E45E03421114B653166DCA9B55(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mCB00E2AC94D393E45E03421114B653166DCA9B55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m5E6D02609DF748FB392EF493C297202889E70DE8(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m5E6D02609DF748FB392EF493C297202889E70DE8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mEDF552A013BAB9F67B23D6006FAC388BED02B1A4() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mEDF552A013BAB9F67B23D6006FAC388BED02B1A4_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m703D3245B9139D12900A84A817B0066D6BF9455D() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m703D3245B9139D12900A84A817B0066D6BF9455D_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m0B13BDF917194523DD7D898F456311BEE2569DB5(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m0B13BDF917194523DD7D898F456311BEE2569DB5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mDAEDC66896AAC6B70440BE34FBAD7711C2D8DF50(uint32_t ___items0ArraySize, Il2CppIInspectable** ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mDAEDC66896AAC6B70440BE34FBAD7711C2D8DF50_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m804662C65919470E0BB3A6CB1F7A534D30CF850B(uint32_t* comReturnValueArraySize, Il2CppIInspectable*** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* returnValue;
		try
		{
			returnValue = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
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
		uint32_t _returnValue_marshaledArraySize = 0;
		Il2CppIInspectable** _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppIInspectable*>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				if ((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
					{
						(_returnValue_marshaled)[i] = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))));
						((_returnValue_marshaled)[i])->AddRef();
					}
					else
					{
						(_returnValue_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
					}
				}
				else
				{
					(_returnValue_marshaled)[i] = NULL;
				}
			}
		}
		else
		{
			_returnValue_marshaledArraySize = 0;
			_returnValue_marshaled = NULL;
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
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
			returnValue = 1037;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint8_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< uint8_t, RuntimeObject* >::Invoke(4 /* System.Byte System.IConvertible::ToByte(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Byte", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Byte", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< int16_t, RuntimeObject* >::Invoke(5 /* System.Int16 System.IConvertible::ToInt16(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Int16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< uint16_t, RuntimeObject* >::Invoke(6 /* System.UInt16 System.IConvertible::ToUInt16(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "UInt16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Int32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "UInt32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< int64_t, RuntimeObject* >::Invoke(9 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Int64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "UInt64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					float il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(11 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Single", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Single", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				RuntimeObject * item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = InterfaceFuncInvoker1< double, RuntimeObject* >::Invoke(12 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "InspectableArray", "Inspectable", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Double", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppIInspectable*>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
					{
						(*___value0)[i] = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))));
						((*___value0)[i])->AddRef();
					}
					else
					{
						(*___value0)[i] = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
					}
				}
				else
				{
					(*___value0)[i] = NULL;
				}
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* managedArray = static_cast<ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("InspectableArray", "Inspectable", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("InspectableArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode[]
struct ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ObjectCollectionNodeU5BU5D_tE283C370801E9CE1EC46E70B8D276E47FCD30D3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Serialization.ObjectHolder[]
struct ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ObjectHolderU5BU5D_tB0134C25BE5EE8773D2724BD2D76B396A1024703_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRFeatureU5BU5D_tB83A42FBA420E404B3EF97A3A72C43827D15B401_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature[]
struct OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRInteractionFeatureU5BU5D_t609FF5F443A0896754FBF6342975EC0DB6F53BD9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName[]
struct ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParsedAssemblyQualifiedNameU5BU5D_tB1D524F055750BBC22AC5BAD8ADBC0F60B96B6AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.ParticleHeatmapParticleData[]
struct ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParticleHeatmapParticleDataU5BU5D_tA56997C2DBB938A3B4EADE5363B3E14730661E96_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PersistentCallU5BU5D_tD75161239574F577A13288CD351BE2B65DEEABF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Uduino.Pin[]
struct PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PinU5BU5D_t57F65F6FAF1202B6D28CE467EB84F4A00D5179D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PinchSlider[]
struct PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PinchSliderU5BU5D_tEC1556ED7B9ADD144C0B55460BC662EA488C3CE4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PlayerInputU5BU5D_tBA43A09453BBE3281CDEC19B09F33269357246C8_ComCallableWrapper(obj));
}
