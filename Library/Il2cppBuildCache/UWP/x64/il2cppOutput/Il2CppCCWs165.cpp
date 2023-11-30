#include "pch-cpp.hpp"

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

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.VariableDeclaration>
struct Dictionary_2_tB28A1222C9A5A52A24695F328AAE5CA5DC0050B0;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A;
// Unity.VisualScripting.IConnectionCollection`3<Unity.VisualScripting.IUnitRelation,Unity.VisualScripting.IUnitPort,Unity.VisualScripting.IUnitPort>
struct IConnectionCollection_3_t76FC7C9663708A197563F5FC2D4DBC157CC83B4C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Unity.VisualScripting.VariableDeclaration>
struct IList_1_tC9044062CA2079611693BEC081AD84E2F1381B02;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t2B95949FB4B1A38382216CFEE2C6E2103B45D102;
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
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ControlInput>
struct ReadOnlyCollection_1_t13B51802171C7E0C441829FF916482EA8FF4B4E2;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput>
struct ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Diagnostics.Tracing.ActivityFilter
struct ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource
struct BaseGlobalInputSource_t2A5AA3869A3F9BFFF8E96FF272A0E7FE617F9B9F;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// TMPro.Examples.Benchmark01
struct Benchmark01_tB93AE57128496E02C0B3D8AC80185B077A1B6934;
// TMPro.Examples.Benchmark01_UGUI
struct Benchmark01_UGUI_t45B3D7BFA1AB9A4A60B48F15D684C558FD619D4B;
// BlinkLed
struct BlinkLed_t644BDEC3B36F4B18FB6248806776CEA1F7045D97;
// System.Linq.Expressions.BlockExpressionList
struct BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest
struct BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample
struct BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// Bundle
struct Bundle_t515785AED5B6DF19469C5B577AA5F198032E36CF;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton
struct CompressableButton_tCC711C254068AEE856080F8079CA649A1FBE6221;
// Unity.VisualScripting.ControlInput
struct ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748;
// Unity.VisualScripting.ControlOutput
struct ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9;
// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver
struct CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C;
// Microsoft.MixedReality.Toolkit.UI.Dialog
struct Dialog_tFFF8DD29E562EBBD64855380B0712571C76CA428;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture
struct DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D;
// Unity.VisualScripting.FlowGraph
struct FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t0CD7B5373C707B35D5B7715287F251E88B89BAE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68657610B7F294BEF4251D5F142B1501C6BE05F0;
// Unity.VisualScripting.IUnit
struct IUnit_t2A2DE7AD424B8DF1810E5E3835EB9949A54E4B33;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF;
// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Unity.VisualScripting.ValueInput
struct ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082;
// Unity.VisualScripting.ValueOutput
struct ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4;
// Unity.VisualScripting.VariableDeclarationCollection
struct VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


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
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
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
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Collections.ObjectModel.Collection`1<Unity.VisualScripting.VariableDeclaration>
struct Collection_1_tC8CCCBBD38807F6A46BE69C2EE052896CDE6102B  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_tC8CCCBBD38807F6A46BE69C2EE052896CDE6102B, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_tC8CCCBBD38807F6A46BE69C2EE052896CDE6102B, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// TMPro.Examples.Benchmark01/<Start>d__10
struct U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.Benchmark01/<Start>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.Benchmark01/<Start>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.Benchmark01 TMPro.Examples.Benchmark01/<Start>d__10::<>4__this
	Benchmark01_tB93AE57128496E02C0B3D8AC80185B077A1B6934 * ___U3CU3E4__this_2;
	// System.Int32 TMPro.Examples.Benchmark01/<Start>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640, ___U3CU3E4__this_2)); }
	inline Benchmark01_tB93AE57128496E02C0B3D8AC80185B077A1B6934 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Benchmark01_tB93AE57128496E02C0B3D8AC80185B077A1B6934 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Benchmark01_tB93AE57128496E02C0B3D8AC80185B077A1B6934 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// TMPro.Examples.Benchmark01_UGUI/<Start>d__10
struct U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.Benchmark01_UGUI TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>4__this
	Benchmark01_UGUI_t45B3D7BFA1AB9A4A60B48F15D684C558FD619D4B * ___U3CU3E4__this_2;
	// System.Int32 TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3, ___U3CU3E4__this_2)); }
	inline Benchmark01_UGUI_t45B3D7BFA1AB9A4A60B48F15D684C558FD619D4B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Benchmark01_UGUI_t45B3D7BFA1AB9A4A60B48F15D684C558FD619D4B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Benchmark01_UGUI_t45B3D7BFA1AB9A4A60B48F15D684C558FD619D4B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// BlinkLed/<BlinkLoop>d__4
struct U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D  : public RuntimeObject
{
public:
	// System.Int32 BlinkLed/<BlinkLoop>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlinkLed/<BlinkLoop>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BlinkLed BlinkLed/<BlinkLoop>d__4::<>4__this
	BlinkLed_t644BDEC3B36F4B18FB6248806776CEA1F7045D97 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D, ___U3CU3E4__this_2)); }
	inline BlinkLed_t644BDEC3B36F4B18FB6248806776CEA1F7045D97 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BlinkLed_t644BDEC3B36F4B18FB6248806776CEA1F7045D97 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BlinkLed_t644BDEC3B36F4B18FB6248806776CEA1F7045D97 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>2__current
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CU3E2__current_1;
	// System.Linq.Expressions.BlockExpressionList System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>4__this
	BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55 * ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B, ___U3CU3E2__current_1)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B, ___U3CU3E4__this_2)); }
	inline BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>4__this
	BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<cube>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<om>5__3
	ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<newObject>5__4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<bc>5__5
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<lastParent>5__6
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3ClastParentU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CU3E4__this_2)); }
	inline BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcubeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CcubeU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CcubeU3E5__2_3() const { return ___U3CcubeU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CcubeU3E5__2_3() { return &___U3CcubeU3E5__2_3; }
	inline void set_U3CcubeU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CcubeU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcubeU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ComU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3ComU3E5__3_4)); }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * get_U3ComU3E5__3_4() const { return ___U3ComU3E5__3_4; }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A ** get_address_of_U3ComU3E5__3_4() { return &___U3ComU3E5__3_4; }
	inline void set_U3ComU3E5__3_4(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * value)
	{
		___U3ComU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ComU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewObjectU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CnewObjectU3E5__4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CnewObjectU3E5__4_5() const { return ___U3CnewObjectU3E5__4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CnewObjectU3E5__4_5() { return &___U3CnewObjectU3E5__4_5; }
	inline void set_U3CnewObjectU3E5__4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CnewObjectU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewObjectU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbcU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3CbcU3E5__5_6)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CbcU3E5__5_6() const { return ___U3CbcU3E5__5_6; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CbcU3E5__5_6() { return &___U3CbcU3E5__5_6; }
	inline void set_U3CbcU3E5__5_6(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CbcU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbcU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastParentU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41, ___U3ClastParentU3E5__6_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3ClastParentU3E5__6_7() const { return ___U3ClastParentU3E5__6_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3ClastParentU3E5__6_7() { return &___U3ClastParentU3E5__6_7; }
	inline void set_U3ClastParentU3E5__6_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3ClastParentU3E5__6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastParentU3E5__6_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>4__this
	BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796, ___U3CU3E4__this_2)); }
	inline BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundingBoxExampleTest_t9E3EE24C68F06F7963C264BEB9956ACCD0E2CC41 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>4__this
	BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<cube>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<om>5__3
	ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<newObject>5__4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<bc>5__5
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<lastParent>5__6
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3ClastParentU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CU3E4__this_2)); }
	inline BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcubeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CcubeU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CcubeU3E5__2_3() const { return ___U3CcubeU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CcubeU3E5__2_3() { return &___U3CcubeU3E5__2_3; }
	inline void set_U3CcubeU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CcubeU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcubeU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ComU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3ComU3E5__3_4)); }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * get_U3ComU3E5__3_4() const { return ___U3ComU3E5__3_4; }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A ** get_address_of_U3ComU3E5__3_4() { return &___U3ComU3E5__3_4; }
	inline void set_U3ComU3E5__3_4(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * value)
	{
		___U3ComU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ComU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewObjectU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CnewObjectU3E5__4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CnewObjectU3E5__4_5() const { return ___U3CnewObjectU3E5__4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CnewObjectU3E5__4_5() { return &___U3CnewObjectU3E5__4_5; }
	inline void set_U3CnewObjectU3E5__4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CnewObjectU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewObjectU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbcU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3CbcU3E5__5_6)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CbcU3E5__5_6() const { return ___U3CbcU3E5__5_6; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CbcU3E5__5_6() { return &___U3CbcU3E5__5_6; }
	inline void set_U3CbcU3E5__5_6(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CbcU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbcU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastParentU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069, ___U3ClastParentU3E5__6_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3ClastParentU3E5__6_7() const { return ___U3ClastParentU3E5__6_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3ClastParentU3E5__6_7() { return &___U3ClastParentU3E5__6_7; }
	inline void set_U3ClastParentU3E5__6_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3ClastParentU3E5__6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastParentU3E5__6_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>4__this
	BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583, ___U3CU3E4__this_2)); }
	inline BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundsControlRuntimeExample_tFD1C7C7D9BAB6CFBE75FA669EA74331B7A65086F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Bundle/<BlinkAllLoop>d__2
struct U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997  : public RuntimeObject
{
public:
	// System.Int32 Bundle/<BlinkAllLoop>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bundle/<BlinkAllLoop>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Bundle Bundle/<BlinkAllLoop>d__2::<>4__this
	Bundle_t515785AED5B6DF19469C5B577AA5F198032E36CF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997, ___U3CU3E4__this_2)); }
	inline Bundle_t515785AED5B6DF19469C5B577AA5F198032E36CF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Bundle_t515785AED5B6DF19469C5B577AA5F198032E36CF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Bundle_t515785AED5B6DF19469C5B577AA5F198032E36CF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Button UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>4__this
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<fadeTime>5__2
	float ___U3CfadeTimeU3E5__2_3;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E4__this_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CfadeTimeU3E5__2_3)); }
	inline float get_U3CfadeTimeU3E5__2_3() const { return ___U3CfadeTimeU3E5__2_3; }
	inline float* get_address_of_U3CfadeTimeU3E5__2_3() { return &___U3CfadeTimeU3E5__2_3; }
	inline void set_U3CfadeTimeU3E5__2_3(float value)
	{
		___U3CfadeTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104
struct U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<>4__this
	CompressableButton_tCC711C254068AEE856080F8079CA649A1FBE6221 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::fadeIn
	bool ___fadeIn_3;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::time
	float ___time_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___U3CU3E4__this_2)); }
	inline CompressableButton_tCC711C254068AEE856080F8079CA649A1FBE6221 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CompressableButton_tCC711C254068AEE856080F8079CA649A1FBE6221 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CompressableButton_tCC711C254068AEE856080F8079CA649A1FBE6221 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_3() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___fadeIn_3)); }
	inline bool get_fadeIn_3() const { return ___fadeIn_3; }
	inline bool* get_address_of_fadeIn_3() { return &___fadeIn_3; }
	inline void set_fadeIn_3(bool value)
	{
		___fadeIn_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_U3CblendTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636, ___U3CblendTimeU3E5__2_5)); }
	inline float get_U3CblendTimeU3E5__2_5() const { return ___U3CblendTimeU3E5__2_5; }
	inline float* get_address_of_U3CblendTimeU3E5__2_5() { return &___U3CblendTimeU3E5__2_5; }
	inline void set_U3CblendTimeU3E5__2_5(float value)
	{
		___U3CblendTimeU3E5__2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14
struct U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14::<>4__this
	CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23, ___U3CU3E4__this_3)); }
	inline CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15
struct U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15::<>4__this
	CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083, ___U3CU3E4__this_3)); }
	inline CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CustomInteractablesReceiver_tA8DC470CEDF950EABB60D9C2F3072A046F97C53C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.Dialog Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>4__this
	Dialog_tFFF8DD29E562EBBD64855380B0712571C76CA428 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1, ___U3CU3E4__this_2)); }
	inline Dialog_tFFF8DD29E562EBBD64855380B0712571C76CA428 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Dialog_tFFF8DD29E562EBBD64855380B0712571C76CA428 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Dialog_tFFF8DD29E562EBBD64855380B0712571C76CA428 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.ObjectModel.KeyedCollection`2<System.String,Unity.VisualScripting.VariableDeclaration>
struct KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF  : public Collection_1_tC8CCCBBD38807F6A46BE69C2EE052896CDE6102B
{
public:
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.ObjectModel.KeyedCollection`2::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.Dictionary`2<TKey,TItem> System.Collections.ObjectModel.KeyedCollection`2::dict
	Dictionary_2_tB28A1222C9A5A52A24695F328AAE5CA5DC0050B0 * ___dict_4;
	// System.Int32 System.Collections.ObjectModel.KeyedCollection`2::keyCount
	int32_t ___keyCount_5;
	// System.Int32 System.Collections.ObjectModel.KeyedCollection`2::threshold
	int32_t ___threshold_6;

public:
	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_dict_4() { return static_cast<int32_t>(offsetof(KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF, ___dict_4)); }
	inline Dictionary_2_tB28A1222C9A5A52A24695F328AAE5CA5DC0050B0 * get_dict_4() const { return ___dict_4; }
	inline Dictionary_2_tB28A1222C9A5A52A24695F328AAE5CA5DC0050B0 ** get_address_of_dict_4() { return &___dict_4; }
	inline void set_dict_4(Dictionary_2_tB28A1222C9A5A52A24695F328AAE5CA5DC0050B0 * value)
	{
		___dict_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dict_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyCount_5() { return static_cast<int32_t>(offsetof(KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF, ___keyCount_5)); }
	inline int32_t get_keyCount_5() const { return ___keyCount_5; }
	inline int32_t* get_address_of_keyCount_5() { return &___keyCount_5; }
	inline void set_keyCount_5(int32_t value)
	{
		___keyCount_5 = value;
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
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


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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

// Windows.Foundation.IReference`1<System.Numerics.Vector3>
struct NOVTABLE IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) = 0;
};

// Unity.VisualScripting.Round`2/Rounding<UnityEngine.Vector2,UnityEngine.Vector2>
struct Rounding_t70478D0F438B4F65D4B7C02804466417E42B88A0 
{
public:
	// System.Int32 Unity.VisualScripting.Round`2/Rounding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rounding_t70478D0F438B4F65D4B7C02804466417E42B88A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VisualScripting.Round`2/Rounding<UnityEngine.Vector3,UnityEngine.Vector3>
struct Rounding_tB288A13076F65360ACB33A2D22D2C5A4C6A7A8A0 
{
public:
	// System.Int32 Unity.VisualScripting.Round`2/Rounding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rounding_tB288A13076F65360ACB33A2D22D2C5A4C6A7A8A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VisualScripting.Round`2/Rounding<UnityEngine.Vector4,UnityEngine.Vector4>
struct Rounding_tE72D80BAA138B5D7213EBFAB682231EAADFD2395 
{
public:
	// System.Int32 Unity.VisualScripting.Round`2/Rounding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rounding_tE72D80BAA138B5D7213EBFAB682231EAADFD2395, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct ExperienceScale_t31EB6E6FF639D5FBD13035528A7AA82198E8A1D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t31EB6E6FF639D5FBD13035528A7AA82198E8A1D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) = 0;
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


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t211AA7B538FF92E2391B390CADF83A61D25B46D7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t211AA7B538FF92E2391B390CADF83A61D25B46D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_t2C9E25F3650C54A7EA5B939EB508C79F9E0858A7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_t2C9E25F3650C54A7EA5B939EB508C79F9E0858A7, ___value___2)); }
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


// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}

	inline static int32_t get_offset_of_m_VfxAsset_2() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_VfxAsset_2)); }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * get_m_VfxAsset_2() const { return ___m_VfxAsset_2; }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 ** get_address_of_m_VfxAsset_2() { return &___m_VfxAsset_2; }
	inline void set_m_VfxAsset_2(VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * value)
	{
		___m_VfxAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VfxAsset_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};

// Unity.VisualScripting.VariableDeclarationCollection
struct VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA  : public KeyedCollection_2_tA312CBB7EB4FE4A1B62703198E670CEB1AB3DCDF
{
public:

public:
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


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::_oneByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____oneByteBuffer_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_5;
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_7;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_8;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_9;

public:
	inline static int32_t get_offset_of__oneByteBuffer_4() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____oneByteBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__oneByteBuffer_4() const { return ____oneByteBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__oneByteBuffer_4() { return &____oneByteBuffer_4; }
	inline void set__oneByteBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____oneByteBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oneByteBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____leaveUnderlyingStreamOpen_5)); }
	inline bool get__leaveUnderlyingStreamOpen_5() const { return ____leaveUnderlyingStreamOpen_5; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_5() { return &____leaveUnderlyingStreamOpen_5; }
	inline void set__leaveUnderlyingStreamOpen_5(bool value)
	{
		____leaveUnderlyingStreamOpen_5 = value;
	}

	inline static int32_t get_offset_of__winRtStream_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____winRtStream_6)); }
	inline RuntimeObject * get__winRtStream_6() const { return ____winRtStream_6; }
	inline RuntimeObject ** get_address_of__winRtStream_6() { return &____winRtStream_6; }
	inline void set__winRtStream_6(RuntimeObject * value)
	{
		____winRtStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canRead_7)); }
	inline bool get__canRead_7() const { return ____canRead_7; }
	inline bool* get_address_of__canRead_7() { return &____canRead_7; }
	inline void set__canRead_7(bool value)
	{
		____canRead_7 = value;
	}

	inline static int32_t get_offset_of__canWrite_8() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canWrite_8)); }
	inline bool get__canWrite_8() const { return ____canWrite_8; }
	inline bool* get_address_of__canWrite_8() { return &____canWrite_8; }
	inline void set__canWrite_8(bool value)
	{
		____canWrite_8 = value;
	}

	inline static int32_t get_offset_of__canSeek_9() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canSeek_9)); }
	inline bool get__canSeek_9() const { return ____canSeek_9; }
	inline bool* get_address_of__canSeek_9() { return &____canSeek_9; }
	inline void set__canSeek_9(bool value)
	{
		____canSeek_9 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____pinHandle_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Tuple`2<System.Int32,System.Int32> System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>2__current
	Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * ___U3CU3E2__current_1;
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>4__this
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CU3E4__this_3;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::sourceGuid
	Guid_t  ___sourceGuid_4;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>3__sourceGuid
	Guid_t  ___U3CU3E3__sourceGuid_5;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<af>5__1
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CafU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E2__current_1)); }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E4__this_3)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_sourceGuid_4() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___sourceGuid_4)); }
	inline Guid_t  get_sourceGuid_4() const { return ___sourceGuid_4; }
	inline Guid_t * get_address_of_sourceGuid_4() { return &___sourceGuid_4; }
	inline void set_sourceGuid_4(Guid_t  value)
	{
		___sourceGuid_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__sourceGuid_5() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E3__sourceGuid_5)); }
	inline Guid_t  get_U3CU3E3__sourceGuid_5() const { return ___U3CU3E3__sourceGuid_5; }
	inline Guid_t * get_address_of_U3CU3E3__sourceGuid_5() { return &___U3CU3E3__sourceGuid_5; }
	inline void set_U3CU3E3__sourceGuid_5(Guid_t  value)
	{
		___U3CU3E3__sourceGuid_5 = value;
	}

	inline static int32_t get_offset_of_U3CafU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CafU3E5__1_6)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CafU3E5__1_6() const { return ___U3CafU3E5__1_6; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CafU3E5__1_6() { return &___U3CafU3E5__1_6; }
	inline void set_U3CafU3E5__1_6(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CafU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CafU3E5__1_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20
struct U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::currPosUV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currPosUV_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::<>4__this
	DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::positiveX
	bool ___positiveX_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20::positiveY
	bool ___positiveY_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_currPosUV_2() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___currPosUV_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currPosUV_2() const { return ___currPosUV_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currPosUV_2() { return &___currPosUV_2; }
	inline void set_currPosUV_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currPosUV_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___U3CU3E4__this_3)); }
	inline DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveX_4() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___positiveX_4)); }
	inline bool get_positiveX_4() const { return ___positiveX_4; }
	inline bool* get_address_of_positiveX_4() { return &___positiveX_4; }
	inline void set_positiveX_4(bool value)
	{
		___positiveX_4 = value;
	}

	inline static int32_t get_offset_of_positiveY_5() { return static_cast<int32_t>(offsetof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366, ___positiveY_5)); }
	inline bool get_positiveY_5() const { return ___positiveY_5; }
	inline bool* get_address_of_positiveY_5() { return &___positiveY_5; }
	inline void set_positiveY_5(bool value)
	{
		___positiveY_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19
struct U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::<>4__this
	DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19::posUV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___posUV_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC, ___U3CU3E4__this_2)); }
	inline DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DrawOnTexture_tDCEFE6083D2D6822875BE7E122E8E8796B7178E8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_posUV_3() { return static_cast<int32_t>(offsetof(U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC, ___posUV_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_posUV_3() const { return ___posUV_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_posUV_3() { return &___posUV_3; }
	inline void set_posUV_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___posUV_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
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


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Unity.VisualScripting.UnitConnection`2<Unity.VisualScripting.ValueOutput,Unity.VisualScripting.ValueInput>
struct UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3  : public GraphElement_1_t1C00A92F646BEAD444CEA9F935E1B712889691A1
{
public:
	// Unity.VisualScripting.IUnit Unity.VisualScripting.UnitConnection`2::<sourceUnit>k__BackingField
	RuntimeObject* ___U3CsourceUnitU3Ek__BackingField_2;
	// System.String Unity.VisualScripting.UnitConnection`2::<sourceKey>k__BackingField
	String_t* ___U3CsourceKeyU3Ek__BackingField_3;
	// Unity.VisualScripting.IUnit Unity.VisualScripting.UnitConnection`2::<destinationUnit>k__BackingField
	RuntimeObject* ___U3CdestinationUnitU3Ek__BackingField_4;
	// System.String Unity.VisualScripting.UnitConnection`2::<destinationKey>k__BackingField
	String_t* ___U3CdestinationKeyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsourceUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3, ___U3CsourceUnitU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CsourceUnitU3Ek__BackingField_2() const { return ___U3CsourceUnitU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CsourceUnitU3Ek__BackingField_2() { return &___U3CsourceUnitU3Ek__BackingField_2; }
	inline void set_U3CsourceUnitU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CsourceUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceUnitU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3, ___U3CsourceKeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CsourceKeyU3Ek__BackingField_3() const { return ___U3CsourceKeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CsourceKeyU3Ek__BackingField_3() { return &___U3CsourceKeyU3Ek__BackingField_3; }
	inline void set_U3CsourceKeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CsourceKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceKeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationUnitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3, ___U3CdestinationUnitU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CdestinationUnitU3Ek__BackingField_4() const { return ___U3CdestinationUnitU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CdestinationUnitU3Ek__BackingField_4() { return &___U3CdestinationUnitU3Ek__BackingField_4; }
	inline void set_U3CdestinationUnitU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CdestinationUnitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationUnitU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationKeyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3, ___U3CdestinationKeyU3Ek__BackingField_5)); }
	inline String_t* get_U3CdestinationKeyU3Ek__BackingField_5() const { return ___U3CdestinationKeyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CdestinationKeyU3Ek__BackingField_5() { return &___U3CdestinationKeyU3Ek__BackingField_5; }
	inline void set_U3CdestinationKeyU3Ek__BackingField_5(String_t* value)
	{
		___U3CdestinationKeyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationKeyU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedActions_15)); }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedObjectActions_16)); }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
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


// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// Unity.VisualScripting.VariableDeclarations
struct VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3  : public RuntimeObject
{
public:
	// Unity.VisualScripting.VariableKind Unity.VisualScripting.VariableDeclarations::Kind
	int32_t ___Kind_0;
	// Unity.VisualScripting.VariableDeclarationCollection Unity.VisualScripting.VariableDeclarations::collection
	VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA * ___collection_1;
	// System.Action Unity.VisualScripting.VariableDeclarations::OnVariableChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnVariableChanged_2;

public:
	inline static int32_t get_offset_of_Kind_0() { return static_cast<int32_t>(offsetof(VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3, ___Kind_0)); }
	inline int32_t get_Kind_0() const { return ___Kind_0; }
	inline int32_t* get_address_of_Kind_0() { return &___Kind_0; }
	inline void set_Kind_0(int32_t value)
	{
		___Kind_0 = value;
	}

	inline static int32_t get_offset_of_collection_1() { return static_cast<int32_t>(offsetof(VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3, ___collection_1)); }
	inline VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA * get_collection_1() const { return ___collection_1; }
	inline VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA ** get_address_of_collection_1() { return &___collection_1; }
	inline void set_collection_1(VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA * value)
	{
		___collection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collection_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnVariableChanged_2() { return static_cast<int32_t>(offsetof(VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3, ___OnVariableChanged_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnVariableChanged_2() const { return ___OnVariableChanged_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnVariableChanged_2() { return &___OnVariableChanged_2; }
	inline void set_OnVariableChanged_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnVariableChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVariableChanged_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429  : public CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E
{
public:

public:
};


// Unity.VisualScripting.Absolute`1<UnityEngine.Vector2>
struct Absolute_1_tCAF7E52CD3A7AB99E8D436DD7BE53878734C36AB  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Absolute`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Absolute`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Absolute_1_tCAF7E52CD3A7AB99E8D436DD7BE53878734C36AB, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Absolute_1_tCAF7E52CD3A7AB99E8D436DD7BE53878734C36AB, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Absolute`1<UnityEngine.Vector3>
struct Absolute_1_tDE47A66EA1D0A621D6676FC1A37DB67705E4EA29  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Absolute`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Absolute`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Absolute_1_tDE47A66EA1D0A621D6676FC1A37DB67705E4EA29, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Absolute_1_tDE47A66EA1D0A621D6676FC1A37DB67705E4EA29, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Absolute`1<UnityEngine.Vector4>
struct Absolute_1_t83DB95BDC97A4719CCBC0FF4C6C9EB2C852E08C7  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Absolute`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Absolute`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Absolute_1_t83DB95BDC97A4719CCBC0FF4C6C9EB2C852E08C7, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Absolute_1_t83DB95BDC97A4719CCBC0FF4C6C9EB2C852E08C7, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Angle`1<UnityEngine.Vector2>
struct Angle_1_t778225B58C87EE6B3688E6F1CA69643D47ACF1B6  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Angle`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Angle`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Angle`1::<angle>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CangleU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Angle_1_t778225B58C87EE6B3688E6F1CA69643D47ACF1B6, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Angle_1_t778225B58C87EE6B3688E6F1CA69643D47ACF1B6, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CangleU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Angle_1_t778225B58C87EE6B3688E6F1CA69643D47ACF1B6, ___U3CangleU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CangleU3Ek__BackingField_17() const { return ___U3CangleU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CangleU3Ek__BackingField_17() { return &___U3CangleU3Ek__BackingField_17; }
	inline void set_U3CangleU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CangleU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CangleU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Angle`1<UnityEngine.Vector3>
struct Angle_1_tAB44BF7680CFD7850B7D71994F9445535ECB0571  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Angle`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Angle`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Angle`1::<angle>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CangleU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Angle_1_tAB44BF7680CFD7850B7D71994F9445535ECB0571, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Angle_1_tAB44BF7680CFD7850B7D71994F9445535ECB0571, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CangleU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Angle_1_tAB44BF7680CFD7850B7D71994F9445535ECB0571, ___U3CangleU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CangleU3Ek__BackingField_17() const { return ___U3CangleU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CangleU3Ek__BackingField_17() { return &___U3CangleU3Ek__BackingField_17; }
	inline void set_U3CangleU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CangleU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CangleU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.CrossProduct`1<UnityEngine.Vector3>
struct CrossProduct_1_t1ED2524B3BD5A53F38DF8B98EB4AA01F9A43EA05  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.CrossProduct`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.CrossProduct`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.CrossProduct`1::<crossProduct>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CcrossProductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CrossProduct_1_t1ED2524B3BD5A53F38DF8B98EB4AA01F9A43EA05, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CrossProduct_1_t1ED2524B3BD5A53F38DF8B98EB4AA01F9A43EA05, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcrossProductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CrossProduct_1_t1ED2524B3BD5A53F38DF8B98EB4AA01F9A43EA05, ___U3CcrossProductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CcrossProductU3Ek__BackingField_17() const { return ___U3CcrossProductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CcrossProductU3Ek__BackingField_17() { return &___U3CcrossProductU3Ek__BackingField_17; }
	inline void set_U3CcrossProductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CcrossProductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcrossProductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Distance`1<UnityEngine.Vector2>
struct Distance_1_tA8D98BD93766A36ADE30BB31F55D274CF59998D3  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Distance`1::<distance>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdistanceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Distance_1_tA8D98BD93766A36ADE30BB31F55D274CF59998D3, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Distance_1_tA8D98BD93766A36ADE30BB31F55D274CF59998D3, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Distance_1_tA8D98BD93766A36ADE30BB31F55D274CF59998D3, ___U3CdistanceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdistanceU3Ek__BackingField_17() const { return ___U3CdistanceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdistanceU3Ek__BackingField_17() { return &___U3CdistanceU3Ek__BackingField_17; }
	inline void set_U3CdistanceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdistanceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Distance`1<UnityEngine.Vector3>
struct Distance_1_tB71B2C3608259C7E39029128300308E418794D56  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Distance`1::<distance>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdistanceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Distance_1_tB71B2C3608259C7E39029128300308E418794D56, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Distance_1_tB71B2C3608259C7E39029128300308E418794D56, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Distance_1_tB71B2C3608259C7E39029128300308E418794D56, ___U3CdistanceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdistanceU3Ek__BackingField_17() const { return ___U3CdistanceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdistanceU3Ek__BackingField_17() { return &___U3CdistanceU3Ek__BackingField_17; }
	inline void set_U3CdistanceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdistanceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Distance`1<UnityEngine.Vector4>
struct Distance_1_tBD85C0BCDFDB39E283A575F331D37E4972187D3E  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Distance`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Distance`1::<distance>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdistanceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Distance_1_tBD85C0BCDFDB39E283A575F331D37E4972187D3E, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Distance_1_tBD85C0BCDFDB39E283A575F331D37E4972187D3E, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Distance_1_tBD85C0BCDFDB39E283A575F331D37E4972187D3E, ___U3CdistanceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdistanceU3Ek__BackingField_17() const { return ___U3CdistanceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdistanceU3Ek__BackingField_17() { return &___U3CdistanceU3Ek__BackingField_17; }
	inline void set_U3CdistanceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdistanceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Divide`1<UnityEngine.Vector2>
struct Divide_1_t645A4DCCFB74B140F4F13212BD5C9CD8AEE54DDA  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Divide`1::<quotient>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CquotientU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Divide_1_t645A4DCCFB74B140F4F13212BD5C9CD8AEE54DDA, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Divide_1_t645A4DCCFB74B140F4F13212BD5C9CD8AEE54DDA, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquotientU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Divide_1_t645A4DCCFB74B140F4F13212BD5C9CD8AEE54DDA, ___U3CquotientU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CquotientU3Ek__BackingField_17() const { return ___U3CquotientU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CquotientU3Ek__BackingField_17() { return &___U3CquotientU3Ek__BackingField_17; }
	inline void set_U3CquotientU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CquotientU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquotientU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Divide`1<UnityEngine.Vector3>
struct Divide_1_tD3988168200426B7886A24779BE27FDFDA85D4A4  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Divide`1::<quotient>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CquotientU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Divide_1_tD3988168200426B7886A24779BE27FDFDA85D4A4, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Divide_1_tD3988168200426B7886A24779BE27FDFDA85D4A4, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquotientU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Divide_1_tD3988168200426B7886A24779BE27FDFDA85D4A4, ___U3CquotientU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CquotientU3Ek__BackingField_17() const { return ___U3CquotientU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CquotientU3Ek__BackingField_17() { return &___U3CquotientU3Ek__BackingField_17; }
	inline void set_U3CquotientU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CquotientU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquotientU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Divide`1<UnityEngine.Vector4>
struct Divide_1_t46A34C06DC763C095AFEA44BD4C218406C3A26AE  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Divide`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Divide`1::<quotient>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CquotientU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Divide_1_t46A34C06DC763C095AFEA44BD4C218406C3A26AE, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Divide_1_t46A34C06DC763C095AFEA44BD4C218406C3A26AE, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquotientU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Divide_1_t46A34C06DC763C095AFEA44BD4C218406C3A26AE, ___U3CquotientU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CquotientU3Ek__BackingField_17() const { return ___U3CquotientU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CquotientU3Ek__BackingField_17() { return &___U3CquotientU3Ek__BackingField_17; }
	inline void set_U3CquotientU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CquotientU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquotientU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.DotProduct`1<UnityEngine.Vector2>
struct DotProduct_1_t2EA38EA954B4CFAE05DE2486F580476BE875BD32  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.DotProduct`1::<dotProduct>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdotProductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DotProduct_1_t2EA38EA954B4CFAE05DE2486F580476BE875BD32, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DotProduct_1_t2EA38EA954B4CFAE05DE2486F580476BE875BD32, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdotProductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DotProduct_1_t2EA38EA954B4CFAE05DE2486F580476BE875BD32, ___U3CdotProductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdotProductU3Ek__BackingField_17() const { return ___U3CdotProductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdotProductU3Ek__BackingField_17() { return &___U3CdotProductU3Ek__BackingField_17; }
	inline void set_U3CdotProductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdotProductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdotProductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.DotProduct`1<UnityEngine.Vector3>
struct DotProduct_1_t8517F144A533AEA6EB440C80FAE54F8C6F47E420  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.DotProduct`1::<dotProduct>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdotProductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DotProduct_1_t8517F144A533AEA6EB440C80FAE54F8C6F47E420, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DotProduct_1_t8517F144A533AEA6EB440C80FAE54F8C6F47E420, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdotProductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DotProduct_1_t8517F144A533AEA6EB440C80FAE54F8C6F47E420, ___U3CdotProductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdotProductU3Ek__BackingField_17() const { return ___U3CdotProductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdotProductU3Ek__BackingField_17() { return &___U3CdotProductU3Ek__BackingField_17; }
	inline void set_U3CdotProductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdotProductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdotProductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.DotProduct`1<UnityEngine.Vector4>
struct DotProduct_1_tE3E672EBE291296E042F3CB558CC77E327CF0EC6  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.DotProduct`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.DotProduct`1::<dotProduct>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdotProductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DotProduct_1_tE3E672EBE291296E042F3CB558CC77E327CF0EC6, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DotProduct_1_tE3E672EBE291296E042F3CB558CC77E327CF0EC6, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdotProductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DotProduct_1_tE3E672EBE291296E042F3CB558CC77E327CF0EC6, ___U3CdotProductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdotProductU3Ek__BackingField_17() const { return ___U3CdotProductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdotProductU3Ek__BackingField_17() { return &___U3CdotProductU3Ek__BackingField_17; }
	inline void set_U3CdotProductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdotProductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdotProductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Lerp`1<UnityEngine.Vector2>
struct Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<t>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Lerp`1::<interpolation>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CinterpolationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742, ___U3CtU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtU3Ek__BackingField_17() const { return ___U3CtU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtU3Ek__BackingField_17() { return &___U3CtU3Ek__BackingField_17; }
	inline void set_U3CtU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinterpolationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742, ___U3CinterpolationU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CinterpolationU3Ek__BackingField_18() const { return ___U3CinterpolationU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CinterpolationU3Ek__BackingField_18() { return &___U3CinterpolationU3Ek__BackingField_18; }
	inline void set_U3CinterpolationU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CinterpolationU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinterpolationU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.Lerp`1<UnityEngine.Vector3>
struct Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<t>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Lerp`1::<interpolation>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CinterpolationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55, ___U3CtU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtU3Ek__BackingField_17() const { return ___U3CtU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtU3Ek__BackingField_17() { return &___U3CtU3Ek__BackingField_17; }
	inline void set_U3CtU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinterpolationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55, ___U3CinterpolationU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CinterpolationU3Ek__BackingField_18() const { return ___U3CinterpolationU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CinterpolationU3Ek__BackingField_18() { return &___U3CinterpolationU3Ek__BackingField_18; }
	inline void set_U3CinterpolationU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CinterpolationU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinterpolationU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.Lerp`1<UnityEngine.Vector4>
struct Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Lerp`1::<t>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Lerp`1::<interpolation>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CinterpolationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747, ___U3CtU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtU3Ek__BackingField_17() const { return ___U3CtU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtU3Ek__BackingField_17() { return &___U3CtU3Ek__BackingField_17; }
	inline void set_U3CtU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinterpolationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747, ___U3CinterpolationU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CinterpolationU3Ek__BackingField_18() const { return ___U3CinterpolationU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CinterpolationU3Ek__BackingField_18() { return &___U3CinterpolationU3Ek__BackingField_18; }
	inline void set_U3CinterpolationU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CinterpolationU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinterpolationU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.Modulo`1<UnityEngine.Vector2>
struct Modulo_1_t79361E77CFB36544DDB772CD51EF1F2227A14849  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Modulo`1::<remainder>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CremainderU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Modulo_1_t79361E77CFB36544DDB772CD51EF1F2227A14849, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Modulo_1_t79361E77CFB36544DDB772CD51EF1F2227A14849, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremainderU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Modulo_1_t79361E77CFB36544DDB772CD51EF1F2227A14849, ___U3CremainderU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CremainderU3Ek__BackingField_17() const { return ___U3CremainderU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CremainderU3Ek__BackingField_17() { return &___U3CremainderU3Ek__BackingField_17; }
	inline void set_U3CremainderU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CremainderU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremainderU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Modulo`1<UnityEngine.Vector3>
struct Modulo_1_tF70D49C06C855474E7C6D086848AA6B2290E2520  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Modulo`1::<remainder>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CremainderU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Modulo_1_tF70D49C06C855474E7C6D086848AA6B2290E2520, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Modulo_1_tF70D49C06C855474E7C6D086848AA6B2290E2520, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremainderU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Modulo_1_tF70D49C06C855474E7C6D086848AA6B2290E2520, ___U3CremainderU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CremainderU3Ek__BackingField_17() const { return ___U3CremainderU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CremainderU3Ek__BackingField_17() { return &___U3CremainderU3Ek__BackingField_17; }
	inline void set_U3CremainderU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CremainderU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremainderU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Modulo`1<UnityEngine.Vector4>
struct Modulo_1_tC3AD755DC0A700B158BA5E7BE7C3C48134667AA5  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<dividend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdividendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Modulo`1::<divisor>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CdivisorU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Modulo`1::<remainder>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CremainderU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdividendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Modulo_1_tC3AD755DC0A700B158BA5E7BE7C3C48134667AA5, ___U3CdividendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdividendU3Ek__BackingField_15() const { return ___U3CdividendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdividendU3Ek__BackingField_15() { return &___U3CdividendU3Ek__BackingField_15; }
	inline void set_U3CdividendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdividendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdividendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdivisorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Modulo_1_tC3AD755DC0A700B158BA5E7BE7C3C48134667AA5, ___U3CdivisorU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CdivisorU3Ek__BackingField_16() const { return ___U3CdivisorU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CdivisorU3Ek__BackingField_16() { return &___U3CdivisorU3Ek__BackingField_16; }
	inline void set_U3CdivisorU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CdivisorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdivisorU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremainderU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Modulo_1_tC3AD755DC0A700B158BA5E7BE7C3C48134667AA5, ___U3CremainderU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CremainderU3Ek__BackingField_17() const { return ___U3CremainderU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CremainderU3Ek__BackingField_17() { return &___U3CremainderU3Ek__BackingField_17; }
	inline void set_U3CremainderU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CremainderU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremainderU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.MoveTowards`1<UnityEngine.Vector2>
struct MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<current>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CcurrentU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<maxDelta>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CmaxDeltaU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.MoveTowards`1::<result>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CresultU3Ek__BackingField_18;
	// System.Boolean Unity.VisualScripting.MoveTowards`1::<perSecond>k__BackingField
	bool ___U3CperSecondU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155, ___U3CcurrentU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CcurrentU3Ek__BackingField_15() const { return ___U3CcurrentU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CcurrentU3Ek__BackingField_15() { return &___U3CcurrentU3Ek__BackingField_15; }
	inline void set_U3CcurrentU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CcurrentU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxDeltaU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155, ___U3CmaxDeltaU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CmaxDeltaU3Ek__BackingField_17() const { return ___U3CmaxDeltaU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CmaxDeltaU3Ek__BackingField_17() { return &___U3CmaxDeltaU3Ek__BackingField_17; }
	inline void set_U3CmaxDeltaU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CmaxDeltaU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaxDeltaU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155, ___U3CresultU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CresultU3Ek__BackingField_18() const { return ___U3CresultU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CresultU3Ek__BackingField_18() { return &___U3CresultU3Ek__BackingField_18; }
	inline void set_U3CresultU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CresultU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CperSecondU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155, ___U3CperSecondU3Ek__BackingField_19)); }
	inline bool get_U3CperSecondU3Ek__BackingField_19() const { return ___U3CperSecondU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CperSecondU3Ek__BackingField_19() { return &___U3CperSecondU3Ek__BackingField_19; }
	inline void set_U3CperSecondU3Ek__BackingField_19(bool value)
	{
		___U3CperSecondU3Ek__BackingField_19 = value;
	}
};


// Unity.VisualScripting.MoveTowards`1<UnityEngine.Vector3>
struct MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<current>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CcurrentU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<maxDelta>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CmaxDeltaU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.MoveTowards`1::<result>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CresultU3Ek__BackingField_18;
	// System.Boolean Unity.VisualScripting.MoveTowards`1::<perSecond>k__BackingField
	bool ___U3CperSecondU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C, ___U3CcurrentU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CcurrentU3Ek__BackingField_15() const { return ___U3CcurrentU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CcurrentU3Ek__BackingField_15() { return &___U3CcurrentU3Ek__BackingField_15; }
	inline void set_U3CcurrentU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CcurrentU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxDeltaU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C, ___U3CmaxDeltaU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CmaxDeltaU3Ek__BackingField_17() const { return ___U3CmaxDeltaU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CmaxDeltaU3Ek__BackingField_17() { return &___U3CmaxDeltaU3Ek__BackingField_17; }
	inline void set_U3CmaxDeltaU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CmaxDeltaU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaxDeltaU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C, ___U3CresultU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CresultU3Ek__BackingField_18() const { return ___U3CresultU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CresultU3Ek__BackingField_18() { return &___U3CresultU3Ek__BackingField_18; }
	inline void set_U3CresultU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CresultU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CperSecondU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C, ___U3CperSecondU3Ek__BackingField_19)); }
	inline bool get_U3CperSecondU3Ek__BackingField_19() const { return ___U3CperSecondU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CperSecondU3Ek__BackingField_19() { return &___U3CperSecondU3Ek__BackingField_19; }
	inline void set_U3CperSecondU3Ek__BackingField_19(bool value)
	{
		___U3CperSecondU3Ek__BackingField_19 = value;
	}
};


// Unity.VisualScripting.MoveTowards`1<UnityEngine.Vector4>
struct MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<current>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CcurrentU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<target>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CtargetU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.MoveTowards`1::<maxDelta>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CmaxDeltaU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.MoveTowards`1::<result>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CresultU3Ek__BackingField_18;
	// System.Boolean Unity.VisualScripting.MoveTowards`1::<perSecond>k__BackingField
	bool ___U3CperSecondU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A, ___U3CcurrentU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CcurrentU3Ek__BackingField_15() const { return ___U3CcurrentU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CcurrentU3Ek__BackingField_15() { return &___U3CcurrentU3Ek__BackingField_15; }
	inline void set_U3CcurrentU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CcurrentU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A, ___U3CtargetU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CtargetU3Ek__BackingField_16() const { return ___U3CtargetU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CtargetU3Ek__BackingField_16() { return &___U3CtargetU3Ek__BackingField_16; }
	inline void set_U3CtargetU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CtargetU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxDeltaU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A, ___U3CmaxDeltaU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CmaxDeltaU3Ek__BackingField_17() const { return ___U3CmaxDeltaU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CmaxDeltaU3Ek__BackingField_17() { return &___U3CmaxDeltaU3Ek__BackingField_17; }
	inline void set_U3CmaxDeltaU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CmaxDeltaU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaxDeltaU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A, ___U3CresultU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CresultU3Ek__BackingField_18() const { return ___U3CresultU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CresultU3Ek__BackingField_18() { return &___U3CresultU3Ek__BackingField_18; }
	inline void set_U3CresultU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CresultU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CperSecondU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A, ___U3CperSecondU3Ek__BackingField_19)); }
	inline bool get_U3CperSecondU3Ek__BackingField_19() const { return ___U3CperSecondU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CperSecondU3Ek__BackingField_19() { return &___U3CperSecondU3Ek__BackingField_19; }
	inline void set_U3CperSecondU3Ek__BackingField_19(bool value)
	{
		___U3CperSecondU3Ek__BackingField_19 = value;
	}
};


// Unity.VisualScripting.MultiInputUnit`1<UnityEngine.Vector2>
struct MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Int32 Unity.VisualScripting.MultiInputUnit`1::_inputCount
	int32_t ____inputCount_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.MultiInputUnit`1::<multiInputs>k__BackingField
	ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * ___U3CmultiInputsU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__inputCount_15() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286, ____inputCount_15)); }
	inline int32_t get__inputCount_15() const { return ____inputCount_15; }
	inline int32_t* get_address_of__inputCount_15() { return &____inputCount_15; }
	inline void set__inputCount_15(int32_t value)
	{
		____inputCount_15 = value;
	}

	inline static int32_t get_offset_of_U3CmultiInputsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286, ___U3CmultiInputsU3Ek__BackingField_16)); }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * get_U3CmultiInputsU3Ek__BackingField_16() const { return ___U3CmultiInputsU3Ek__BackingField_16; }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 ** get_address_of_U3CmultiInputsU3Ek__BackingField_16() { return &___U3CmultiInputsU3Ek__BackingField_16; }
	inline void set_U3CmultiInputsU3Ek__BackingField_16(ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * value)
	{
		___U3CmultiInputsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmultiInputsU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.MultiInputUnit`1<UnityEngine.Vector3>
struct MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Int32 Unity.VisualScripting.MultiInputUnit`1::_inputCount
	int32_t ____inputCount_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.MultiInputUnit`1::<multiInputs>k__BackingField
	ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * ___U3CmultiInputsU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__inputCount_15() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2, ____inputCount_15)); }
	inline int32_t get__inputCount_15() const { return ____inputCount_15; }
	inline int32_t* get_address_of__inputCount_15() { return &____inputCount_15; }
	inline void set__inputCount_15(int32_t value)
	{
		____inputCount_15 = value;
	}

	inline static int32_t get_offset_of_U3CmultiInputsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2, ___U3CmultiInputsU3Ek__BackingField_16)); }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * get_U3CmultiInputsU3Ek__BackingField_16() const { return ___U3CmultiInputsU3Ek__BackingField_16; }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 ** get_address_of_U3CmultiInputsU3Ek__BackingField_16() { return &___U3CmultiInputsU3Ek__BackingField_16; }
	inline void set_U3CmultiInputsU3Ek__BackingField_16(ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * value)
	{
		___U3CmultiInputsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmultiInputsU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.MultiInputUnit`1<UnityEngine.Vector4>
struct MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Int32 Unity.VisualScripting.MultiInputUnit`1::_inputCount
	int32_t ____inputCount_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.MultiInputUnit`1::<multiInputs>k__BackingField
	ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * ___U3CmultiInputsU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__inputCount_15() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260, ____inputCount_15)); }
	inline int32_t get__inputCount_15() const { return ____inputCount_15; }
	inline int32_t* get_address_of__inputCount_15() { return &____inputCount_15; }
	inline void set__inputCount_15(int32_t value)
	{
		____inputCount_15 = value;
	}

	inline static int32_t get_offset_of_U3CmultiInputsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260, ___U3CmultiInputsU3Ek__BackingField_16)); }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * get_U3CmultiInputsU3Ek__BackingField_16() const { return ___U3CmultiInputsU3Ek__BackingField_16; }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 ** get_address_of_U3CmultiInputsU3Ek__BackingField_16() { return &___U3CmultiInputsU3Ek__BackingField_16; }
	inline void set_U3CmultiInputsU3Ek__BackingField_16(ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * value)
	{
		___U3CmultiInputsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmultiInputsU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Multiply`1<UnityEngine.Vector2>
struct Multiply_1_tB4BCE44B53131556A3814EBA8596085E72C261A8  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Multiply`1::<product>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CproductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Multiply_1_tB4BCE44B53131556A3814EBA8596085E72C261A8, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Multiply_1_tB4BCE44B53131556A3814EBA8596085E72C261A8, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Multiply_1_tB4BCE44B53131556A3814EBA8596085E72C261A8, ___U3CproductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CproductU3Ek__BackingField_17() const { return ___U3CproductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CproductU3Ek__BackingField_17() { return &___U3CproductU3Ek__BackingField_17; }
	inline void set_U3CproductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CproductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Multiply`1<UnityEngine.Vector3>
struct Multiply_1_tACF1CA6AC4B9F5C177B5F4F293642CEF8F3C7C63  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Multiply`1::<product>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CproductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Multiply_1_tACF1CA6AC4B9F5C177B5F4F293642CEF8F3C7C63, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Multiply_1_tACF1CA6AC4B9F5C177B5F4F293642CEF8F3C7C63, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Multiply_1_tACF1CA6AC4B9F5C177B5F4F293642CEF8F3C7C63, ___U3CproductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CproductU3Ek__BackingField_17() const { return ___U3CproductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CproductU3Ek__BackingField_17() { return &___U3CproductU3Ek__BackingField_17; }
	inline void set_U3CproductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CproductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Multiply`1<UnityEngine.Vector4>
struct Multiply_1_t5FE78B566FD4385DD21D5C47BAF46D6C29B42025  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Multiply`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Multiply`1::<product>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CproductU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Multiply_1_t5FE78B566FD4385DD21D5C47BAF46D6C29B42025, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Multiply_1_t5FE78B566FD4385DD21D5C47BAF46D6C29B42025, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproductU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Multiply_1_t5FE78B566FD4385DD21D5C47BAF46D6C29B42025, ___U3CproductU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CproductU3Ek__BackingField_17() const { return ___U3CproductU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CproductU3Ek__BackingField_17() { return &___U3CproductU3Ek__BackingField_17; }
	inline void set_U3CproductU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CproductU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Normalize`1<UnityEngine.Vector2>
struct Normalize_1_t499EAF1D239733C70B7DB76B3827D55B362A692B  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Normalize`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Normalize`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Normalize_1_t499EAF1D239733C70B7DB76B3827D55B362A692B, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Normalize_1_t499EAF1D239733C70B7DB76B3827D55B362A692B, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Normalize`1<UnityEngine.Vector3>
struct Normalize_1_t5BBD84377B18630E6B616A9EE753706C770C68C8  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Normalize`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Normalize`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Normalize_1_t5BBD84377B18630E6B616A9EE753706C770C68C8, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Normalize_1_t5BBD84377B18630E6B616A9EE753706C770C68C8, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Normalize`1<UnityEngine.Vector4>
struct Normalize_1_t353104C3EBE65AD7CB07841B320AAC47A2CB3711  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Normalize`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Normalize`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Normalize_1_t353104C3EBE65AD7CB07841B320AAC47A2CB3711, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Normalize_1_t353104C3EBE65AD7CB07841B320AAC47A2CB3711, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.PerSecond`1<UnityEngine.Vector2>
struct PerSecond_1_t3FBBF6DCB20E0D098D871188B0C9C411CEACC967  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.PerSecond`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.PerSecond`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PerSecond_1_t3FBBF6DCB20E0D098D871188B0C9C411CEACC967, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PerSecond_1_t3FBBF6DCB20E0D098D871188B0C9C411CEACC967, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.PerSecond`1<UnityEngine.Vector3>
struct PerSecond_1_t39F8F8D6F8A4C26A66B48BA9BF83C699A02B982A  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.PerSecond`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.PerSecond`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PerSecond_1_t39F8F8D6F8A4C26A66B48BA9BF83C699A02B982A, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PerSecond_1_t39F8F8D6F8A4C26A66B48BA9BF83C699A02B982A, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.PerSecond`1<UnityEngine.Vector4>
struct PerSecond_1_t0B0831726CB4C5123C4D9F4869966D65D018D0F7  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.PerSecond`1::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.PerSecond`1::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PerSecond_1_t0B0831726CB4C5123C4D9F4869966D65D018D0F7, ___U3CinputU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_15() const { return ___U3CinputU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_15() { return &___U3CinputU3Ek__BackingField_15; }
	inline void set_U3CinputU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PerSecond_1_t0B0831726CB4C5123C4D9F4869966D65D018D0F7, ___U3CoutputU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_16() const { return ___U3CoutputU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_16() { return &___U3CoutputU3Ek__BackingField_16; }
	inline void set_U3CoutputU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.Project`1<UnityEngine.Vector2>
struct Project_1_t48CC42D4C1B990E53A9849A31BA61FBBFC542C06  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Project`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Project`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Project`1::<projection>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CprojectionU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Project_1_t48CC42D4C1B990E53A9849A31BA61FBBFC542C06, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Project_1_t48CC42D4C1B990E53A9849A31BA61FBBFC542C06, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprojectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Project_1_t48CC42D4C1B990E53A9849A31BA61FBBFC542C06, ___U3CprojectionU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CprojectionU3Ek__BackingField_17() const { return ___U3CprojectionU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CprojectionU3Ek__BackingField_17() { return &___U3CprojectionU3Ek__BackingField_17; }
	inline void set_U3CprojectionU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CprojectionU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprojectionU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Project`1<UnityEngine.Vector3>
struct Project_1_t6E132D7D65B5484445B713B3B71D1EA79E8724A7  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Project`1::<a>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CaU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Project`1::<b>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CbU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Project`1::<projection>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CprojectionU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Project_1_t6E132D7D65B5484445B713B3B71D1EA79E8724A7, ___U3CaU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CaU3Ek__BackingField_15() const { return ___U3CaU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CaU3Ek__BackingField_15() { return &___U3CaU3Ek__BackingField_15; }
	inline void set_U3CaU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CaU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Project_1_t6E132D7D65B5484445B713B3B71D1EA79E8724A7, ___U3CbU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CbU3Ek__BackingField_16() const { return ___U3CbU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CbU3Ek__BackingField_16() { return &___U3CbU3Ek__BackingField_16; }
	inline void set_U3CbU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CbU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprojectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Project_1_t6E132D7D65B5484445B713B3B71D1EA79E8724A7, ___U3CprojectionU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CprojectionU3Ek__BackingField_17() const { return ___U3CprojectionU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CprojectionU3Ek__BackingField_17() { return &___U3CprojectionU3Ek__BackingField_17; }
	inline void set_U3CprojectionU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CprojectionU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprojectionU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Round`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Round_2_tD4110783CB95C216A036DBD7DB46727914FE8942  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.Round`2/Rounding<TInput,TOutput> Unity.VisualScripting.Round`2::<rounding>k__BackingField
	int32_t ___U3CroundingU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Round`2::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Round`2::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CroundingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Round_2_tD4110783CB95C216A036DBD7DB46727914FE8942, ___U3CroundingU3Ek__BackingField_15)); }
	inline int32_t get_U3CroundingU3Ek__BackingField_15() const { return ___U3CroundingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CroundingU3Ek__BackingField_15() { return &___U3CroundingU3Ek__BackingField_15; }
	inline void set_U3CroundingU3Ek__BackingField_15(int32_t value)
	{
		___U3CroundingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Round_2_tD4110783CB95C216A036DBD7DB46727914FE8942, ___U3CinputU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_16() const { return ___U3CinputU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_16() { return &___U3CinputU3Ek__BackingField_16; }
	inline void set_U3CinputU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Round_2_tD4110783CB95C216A036DBD7DB46727914FE8942, ___U3CoutputU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_17() const { return ___U3CoutputU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_17() { return &___U3CoutputU3Ek__BackingField_17; }
	inline void set_U3CoutputU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Round`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Round_2_t6B9FA5DEFD054B13FF5AB576A1930C2A57D861D8  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.Round`2/Rounding<TInput,TOutput> Unity.VisualScripting.Round`2::<rounding>k__BackingField
	int32_t ___U3CroundingU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Round`2::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Round`2::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CroundingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Round_2_t6B9FA5DEFD054B13FF5AB576A1930C2A57D861D8, ___U3CroundingU3Ek__BackingField_15)); }
	inline int32_t get_U3CroundingU3Ek__BackingField_15() const { return ___U3CroundingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CroundingU3Ek__BackingField_15() { return &___U3CroundingU3Ek__BackingField_15; }
	inline void set_U3CroundingU3Ek__BackingField_15(int32_t value)
	{
		___U3CroundingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Round_2_t6B9FA5DEFD054B13FF5AB576A1930C2A57D861D8, ___U3CinputU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_16() const { return ___U3CinputU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_16() { return &___U3CinputU3Ek__BackingField_16; }
	inline void set_U3CinputU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Round_2_t6B9FA5DEFD054B13FF5AB576A1930C2A57D861D8, ___U3CoutputU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_17() const { return ___U3CoutputU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_17() { return &___U3CoutputU3Ek__BackingField_17; }
	inline void set_U3CoutputU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Round`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct Round_2_t74B227348FB004C6917ED089EAE1C6BD3D65060A  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.Round`2/Rounding<TInput,TOutput> Unity.VisualScripting.Round`2::<rounding>k__BackingField
	int32_t ___U3CroundingU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Round`2::<input>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CinputU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Round`2::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CroundingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Round_2_t74B227348FB004C6917ED089EAE1C6BD3D65060A, ___U3CroundingU3Ek__BackingField_15)); }
	inline int32_t get_U3CroundingU3Ek__BackingField_15() const { return ___U3CroundingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CroundingU3Ek__BackingField_15() { return &___U3CroundingU3Ek__BackingField_15; }
	inline void set_U3CroundingU3Ek__BackingField_15(int32_t value)
	{
		___U3CroundingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CinputU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Round_2_t74B227348FB004C6917ED089EAE1C6BD3D65060A, ___U3CinputU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CinputU3Ek__BackingField_16() const { return ___U3CinputU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CinputU3Ek__BackingField_16() { return &___U3CinputU3Ek__BackingField_16; }
	inline void set_U3CinputU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CinputU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Round_2_t74B227348FB004C6917ED089EAE1C6BD3D65060A, ___U3CoutputU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_17() const { return ___U3CoutputU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_17() { return &___U3CoutputU3Ek__BackingField_17; }
	inline void set_U3CoutputU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Subtract`1<UnityEngine.Vector2>
struct Subtract_1_tF1A515E93EBFC928A7383C8E1EBFC18197AE20AC  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<minuend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CminuendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<subtrahend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsubtrahendU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Subtract`1::<difference>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdifferenceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminuendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Subtract_1_tF1A515E93EBFC928A7383C8E1EBFC18197AE20AC, ___U3CminuendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CminuendU3Ek__BackingField_15() const { return ___U3CminuendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CminuendU3Ek__BackingField_15() { return &___U3CminuendU3Ek__BackingField_15; }
	inline void set_U3CminuendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CminuendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminuendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubtrahendU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Subtract_1_tF1A515E93EBFC928A7383C8E1EBFC18197AE20AC, ___U3CsubtrahendU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsubtrahendU3Ek__BackingField_16() const { return ___U3CsubtrahendU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsubtrahendU3Ek__BackingField_16() { return &___U3CsubtrahendU3Ek__BackingField_16; }
	inline void set_U3CsubtrahendU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsubtrahendU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubtrahendU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdifferenceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Subtract_1_tF1A515E93EBFC928A7383C8E1EBFC18197AE20AC, ___U3CdifferenceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdifferenceU3Ek__BackingField_17() const { return ___U3CdifferenceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdifferenceU3Ek__BackingField_17() { return &___U3CdifferenceU3Ek__BackingField_17; }
	inline void set_U3CdifferenceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdifferenceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdifferenceU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Subtract`1<UnityEngine.Vector3>
struct Subtract_1_t277D90E88F0602ACE6B9C16B6CB7B5D8B05D17C3  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<minuend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CminuendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<subtrahend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsubtrahendU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Subtract`1::<difference>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdifferenceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminuendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Subtract_1_t277D90E88F0602ACE6B9C16B6CB7B5D8B05D17C3, ___U3CminuendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CminuendU3Ek__BackingField_15() const { return ___U3CminuendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CminuendU3Ek__BackingField_15() { return &___U3CminuendU3Ek__BackingField_15; }
	inline void set_U3CminuendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CminuendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminuendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubtrahendU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Subtract_1_t277D90E88F0602ACE6B9C16B6CB7B5D8B05D17C3, ___U3CsubtrahendU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsubtrahendU3Ek__BackingField_16() const { return ___U3CsubtrahendU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsubtrahendU3Ek__BackingField_16() { return &___U3CsubtrahendU3Ek__BackingField_16; }
	inline void set_U3CsubtrahendU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsubtrahendU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubtrahendU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdifferenceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Subtract_1_t277D90E88F0602ACE6B9C16B6CB7B5D8B05D17C3, ___U3CdifferenceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdifferenceU3Ek__BackingField_17() const { return ___U3CdifferenceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdifferenceU3Ek__BackingField_17() { return &___U3CdifferenceU3Ek__BackingField_17; }
	inline void set_U3CdifferenceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdifferenceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdifferenceU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Subtract`1<UnityEngine.Vector4>
struct Subtract_1_tAFA9B20B6B8C30FCF07DE87FCCF91972979461C8  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<minuend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CminuendU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.Subtract`1::<subtrahend>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsubtrahendU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Subtract`1::<difference>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdifferenceU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminuendU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Subtract_1_tAFA9B20B6B8C30FCF07DE87FCCF91972979461C8, ___U3CminuendU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CminuendU3Ek__BackingField_15() const { return ___U3CminuendU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CminuendU3Ek__BackingField_15() { return &___U3CminuendU3Ek__BackingField_15; }
	inline void set_U3CminuendU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CminuendU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminuendU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubtrahendU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Subtract_1_tAFA9B20B6B8C30FCF07DE87FCCF91972979461C8, ___U3CsubtrahendU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsubtrahendU3Ek__BackingField_16() const { return ___U3CsubtrahendU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsubtrahendU3Ek__BackingField_16() { return &___U3CsubtrahendU3Ek__BackingField_16; }
	inline void set_U3CsubtrahendU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsubtrahendU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubtrahendU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdifferenceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Subtract_1_tAFA9B20B6B8C30FCF07DE87FCCF91972979461C8, ___U3CdifferenceU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdifferenceU3Ek__BackingField_17() const { return ___U3CdifferenceU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdifferenceU3Ek__BackingField_17() { return &___U3CdifferenceU3Ek__BackingField_17; }
	inline void set_U3CdifferenceU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdifferenceU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdifferenceU3Ek__BackingField_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D  : public BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1  : public BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0  : public BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_15;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_16;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_25;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_observedObjectParent_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___observedObjectParent_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_15() const { return ___observedObjectParent_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_15() { return &___observedObjectParent_15; }
	inline void set_observedObjectParent_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceIdU3Ek__BackingField_16)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_16() const { return ___U3CSourceIdU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_16() { return &___U3CSourceIdU3Ek__BackingField_16; }
	inline void set_U3CSourceIdU3Ek__BackingField_16(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_17() const { return ___U3CSourceNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_17() { return &___U3CSourceNameU3Ek__BackingField_17; }
	inline void set_U3CSourceNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CStartupBehaviorU3Ek__BackingField_18)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_18() const { return ___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_18() { return &___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_18(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CDefaultPhysicsLayerU3Ek__BackingField_19)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_19() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_19(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsRunningU3Ek__BackingField_20)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_20() const { return ___U3CIsRunningU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_20() { return &___U3CIsRunningU3Ek__BackingField_20; }
	inline void set_U3CIsRunningU3Ek__BackingField_20(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsStationaryObserverU3Ek__BackingField_21)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_21() const { return ___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return &___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_21(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverRotationU3Ek__BackingField_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_22() const { return ___U3CObserverRotationU3Ek__BackingField_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_22() { return &___U3CObserverRotationU3Ek__BackingField_22; }
	inline void set_U3CObserverRotationU3Ek__BackingField_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverOriginU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_23() const { return ___U3CObserverOriginU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_23() { return &___U3CObserverOriginU3Ek__BackingField_23; }
	inline void set_U3CObserverOriginU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverVolumeTypeU3Ek__BackingField_24)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_24() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return &___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_24(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObservationExtentsU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_25() const { return ___U3CObservationExtentsU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_25() { return &___U3CObservationExtentsU3Ek__BackingField_25; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CUpdateIntervalU3Ek__BackingField_26)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_26() const { return ___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_26() { return &___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_26(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_26 = value;
	}
};


// Unity.VisualScripting.LoopUnit
struct LoopUnit_t5B2CD368D4F499E00A6D503B7B7C9321E896FD92  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.LoopUnit::<enter>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CenterU3Ek__BackingField_15;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.LoopUnit::<exit>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CexitU3Ek__BackingField_16;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.LoopUnit::<body>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CbodyU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CenterU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoopUnit_t5B2CD368D4F499E00A6D503B7B7C9321E896FD92, ___U3CenterU3Ek__BackingField_15)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CenterU3Ek__BackingField_15() const { return ___U3CenterU3Ek__BackingField_15; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CenterU3Ek__BackingField_15() { return &___U3CenterU3Ek__BackingField_15; }
	inline void set_U3CenterU3Ek__BackingField_15(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CenterU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenterU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexitU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoopUnit_t5B2CD368D4F499E00A6D503B7B7C9321E896FD92, ___U3CexitU3Ek__BackingField_16)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CexitU3Ek__BackingField_16() const { return ___U3CexitU3Ek__BackingField_16; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CexitU3Ek__BackingField_16() { return &___U3CexitU3Ek__BackingField_16; }
	inline void set_U3CexitU3Ek__BackingField_16(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CexitU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexitU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbodyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LoopUnit_t5B2CD368D4F499E00A6D503B7B7C9321E896FD92, ___U3CbodyU3Ek__BackingField_17)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CbodyU3Ek__BackingField_17() const { return ___U3CbodyU3Ek__BackingField_17; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CbodyU3Ek__BackingField_17() { return &___U3CbodyU3Ek__BackingField_17; }
	inline void set_U3CbodyU3Ek__BackingField_17(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CbodyU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbodyU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.ValueConnection
struct ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407  : public UnitConnection_2_tC67A3C1FC15CDFAC084AC2749D1BB7103308D2E3
{
public:

public:
};


// Unity.VisualScripting.WaitForFlow
struct WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Boolean Unity.VisualScripting.WaitForFlow::<resetOnExit>k__BackingField
	bool ___U3CresetOnExitU3Ek__BackingField_15;
	// System.Int32 Unity.VisualScripting.WaitForFlow::_inputCount
	int32_t ____inputCount_16;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ControlInput> Unity.VisualScripting.WaitForFlow::<awaitedInputs>k__BackingField
	ReadOnlyCollection_1_t13B51802171C7E0C441829FF916482EA8FF4B4E2 * ___U3CawaitedInputsU3Ek__BackingField_17;
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.WaitForFlow::<reset>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CresetU3Ek__BackingField_18;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.WaitForFlow::<exit>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CexitU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CresetOnExitU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F, ___U3CresetOnExitU3Ek__BackingField_15)); }
	inline bool get_U3CresetOnExitU3Ek__BackingField_15() const { return ___U3CresetOnExitU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CresetOnExitU3Ek__BackingField_15() { return &___U3CresetOnExitU3Ek__BackingField_15; }
	inline void set_U3CresetOnExitU3Ek__BackingField_15(bool value)
	{
		___U3CresetOnExitU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of__inputCount_16() { return static_cast<int32_t>(offsetof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F, ____inputCount_16)); }
	inline int32_t get__inputCount_16() const { return ____inputCount_16; }
	inline int32_t* get_address_of__inputCount_16() { return &____inputCount_16; }
	inline void set__inputCount_16(int32_t value)
	{
		____inputCount_16 = value;
	}

	inline static int32_t get_offset_of_U3CawaitedInputsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F, ___U3CawaitedInputsU3Ek__BackingField_17)); }
	inline ReadOnlyCollection_1_t13B51802171C7E0C441829FF916482EA8FF4B4E2 * get_U3CawaitedInputsU3Ek__BackingField_17() const { return ___U3CawaitedInputsU3Ek__BackingField_17; }
	inline ReadOnlyCollection_1_t13B51802171C7E0C441829FF916482EA8FF4B4E2 ** get_address_of_U3CawaitedInputsU3Ek__BackingField_17() { return &___U3CawaitedInputsU3Ek__BackingField_17; }
	inline void set_U3CawaitedInputsU3Ek__BackingField_17(ReadOnlyCollection_1_t13B51802171C7E0C441829FF916482EA8FF4B4E2 * value)
	{
		___U3CawaitedInputsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CawaitedInputsU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F, ___U3CresetU3Ek__BackingField_18)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CresetU3Ek__BackingField_18() const { return ___U3CresetU3Ek__BackingField_18; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CresetU3Ek__BackingField_18() { return &___U3CresetU3Ek__BackingField_18; }
	inline void set_U3CresetU3Ek__BackingField_18(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CresetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexitU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F, ___U3CexitU3Ek__BackingField_19)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CexitU3Ek__BackingField_19() const { return ___U3CexitU3Ek__BackingField_19; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CexitU3Ek__BackingField_19() { return &___U3CexitU3Ek__BackingField_19; }
	inline void set_U3CexitU3Ek__BackingField_19(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CexitU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexitU3Ek__BackingField_19), (void*)value);
	}
};


// Unity.VisualScripting.WaitUnit
struct WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ControlInput Unity.VisualScripting.WaitUnit::<enter>k__BackingField
	ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * ___U3CenterU3Ek__BackingField_15;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.WaitUnit::<exit>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CexitU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CenterU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674, ___U3CenterU3Ek__BackingField_15)); }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * get_U3CenterU3Ek__BackingField_15() const { return ___U3CenterU3Ek__BackingField_15; }
	inline ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 ** get_address_of_U3CenterU3Ek__BackingField_15() { return &___U3CenterU3Ek__BackingField_15; }
	inline void set_U3CenterU3Ek__BackingField_15(ControlInput_t522BD56D67F57D8F7BA802169700D968F7020748 * value)
	{
		___U3CenterU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenterU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexitU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674, ___U3CexitU3Ek__BackingField_16)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CexitU3Ek__BackingField_16() const { return ___U3CexitU3Ek__BackingField_16; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CexitU3Ek__BackingField_16() { return &___U3CexitU3Ek__BackingField_16; }
	inline void set_U3CexitU3Ek__BackingField_16(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CexitU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexitU3Ek__BackingField_16), (void*)value);
	}
};


// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44, ___module_13)); }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * get_module_13() const { return ___module_13; }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_13), (void*)value);
	}
};


// Unity.VisualScripting.Average`1<UnityEngine.Vector2>
struct Average_1_t9C65F79AFB8290EC5C86F74E1628D6591628910D  : public MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Average`1::<average>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CaverageU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaverageU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Average_1_t9C65F79AFB8290EC5C86F74E1628D6591628910D, ___U3CaverageU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CaverageU3Ek__BackingField_17() const { return ___U3CaverageU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CaverageU3Ek__BackingField_17() { return &___U3CaverageU3Ek__BackingField_17; }
	inline void set_U3CaverageU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CaverageU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaverageU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Average`1<UnityEngine.Vector3>
struct Average_1_tD2F8F38155256F09A66DDDB9BC051456BA39B59C  : public MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Average`1::<average>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CaverageU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaverageU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Average_1_tD2F8F38155256F09A66DDDB9BC051456BA39B59C, ___U3CaverageU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CaverageU3Ek__BackingField_17() const { return ___U3CaverageU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CaverageU3Ek__BackingField_17() { return &___U3CaverageU3Ek__BackingField_17; }
	inline void set_U3CaverageU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CaverageU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaverageU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Average`1<UnityEngine.Vector4>
struct Average_1_t9CFF065585972F4DFA4A3916C0A9AF3ACEC722CA  : public MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Average`1::<average>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CaverageU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CaverageU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Average_1_t9CFF065585972F4DFA4A3916C0A9AF3ACEC722CA, ___U3CaverageU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CaverageU3Ek__BackingField_17() const { return ___U3CaverageU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CaverageU3Ek__BackingField_17() { return &___U3CaverageU3Ek__BackingField_17; }
	inline void set_U3CaverageU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CaverageU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaverageU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Maximum`1<UnityEngine.Vector2>
struct Maximum_1_t42C1B8AF65FF0E9F1829ADAE62C0C4863F5E776B  : public MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Maximum`1::<maximum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CmaximumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CmaximumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Maximum_1_t42C1B8AF65FF0E9F1829ADAE62C0C4863F5E776B, ___U3CmaximumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CmaximumU3Ek__BackingField_17() const { return ___U3CmaximumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CmaximumU3Ek__BackingField_17() { return &___U3CmaximumU3Ek__BackingField_17; }
	inline void set_U3CmaximumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CmaximumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaximumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Maximum`1<UnityEngine.Vector3>
struct Maximum_1_t06F87394014823F8F0E54A962B886387BB41E6D3  : public MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Maximum`1::<maximum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CmaximumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CmaximumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Maximum_1_t06F87394014823F8F0E54A962B886387BB41E6D3, ___U3CmaximumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CmaximumU3Ek__BackingField_17() const { return ___U3CmaximumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CmaximumU3Ek__BackingField_17() { return &___U3CmaximumU3Ek__BackingField_17; }
	inline void set_U3CmaximumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CmaximumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaximumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Maximum`1<UnityEngine.Vector4>
struct Maximum_1_t2FCD86559E8AFC871DFB1E32456D47861649D2F2  : public MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Maximum`1::<maximum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CmaximumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CmaximumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Maximum_1_t2FCD86559E8AFC871DFB1E32456D47861649D2F2, ___U3CmaximumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CmaximumU3Ek__BackingField_17() const { return ___U3CmaximumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CmaximumU3Ek__BackingField_17() { return &___U3CmaximumU3Ek__BackingField_17; }
	inline void set_U3CmaximumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CmaximumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaximumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Minimum`1<UnityEngine.Vector2>
struct Minimum_1_tE085FB43E23DE0AB9042B413317A9455B417A3CB  : public MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Minimum`1::<minimum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CminimumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminimumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Minimum_1_tE085FB43E23DE0AB9042B413317A9455B417A3CB, ___U3CminimumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CminimumU3Ek__BackingField_17() const { return ___U3CminimumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CminimumU3Ek__BackingField_17() { return &___U3CminimumU3Ek__BackingField_17; }
	inline void set_U3CminimumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CminimumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminimumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Minimum`1<UnityEngine.Vector3>
struct Minimum_1_tFF4CF8AFFA57696163A4F5D920ADE8B5A906AE17  : public MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Minimum`1::<minimum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CminimumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminimumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Minimum_1_tFF4CF8AFFA57696163A4F5D920ADE8B5A906AE17, ___U3CminimumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CminimumU3Ek__BackingField_17() const { return ___U3CminimumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CminimumU3Ek__BackingField_17() { return &___U3CminimumU3Ek__BackingField_17; }
	inline void set_U3CminimumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CminimumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminimumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Minimum`1<UnityEngine.Vector4>
struct Minimum_1_t0B93B51F1F7433772D36AC9EDC638BB79EF80111  : public MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Minimum`1::<minimum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CminimumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CminimumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Minimum_1_t0B93B51F1F7433772D36AC9EDC638BB79EF80111, ___U3CminimumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CminimumU3Ek__BackingField_17() const { return ___U3CminimumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CminimumU3Ek__BackingField_17() { return &___U3CminimumU3Ek__BackingField_17; }
	inline void set_U3CminimumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CminimumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CminimumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Sum`1<UnityEngine.Vector2>
struct Sum_1_tF7946301CD16160CDC806BC134EE840DD115BE9A  : public MultiInputUnit_1_t85AA3A68BB4EAEE0D911618ADCAB42BCA1CAC286
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Sum`1::<sum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CsumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CsumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Sum_1_tF7946301CD16160CDC806BC134EE840DD115BE9A, ___U3CsumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CsumU3Ek__BackingField_17() const { return ___U3CsumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CsumU3Ek__BackingField_17() { return &___U3CsumU3Ek__BackingField_17; }
	inline void set_U3CsumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CsumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Sum`1<UnityEngine.Vector3>
struct Sum_1_tA45CE0429A4490D87639436BBF2EE62D6339698A  : public MultiInputUnit_1_t66C3F971AAD7302BE7CC6E1C668300EE6E4C31D2
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Sum`1::<sum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CsumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CsumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Sum_1_tA45CE0429A4490D87639436BBF2EE62D6339698A, ___U3CsumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CsumU3Ek__BackingField_17() const { return ___U3CsumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CsumU3Ek__BackingField_17() { return &___U3CsumU3Ek__BackingField_17; }
	inline void set_U3CsumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CsumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsumU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Sum`1<UnityEngine.Vector4>
struct Sum_1_t1A6D15380AB40B043FFA19F2759F68B5185179E2  : public MultiInputUnit_1_t6F3569867F67F9C4CE6943D6C87DBF958FB7A260
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Sum`1::<sum>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CsumU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CsumU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Sum_1_t1A6D15380AB40B043FFA19F2759F68B5185179E2, ___U3CsumU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CsumU3Ek__BackingField_17() const { return ___U3CsumU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CsumU3Ek__BackingField_17() { return &___U3CsumU3Ek__BackingField_17; }
	inline void set_U3CsumU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CsumU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsumU3Ek__BackingField_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___U3CBoundaryProfileU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * ___boundaryEventData_23;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_26;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_27;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boundaryVisualizationParent_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_31;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___boundaryVisualizationProfile_32;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_40;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_44;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* ___U3CBoundsU3Ek__BackingField_45;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CFloorHeightU3Ek__BackingField_46;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * ___RectangularBounds_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentFloorObject_48;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentPlayAreaObject_49;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentTrackedAreaObject_50;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentBoundaryWallObject_51;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentCeilingObject_52;

public:
	inline static int32_t get_offset_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CIsXRDevicePresentU3Ek__BackingField_21)); }
	inline bool get_U3CIsXRDevicePresentU3Ek__BackingField_21() const { return ___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return &___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline void set_U3CIsXRDevicePresentU3Ek__BackingField_21(bool value)
	{
		___U3CIsXRDevicePresentU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryProfileU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundaryProfileU3Ek__BackingField_22)); }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * get_U3CBoundaryProfileU3Ek__BackingField_22() const { return ___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF ** get_address_of_U3CBoundaryProfileU3Ek__BackingField_22() { return &___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline void set_U3CBoundaryProfileU3Ek__BackingField_22(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * value)
	{
		___U3CBoundaryProfileU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundaryProfileU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryEventData_23() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryEventData_23)); }
	inline BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * get_boundaryEventData_23() const { return ___boundaryEventData_23; }
	inline BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 ** get_address_of_boundaryEventData_23() { return &___boundaryEventData_23; }
	inline void set_boundaryEventData_23(BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * value)
	{
		___boundaryEventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CSourceIdU3Ek__BackingField_26)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_26() const { return ___U3CSourceIdU3Ek__BackingField_26; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_26() { return &___U3CSourceIdU3Ek__BackingField_26; }
	inline void set_U3CSourceIdU3Ek__BackingField_26(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CSourceNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_27() const { return ___U3CSourceNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_27() { return &___U3CSourceNameU3Ek__BackingField_27; }
	inline void set_U3CSourceNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryVisualizationParent_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boundaryVisualizationParent_30() const { return ___boundaryVisualizationParent_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boundaryVisualizationParent_30() { return &___boundaryVisualizationParent_30; }
	inline void set_boundaryVisualizationParent_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boundaryVisualizationParent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_30), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___ignoreRaycastLayerValue_31)); }
	inline int32_t get_ignoreRaycastLayerValue_31() const { return ___ignoreRaycastLayerValue_31; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_31() { return &___ignoreRaycastLayerValue_31; }
	inline void set_ignoreRaycastLayerValue_31(int32_t value)
	{
		___ignoreRaycastLayerValue_31 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryVisualizationProfile_32)); }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * get_boundaryVisualizationProfile_32() const { return ___boundaryVisualizationProfile_32; }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF ** get_address_of_boundaryVisualizationProfile_32() { return &___boundaryVisualizationProfile_32; }
	inline void set_boundaryVisualizationProfile_32(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * value)
	{
		___boundaryVisualizationProfile_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CScaleU3Ek__BackingField_33)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_33() const { return ___U3CScaleU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_33() { return &___U3CScaleU3Ek__BackingField_33; }
	inline void set_U3CScaleU3Ek__BackingField_33(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundaryHeightU3Ek__BackingField_34)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_34() const { return ___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_34() { return &___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_34(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_showFloor_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showFloor_35)); }
	inline bool get_showFloor_35() const { return ___showFloor_35; }
	inline bool* get_address_of_showFloor_35() { return &___showFloor_35; }
	inline void set_showFloor_35(bool value)
	{
		___showFloor_35 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showPlayArea_36)); }
	inline bool get_showPlayArea_36() const { return ___showPlayArea_36; }
	inline bool* get_address_of_showPlayArea_36() { return &___showPlayArea_36; }
	inline void set_showPlayArea_36(bool value)
	{
		___showPlayArea_36 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___floorPhysicsLayer_37)); }
	inline int32_t get_floorPhysicsLayer_37() const { return ___floorPhysicsLayer_37; }
	inline int32_t* get_address_of_floorPhysicsLayer_37() { return &___floorPhysicsLayer_37; }
	inline void set_floorPhysicsLayer_37(int32_t value)
	{
		___floorPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showTrackedArea_38)); }
	inline bool get_showTrackedArea_38() const { return ___showTrackedArea_38; }
	inline bool* get_address_of_showTrackedArea_38() { return &___showTrackedArea_38; }
	inline void set_showTrackedArea_38(bool value)
	{
		___showTrackedArea_38 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___playAreaPhysicsLayer_39)); }
	inline int32_t get_playAreaPhysicsLayer_39() const { return ___playAreaPhysicsLayer_39; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_39() { return &___playAreaPhysicsLayer_39; }
	inline void set_playAreaPhysicsLayer_39(int32_t value)
	{
		___playAreaPhysicsLayer_39 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showBoundaryWalls_40)); }
	inline bool get_showBoundaryWalls_40() const { return ___showBoundaryWalls_40; }
	inline bool* get_address_of_showBoundaryWalls_40() { return &___showBoundaryWalls_40; }
	inline void set_showBoundaryWalls_40(bool value)
	{
		___showBoundaryWalls_40 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___trackedAreaPhysicsLayer_41)); }
	inline int32_t get_trackedAreaPhysicsLayer_41() const { return ___trackedAreaPhysicsLayer_41; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_41() { return &___trackedAreaPhysicsLayer_41; }
	inline void set_trackedAreaPhysicsLayer_41(int32_t value)
	{
		___trackedAreaPhysicsLayer_41 = value;
	}

	inline static int32_t get_offset_of_showCeiling_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showCeiling_42)); }
	inline bool get_showCeiling_42() const { return ___showCeiling_42; }
	inline bool* get_address_of_showCeiling_42() { return &___showCeiling_42; }
	inline void set_showCeiling_42(bool value)
	{
		___showCeiling_42 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_43() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryWallsPhysicsLayer_43)); }
	inline int32_t get_boundaryWallsPhysicsLayer_43() const { return ___boundaryWallsPhysicsLayer_43; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_43() { return &___boundaryWallsPhysicsLayer_43; }
	inline void set_boundaryWallsPhysicsLayer_43(int32_t value)
	{
		___boundaryWallsPhysicsLayer_43 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_44() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___ceilingPhysicsLayer_44)); }
	inline int32_t get_ceilingPhysicsLayer_44() const { return ___ceilingPhysicsLayer_44; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_44() { return &___ceilingPhysicsLayer_44; }
	inline void set_ceilingPhysicsLayer_44(int32_t value)
	{
		___ceilingPhysicsLayer_44 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundsU3Ek__BackingField_45)); }
	inline EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* get_U3CBoundsU3Ek__BackingField_45() const { return ___U3CBoundsU3Ek__BackingField_45; }
	inline EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004** get_address_of_U3CBoundsU3Ek__BackingField_45() { return &___U3CBoundsU3Ek__BackingField_45; }
	inline void set_U3CBoundsU3Ek__BackingField_45(EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* value)
	{
		___U3CBoundsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CFloorHeightU3Ek__BackingField_46)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CFloorHeightU3Ek__BackingField_46() const { return ___U3CFloorHeightU3Ek__BackingField_46; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CFloorHeightU3Ek__BackingField_46() { return &___U3CFloorHeightU3Ek__BackingField_46; }
	inline void set_U3CFloorHeightU3Ek__BackingField_46(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CFloorHeightU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_47() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___RectangularBounds_47)); }
	inline InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * get_RectangularBounds_47() const { return ___RectangularBounds_47; }
	inline InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 ** get_address_of_RectangularBounds_47() { return &___RectangularBounds_47; }
	inline void set_RectangularBounds_47(InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * value)
	{
		___RectangularBounds_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_47), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_48() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentFloorObject_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentFloorObject_48() const { return ___currentFloorObject_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentFloorObject_48() { return &___currentFloorObject_48; }
	inline void set_currentFloorObject_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentFloorObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_49() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentPlayAreaObject_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentPlayAreaObject_49() const { return ___currentPlayAreaObject_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentPlayAreaObject_49() { return &___currentPlayAreaObject_49; }
	inline void set_currentPlayAreaObject_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentPlayAreaObject_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_50() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentTrackedAreaObject_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentTrackedAreaObject_50() const { return ___currentTrackedAreaObject_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentTrackedAreaObject_50() { return &___currentTrackedAreaObject_50; }
	inline void set_currentTrackedAreaObject_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentTrackedAreaObject_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_51() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentBoundaryWallObject_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentBoundaryWallObject_51() const { return ___currentBoundaryWallObject_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentBoundaryWallObject_51() { return &___currentBoundaryWallObject_51; }
	inline void set_currentBoundaryWallObject_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentBoundaryWallObject_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_51), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_52() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentCeilingObject_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentCeilingObject_52() const { return ___currentCeilingObject_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentCeilingObject_52() { return &___currentCeilingObject_52; }
	inline void set_currentCeilingObject_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentCeilingObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_52), (void*)value);
	}
};

struct BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * ___OnVisualizationChanged_25;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_StaticFields, ___OnVisualizationChanged_25)); }
	inline EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * get_OnVisualizationChanged_25() const { return ___OnVisualizationChanged_25; }
	inline EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A ** get_address_of_OnVisualizationChanged_25() { return &___OnVisualizationChanged_25; }
	inline void set_OnVisualizationChanged_25(EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * value)
	{
		___OnVisualizationChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34  : public BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * ___meshEventData_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshEventData_27)); }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * get_meshEventData_27() const { return ___meshEventData_27; }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F ** get_address_of_meshEventData_27() { return &___meshEventData_27; }
	inline void set_meshEventData_27(MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * value)
	{
		___meshEventData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshes_39)); }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8  : public BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * ___reprojectionUpdater_16;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * ___projectionOverride_17;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_16() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8, ___reprojectionUpdater_16)); }
	inline WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * get_reprojectionUpdater_16() const { return ___reprojectionUpdater_16; }
	inline WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 ** get_address_of_reprojectionUpdater_16() { return &___reprojectionUpdater_16; }
	inline void set_reprojectionUpdater_16(WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * value)
	{
		___reprojectionUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_17() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8, ___projectionOverride_17)); }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * get_projectionOverride_17() const { return ___projectionOverride_17; }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 ** get_address_of_projectionOverride_17() { return &___projectionOverride_17; }
	inline void set_projectionOverride_17(ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * value)
	{
		___projectionOverride_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_17), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_15;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_15() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_StaticFields, ___isTryGetViewConfigurationSupported_15)); }
	inline bool get_isTryGetViewConfigurationSupported_15() const { return ___isTryGetViewConfigurationSupported_15; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_15() { return &___isTryGetViewConfigurationSupported_15; }
	inline void set_isTryGetViewConfigurationSupported_15(bool value)
	{
		___isTryGetViewConfigurationSupported_15 = value;
	}
};


// Unity.VisualScripting.Vector2Absolute
struct Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B  : public Absolute_1_tCAF7E52CD3A7AB99E8D436DD7BE53878734C36AB
{
public:

public:
};


// Unity.VisualScripting.Vector2Angle
struct Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B  : public Angle_1_t778225B58C87EE6B3688E6F1CA69643D47ACF1B6
{
public:

public:
};


// Unity.VisualScripting.Vector2Distance
struct Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4  : public Distance_1_tA8D98BD93766A36ADE30BB31F55D274CF59998D3
{
public:

public:
};


// Unity.VisualScripting.Vector2Divide
struct Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D  : public Divide_1_t645A4DCCFB74B140F4F13212BD5C9CD8AEE54DDA
{
public:

public:
};


// Unity.VisualScripting.Vector2DotProduct
struct Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF  : public DotProduct_1_t2EA38EA954B4CFAE05DE2486F580476BE875BD32
{
public:

public:
};


// Unity.VisualScripting.Vector2Lerp
struct Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C  : public Lerp_1_tA16AE4D3054649A334DA9801F2FA97A6F44CB742
{
public:

public:
};


// Unity.VisualScripting.Vector2Modulo
struct Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F  : public Modulo_1_t79361E77CFB36544DDB772CD51EF1F2227A14849
{
public:

public:
};


// Unity.VisualScripting.Vector2MoveTowards
struct Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F  : public MoveTowards_1_tCC57EFE77BC72D68E2BE6252E9A547565FE57155
{
public:

public:
};


// Unity.VisualScripting.Vector2Multiply
struct Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE  : public Multiply_1_tB4BCE44B53131556A3814EBA8596085E72C261A8
{
public:

public:
};


// Unity.VisualScripting.Vector2Normalize
struct Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027  : public Normalize_1_t499EAF1D239733C70B7DB76B3827D55B362A692B
{
public:

public:
};


// Unity.VisualScripting.Vector2PerSecond
struct Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749  : public PerSecond_1_t3FBBF6DCB20E0D098D871188B0C9C411CEACC967
{
public:

public:
};


// Unity.VisualScripting.Vector2Project
struct Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55  : public Project_1_t48CC42D4C1B990E53A9849A31BA61FBBFC542C06
{
public:

public:
};


// Unity.VisualScripting.Vector2Round
struct Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B  : public Round_2_tD4110783CB95C216A036DBD7DB46727914FE8942
{
public:

public:
};


// Unity.VisualScripting.Vector2Subtract
struct Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F  : public Subtract_1_tF1A515E93EBFC928A7383C8E1EBFC18197AE20AC
{
public:

public:
};


// Unity.VisualScripting.Vector3Absolute
struct Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638  : public Absolute_1_tDE47A66EA1D0A621D6676FC1A37DB67705E4EA29
{
public:

public:
};


// Unity.VisualScripting.Vector3Angle
struct Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044  : public Angle_1_tAB44BF7680CFD7850B7D71994F9445535ECB0571
{
public:

public:
};


// Unity.VisualScripting.Vector3CrossProduct
struct Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43  : public CrossProduct_1_t1ED2524B3BD5A53F38DF8B98EB4AA01F9A43EA05
{
public:

public:
};


// Unity.VisualScripting.Vector3Distance
struct Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8  : public Distance_1_tB71B2C3608259C7E39029128300308E418794D56
{
public:

public:
};


// Unity.VisualScripting.Vector3Divide
struct Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183  : public Divide_1_tD3988168200426B7886A24779BE27FDFDA85D4A4
{
public:

public:
};


// Unity.VisualScripting.Vector3DotProduct
struct Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC  : public DotProduct_1_t8517F144A533AEA6EB440C80FAE54F8C6F47E420
{
public:

public:
};


// Unity.VisualScripting.Vector3Lerp
struct Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5  : public Lerp_1_t8553B9ECB8117028593A19A80FDC371A41520A55
{
public:

public:
};


// Unity.VisualScripting.Vector3Modulo
struct Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A  : public Modulo_1_tF70D49C06C855474E7C6D086848AA6B2290E2520
{
public:

public:
};


// Unity.VisualScripting.Vector3MoveTowards
struct Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137  : public MoveTowards_1_tDF3E62AB05D41E178E3F8459FB5939299A6B796C
{
public:

public:
};


// Unity.VisualScripting.Vector3Multiply
struct Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51  : public Multiply_1_tACF1CA6AC4B9F5C177B5F4F293642CEF8F3C7C63
{
public:

public:
};


// Unity.VisualScripting.Vector3Normalize
struct Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641  : public Normalize_1_t5BBD84377B18630E6B616A9EE753706C770C68C8
{
public:

public:
};


// Unity.VisualScripting.Vector3PerSecond
struct Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F  : public PerSecond_1_t39F8F8D6F8A4C26A66B48BA9BF83C699A02B982A
{
public:

public:
};


// Unity.VisualScripting.Vector3Project
struct Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F  : public Project_1_t6E132D7D65B5484445B713B3B71D1EA79E8724A7
{
public:

public:
};


// Unity.VisualScripting.Vector3Round
struct Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46  : public Round_2_t6B9FA5DEFD054B13FF5AB576A1930C2A57D861D8
{
public:

public:
};


// Unity.VisualScripting.Vector3Subtract
struct Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27  : public Subtract_1_t277D90E88F0602ACE6B9C16B6CB7B5D8B05D17C3
{
public:

public:
};


// Unity.VisualScripting.Vector4Absolute
struct Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB  : public Absolute_1_t83DB95BDC97A4719CCBC0FF4C6C9EB2C852E08C7
{
public:

public:
};


// Unity.VisualScripting.Vector4Distance
struct Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A  : public Distance_1_tBD85C0BCDFDB39E283A575F331D37E4972187D3E
{
public:

public:
};


// Unity.VisualScripting.Vector4Divide
struct Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A  : public Divide_1_t46A34C06DC763C095AFEA44BD4C218406C3A26AE
{
public:

public:
};


// Unity.VisualScripting.Vector4DotProduct
struct Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183  : public DotProduct_1_tE3E672EBE291296E042F3CB558CC77E327CF0EC6
{
public:

public:
};


// Unity.VisualScripting.Vector4Lerp
struct Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529  : public Lerp_1_tF8EB88500785C58AC108E2EFD7BDF62E6218A747
{
public:

public:
};


// Unity.VisualScripting.Vector4Modulo
struct Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF  : public Modulo_1_tC3AD755DC0A700B158BA5E7BE7C3C48134667AA5
{
public:

public:
};


// Unity.VisualScripting.Vector4MoveTowards
struct Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985  : public MoveTowards_1_tBE15F0515BF2EB6F10A762D1641DA087E73E399A
{
public:

public:
};


// Unity.VisualScripting.Vector4Multiply
struct Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD  : public Multiply_1_t5FE78B566FD4385DD21D5C47BAF46D6C29B42025
{
public:

public:
};


// Unity.VisualScripting.Vector4Normalize
struct Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24  : public Normalize_1_t353104C3EBE65AD7CB07841B320AAC47A2CB3711
{
public:

public:
};


// Unity.VisualScripting.Vector4PerSecond
struct Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA  : public PerSecond_1_t0B0831726CB4C5123C4D9F4869966D65D018D0F7
{
public:

public:
};


// Unity.VisualScripting.Vector4Round
struct Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2  : public Round_2_t74B227348FB004C6917ED089EAE1C6BD3D65060A
{
public:

public:
};


// Unity.VisualScripting.Vector4Subtract
struct Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00  : public Subtract_1_tAFA9B20B6B8C30FCF07DE87FCCF91972979461C8
{
public:

public:
};


// Unity.VisualScripting.WaitForEndOfFrameUnit
struct WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28  : public WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674
{
public:

public:
};


// Unity.VisualScripting.WaitForNextFrameUnit
struct WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9  : public WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674
{
public:

public:
};


// Unity.VisualScripting.WaitForSecondsUnit
struct WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558  : public WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.WaitForSecondsUnit::<seconds>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsecondsU3Ek__BackingField_17;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.WaitForSecondsUnit::<unscaledTime>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CunscaledTimeU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CsecondsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558, ___U3CsecondsU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsecondsU3Ek__BackingField_17() const { return ___U3CsecondsU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsecondsU3Ek__BackingField_17() { return &___U3CsecondsU3Ek__BackingField_17; }
	inline void set_U3CsecondsU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsecondsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondsU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CunscaledTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558, ___U3CunscaledTimeU3Ek__BackingField_18)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CunscaledTimeU3Ek__BackingField_18() const { return ___U3CunscaledTimeU3Ek__BackingField_18; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CunscaledTimeU3Ek__BackingField_18() { return &___U3CunscaledTimeU3Ek__BackingField_18; }
	inline void set_U3CunscaledTimeU3Ek__BackingField_18(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CunscaledTimeU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunscaledTimeU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.WaitUntilUnit
struct WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C  : public WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.WaitUntilUnit::<condition>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CconditionU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CconditionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C, ___U3CconditionU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CconditionU3Ek__BackingField_17() const { return ___U3CconditionU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CconditionU3Ek__BackingField_17() { return &___U3CconditionU3Ek__BackingField_17; }
	inline void set_U3CconditionU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CconditionU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconditionU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.WaitWhileUnit
struct WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03  : public WaitUnit_t3FD2257F4313A0CFA0C0D7A16E93962904BEA674
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.WaitWhileUnit::<condition>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CconditionU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CconditionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03, ___U3CconditionU3Ek__BackingField_17)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CconditionU3Ek__BackingField_17() const { return ___U3CconditionU3Ek__BackingField_17; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CconditionU3Ek__BackingField_17() { return &___U3CconditionU3Ek__BackingField_17; }
	inline void set_U3CconditionU3Ek__BackingField_17(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CconditionU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconditionU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.While
struct While_t7B42A714BF9BC582A03390382825B51EE3A7D071  : public LoopUnit_t5B2CD368D4F499E00A6D503B7B7C9321E896FD92
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.While::<condition>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CconditionU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CconditionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(While_t7B42A714BF9BC582A03390382825B51EE3A7D071, ___U3CconditionU3Ek__BackingField_18)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CconditionU3Ek__BackingField_18() const { return ___U3CconditionU3Ek__BackingField_18; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CconditionU3Ek__BackingField_18() { return &___U3CconditionU3Ek__BackingField_18; }
	inline void set_U3CconditionU3Ek__BackingField_18(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CconditionU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconditionU3Ek__BackingField_18), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_27;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_28;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_30;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_31;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dictationAudioClip_32;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStarted_34;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStopped_35;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStarted_36;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStopped_37;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___U3CIsListeningU3Ek__BackingField_21)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_21() const { return ___U3CIsListeningU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_21() { return &___U3CIsListeningU3Ek__BackingField_21; }
	inline void set_U3CIsListeningU3Ek__BackingField_21(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_hasFailed_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___hasFailed_24)); }
	inline bool get_hasFailed_24() const { return ___hasFailed_24; }
	inline bool* get_address_of_hasFailed_24() { return &___hasFailed_24; }
	inline void set_hasFailed_24(bool value)
	{
		___hasFailed_24 = value;
	}

	inline static int32_t get_offset_of_hasListener_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___hasListener_25)); }
	inline bool get_hasListener_25() const { return ___hasListener_25; }
	inline bool* get_address_of_hasListener_25() { return &___hasListener_25; }
	inline void set_hasListener_25(bool value)
	{
		___hasListener_25 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___isTransitioning_26)); }
	inline bool get_isTransitioning_26() const { return ___isTransitioning_26; }
	inline bool* get_address_of_isTransitioning_26() { return &___isTransitioning_26; }
	inline void set_isTransitioning_26(bool value)
	{
		___isTransitioning_26 = value;
	}

	inline static int32_t get_offset_of_inputSource_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___inputSource_27)); }
	inline RuntimeObject* get_inputSource_27() const { return ___inputSource_27; }
	inline RuntimeObject** get_address_of_inputSource_27() { return &___inputSource_27; }
	inline void set_inputSource_27(RuntimeObject* value)
	{
		___inputSource_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_27), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___textSoFar_28)); }
	inline StringBuilder_t * get_textSoFar_28() const { return ___textSoFar_28; }
	inline StringBuilder_t ** get_address_of_textSoFar_28() { return &___textSoFar_28; }
	inline void set_textSoFar_28(StringBuilder_t * value)
	{
		___textSoFar_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_28), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___deviceName_29)); }
	inline String_t* get_deviceName_29() const { return ___deviceName_29; }
	inline String_t** get_address_of_deviceName_29() { return &___deviceName_29; }
	inline void set_deviceName_29(String_t* value)
	{
		___deviceName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_29), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___samplingRate_30)); }
	inline int32_t get_samplingRate_30() const { return ___samplingRate_30; }
	inline int32_t* get_address_of_samplingRate_30() { return &___samplingRate_30; }
	inline void set_samplingRate_30(int32_t value)
	{
		___samplingRate_30 = value;
	}

	inline static int32_t get_offset_of_dictationResult_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___dictationResult_31)); }
	inline String_t* get_dictationResult_31() const { return ___dictationResult_31; }
	inline String_t** get_address_of_dictationResult_31() { return &___dictationResult_31; }
	inline void set_dictationResult_31(String_t* value)
	{
		___dictationResult_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_31), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___dictationAudioClip_32)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dictationAudioClip_32() const { return ___dictationAudioClip_32; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dictationAudioClip_32() { return &___dictationAudioClip_32; }
	inline void set_dictationAudioClip_32(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dictationAudioClip_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_32), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___waitUntilPhraseRecognitionSystemHasStarted_34)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStarted_34() const { return ___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return &___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_34(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_34), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___waitUntilPhraseRecognitionSystemHasStopped_35)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStopped_35() const { return ___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return &___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_35(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_36() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___waitUntilDictationRecognizerHasStarted_36)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStarted_36() const { return ___waitUntilDictationRecognizerHasStarted_36; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStarted_36() { return &___waitUntilDictationRecognizerHasStarted_36; }
	inline void set_waitUntilDictationRecognizerHasStarted_36(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStarted_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_36), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_37() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D, ___waitUntilDictationRecognizerHasStopped_37)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStopped_37() const { return ___waitUntilDictationRecognizerHasStopped_37; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStopped_37() { return &___waitUntilDictationRecognizerHasStopped_37; }
	inline void set_waitUntilDictationRecognizerHasStopped_37(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStopped_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_37), (void*)value);
	}
};

struct WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartRecordingAsyncPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopRecordingAsyncPerfMarker_23;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * ___dictationRecognizer_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationHypothesisPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationResultPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationCompletePerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationErrorPerfMarker_42;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___StartRecordingAsyncPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartRecordingAsyncPerfMarker_22() const { return ___StartRecordingAsyncPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartRecordingAsyncPerfMarker_22() { return &___StartRecordingAsyncPerfMarker_22; }
	inline void set_StartRecordingAsyncPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartRecordingAsyncPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___StopRecordingAsyncPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopRecordingAsyncPerfMarker_23() const { return ___StopRecordingAsyncPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopRecordingAsyncPerfMarker_23() { return &___StopRecordingAsyncPerfMarker_23; }
	inline void set_StopRecordingAsyncPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopRecordingAsyncPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___dictationRecognizer_33)); }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * get_dictationRecognizer_33() const { return ___dictationRecognizer_33; }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B ** get_address_of_dictationRecognizer_33() { return &___dictationRecognizer_33; }
	inline void set_dictationRecognizer_33(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * value)
	{
		___dictationRecognizer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_33), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___UpdatePerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_38() const { return ___UpdatePerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_38() { return &___UpdatePerfMarker_38; }
	inline void set_UpdatePerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_39() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___DictationHypothesisPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationHypothesisPerfMarker_39() const { return ___DictationHypothesisPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationHypothesisPerfMarker_39() { return &___DictationHypothesisPerfMarker_39; }
	inline void set_DictationHypothesisPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationHypothesisPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_40() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___DictationResultPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationResultPerfMarker_40() const { return ___DictationResultPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationResultPerfMarker_40() { return &___DictationResultPerfMarker_40; }
	inline void set_DictationResultPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationResultPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_41() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___DictationCompletePerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationCompletePerfMarker_41() const { return ___DictationCompletePerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationCompletePerfMarker_41() { return &___DictationCompletePerfMarker_41; }
	inline void set_DictationCompletePerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationCompletePerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_42() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_StaticFields, ___DictationErrorPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationErrorPerfMarker_42() const { return ___DictationErrorPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationErrorPerfMarker_42() { return &___DictationErrorPerfMarker_42; }
	inline void set_DictationErrorPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationErrorPerfMarker_42 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3  : public BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<SurfaceTypes>k__BackingField
	int32_t ___U3CSurfaceTypesU3Ek__BackingField_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<ShouldLoadFromFile>k__BackingField
	bool ___U3CShouldLoadFromFileU3Ek__BackingField_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InstantiationBatchRate>k__BackingField
	int32_t ___U3CInstantiationBatchRateU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InferRegions>k__BackingField
	bool ___U3CInferRegionsU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestMeshData>k__BackingField
	bool ___U3CRequestMeshDataU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestPlaneData>k__BackingField
	bool ___U3CRequestPlaneDataU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestOcclusionMask>k__BackingField
	bool ___U3CRequestOcclusionMaskU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UsePersistentObjects>k__BackingField
	bool ___U3CUsePersistentObjectsU3Ek__BackingField_34;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<QueryRadius>k__BackingField
	float ___U3CQueryRadiusU3Ek__BackingField_35;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OcclusionMaskResolution>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3COcclusionMaskResolutionU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<CreateGameObjects>k__BackingField
	bool ___U3CCreateGameObjectsU3Ek__BackingField_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<AutoUpdate>k__BackingField
	bool ___U3CAutoUpdateU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OrientScene>k__BackingField
	bool ___U3COrientSceneU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<WorldMeshLevelOfDetail>k__BackingField
	int32_t ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<FirstAutoUpdateDelay>k__BackingField
	float ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UpdateOnceInitialized>k__BackingField
	bool ___U3CUpdateOnceInitializedU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultMaterialU3Ek__BackingField_43;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultWorldMeshMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44;
	// System.Byte[] Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sceneBytes_45;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::serializedScene
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___serializedScene_46;

public:
	inline static int32_t get_offset_of_U3CSurfaceTypesU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CSurfaceTypesU3Ek__BackingField_27)); }
	inline int32_t get_U3CSurfaceTypesU3Ek__BackingField_27() const { return ___U3CSurfaceTypesU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CSurfaceTypesU3Ek__BackingField_27() { return &___U3CSurfaceTypesU3Ek__BackingField_27; }
	inline void set_U3CSurfaceTypesU3Ek__BackingField_27(int32_t value)
	{
		___U3CSurfaceTypesU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CShouldLoadFromFileU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CShouldLoadFromFileU3Ek__BackingField_28)); }
	inline bool get_U3CShouldLoadFromFileU3Ek__BackingField_28() const { return ___U3CShouldLoadFromFileU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CShouldLoadFromFileU3Ek__BackingField_28() { return &___U3CShouldLoadFromFileU3Ek__BackingField_28; }
	inline void set_U3CShouldLoadFromFileU3Ek__BackingField_28(bool value)
	{
		___U3CShouldLoadFromFileU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CInstantiationBatchRateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CInstantiationBatchRateU3Ek__BackingField_29)); }
	inline int32_t get_U3CInstantiationBatchRateU3Ek__BackingField_29() const { return ___U3CInstantiationBatchRateU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CInstantiationBatchRateU3Ek__BackingField_29() { return &___U3CInstantiationBatchRateU3Ek__BackingField_29; }
	inline void set_U3CInstantiationBatchRateU3Ek__BackingField_29(int32_t value)
	{
		___U3CInstantiationBatchRateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CInferRegionsU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CInferRegionsU3Ek__BackingField_30)); }
	inline bool get_U3CInferRegionsU3Ek__BackingField_30() const { return ___U3CInferRegionsU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CInferRegionsU3Ek__BackingField_30() { return &___U3CInferRegionsU3Ek__BackingField_30; }
	inline void set_U3CInferRegionsU3Ek__BackingField_30(bool value)
	{
		___U3CInferRegionsU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CRequestMeshDataU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CRequestMeshDataU3Ek__BackingField_31)); }
	inline bool get_U3CRequestMeshDataU3Ek__BackingField_31() const { return ___U3CRequestMeshDataU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CRequestMeshDataU3Ek__BackingField_31() { return &___U3CRequestMeshDataU3Ek__BackingField_31; }
	inline void set_U3CRequestMeshDataU3Ek__BackingField_31(bool value)
	{
		___U3CRequestMeshDataU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CRequestPlaneDataU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CRequestPlaneDataU3Ek__BackingField_32)); }
	inline bool get_U3CRequestPlaneDataU3Ek__BackingField_32() const { return ___U3CRequestPlaneDataU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CRequestPlaneDataU3Ek__BackingField_32() { return &___U3CRequestPlaneDataU3Ek__BackingField_32; }
	inline void set_U3CRequestPlaneDataU3Ek__BackingField_32(bool value)
	{
		___U3CRequestPlaneDataU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CRequestOcclusionMaskU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CRequestOcclusionMaskU3Ek__BackingField_33)); }
	inline bool get_U3CRequestOcclusionMaskU3Ek__BackingField_33() const { return ___U3CRequestOcclusionMaskU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CRequestOcclusionMaskU3Ek__BackingField_33() { return &___U3CRequestOcclusionMaskU3Ek__BackingField_33; }
	inline void set_U3CRequestOcclusionMaskU3Ek__BackingField_33(bool value)
	{
		___U3CRequestOcclusionMaskU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CUsePersistentObjectsU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CUsePersistentObjectsU3Ek__BackingField_34)); }
	inline bool get_U3CUsePersistentObjectsU3Ek__BackingField_34() const { return ___U3CUsePersistentObjectsU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CUsePersistentObjectsU3Ek__BackingField_34() { return &___U3CUsePersistentObjectsU3Ek__BackingField_34; }
	inline void set_U3CUsePersistentObjectsU3Ek__BackingField_34(bool value)
	{
		___U3CUsePersistentObjectsU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CQueryRadiusU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CQueryRadiusU3Ek__BackingField_35)); }
	inline float get_U3CQueryRadiusU3Ek__BackingField_35() const { return ___U3CQueryRadiusU3Ek__BackingField_35; }
	inline float* get_address_of_U3CQueryRadiusU3Ek__BackingField_35() { return &___U3CQueryRadiusU3Ek__BackingField_35; }
	inline void set_U3CQueryRadiusU3Ek__BackingField_35(float value)
	{
		___U3CQueryRadiusU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskResolutionU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3COcclusionMaskResolutionU3Ek__BackingField_36)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3COcclusionMaskResolutionU3Ek__BackingField_36() const { return ___U3COcclusionMaskResolutionU3Ek__BackingField_36; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3COcclusionMaskResolutionU3Ek__BackingField_36() { return &___U3COcclusionMaskResolutionU3Ek__BackingField_36; }
	inline void set_U3COcclusionMaskResolutionU3Ek__BackingField_36(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3COcclusionMaskResolutionU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CCreateGameObjectsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CCreateGameObjectsU3Ek__BackingField_37)); }
	inline bool get_U3CCreateGameObjectsU3Ek__BackingField_37() const { return ___U3CCreateGameObjectsU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CCreateGameObjectsU3Ek__BackingField_37() { return &___U3CCreateGameObjectsU3Ek__BackingField_37; }
	inline void set_U3CCreateGameObjectsU3Ek__BackingField_37(bool value)
	{
		___U3CCreateGameObjectsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CAutoUpdateU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CAutoUpdateU3Ek__BackingField_38)); }
	inline bool get_U3CAutoUpdateU3Ek__BackingField_38() const { return ___U3CAutoUpdateU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CAutoUpdateU3Ek__BackingField_38() { return &___U3CAutoUpdateU3Ek__BackingField_38; }
	inline void set_U3CAutoUpdateU3Ek__BackingField_38(bool value)
	{
		___U3CAutoUpdateU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3COrientSceneU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3COrientSceneU3Ek__BackingField_39)); }
	inline bool get_U3COrientSceneU3Ek__BackingField_39() const { return ___U3COrientSceneU3Ek__BackingField_39; }
	inline bool* get_address_of_U3COrientSceneU3Ek__BackingField_39() { return &___U3COrientSceneU3Ek__BackingField_39; }
	inline void set_U3COrientSceneU3Ek__BackingField_39(bool value)
	{
		___U3COrientSceneU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40)); }
	inline int32_t get_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() const { return ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40; }
	inline int32_t* get_address_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40() { return &___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40; }
	inline void set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_40(int32_t value)
	{
		___U3CWorldMeshLevelOfDetailU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41)); }
	inline float get_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() const { return ___U3CFirstAutoUpdateDelayU3Ek__BackingField_41; }
	inline float* get_address_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_41() { return &___U3CFirstAutoUpdateDelayU3Ek__BackingField_41; }
	inline void set_U3CFirstAutoUpdateDelayU3Ek__BackingField_41(float value)
	{
		___U3CFirstAutoUpdateDelayU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateOnceInitializedU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CUpdateOnceInitializedU3Ek__BackingField_42)); }
	inline bool get_U3CUpdateOnceInitializedU3Ek__BackingField_42() const { return ___U3CUpdateOnceInitializedU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CUpdateOnceInitializedU3Ek__BackingField_42() { return &___U3CUpdateOnceInitializedU3Ek__BackingField_42; }
	inline void set_U3CUpdateOnceInitializedU3Ek__BackingField_42(bool value)
	{
		___U3CUpdateOnceInitializedU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMaterialU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CDefaultMaterialU3Ek__BackingField_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultMaterialU3Ek__BackingField_43() const { return ___U3CDefaultMaterialU3Ek__BackingField_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultMaterialU3Ek__BackingField_43() { return &___U3CDefaultMaterialU3Ek__BackingField_43; }
	inline void set_U3CDefaultMaterialU3Ek__BackingField_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultMaterialU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultMaterialU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() const { return ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44() { return &___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44; }
	inline void set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultWorldMeshMaterialU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_sceneBytes_45() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___sceneBytes_45)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sceneBytes_45() const { return ___sceneBytes_45; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sceneBytes_45() { return &___sceneBytes_45; }
	inline void set_sceneBytes_45(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sceneBytes_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneBytes_45), (void*)value);
	}

	inline static int32_t get_offset_of_serializedScene_46() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3, ___serializedScene_46)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_serializedScene_46() const { return ___serializedScene_46; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_serializedScene_46() { return &___serializedScene_46; }
	inline void set_serializedScene_46(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___serializedScene_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedScene_46), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::globalInputSource
	BaseGlobalInputSource_t2A5AA3869A3F9BFFF8E96FF272A0E7FE617F9B9F * ___globalInputSource_22;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_23;

public:
	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_globalInputSource_22() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C, ___globalInputSource_22)); }
	inline BaseGlobalInputSource_t2A5AA3869A3F9BFFF8E96FF272A0E7FE617F9B9F * get_globalInputSource_22() const { return ___globalInputSource_22; }
	inline BaseGlobalInputSource_t2A5AA3869A3F9BFFF8E96FF272A0E7FE617F9B9F ** get_address_of_globalInputSource_22() { return &___globalInputSource_22; }
	inline void set_globalInputSource_22(BaseGlobalInputSource_t2A5AA3869A3F9BFFF8E96FF272A0E7FE617F9B9F * value)
	{
		___globalInputSource_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalInputSource_22), (void*)value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_23() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C, ___keywordRecognizer_23)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_23() const { return ___keywordRecognizer_23; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_23() { return &___keywordRecognizer_23; }
	inline void set_keywordRecognizer_23(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_23), (void*)value);
	}
};

struct WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPhraseRecognizedPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_StaticFields, ___OnPhraseRecognizedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPhraseRecognizedPerfMarker_25() const { return ___OnPhraseRecognizedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPhraseRecognizedPerfMarker_25() { return &___OnPhraseRecognizedPerfMarker_25; }
	inline void set_OnPhraseRecognizedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPhraseRecognizedPerfMarker_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * ___ActiveControllers_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___ActiveControllers_21)); }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC  : public BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Unity.VisualScripting.Vector2Average
struct Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2  : public Average_1_t9C65F79AFB8290EC5C86F74E1628D6591628910D
{
public:

public:
};


// Unity.VisualScripting.Vector2Maximum
struct Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2  : public Maximum_1_t42C1B8AF65FF0E9F1829ADAE62C0C4863F5E776B
{
public:

public:
};


// Unity.VisualScripting.Vector2Minimum
struct Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4  : public Minimum_1_tE085FB43E23DE0AB9042B413317A9455B417A3CB
{
public:

public:
};


// Unity.VisualScripting.Vector2Sum
struct Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66  : public Sum_1_tF7946301CD16160CDC806BC134EE840DD115BE9A
{
public:

public:
};


// Unity.VisualScripting.Vector3Average
struct Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A  : public Average_1_tD2F8F38155256F09A66DDDB9BC051456BA39B59C
{
public:

public:
};


// Unity.VisualScripting.Vector3Maximum
struct Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC  : public Maximum_1_t06F87394014823F8F0E54A962B886387BB41E6D3
{
public:

public:
};


// Unity.VisualScripting.Vector3Minimum
struct Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805  : public Minimum_1_tFF4CF8AFFA57696163A4F5D920ADE8B5A906AE17
{
public:

public:
};


// Unity.VisualScripting.Vector3Sum
struct Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774  : public Sum_1_tA45CE0429A4490D87639436BBF2EE62D6339698A
{
public:

public:
};


// Unity.VisualScripting.Vector4Average
struct Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096  : public Average_1_t9CFF065585972F4DFA4A3916C0A9AF3ACEC722CA
{
public:

public:
};


// Unity.VisualScripting.Vector4Maximum
struct Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885  : public Maximum_1_t2FCD86559E8AFC871DFB1E32456D47861649D2F2
{
public:

public:
};


// Unity.VisualScripting.Vector4Minimum
struct Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99  : public Minimum_1_t0B93B51F1F7433772D36AC9EDC638BB79EF80111
{
public:

public:
};


// Unity.VisualScripting.Vector4Sum
struct Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137  : public Sum_1_t1A6D15380AB40B043FFA19F2759F68B5185179E2
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86  : public BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C  : public XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_29;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::voiceController
	WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF * ___voiceController_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::shouldSendVoiceEvents
	bool ___shouldSendVoiceEvents_31;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C, ___mixedRealityGazeProviderHeadOverride_29)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_29() const { return ___mixedRealityGazeProviderHeadOverride_29; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_29() { return &___mixedRealityGazeProviderHeadOverride_29; }
	inline void set_mixedRealityGazeProviderHeadOverride_29(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_29), (void*)value);
	}

	inline static int32_t get_offset_of_voiceController_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C, ___voiceController_30)); }
	inline WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF * get_voiceController_30() const { return ___voiceController_30; }
	inline WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF ** get_address_of_voiceController_30() { return &___voiceController_30; }
	inline void set_voiceController_30(WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF * value)
	{
		___voiceController_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceController_30), (void*)value);
	}

	inline static int32_t get_offset_of_shouldSendVoiceEvents_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C, ___shouldSendVoiceEvents_31)); }
	inline bool get_shouldSendVoiceEvents_31() const { return ___shouldSendVoiceEvents_31; }
	inline bool* get_address_of_shouldSendVoiceEvents_31() { return &___shouldSendVoiceEvents_31; }
	inline void set_shouldSendVoiceEvents_31(bool value)
	{
		___shouldSendVoiceEvents_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD  : public BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD, ___U3CNameU3Ek__BackingField_54)); }
	inline String_t* get_U3CNameU3Ek__BackingField_54() const { return ___U3CNameU3Ek__BackingField_54; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_54() { return &___U3CNameU3Ek__BackingField_54; }
	inline void set_U3CNameU3Ek__BackingField_54(String_t* value)
	{
		___U3CNameU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_54), (void*)value);
	}
};

struct XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___XRInputSubsystems_53;

public:
	inline static int32_t get_offset_of_XRInputSubsystems_53() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields, ___XRInputSubsystems_53)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_XRInputSubsystems_53() const { return ___XRInputSubsystems_53; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_XRInputSubsystems_53() { return &___XRInputSubsystems_53; }
	inline void set_XRInputSubsystems_53(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___XRInputSubsystems_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRInputSubsystems_53), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1  : public GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_69;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_70;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_71;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_69() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObserverOrigin_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_69() const { return ___oldObserverOrigin_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_69() { return &___oldObserverOrigin_69; }
	inline void set_oldObserverOrigin_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_69 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_70() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObservationExtents_70)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_70() const { return ___oldObservationExtents_70; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_70() { return &___oldObservationExtents_70; }
	inline void set_oldObservationExtents_70(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_70 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_71() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObserverVolumeType_71)); }
	inline int32_t get_oldObserverVolumeType_71() const { return ___oldObserverVolumeType_71; }
	inline int32_t* get_address_of_oldObserverVolumeType_71() { return &___oldObserverVolumeType_71; }
	inline void set_oldObserverVolumeType_71(int32_t value)
	{
		___oldObserverVolumeType_71 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_68;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_68() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields, ___ConfigureObserverVolumePerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_68() const { return ___ConfigureObserverVolumePerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_68() { return &___ConfigureObserverVolumePerfMarker_68; }
	inline void set_ConfigureObserverVolumePerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
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
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);


// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.ValueConnection
struct ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueConnection_tB3D2263A774E1D2CFA5372B07C07E89D0ACB0407_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.VariableDeclarationCollection
struct VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VariableDeclarationCollection_t0010743231A78B8CDB674B399EB33990CE4FAAEA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.VariableDeclarations
struct VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper>(obj) {}

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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VariableDeclarations_tDD58E1DAE4D5FF21A9BEDA52AAE234CF8CDFCCA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Absolute
struct Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Absolute_tD92163A56942B2C95C88ED8CEDEB039FF7C2EE0B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Angle
struct Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Angle_t993C63C5F6D6935AB2D9DD0C27BF0F245DF8248B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Average
struct Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Average_tF1A0FEB157CC753ED4B4A4FAD95194CE79B67AB2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Distance
struct Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Distance_t70C56BC7BE4C3D0C4B67EA0E706E47C1FCF677E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Divide
struct Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Divide_t4710B899249E5E1325299FD1E7CD84346AADBE0D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2DotProduct
struct Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2DotProduct_t82F9599B9275EA0F7AB4627088167B30FA0F16FF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Lerp
struct Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Lerp_tCC10B9B9ADED1B16C813156A7E35CC2145B6B38C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Maximum
struct Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Maximum_tB37FC58A42119BF602BA6B89A7BECB9475B874F2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Minimum
struct Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Minimum_t4ED9AFE9502D38A7C7810C3A2F451CD612C60DA4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Modulo
struct Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Modulo_tFCD4C4556DEDE09444F7F462FA66495009DF4A7F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2MoveTowards
struct Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2MoveTowards_t2F528B362C81AC777406E02AA518CE017CF3608F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Multiply
struct Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Multiply_tF6C2A397709BC262E36A3FA534DC27F0D25FADDE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Normalize
struct Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Normalize_tBD27F0DA1FF77D0A1333DABAA024BB360AB21027_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2PerSecond
struct Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2PerSecond_t0001D24E068EE5F353262F25CAAB1673BA244749_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Project
struct Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Project_tC3642981191B8DA0C98DF042BE0B0857C1ADAE55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Round
struct Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Round_t9012C7C7AD7B656B6BDFA33D6D091CBA6636008B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Subtract
struct Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Subtract_t32D68F46EB6EC45149784D60A520F52A186DF72F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector2Sum
struct Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2Sum_tA94B249B743EE0BA71D64364B0B9695C918AFF66_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>, IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70*>(this);
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
		interfaceIds[0] = IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *>(UnBox(GetManagedObjectInline(), Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>, IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF*>(this);
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
		interfaceIds[0] = IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F *>(UnBox(GetManagedObjectInline(), Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Absolute
struct Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Absolute_tAEC7BF250E4C44790F9E03DB9B18F0A0B4EC7638_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Angle
struct Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Angle_t8542701A0DF00696527B71B56722418C0E5EA044_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Average
struct Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Average_tC7758842BF4326C6736B7610E6468CBAA03AF25A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3CrossProduct
struct Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3CrossProduct_t170DD249FC04B3B1AA663D944EFE35EE0B135B43_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Distance
struct Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Distance_t8A9E5E689E7A0F1ECBB5B1DA136201E8BC71F8F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Divide
struct Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Divide_t7AFBDBB991F5E4393F10940A047EDB35F9BFA183_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3DotProduct
struct Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3DotProduct_tEBCA7F25FCCC11D645FC628ECB005725F82AAFDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Lerp
struct Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Lerp_t38791956E3A6D6CF047D8564FE4EEA806F1006B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Maximum
struct Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Maximum_t7CAE384368621FAF9EB2CB59B1255C82170174FC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Minimum
struct Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Minimum_tC64FAF4EE128ECB9E87BA5BEC249E6BD78CD3805_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Modulo
struct Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Modulo_tF7DE6162A07619382922B46D95C5BA2F64538B7A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3MoveTowards
struct Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3MoveTowards_t2FCC062E37D7C34EB62A3DF7EE452A929266C137_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Multiply
struct Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Multiply_t487B7D47714AA85211FD2069F0E627CE56244A51_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Normalize
struct Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Normalize_tF816D04A0F3424F27123AE4F3A9FB69CD8D27641_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3PerSecond
struct Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3PerSecond_t1F6B7ECB5D7F5B4D8021EF586CE0B08E053E6E4F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Project
struct Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Project_t7FC700FC325141F2294260111FD2B644C7AC7E9F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Round
struct Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Round_t64D2BEE4C7BEE0A65B21EC268B47341AF4A0CC46_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Subtract
struct Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Subtract_tCF3190CB253044360423D3904BEAEC2A0758BE27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector3Sum
struct Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3Sum_t48993DEEB044A2F38CDB78195819AC7FF7878774_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Absolute
struct Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Absolute_tA94C1D251761E861C4B30100CA62B345AB0D5FAB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Average
struct Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Average_t64B20F895CFA6B0981301DDAFC488711FD08D096_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Distance
struct Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Distance_tB87B642A39A5B9D4E8D10CAAE524F4359AC2828A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Divide
struct Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Divide_t53527665F2E61A7B1A16847070D4A53C6720E87A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4DotProduct
struct Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4DotProduct_t4A803B94F29284CE9AEF96BB168E46C0E4A98183_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Lerp
struct Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Lerp_t30A664466DB2CAC7762121182F39FFC594F0B529_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Maximum
struct Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Maximum_t4B606E887BC5739063D7AA60AE75EC0D0A0F2885_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Minimum
struct Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Minimum_tBBD30DB631B78E8ACE6A24DF35DBCF5A05BCEF99_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Modulo
struct Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Modulo_tC2FEEFD0FDFBA0D160DAC3B2340D1D875914EFDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4MoveTowards
struct Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4MoveTowards_t79B94A0DA59C0C637A6039A105B9A7A3459FC985_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Multiply
struct Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Multiply_t9EBE411932CBC6BA7BF3EE4FAB7211AD030DF2DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Normalize
struct Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Normalize_tCECD0ADCB2300FA7863EA4FC7EEB35074B9CAA24_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4PerSecond
struct Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4PerSecond_t896F123449C005CF388731704A748AF54C729EEA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Round
struct Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Round_tCA35F8AA6F73E2D102D0948F2607E16E910F66A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Subtract
struct Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Subtract_t1EF2D57F100DC9A1B68B1F4B5D05499E6E55BC00_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Vector4Sum
struct Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector4Sum_t277221DAD6556E3732613C1BB8E4A0DF3D8F8137_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitForEndOfFrameUnit
struct WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitForEndOfFrameUnit_t27909CD92CC3B8193017BE16D56E5AB365C38F28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitForFlow
struct WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitForFlow_tBFE0F3610D965FE47AD4CD91194894C42A24EE6F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitForNextFrameUnit
struct WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitForNextFrameUnit_tE6E9CBEB948043445822F716653BF09D316371D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitForSecondsUnit
struct WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitForSecondsUnit_t1539FE24239974CAEA34C35C59359D3B7F184558_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitUntilUnit
struct WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitUntilUnit_tEDCA70DC10F5BC3A446EE731778E9730492FCF8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.WaitWhileUnit
struct WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WaitWhileUnit_t0CA61C6B269B25464C2124711A4F8CA923993B03_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.While
struct While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_While_t7B42A714BF9BC582A03390382825B51EE3A7D071(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) While_t7B42A714BF9BC582A03390382825B51EE3A7D071_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsDictationInputProvider_t8D9BDF683C5A1763659CE74A0B59D5295FAD096D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F, IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434
{
	inline WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0)
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

		if (::memcmp(&iid, &IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434*>(this);
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
		interfaceIds[0] = IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B(__thisValue, ___value0, NULL);
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		intptr_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pCid5' to managed representation
		Guid_t  ____pCid5_empty;
		memset((&____pCid5_empty), 0, sizeof(____pCid5_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, (&____pCid5_empty), NULL);
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

		// Marshaling of parameter '___pCid5' back from managed representation
		*___pCid5 = ____pCid5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pSize5' to managed representation
		uint32_t ____pSize5_empty = 0;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, (&____pSize5_empty), NULL);
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

		// Marshaling of parameter '___pSize5' back from managed representation
		*___pSize5 = ____pSize5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639(__thisValue, ___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5, NULL);
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppv2' to managed representation
		intptr_t ____ppv2_empty;
		memset((&____ppv2_empty), 0, sizeof(____ppv2_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39(__thisValue, ___pStm0, ___riid1, (&____ppv2_empty), NULL);
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

		// Marshaling of parameter '___ppv2' back from managed representation
		*___ppv2 = ____ppv2_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF(__thisValue, ___pStm0, NULL);
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC(__thisValue, ___dwReserved0, NULL);
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

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSceneUnderstandingObserver_t594FCDE9D978D2C2EACF0D6FDD425C5C212F5BE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSpeechInputProvider_tB80DFA22BF4BDE82064841B9194C867DF3AB988C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.Benchmark01/<Start>d__10
struct U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__10_t4C97F7E5F1F2D654FF76C297F92CF423F472A640_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.Benchmark01_UGUI/<Start>d__10
struct U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__10_t3D69371599D2A84DED6689D4FA6EA1720611EAD3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for BlinkLed/<BlinkLoop>d__4
struct U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkLoopU3Ed__4_t6A1E14E79147D87816726DCF95F1A44C8E4AEF8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__18_tDAE3ECED2997B9832BF2B82CDF3E400461F07C3B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSequenceU3Ed__12_t6A4FCE1BFF595AF6FE6F0D05442E60E9AF97BD41_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWaitForSpeechCommandU3Ed__13_tDB545A5475FA15894D8BCDB42CF1181C1BBB5796_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSequenceU3Ed__12_t6A10D90BF5290BA10EA4004FCC7CF5A74BD15069_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWaitForSpeechCommandU3Ed__13_tA60A74639F9BDF7F05D0B59181DC4EE65A361583_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Bundle/<BlinkAllLoop>d__2
struct U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkAllLoopU3Ed__2_tB00A9D08698742A6D4689DA44104298F77BD7997_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.InteractiveElement.CompressableButton/<AnimateHighlightPlate>d__104
struct U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__104_tA0B579A9F65DCDB5A27115CD38647EFB468D2636_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<ClickTimer>d__14
struct U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickTimerU3Ed__14_t71A0EEABE685898F7FAF68E2F4FDDB8078FAFB23_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.CustomInteractablesReceiver/<VoiceTimer>d__15
struct U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CVoiceTimerU3Ed__15_t92A35A289B4E905CE90E001DBB5D2048B9758083_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlankCertificateHandler_t8FA4B9BB3C290CAFC92103DB5C4572E98026D429_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCloseDialogU3Ed__11_tE9024F1BAC4DD6D36B081C4C15C601D07628C80F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COpenDialogU3Ed__10_tCD9FE44D6316D67E44EA18E780EE0DB5E632F7E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunDialogOverTimeU3Ed__9_tA990D30F74A720C09E04F5D31AB8597760161FB1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<ComputeHeatmapAt>d__20
struct U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CComputeHeatmapAtU3Ed__20_t712026134531C2F05E0C667FF037982A8E717366_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture/<DrawAt>d__19
struct U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDrawAtU3Ed__19_t9BE396D88A681465FBC3401B0C505F172B172ADC_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
