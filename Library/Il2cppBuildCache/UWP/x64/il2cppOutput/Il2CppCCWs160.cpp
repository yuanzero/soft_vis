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

// System.Action`1<Unity.VisualScripting.IGraphElement>
struct Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>>
struct Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944;
// Unity.VisualScripting.IConnectionCollection`3<Unity.VisualScripting.IUnitRelation,Unity.VisualScripting.IUnitPort,Unity.VisualScripting.IUnitPort>
struct IConnectionCollection_3_t76FC7C9663708A197563F5FC2D4DBC157CC83B4C;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
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
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t087726847A7755115A9464A201CE76C01156D000;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput>
struct ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Unity.VisualScripting.ControlOutput
struct ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD;
// System.Exception
struct Exception_t;
// Unity.VisualScripting.FlowGraph
struct FlowGraph_t208A14937C6E2C6ECA92FBB913D70C0A2FFDCECB;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_t949E68513FDBF3A0C07E49865765B73FA932B91D;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider
struct IMixedRealityFocusProvider_tEFE345A5E21C14328422D2B9C8839A3CE488290F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider
struct IMixedRealityRaycastProvider_t972BE2D3C73D06A6B3914006A2300A5802BC7A1B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_t938FCA91AC91EA4AAF21E560BA672D0029723A83;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Unity.VisualScripting.ValueInput
struct ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082;
// Unity.VisualScripting.ValueOutput
struct ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t3C96C946DA271FDE8787E85630D1934A793D894C;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19;
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
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct NOVTABLE IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6(IIterator_1_t3C96C946DA271FDE8787E85630D1934A793D894C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>
struct NOVTABLE IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___first0, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>
struct NOVTABLE IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273(Il2CppHString ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___entries_1)); }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___keys_7)); }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___values_8)); }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Unity.VisualScripting.MergedKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>
struct MergedKeyedCollection_2_tD53A66F7B37F83A2316F822578E45CA54F649FFD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<TKey,TItem>> Unity.VisualScripting.MergedKeyedCollection`2::collections
	Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * ___collections_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<TKey,TItem>> Unity.VisualScripting.MergedKeyedCollection`2::collectionsLookup
	Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * ___collectionsLookup_1;

public:
	inline static int32_t get_offset_of_collections_0() { return static_cast<int32_t>(offsetof(MergedKeyedCollection_2_tD53A66F7B37F83A2316F822578E45CA54F649FFD, ___collections_0)); }
	inline Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * get_collections_0() const { return ___collections_0; }
	inline Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 ** get_address_of_collections_0() { return &___collections_0; }
	inline void set_collections_0(Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * value)
	{
		___collections_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collections_0), (void*)value);
	}

	inline static int32_t get_offset_of_collectionsLookup_1() { return static_cast<int32_t>(offsetof(MergedKeyedCollection_2_tD53A66F7B37F83A2316F822578E45CA54F649FFD, ___collectionsLookup_1)); }
	inline Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * get_collectionsLookup_1() const { return ___collectionsLookup_1; }
	inline Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 ** get_address_of_collectionsLookup_1() { return &___collectionsLookup_1; }
	inline void set_collectionsLookup_1(Dictionary_2_tAE02E36A1A075E4C2E23DB0239AA84852FC81D33 * value)
	{
		___collectionsLookup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionsLookup_1), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
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

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
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


// Uduino.SerializableDictionary`2<System.String,System.Boolean>
struct SerializableDictionary_2_t941D510A2DEA55C53B9DF441E269514287DF9632  : public Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C
{
public:
	// System.Collections.Generic.List`1<TKey> Uduino.SerializableDictionary`2::keys
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys_14;
	// System.Collections.Generic.List`1<TValue> Uduino.SerializableDictionary`2::values
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___values_15;

public:
	inline static int32_t get_offset_of_keys_14() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t941D510A2DEA55C53B9DF441E269514287DF9632, ___keys_14)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_keys_14() const { return ___keys_14; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_keys_14() { return &___keys_14; }
	inline void set_keys_14(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___keys_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_14), (void*)value);
	}

	inline static int32_t get_offset_of_values_15() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t941D510A2DEA55C53B9DF441E269514287DF9632, ___values_15)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_values_15() const { return ___values_15; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_values_15() { return &___values_15; }
	inline void set_values_15(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___values_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_15), (void*)value);
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


// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalKeys_4), (void*)value);
	}
};


// System.Security.Cryptography.MD5
struct MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
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


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Unity.VisualScripting.MergedGraphElementCollection
struct MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839  : public MergedKeyedCollection_2_tD53A66F7B37F83A2316F822578E45CA54F649FFD
{
public:
	// System.Action`1<Unity.VisualScripting.IGraphElement> Unity.VisualScripting.MergedGraphElementCollection::ItemAdded
	Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * ___ItemAdded_2;
	// System.Action`1<Unity.VisualScripting.IGraphElement> Unity.VisualScripting.MergedGraphElementCollection::ItemRemoved
	Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * ___ItemRemoved_3;
	// System.Action Unity.VisualScripting.MergedGraphElementCollection::CollectionChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_ItemAdded_2() { return static_cast<int32_t>(offsetof(MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839, ___ItemAdded_2)); }
	inline Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * get_ItemAdded_2() const { return ___ItemAdded_2; }
	inline Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 ** get_address_of_ItemAdded_2() { return &___ItemAdded_2; }
	inline void set_ItemAdded_2(Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * value)
	{
		___ItemAdded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemAdded_2), (void*)value);
	}

	inline static int32_t get_offset_of_ItemRemoved_3() { return static_cast<int32_t>(offsetof(MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839, ___ItemRemoved_3)); }
	inline Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * get_ItemRemoved_3() const { return ___ItemRemoved_3; }
	inline Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 ** get_address_of_ItemRemoved_3() { return &___ItemRemoved_3; }
	inline void set_ItemRemoved_3(Action_1_t357108F135A049CDFA19ED087ECC4D136C288C36 * value)
	{
		___ItemRemoved_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemRemoved_3), (void*)value);
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839, ___CollectionChanged_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionChanged_4), (void*)value);
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
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

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
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


// Uduino.IsActiveDictionnary
struct IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE  : public SerializableDictionary_2_t941D510A2DEA55C53B9DF441E269514287DF9632
{
public:

public:
};


// Uduino.IsPresentDictionnary
struct IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00  : public SerializableDictionary_2_t941D510A2DEA55C53B9DF441E269514287DF9632
{
public:

public:
};


// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1  : public MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____H_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____H_4), (void*)value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___buff_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProcessingBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_9), (void*)value);
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_0;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_2;

public:
	inline static int32_t get_offset_of_m_lock_0() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_0)); }
	inline RuntimeObject * get_m_lock_0() const { return ___m_lock_0; }
	inline RuntimeObject ** get_address_of_m_lock_0() { return &___m_lock_0; }
	inline void set_m_lock_0(RuntimeObject * value)
	{
		___m_lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_1() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_1)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_1() const { return ___m_eventObj_1; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_1() { return &___m_eventObj_1; }
	inline void set_m_eventObj_1(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_2)); }
	inline int32_t get_m_combinedState_2() const { return ___m_combinedState_2; }
	inline int32_t* get_address_of_m_combinedState_2() { return &___m_combinedState_2; }
	inline void set_m_combinedState_2(int32_t value)
	{
		___m_combinedState_2 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_3;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_3() const { return ___s_cancellationTokenCallback_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_3() { return &___s_cancellationTokenCallback_3; }
	inline void set_s_cancellationTokenCallback_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_3), (void*)value);
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
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


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
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


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
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


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
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

// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
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


// Unity.VisualScripting.EventUnit`1<Unity.VisualScripting.EmptyEventArgs>
struct EventUnit_1_tC679BA32BBC448D3A769DFD9C3EA67022A2F8EE7  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Boolean Unity.VisualScripting.EventUnit`1::<coroutine>k__BackingField
	bool ___U3CcoroutineU3Ek__BackingField_15;
	// Unity.VisualScripting.ControlOutput Unity.VisualScripting.EventUnit`1::<trigger>k__BackingField
	ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * ___U3CtriggerU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CcoroutineU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(EventUnit_1_tC679BA32BBC448D3A769DFD9C3EA67022A2F8EE7, ___U3CcoroutineU3Ek__BackingField_15)); }
	inline bool get_U3CcoroutineU3Ek__BackingField_15() const { return ___U3CcoroutineU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CcoroutineU3Ek__BackingField_15() { return &___U3CcoroutineU3Ek__BackingField_15; }
	inline void set_U3CcoroutineU3Ek__BackingField_15(bool value)
	{
		___U3CcoroutineU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(EventUnit_1_tC679BA32BBC448D3A769DFD9C3EA67022A2F8EE7, ___U3CtriggerU3Ek__BackingField_16)); }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * get_U3CtriggerU3Ek__BackingField_16() const { return ___U3CtriggerU3Ek__BackingField_16; }
	inline ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 ** get_address_of_U3CtriggerU3Ek__BackingField_16() { return &___U3CtriggerU3Ek__BackingField_16; }
	inline void set_U3CtriggerU3Ek__BackingField_16(ControlOutput_t2F05A1A8DF4721BD7E7C937A3A2E2AFCDCA24DE9 * value)
	{
		___U3CtriggerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.MultiInputUnit`1<System.Collections.IDictionary>
struct MultiInputUnit_1_tE73B3A118BC4BD9C17A921DA30C1BEEFB3EE6DC4  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Int32 Unity.VisualScripting.MultiInputUnit`1::_inputCount
	int32_t ____inputCount_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.MultiInputUnit`1::<multiInputs>k__BackingField
	ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * ___U3CmultiInputsU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__inputCount_15() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_tE73B3A118BC4BD9C17A921DA30C1BEEFB3EE6DC4, ____inputCount_15)); }
	inline int32_t get__inputCount_15() const { return ____inputCount_15; }
	inline int32_t* get_address_of__inputCount_15() { return &____inputCount_15; }
	inline void set__inputCount_15(int32_t value)
	{
		____inputCount_15 = value;
	}

	inline static int32_t get_offset_of_U3CmultiInputsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_tE73B3A118BC4BD9C17A921DA30C1BEEFB3EE6DC4, ___U3CmultiInputsU3Ek__BackingField_16)); }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * get_U3CmultiInputsU3Ek__BackingField_16() const { return ___U3CmultiInputsU3Ek__BackingField_16; }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 ** get_address_of_U3CmultiInputsU3Ek__BackingField_16() { return &___U3CmultiInputsU3Ek__BackingField_16; }
	inline void set_U3CmultiInputsU3Ek__BackingField_16(ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * value)
	{
		___U3CmultiInputsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmultiInputsU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.MultiInputUnit`1<System.Collections.IEnumerable>
struct MultiInputUnit_1_t70FC4490024B134EDC91DFC2098F4F4437ADEB6F  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Int32 Unity.VisualScripting.MultiInputUnit`1::_inputCount
	int32_t ____inputCount_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.VisualScripting.ValueInput> Unity.VisualScripting.MultiInputUnit`1::<multiInputs>k__BackingField
	ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * ___U3CmultiInputsU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__inputCount_15() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t70FC4490024B134EDC91DFC2098F4F4437ADEB6F, ____inputCount_15)); }
	inline int32_t get__inputCount_15() const { return ____inputCount_15; }
	inline int32_t* get_address_of__inputCount_15() { return &____inputCount_15; }
	inline void set__inputCount_15(int32_t value)
	{
		____inputCount_15 = value;
	}

	inline static int32_t get_offset_of_U3CmultiInputsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MultiInputUnit_1_t70FC4490024B134EDC91DFC2098F4F4437ADEB6F, ___U3CmultiInputsU3Ek__BackingField_16)); }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * get_U3CmultiInputsU3Ek__BackingField_16() const { return ___U3CmultiInputsU3Ek__BackingField_16; }
	inline ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 ** get_address_of_U3CmultiInputsU3Ek__BackingField_16() { return &___U3CmultiInputsU3Ek__BackingField_16; }
	inline void set_U3CmultiInputsU3Ek__BackingField_16(ReadOnlyCollection_1_t024CFA7BCA9C2641156FB9BEAB94579AB50EFD05 * value)
	{
		___U3CmultiInputsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmultiInputsU3Ek__BackingField_16), (void*)value);
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


// Unity.VisualScripting.LastItem
struct LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.LastItem::<collection>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CcollectionU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.LastItem::<lastItem>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3ClastItemU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CcollectionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C, ___U3CcollectionU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CcollectionU3Ek__BackingField_15() const { return ___U3CcollectionU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CcollectionU3Ek__BackingField_15() { return &___U3CcollectionU3Ek__BackingField_15; }
	inline void set_U3CcollectionU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CcollectionU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcollectionU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastItemU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C, ___U3ClastItemU3Ek__BackingField_16)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3ClastItemU3Ek__BackingField_16() const { return ___U3ClastItemU3Ek__BackingField_16; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3ClastItemU3Ek__BackingField_16() { return &___U3ClastItemU3Ek__BackingField_16; }
	inline void set_U3ClastItemU3Ek__BackingField_16(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3ClastItemU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastItemU3Ek__BackingField_16), (void*)value);
	}
};


// Unity.VisualScripting.ListContainsItem
struct ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.ListContainsItem::<list>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3ClistU3Ek__BackingField_15;
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.ListContainsItem::<item>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CitemU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.ListContainsItem::<contains>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CcontainsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3ClistU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A, ___U3ClistU3Ek__BackingField_15)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3ClistU3Ek__BackingField_15() const { return ___U3ClistU3Ek__BackingField_15; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3ClistU3Ek__BackingField_15() { return &___U3ClistU3Ek__BackingField_15; }
	inline void set_U3ClistU3Ek__BackingField_15(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3ClistU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClistU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CitemU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A, ___U3CitemU3Ek__BackingField_16)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CitemU3Ek__BackingField_16() const { return ___U3CitemU3Ek__BackingField_16; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CitemU3Ek__BackingField_16() { return &___U3CitemU3Ek__BackingField_16; }
	inline void set_U3CitemU3Ek__BackingField_16(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CitemU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CitemU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontainsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A, ___U3CcontainsU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CcontainsU3Ek__BackingField_17() const { return ___U3CcontainsU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CcontainsU3Ek__BackingField_17() { return &___U3CcontainsU3Ek__BackingField_17; }
	inline void set_U3CcontainsU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CcontainsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontainsU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Literal
struct Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02  : public Unit_tB16E35E1E83EA45098039EE06A0724A688A2905B
{
public:
	// System.Object Unity.VisualScripting.Literal::_value
	RuntimeObject * ____value_15;
	// System.Type Unity.VisualScripting.Literal::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_16;
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.Literal::<output>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CoutputU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__value_15() { return static_cast<int32_t>(offsetof(Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02, ____value_15)); }
	inline RuntimeObject * get__value_15() const { return ____value_15; }
	inline RuntimeObject ** get_address_of__value_15() { return &____value_15; }
	inline void set__value_15(RuntimeObject * value)
	{
		____value_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02, ___U3CtypeU3Ek__BackingField_16)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_16() const { return ___U3CtypeU3Ek__BackingField_16; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_16() { return &___U3CtypeU3Ek__BackingField_16; }
	inline void set_U3CtypeU3Ek__BackingField_16(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02, ___U3CoutputU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CoutputU3Ek__BackingField_17() const { return ___U3CoutputU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CoutputU3Ek__BackingField_17() { return &___U3CoutputU3Ek__BackingField_17; }
	inline void set_U3CoutputU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CoutputU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF  : public BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_13;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingLostU3Ek__BackingField_14;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingRestoredU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_t938FCA91AC91EA4AAF21E560BA672D0029723A83 * ___profile_16;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_18;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_19;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___U3CTrackingLostU3Ek__BackingField_13)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_13() const { return ___U3CTrackingLostU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_13() { return &___U3CTrackingLostU3Ek__BackingField_13; }
	inline void set_U3CTrackingLostU3Ek__BackingField_13(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___U3COnTrackingLostU3Ek__BackingField_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingLostU3Ek__BackingField_14() const { return ___U3COnTrackingLostU3Ek__BackingField_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_14() { return &___U3COnTrackingLostU3Ek__BackingField_14; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___U3COnTrackingRestoredU3Ek__BackingField_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingRestoredU3Ek__BackingField_15() const { return ___U3COnTrackingRestoredU3Ek__BackingField_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_15() { return &___U3COnTrackingRestoredU3Ek__BackingField_15; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_profile_16() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___profile_16)); }
	inline LostTrackingServiceProfile_t938FCA91AC91EA4AAF21E560BA672D0029723A83 * get_profile_16() const { return ___profile_16; }
	inline LostTrackingServiceProfile_t938FCA91AC91EA4AAF21E560BA672D0029723A83 ** get_address_of_profile_16() { return &___profile_16; }
	inline void set_profile_16(LostTrackingServiceProfile_t938FCA91AC91EA4AAF21E560BA672D0029723A83 * value)
	{
		___profile_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_16), (void*)value);
	}

	inline static int32_t get_offset_of_visual_17() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___visual_17)); }
	inline RuntimeObject* get_visual_17() const { return ___visual_17; }
	inline RuntimeObject** get_address_of_visual_17() { return &___visual_17; }
	inline void set_visual_17(RuntimeObject* value)
	{
		___visual_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_17), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_18() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___cullingMaskOnTrackingLost_18)); }
	inline int32_t get_cullingMaskOnTrackingLost_18() const { return ___cullingMaskOnTrackingLost_18; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_18() { return &___cullingMaskOnTrackingLost_18; }
	inline void set_cullingMaskOnTrackingLost_18(int32_t value)
	{
		___cullingMaskOnTrackingLost_18 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_19() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF, ___timeScaleOnTrackingLost_19)); }
	inline float get_timeScaleOnTrackingLost_19() const { return ___timeScaleOnTrackingLost_19; }
	inline float* get_address_of_timeScaleOnTrackingLost_19() { return &___timeScaleOnTrackingLost_19; }
	inline void set_timeScaleOnTrackingLost_19(float value)
	{
		___timeScaleOnTrackingLost_19 = value;
	}
};

struct LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableTrackingLostVisualPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___EnableTrackingLostVisualPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetTrackingLostPerfMarker_22;

public:
	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_20() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_StaticFields, ___DisableTrackingLostVisualPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableTrackingLostVisualPerfMarker_20() const { return ___DisableTrackingLostVisualPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableTrackingLostVisualPerfMarker_20() { return &___DisableTrackingLostVisualPerfMarker_20; }
	inline void set_DisableTrackingLostVisualPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableTrackingLostVisualPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_21() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_StaticFields, ___EnableTrackingLostVisualPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_EnableTrackingLostVisualPerfMarker_21() const { return ___EnableTrackingLostVisualPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_EnableTrackingLostVisualPerfMarker_21() { return &___EnableTrackingLostVisualPerfMarker_21; }
	inline void set_EnableTrackingLostVisualPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___EnableTrackingLostVisualPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_22() { return static_cast<int32_t>(offsetof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_StaticFields, ___SetTrackingLostPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetTrackingLostPerfMarker_22() const { return ___SetTrackingLostPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetTrackingLostPerfMarker_22() { return &___SetTrackingLostPerfMarker_22; }
	inline void set_SetTrackingLostPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetTrackingLostPerfMarker_22 = value;
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
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


// Unity.VisualScripting.MachineEventUnit`1<Unity.VisualScripting.EmptyEventArgs>
struct MachineEventUnit_1_t583D16726A3B901572D512DE0BF85ACFF7C1E715  : public EventUnit_1_tC679BA32BBC448D3A769DFD9C3EA67022A2F8EE7
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * ___dataProviders_21;

public:
	inline static int32_t get_offset_of_dataProviders_21() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47, ___dataProviders_21)); }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * get_dataProviders_21() const { return ___dataProviders_21; }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 ** get_address_of_dataProviders_21() { return &___dataProviders_21; }
	inline void set_dataProviders_21(List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * value)
	{
		___dataProviders_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_21), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___LateUpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_23() const { return ___LateUpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_23() { return &___LateUpdatePerfMarker_23; }
	inline void set_LateUpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_23 = value;
	}
};


// Unity.VisualScripting.IsVariableDefined
struct IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826  : public UnifiedVariableUnit_t3EF4425BC44157E987419DF2CC064DDFB9BFAF86
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.IsVariableDefined::<isVariableDefined>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CisVariableDefinedU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CisVariableDefinedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826, ___U3CisVariableDefinedU3Ek__BackingField_18)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CisVariableDefinedU3Ek__BackingField_18() const { return ___U3CisVariableDefinedU3Ek__BackingField_18; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CisVariableDefinedU3Ek__BackingField_18() { return &___U3CisVariableDefinedU3Ek__BackingField_18; }
	inline void set_U3CisVariableDefinedU3Ek__BackingField_18(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CisVariableDefinedU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisVariableDefinedU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.IsVariableDefinedUnit
struct IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141  : public VariableUnit_t19851B289BCF167B288FDD1172BFFBE0955BBCF7
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.IsVariableDefinedUnit::<isDefined>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CisDefinedU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CisDefinedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141, ___U3CisDefinedU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CisDefinedU3Ek__BackingField_17() const { return ___U3CisDefinedU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CisDefinedU3Ek__BackingField_17() { return &___U3CisDefinedU3Ek__BackingField_17; }
	inline void set_U3CisDefinedU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CisDefinedU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisDefinedU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.Less
struct Less_t8C093C48E0510823DCB88CE44A16F79ECE048239  : public BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6
{
public:

public:
};


// Unity.VisualScripting.LessOrEqual
struct LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C  : public BinaryComparisonUnit_t16F17126CD841EF286F632BCEDE714013BA94ED6
{
public:

public:
};


// Unity.VisualScripting.MergeDictionaries
struct MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB  : public MultiInputUnit_1_tE73B3A118BC4BD9C17A921DA30C1BEEFB3EE6DC4
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.MergeDictionaries::<dictionary>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3CdictionaryU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CdictionaryU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB, ___U3CdictionaryU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3CdictionaryU3Ek__BackingField_17() const { return ___U3CdictionaryU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3CdictionaryU3Ek__BackingField_17() { return &___U3CdictionaryU3Ek__BackingField_17; }
	inline void set_U3CdictionaryU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3CdictionaryU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdictionaryU3Ek__BackingField_17), (void*)value);
	}
};


// Unity.VisualScripting.MergeLists
struct MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA  : public MultiInputUnit_1_t70FC4490024B134EDC91DFC2098F4F4437ADEB6F
{
public:
	// Unity.VisualScripting.ValueOutput Unity.VisualScripting.MergeLists::<list>k__BackingField
	ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * ___U3ClistU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3ClistU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA, ___U3ClistU3Ek__BackingField_17)); }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * get_U3ClistU3Ek__BackingField_17() const { return ___U3ClistU3Ek__BackingField_17; }
	inline ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 ** get_address_of_U3ClistU3Ek__BackingField_17() { return &___U3ClistU3Ek__BackingField_17; }
	inline void set_U3ClistU3Ek__BackingField_17(ValueOutput_tF87C271D1C41507626204D2CFD00DAC815178BE4 * value)
	{
		___U3ClistU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClistU3Ek__BackingField_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * ___visualProfiler_23;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * ___diagnosticsSystemProfile_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_29;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * ___eventData_30;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_33;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_34;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_35;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_37;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticVisualizationParent_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_22() const { return ___diagnosticVisualizationParent_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_22() { return &___diagnosticVisualizationParent_22; }
	inline void set_diagnosticVisualizationParent_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___visualProfiler_23)); }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * get_visualProfiler_23() const { return ___visualProfiler_23; }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 ** get_address_of_visualProfiler_23() { return &___visualProfiler_23; }
	inline void set_visualProfiler_23(MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * value)
	{
		___visualProfiler_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_23), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticsSystemProfile_24)); }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * get_diagnosticsSystemProfile_24() const { return ___diagnosticsSystemProfile_24; }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 ** get_address_of_diagnosticsSystemProfile_24() { return &___diagnosticsSystemProfile_24; }
	inline void set_diagnosticsSystemProfile_24(MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * value)
	{
		___diagnosticsSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showDiagnostics_25)); }
	inline bool get_showDiagnostics_25() const { return ___showDiagnostics_25; }
	inline bool* get_address_of_showDiagnostics_25() { return &___showDiagnostics_25; }
	inline void set_showDiagnostics_25(bool value)
	{
		___showDiagnostics_25 = value;
	}

	inline static int32_t get_offset_of_showProfiler_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfiler_26)); }
	inline bool get_showProfiler_26() const { return ___showProfiler_26; }
	inline bool* get_address_of_showProfiler_26() { return &___showProfiler_26; }
	inline void set_showProfiler_26(bool value)
	{
		___showProfiler_26 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showFrameInfo_27)); }
	inline bool get_showFrameInfo_27() const { return ___showFrameInfo_27; }
	inline bool* get_address_of_showFrameInfo_27() { return &___showFrameInfo_27; }
	inline void set_showFrameInfo_27(bool value)
	{
		___showFrameInfo_27 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showMemoryStats_28)); }
	inline bool get_showMemoryStats_28() const { return ___showMemoryStats_28; }
	inline bool* get_address_of_showMemoryStats_28() { return &___showMemoryStats_28; }
	inline void set_showMemoryStats_28(bool value)
	{
		___showMemoryStats_28 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___frameSampleRate_29)); }
	inline float get_frameSampleRate_29() const { return ___frameSampleRate_29; }
	inline float* get_address_of_frameSampleRate_29() { return &___frameSampleRate_29; }
	inline void set_frameSampleRate_29(float value)
	{
		___frameSampleRate_29 = value;
	}

	inline static int32_t get_offset_of_eventData_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___eventData_30)); }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * get_eventData_30() const { return ___eventData_30; }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 ** get_address_of_eventData_30() { return &___eventData_30; }
	inline void set_eventData_30(DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * value)
	{
		___eventData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_30), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowAnchor_33)); }
	inline int32_t get_windowAnchor_33() const { return ___windowAnchor_33; }
	inline int32_t* get_address_of_windowAnchor_33() { return &___windowAnchor_33; }
	inline void set_windowAnchor_33(int32_t value)
	{
		___windowAnchor_33 = value;
	}

	inline static int32_t get_offset_of_windowOffset_34() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowOffset_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_34() const { return ___windowOffset_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_34() { return &___windowOffset_34; }
	inline void set_windowOffset_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_34 = value;
	}

	inline static int32_t get_offset_of_windowScale_35() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowScale_35)); }
	inline float get_windowScale_35() const { return ___windowScale_35; }
	inline float* get_address_of_windowScale_35() { return &___windowScale_35; }
	inline void set_windowScale_35(float value)
	{
		___windowScale_35 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_36() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowFollowSpeed_36)); }
	inline float get_windowFollowSpeed_36() const { return ___windowFollowSpeed_36; }
	inline float* get_address_of_windowFollowSpeed_36() { return &___windowFollowSpeed_36; }
	inline void set_windowFollowSpeed_36(float value)
	{
		___windowFollowSpeed_36 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_37() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfilerDuringMRC_37)); }
	inline bool get_showProfilerDuringMRC_37() const { return ___showProfilerDuringMRC_37; }
	inline bool* get_address_of_showProfilerDuringMRC_37() { return &___showProfilerDuringMRC_37; }
	inline void set_showProfilerDuringMRC_37(bool value)
	{
		___showProfilerDuringMRC_37 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * ___OnDiagnosticsChanged_32;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChangedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_31() const { return ___OnDiagnosticsChangedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_31() { return &___OnDiagnosticsChangedPerfMarker_31; }
	inline void set_OnDiagnosticsChangedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChanged_32)); }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * get_OnDiagnosticsChanged_32() const { return ___OnDiagnosticsChanged_32; }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A ** get_address_of_OnDiagnosticsChanged_32() { return &___OnDiagnosticsChanged_32; }
	inline void set_OnDiagnosticsChanged_32(EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * value)
	{
		___OnDiagnosticsChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_32), (void*)value);
	}
};


// Unity.VisualScripting.IsApplicationVariableDefined
struct IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F  : public IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141
{
public:

public:
};


// Unity.VisualScripting.IsGraphVariableDefined
struct IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC  : public IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141
{
public:

public:
};


// Unity.VisualScripting.IsObjectVariableDefined
struct IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4  : public IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141
{
public:
	// Unity.VisualScripting.ValueInput Unity.VisualScripting.IsObjectVariableDefined::<source>k__BackingField
	ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * ___U3CsourceU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CsourceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4, ___U3CsourceU3Ek__BackingField_18)); }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * get_U3CsourceU3Ek__BackingField_18() const { return ___U3CsourceU3Ek__BackingField_18; }
	inline ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 ** get_address_of_U3CsourceU3Ek__BackingField_18() { return &___U3CsourceU3Ek__BackingField_18; }
	inline void set_U3CsourceU3Ek__BackingField_18(ValueInput_t077E1E3FC26A43837B244D8822ADA39A76A4D082 * value)
	{
		___U3CsourceU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceU3Ek__BackingField_18), (void*)value);
	}
};


// Unity.VisualScripting.IsSavedVariableDefined
struct IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5  : public IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141
{
public:

public:
};


// Unity.VisualScripting.IsSceneVariableDefined
struct IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D  : public IsVariableDefinedUnit_t8D7FDADCD2882ED98772F2597014548D6D4E6141
{
public:

public:
};


// Unity.VisualScripting.LateUpdate
struct LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994  : public MachineEventUnit_1_t583D16726A3B901572D512DE0BF85ACFF7C1E715
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_25;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_28;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceIdU3Ek__BackingField_25)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_25() const { return ___U3CSourceIdU3Ek__BackingField_25; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_25() { return &___U3CSourceIdU3Ek__BackingField_25; }
	inline void set_U3CSourceIdU3Ek__BackingField_25(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_26() const { return ___U3CSourceNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_26() { return &___U3CSourceNameU3Ek__BackingField_26; }
	inline void set_U3CSourceNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___cameraOpaqueLastFrame_27)); }
	inline bool get_cameraOpaqueLastFrame_27() const { return ___cameraOpaqueLastFrame_27; }
	inline bool* get_address_of_cameraOpaqueLastFrame_27() { return &___cameraOpaqueLastFrame_27; }
	inline void set_cameraOpaqueLastFrame_27(bool value)
	{
		___cameraOpaqueLastFrame_27 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___useFallbackBehavior_28)); }
	inline bool get_useFallbackBehavior_28() const { return ___useFallbackBehavior_28; }
	inline bool* get_address_of_useFallbackBehavior_28() { return &___useFallbackBehavior_28; }
	inline void set_useFallbackBehavior_28(bool value)
	{
		___useFallbackBehavior_28 = value;
	}
};

struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_31;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForOpaquePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_30() const { return ___ApplySettingsForOpaquePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_30() { return &___ApplySettingsForOpaquePerfMarker_30; }
	inline void set_ApplySettingsForOpaquePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForTransparentPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_31() const { return ___ApplySettingsForTransparentPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_31() { return &___ApplySettingsForTransparentPerfMarker_31; }
	inline void set_ApplySettingsForTransparentPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_25;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_26;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_27;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ___U3CDetectedInputSourcesU3Ek__BackingField_28;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * ___U3CDetectedControllersU3Ek__BackingField_29;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * ___inputSystemProfile_30;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusProvider
	RuntimeObject* ___focusProvider_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::raycastProvider
	RuntimeObject* ___raycastProvider_32;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_33;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_34;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_35;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_38;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * ___sourceStateEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * ___sourceTrackingEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * ___sourceVector2EventData_41;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * ___sourcePositionEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * ___sourceRotationEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * ___sourcePoseEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * ___focusEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * ___inputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___pointerEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * ___floatInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * ___vector2InputEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * ___positionInputEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * ___rotationInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * ___poseInputEventData_52;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * ___jointPoseInputEventData_53;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * ___handMeshInputEventData_54;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * ___speechEventData_55;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * ___dictationEventData_56;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * ___handTrackingInputEventData_57;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_59;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * ___inputModule_60;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CNameU3Ek__BackingField_25)); }
	inline String_t* get_U3CNameU3Ek__BackingField_25() const { return ___U3CNameU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_25() { return &___U3CNameU3Ek__BackingField_25; }
	inline void set_U3CNameU3Ek__BackingField_25(String_t* value)
	{
		___U3CNameU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputEnabled_26)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_26() const { return ___InputEnabled_26; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_26() { return &___InputEnabled_26; }
	inline void set_InputEnabled_26(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_26), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputDisabled_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_27() const { return ___InputDisabled_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_27() { return &___InputDisabled_27; }
	inline void set_InputDisabled_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedInputSourcesU3Ek__BackingField_28)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get_U3CDetectedInputSourcesU3Ek__BackingField_28() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_28; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_28() { return &___U3CDetectedInputSourcesU3Ek__BackingField_28; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_28(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedControllersU3Ek__BackingField_29)); }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * get_U3CDetectedControllersU3Ek__BackingField_29() const { return ___U3CDetectedControllersU3Ek__BackingField_29; }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_29() { return &___U3CDetectedControllersU3Ek__BackingField_29; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_29(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputSystemProfile_30)); }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * get_inputSystemProfile_30() const { return ___inputSystemProfile_30; }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 ** get_address_of_inputSystemProfile_30() { return &___inputSystemProfile_30; }
	inline void set_inputSystemProfile_30(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * value)
	{
		___inputSystemProfile_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_30), (void*)value);
	}

	inline static int32_t get_offset_of_focusProvider_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___focusProvider_31)); }
	inline RuntimeObject* get_focusProvider_31() const { return ___focusProvider_31; }
	inline RuntimeObject** get_address_of_focusProvider_31() { return &___focusProvider_31; }
	inline void set_focusProvider_31(RuntimeObject* value)
	{
		___focusProvider_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProvider_31), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProvider_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___raycastProvider_32)); }
	inline RuntimeObject* get_raycastProvider_32() const { return ___raycastProvider_32; }
	inline RuntimeObject** get_address_of_raycastProvider_32() { return &___raycastProvider_32; }
	inline void set_raycastProvider_32(RuntimeObject* value)
	{
		___raycastProvider_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProvider_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CGazeProviderU3Ek__BackingField_33)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_33() const { return ___U3CGazeProviderU3Ek__BackingField_33; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_33() { return &___U3CGazeProviderU3Ek__BackingField_33; }
	inline void set_U3CGazeProviderU3Ek__BackingField_33(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CEyeGazeProviderU3Ek__BackingField_34)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_34() const { return ___U3CEyeGazeProviderU3Ek__BackingField_34; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_34() { return &___U3CEyeGazeProviderU3Ek__BackingField_34; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_34(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___modalInputStack_35)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_35() const { return ___modalInputStack_35; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_35() { return &___modalInputStack_35; }
	inline void set_modalInputStack_35(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_35), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___fallbackInputStack_36)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_36() const { return ___fallbackInputStack_36; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_36() { return &___fallbackInputStack_36; }
	inline void set_fallbackInputStack_36(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_36), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___disabledRefCount_37)); }
	inline int32_t get_disabledRefCount_37() const { return ___disabledRefCount_37; }
	inline int32_t* get_address_of_disabledRefCount_37() { return &___disabledRefCount_37; }
	inline void set_disabledRefCount_37(int32_t value)
	{
		___disabledRefCount_37 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___isInputModuleAdded_38)); }
	inline bool get_isInputModuleAdded_38() const { return ___isInputModuleAdded_38; }
	inline bool* get_address_of_isInputModuleAdded_38() { return &___isInputModuleAdded_38; }
	inline void set_isInputModuleAdded_38(bool value)
	{
		___isInputModuleAdded_38 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceStateEventData_39)); }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * get_sourceStateEventData_39() const { return ___sourceStateEventData_39; }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 ** get_address_of_sourceStateEventData_39() { return &___sourceStateEventData_39; }
	inline void set_sourceStateEventData_39(SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * value)
	{
		___sourceStateEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceTrackingEventData_40)); }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * get_sourceTrackingEventData_40() const { return ___sourceTrackingEventData_40; }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 ** get_address_of_sourceTrackingEventData_40() { return &___sourceTrackingEventData_40; }
	inline void set_sourceTrackingEventData_40(SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * value)
	{
		___sourceTrackingEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceVector2EventData_41)); }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * get_sourceVector2EventData_41() const { return ___sourceVector2EventData_41; }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 ** get_address_of_sourceVector2EventData_41() { return &___sourceVector2EventData_41; }
	inline void set_sourceVector2EventData_41(SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * value)
	{
		___sourceVector2EventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePositionEventData_42)); }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * get_sourcePositionEventData_42() const { return ___sourcePositionEventData_42; }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A ** get_address_of_sourcePositionEventData_42() { return &___sourcePositionEventData_42; }
	inline void set_sourcePositionEventData_42(SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * value)
	{
		___sourcePositionEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceRotationEventData_43)); }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * get_sourceRotationEventData_43() const { return ___sourceRotationEventData_43; }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC ** get_address_of_sourceRotationEventData_43() { return &___sourceRotationEventData_43; }
	inline void set_sourceRotationEventData_43(SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * value)
	{
		___sourceRotationEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePoseEventData_44)); }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * get_sourcePoseEventData_44() const { return ___sourcePoseEventData_44; }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 ** get_address_of_sourcePoseEventData_44() { return &___sourcePoseEventData_44; }
	inline void set_sourcePoseEventData_44(SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * value)
	{
		___sourcePoseEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___focusEventData_45)); }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * get_focusEventData_45() const { return ___focusEventData_45; }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D ** get_address_of_focusEventData_45() { return &___focusEventData_45; }
	inline void set_focusEventData_45(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * value)
	{
		___focusEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputEventData_46)); }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * get_inputEventData_46() const { return ___inputEventData_46; }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 ** get_address_of_inputEventData_46() { return &___inputEventData_46; }
	inline void set_inputEventData_46(InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * value)
	{
		___inputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___pointerEventData_47)); }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * get_pointerEventData_47() const { return ___pointerEventData_47; }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B ** get_address_of_pointerEventData_47() { return &___pointerEventData_47; }
	inline void set_pointerEventData_47(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * value)
	{
		___pointerEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___floatInputEventData_48)); }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * get_floatInputEventData_48() const { return ___floatInputEventData_48; }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC ** get_address_of_floatInputEventData_48() { return &___floatInputEventData_48; }
	inline void set_floatInputEventData_48(InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * value)
	{
		___floatInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___vector2InputEventData_49)); }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * get_vector2InputEventData_49() const { return ___vector2InputEventData_49; }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 ** get_address_of_vector2InputEventData_49() { return &___vector2InputEventData_49; }
	inline void set_vector2InputEventData_49(InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * value)
	{
		___vector2InputEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___positionInputEventData_50)); }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * get_positionInputEventData_50() const { return ___positionInputEventData_50; }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E ** get_address_of_positionInputEventData_50() { return &___positionInputEventData_50; }
	inline void set_positionInputEventData_50(InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * value)
	{
		___positionInputEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___rotationInputEventData_51)); }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * get_rotationInputEventData_51() const { return ___rotationInputEventData_51; }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 ** get_address_of_rotationInputEventData_51() { return &___rotationInputEventData_51; }
	inline void set_rotationInputEventData_51(InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * value)
	{
		___rotationInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___poseInputEventData_52)); }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * get_poseInputEventData_52() const { return ___poseInputEventData_52; }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 ** get_address_of_poseInputEventData_52() { return &___poseInputEventData_52; }
	inline void set_poseInputEventData_52(InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * value)
	{
		___poseInputEventData_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_52), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___jointPoseInputEventData_53)); }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * get_jointPoseInputEventData_53() const { return ___jointPoseInputEventData_53; }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE ** get_address_of_jointPoseInputEventData_53() { return &___jointPoseInputEventData_53; }
	inline void set_jointPoseInputEventData_53(InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * value)
	{
		___jointPoseInputEventData_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_53), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handMeshInputEventData_54)); }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * get_handMeshInputEventData_54() const { return ___handMeshInputEventData_54; }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 ** get_address_of_handMeshInputEventData_54() { return &___handMeshInputEventData_54; }
	inline void set_handMeshInputEventData_54(InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * value)
	{
		___handMeshInputEventData_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_54), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___speechEventData_55)); }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * get_speechEventData_55() const { return ___speechEventData_55; }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE ** get_address_of_speechEventData_55() { return &___speechEventData_55; }
	inline void set_speechEventData_55(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * value)
	{
		___speechEventData_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_55), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___dictationEventData_56)); }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * get_dictationEventData_56() const { return ___dictationEventData_56; }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD ** get_address_of_dictationEventData_56() { return &___dictationEventData_56; }
	inline void set_dictationEventData_56(DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * value)
	{
		___dictationEventData_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_56), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handTrackingInputEventData_57)); }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * get_handTrackingInputEventData_57() const { return ___handTrackingInputEventData_57; }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C ** get_address_of_handTrackingInputEventData_57() { return &___handTrackingInputEventData_57; }
	inline void set_handTrackingInputEventData_57(HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * value)
	{
		___handTrackingInputEventData_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58)); }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58; }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58(MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputModuleChecked_59)); }
	inline bool get_inputModuleChecked_59() const { return ___inputModuleChecked_59; }
	inline bool* get_address_of_inputModuleChecked_59() { return &___inputModuleChecked_59; }
	inline void set_inputModuleChecked_59(bool value)
	{
		___inputModuleChecked_59 = value;
	}

	inline static int32_t get_offset_of_inputModule_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputModule_60)); }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * get_inputModule_60() const { return ___inputModule_60; }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F ** get_address_of_inputModule_60() { return &___inputModule_60; }
	inline void set_inputModule_60(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * value)
	{
		___inputModule_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_60), (void*)value);
	}
};

struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_65;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_67;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceDetectedEventHandler_70;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_71;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceLostEventHandler_72;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_73;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceTrackingChangedEventHandler_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_75;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseVector2ChangedEventHandler_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePositionChangedEventHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceRotationChangedEventHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseChangedEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnPreFocusChangedHandler_83;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_84;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnFocusChangedHandler_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_86;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusEnterEventHandler_87;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_88;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusExitEventHandler_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDownEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDraggedEventHandler_92;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_93;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnInputClickedEventHandler_94;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerUpEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputDownEventHandler_98;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputDownWithActionEventHandler_99;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_100;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputUpEventHandler_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputUpWithActionEventHandler_102;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_103;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * ___OnFloatInputChanged_104;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_105;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * ___OnTwoDoFInputChanged_106;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * ___OnPositionInputChanged_108;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * ___OnRotationInputChanged_109;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_110;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * ___OnPoseInputChanged_111;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureStarted_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureStartedWithAction_114;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureUpdated_116;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_117;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionUpdated_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionUpdated_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationUpdated_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseUpdated_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureCompletedWithAction_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionCompleted_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionCompleted_126;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationCompleted_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseCompleted_128;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCanceled_129;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_130;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * ___OnSpeechKeywordRecognizedEventHandler_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnSpeechKeywordRecognizedWithActionEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationHypothesisEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationResultEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationCompleteEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationErrorEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * ___OnHandJointsUpdatedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * ___OnHandMeshUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_145;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchStartedEventHandler_146;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_147;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchCompletedEventHandler_148;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_149;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchUpdatedEventHandler_150;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_151;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_152;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ExecuteHierarchyPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_24() const { return ___ExecuteHierarchyPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_24() { return &___ExecuteHierarchyPerfMarker_24; }
	inline void set_ExecuteHierarchyPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleEventPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_61() const { return ___HandleEventPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_61() { return &___HandleEventPerfMarker_61; }
	inline void set_HandleEventPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusChangedEventsPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_62() const { return ___HandleFocusChangedEventsPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_62() { return &___HandleFocusChangedEventsPerfMarker_62; }
	inline void set_HandleFocusChangedEventsPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusEventPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_63() const { return ___HandleFocusEventPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_63() { return &___HandleFocusEventPerfMarker_63; }
	inline void set_HandleFocusEventPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandlePointerEventPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_64() const { return ___HandlePointerEventPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_64() { return &___HandlePointerEventPerfMarker_64; }
	inline void set_HandlePointerEventPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_64 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_65() const { return ___DispatchEventToGlobalListenersPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_65() { return &___DispatchEventToGlobalListenersPerfMarker_65; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_66() const { return ___DispatchEventToFallbackHandlersPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_66() { return &___DispatchEventToFallbackHandlersPerfMarker_66; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_67() const { return ___DispatchEventToObjectFocusedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_67() { return &___DispatchEventToObjectFocusedPerfMarker_67; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchModalEventPerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_68() const { return ___DispatchModalEventPerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_68() { return &___DispatchModalEventPerfMarker_68; }
	inline void set_DispatchModalEventPerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_68 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceDetectedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_69() const { return ___RaiseSourceDetectedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_69() { return &___RaiseSourceDetectedPerfMarker_69; }
	inline void set_RaiseSourceDetectedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceDetectedEventHandler_70)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceDetectedEventHandler_70() const { return ___OnSourceDetectedEventHandler_70; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceDetectedEventHandler_70() { return &___OnSourceDetectedEventHandler_70; }
	inline void set_OnSourceDetectedEventHandler_70(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceDetectedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceLostPerfMarker_71)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_71() const { return ___RaiseSourceLostPerfMarker_71; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_71() { return &___RaiseSourceLostPerfMarker_71; }
	inline void set_RaiseSourceLostPerfMarker_71(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_71 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceLostEventHandler_72)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceLostEventHandler_72() const { return ___OnSourceLostEventHandler_72; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceLostEventHandler_72() { return &___OnSourceLostEventHandler_72; }
	inline void set_OnSourceLostEventHandler_72(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceLostEventHandler_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_72), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_73)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_73() const { return ___RaiseSourceTrackingStateChangedPerfMarker_73; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_73() { return &___RaiseSourceTrackingStateChangedPerfMarker_73; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_73(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_73 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceTrackingChangedEventHandler_74)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceTrackingChangedEventHandler_74() const { return ___OnSourceTrackingChangedEventHandler_74; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceTrackingChangedEventHandler_74() { return &___OnSourceTrackingChangedEventHandler_74; }
	inline void set_OnSourceTrackingChangedEventHandler_74(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceTrackingChangedEventHandler_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_74), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePositionChangedPerfMarker_75)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_75() const { return ___RaiseSourcePositionChangedPerfMarker_75; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_75() { return &___RaiseSourcePositionChangedPerfMarker_75; }
	inline void set_RaiseSourcePositionChangedPerfMarker_75(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_75 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_76)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseVector2ChangedEventHandler_76() const { return ___OnSourcePoseVector2ChangedEventHandler_76; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseVector2ChangedEventHandler_76() { return &___OnSourcePoseVector2ChangedEventHandler_76; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_76(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_76), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePositionChangedEventHandler_77)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePositionChangedEventHandler_77() const { return ___OnSourcePositionChangedEventHandler_77; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePositionChangedEventHandler_77() { return &___OnSourcePositionChangedEventHandler_77; }
	inline void set_OnSourcePositionChangedEventHandler_77(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePositionChangedEventHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceRotationChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_78() const { return ___RaiseSourceRotationChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_78() { return &___RaiseSourceRotationChangedPerfMarker_78; }
	inline void set_RaiseSourceRotationChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceRotationChangedEventHandler_79)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceRotationChangedEventHandler_79() const { return ___OnSourceRotationChangedEventHandler_79; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceRotationChangedEventHandler_79() { return &___OnSourceRotationChangedEventHandler_79; }
	inline void set_OnSourceRotationChangedEventHandler_79(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceRotationChangedEventHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePoseChangedPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_80() const { return ___RaiseSourcePoseChangedPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_80() { return &___RaiseSourcePoseChangedPerfMarker_80; }
	inline void set_RaiseSourcePoseChangedPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseChangedEventHandler_81)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseChangedEventHandler_81() const { return ___OnSourcePoseChangedEventHandler_81; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseChangedEventHandler_81() { return &___OnSourcePoseChangedEventHandler_81; }
	inline void set_OnSourcePoseChangedEventHandler_81(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseChangedEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePreFocusChangedPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_82() const { return ___RaisePreFocusChangedPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_82() { return &___RaisePreFocusChangedPerfMarker_82; }
	inline void set_RaisePreFocusChangedPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPreFocusChangedHandler_83)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnPreFocusChangedHandler_83() const { return ___OnPreFocusChangedHandler_83; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnPreFocusChangedHandler_83() { return &___OnPreFocusChangedHandler_83; }
	inline void set_OnPreFocusChangedHandler_83(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnPreFocusChangedHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusChangedPerfMarker_84)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_84() const { return ___RaiseFocusChangedPerfMarker_84; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_84() { return &___RaiseFocusChangedPerfMarker_84; }
	inline void set_RaiseFocusChangedPerfMarker_84(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_84 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusChangedHandler_85)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnFocusChangedHandler_85() const { return ___OnFocusChangedHandler_85; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnFocusChangedHandler_85() { return &___OnFocusChangedHandler_85; }
	inline void set_OnFocusChangedHandler_85(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnFocusChangedHandler_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_85), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusEnterPerfMarker_86)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_86() const { return ___RaiseFocusEnterPerfMarker_86; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_86() { return &___RaiseFocusEnterPerfMarker_86; }
	inline void set_RaiseFocusEnterPerfMarker_86(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_86 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusEnterEventHandler_87)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusEnterEventHandler_87() const { return ___OnFocusEnterEventHandler_87; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusEnterEventHandler_87() { return &___OnFocusEnterEventHandler_87; }
	inline void set_OnFocusEnterEventHandler_87(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusEnterEventHandler_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_87), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusExitPerfMarker_88)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_88() const { return ___RaiseFocusExitPerfMarker_88; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_88() { return &___RaiseFocusExitPerfMarker_88; }
	inline void set_RaiseFocusExitPerfMarker_88(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_88 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusExitEventHandler_89)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusExitEventHandler_89() const { return ___OnFocusExitEventHandler_89; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusExitEventHandler_89() { return &___OnFocusExitEventHandler_89; }
	inline void set_OnFocusExitEventHandler_89(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusExitEventHandler_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_89), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDownEventHandler_90)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDownEventHandler_90() const { return ___OnPointerDownEventHandler_90; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDownEventHandler_90() { return &___OnPointerDownEventHandler_90; }
	inline void set_OnPointerDownEventHandler_90(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDownEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDownPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_91() const { return ___RaisePointerDownPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_91() { return &___RaisePointerDownPerfMarker_91; }
	inline void set_RaisePointerDownPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDraggedEventHandler_92)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDraggedEventHandler_92() const { return ___OnPointerDraggedEventHandler_92; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDraggedEventHandler_92() { return &___OnPointerDraggedEventHandler_92; }
	inline void set_OnPointerDraggedEventHandler_92(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDraggedEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDraggedPerfMarker_93)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_93() const { return ___RaisePointerDraggedPerfMarker_93; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_93() { return &___RaisePointerDraggedPerfMarker_93; }
	inline void set_RaisePointerDraggedPerfMarker_93(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_93 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputClickedEventHandler_94)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnInputClickedEventHandler_94() const { return ___OnInputClickedEventHandler_94; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnInputClickedEventHandler_94() { return &___OnInputClickedEventHandler_94; }
	inline void set_OnInputClickedEventHandler_94(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnInputClickedEventHandler_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_94), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerClickedPerfMarker_95)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_95() const { return ___RaisePointerClickedPerfMarker_95; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_95() { return &___RaisePointerClickedPerfMarker_95; }
	inline void set_RaisePointerClickedPerfMarker_95(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_95 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerUpEventHandler_96)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerUpEventHandler_96() const { return ___OnPointerUpEventHandler_96; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerUpEventHandler_96() { return &___OnPointerUpEventHandler_96; }
	inline void set_OnPointerUpEventHandler_96(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerUpEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_97() const { return ___RaisePointerUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_97() { return &___RaisePointerUpPerfMarker_97; }
	inline void set_RaisePointerUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownEventHandler_98)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputDownEventHandler_98() const { return ___OnInputDownEventHandler_98; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputDownEventHandler_98() { return &___OnInputDownEventHandler_98; }
	inline void set_OnInputDownEventHandler_98(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputDownEventHandler_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_98), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownWithActionEventHandler_99)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputDownWithActionEventHandler_99() const { return ___OnInputDownWithActionEventHandler_99; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputDownWithActionEventHandler_99() { return &___OnInputDownWithActionEventHandler_99; }
	inline void set_OnInputDownWithActionEventHandler_99(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputDownWithActionEventHandler_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_99), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputDownPerfMarker_100)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_100() const { return ___RaiseOnInputDownPerfMarker_100; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_100() { return &___RaiseOnInputDownPerfMarker_100; }
	inline void set_RaiseOnInputDownPerfMarker_100(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_100 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpEventHandler_101)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputUpEventHandler_101() const { return ___OnInputUpEventHandler_101; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputUpEventHandler_101() { return &___OnInputUpEventHandler_101; }
	inline void set_OnInputUpEventHandler_101(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputUpEventHandler_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_101), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpWithActionEventHandler_102)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputUpWithActionEventHandler_102() const { return ___OnInputUpWithActionEventHandler_102; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputUpWithActionEventHandler_102() { return &___OnInputUpWithActionEventHandler_102; }
	inline void set_OnInputUpWithActionEventHandler_102(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputUpWithActionEventHandler_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_102), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputUpPerfMarker_103)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_103() const { return ___RaiseOnInputUpPerfMarker_103; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_103() { return &___RaiseOnInputUpPerfMarker_103; }
	inline void set_RaiseOnInputUpPerfMarker_103(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_103 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFloatInputChanged_104)); }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * get_OnFloatInputChanged_104() const { return ___OnFloatInputChanged_104; }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD ** get_address_of_OnFloatInputChanged_104() { return &___OnFloatInputChanged_104; }
	inline void set_OnFloatInputChanged_104(EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * value)
	{
		___OnFloatInputChanged_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_104), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFloatInputChangedPerfMarker_105)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_105() const { return ___RaiseFloatInputChangedPerfMarker_105; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_105() { return &___RaiseFloatInputChangedPerfMarker_105; }
	inline void set_RaiseFloatInputChangedPerfMarker_105(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_105 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTwoDoFInputChanged_106)); }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * get_OnTwoDoFInputChanged_106() const { return ___OnTwoDoFInputChanged_106; }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B ** get_address_of_OnTwoDoFInputChanged_106() { return &___OnTwoDoFInputChanged_106; }
	inline void set_OnTwoDoFInputChanged_106(EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * value)
	{
		___OnTwoDoFInputChanged_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_106), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePositionInputChangedPerfMarker_107)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_107() const { return ___RaisePositionInputChangedPerfMarker_107; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_107() { return &___RaisePositionInputChangedPerfMarker_107; }
	inline void set_RaisePositionInputChangedPerfMarker_107(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_107 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPositionInputChanged_108)); }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * get_OnPositionInputChanged_108() const { return ___OnPositionInputChanged_108; }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A ** get_address_of_OnPositionInputChanged_108() { return &___OnPositionInputChanged_108; }
	inline void set_OnPositionInputChanged_108(EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * value)
	{
		___OnPositionInputChanged_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_108), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnRotationInputChanged_109)); }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * get_OnRotationInputChanged_109() const { return ___OnRotationInputChanged_109; }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF ** get_address_of_OnRotationInputChanged_109() { return &___OnRotationInputChanged_109; }
	inline void set_OnRotationInputChanged_109(EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * value)
	{
		___OnRotationInputChanged_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_109), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseRotationInputChangedPerfMarker_110)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_110() const { return ___RaiseRotationInputChangedPerfMarker_110; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_110() { return &___RaiseRotationInputChangedPerfMarker_110; }
	inline void set_RaiseRotationInputChangedPerfMarker_110(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_110 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPoseInputChanged_111)); }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * get_OnPoseInputChanged_111() const { return ___OnPoseInputChanged_111; }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E ** get_address_of_OnPoseInputChanged_111() { return &___OnPoseInputChanged_111; }
	inline void set_OnPoseInputChanged_111(EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * value)
	{
		___OnPoseInputChanged_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_111), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePoseInputChangedPerfMarker_112)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_112() const { return ___RaisePoseInputChangedPerfMarker_112; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_112() { return &___RaisePoseInputChangedPerfMarker_112; }
	inline void set_RaisePoseInputChangedPerfMarker_112(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_112 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStarted_113)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureStarted_113() const { return ___OnGestureStarted_113; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureStarted_113() { return &___OnGestureStarted_113; }
	inline void set_OnGestureStarted_113(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureStarted_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStartedWithAction_114)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureStartedWithAction_114() const { return ___OnGestureStartedWithAction_114; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureStartedWithAction_114() { return &___OnGestureStartedWithAction_114; }
	inline void set_OnGestureStartedWithAction_114(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureStartedWithAction_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_114), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureStartedPerfMarker_115)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_115() const { return ___RaiseGestureStartedPerfMarker_115; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_115() { return &___RaiseGestureStartedPerfMarker_115; }
	inline void set_RaiseGestureStartedPerfMarker_115(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_115 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureUpdated_116)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureUpdated_116() const { return ___OnGestureUpdated_116; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureUpdated_116() { return &___OnGestureUpdated_116; }
	inline void set_OnGestureUpdated_116(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureUpdated_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_116), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureUpdatedPerfMarker_117)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_117() const { return ___RaiseGestureUpdatedPerfMarker_117; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_117() { return &___RaiseGestureUpdatedPerfMarker_117; }
	inline void set_RaiseGestureUpdatedPerfMarker_117(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_117 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionUpdated_118)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionUpdated_118() const { return ___OnGestureVector2PositionUpdated_118; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionUpdated_118() { return &___OnGestureVector2PositionUpdated_118; }
	inline void set_OnGestureVector2PositionUpdated_118(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionUpdated_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_118), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionUpdated_119)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionUpdated_119() const { return ___OnGesturePositionUpdated_119; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionUpdated_119() { return &___OnGesturePositionUpdated_119; }
	inline void set_OnGesturePositionUpdated_119(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionUpdated_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationUpdated_120)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationUpdated_120() const { return ___OnGestureRotationUpdated_120; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationUpdated_120() { return &___OnGestureRotationUpdated_120; }
	inline void set_OnGestureRotationUpdated_120(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationUpdated_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseUpdated_121)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseUpdated_121() const { return ___OnGesturePoseUpdated_121; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseUpdated_121() { return &___OnGesturePoseUpdated_121; }
	inline void set_OnGesturePoseUpdated_121(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseUpdated_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompleted_122)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCompleted_122() const { return ___OnGestureCompleted_122; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCompleted_122() { return &___OnGestureCompleted_122; }
	inline void set_OnGestureCompleted_122(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompletedWithAction_123)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureCompletedWithAction_123() const { return ___OnGestureCompletedWithAction_123; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureCompletedWithAction_123() { return &___OnGestureCompletedWithAction_123; }
	inline void set_OnGestureCompletedWithAction_123(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureCompletedWithAction_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCompletedPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_124() const { return ___RaiseGestureCompletedPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_124() { return &___RaiseGestureCompletedPerfMarker_124; }
	inline void set_RaiseGestureCompletedPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionCompleted_125)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionCompleted_125() const { return ___OnGestureVector2PositionCompleted_125; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionCompleted_125() { return &___OnGestureVector2PositionCompleted_125; }
	inline void set_OnGestureVector2PositionCompleted_125(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionCompleted_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionCompleted_126)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionCompleted_126() const { return ___OnGesturePositionCompleted_126; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionCompleted_126() { return &___OnGesturePositionCompleted_126; }
	inline void set_OnGesturePositionCompleted_126(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionCompleted_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_126), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationCompleted_127)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationCompleted_127() const { return ___OnGestureRotationCompleted_127; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationCompleted_127() { return &___OnGestureRotationCompleted_127; }
	inline void set_OnGestureRotationCompleted_127(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationCompleted_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_127), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseCompleted_128)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseCompleted_128() const { return ___OnGesturePoseCompleted_128; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseCompleted_128() { return &___OnGesturePoseCompleted_128; }
	inline void set_OnGesturePoseCompleted_128(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseCompleted_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_128), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCanceled_129)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCanceled_129() const { return ___OnGestureCanceled_129; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCanceled_129() { return &___OnGestureCanceled_129; }
	inline void set_OnGestureCanceled_129(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCanceled_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_129), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCanceledPerfMarker_130)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_130() const { return ___RaiseGestureCanceledPerfMarker_130; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_130() { return &___RaiseGestureCanceledPerfMarker_130; }
	inline void set_RaiseGestureCanceledPerfMarker_130(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_130 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_131)); }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * get_OnSpeechKeywordRecognizedEventHandler_131() const { return ___OnSpeechKeywordRecognizedEventHandler_131; }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_131() { return &___OnSpeechKeywordRecognizedEventHandler_131; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_131(EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_131), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_132)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnSpeechKeywordRecognizedWithActionEventHandler_132() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_132; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_132() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_132; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_132(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_133() const { return ___RaiseSpeechCommandRecognizedPerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_133() { return &___RaiseSpeechCommandRecognizedPerfMarker_133; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationHypothesisEventHandler_134)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationHypothesisEventHandler_134() const { return ___OnDictationHypothesisEventHandler_134; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationHypothesisEventHandler_134() { return &___OnDictationHypothesisEventHandler_134; }
	inline void set_OnDictationHypothesisEventHandler_134(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationHypothesisEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationHypothesisPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_135() const { return ___RaiseDictationHypothesisPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_135() { return &___RaiseDictationHypothesisPerfMarker_135; }
	inline void set_RaiseDictationHypothesisPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationResultEventHandler_136)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationResultEventHandler_136() const { return ___OnDictationResultEventHandler_136; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationResultEventHandler_136() { return &___OnDictationResultEventHandler_136; }
	inline void set_OnDictationResultEventHandler_136(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationResultEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationResultPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_137() const { return ___RaiseDictationResultPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_137() { return &___RaiseDictationResultPerfMarker_137; }
	inline void set_RaiseDictationResultPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationCompleteEventHandler_138)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationCompleteEventHandler_138() const { return ___OnDictationCompleteEventHandler_138; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationCompleteEventHandler_138() { return &___OnDictationCompleteEventHandler_138; }
	inline void set_OnDictationCompleteEventHandler_138(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationCompleteEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationCompletePerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_139() const { return ___RaiseDictationCompletePerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_139() { return &___RaiseDictationCompletePerfMarker_139; }
	inline void set_RaiseDictationCompletePerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationErrorEventHandler_140)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationErrorEventHandler_140() const { return ___OnDictationErrorEventHandler_140; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationErrorEventHandler_140() { return &___OnDictationErrorEventHandler_140; }
	inline void set_OnDictationErrorEventHandler_140(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationErrorEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationErrorPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_141() const { return ___RaiseDictationErrorPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_141() { return &___RaiseDictationErrorPerfMarker_141; }
	inline void set_RaiseDictationErrorPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandJointsUpdatedEventHandler_142)); }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * get_OnHandJointsUpdatedEventHandler_142() const { return ___OnHandJointsUpdatedEventHandler_142; }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A ** get_address_of_OnHandJointsUpdatedEventHandler_142() { return &___OnHandJointsUpdatedEventHandler_142; }
	inline void set_OnHandJointsUpdatedEventHandler_142(EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * value)
	{
		___OnHandJointsUpdatedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_143() const { return ___RaiseHandJointsUpdatedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_143() { return &___RaiseHandJointsUpdatedPerfMarker_143; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandMeshUpdatedEventHandler_144)); }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * get_OnHandMeshUpdatedEventHandler_144() const { return ___OnHandMeshUpdatedEventHandler_144; }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A ** get_address_of_OnHandMeshUpdatedEventHandler_144() { return &___OnHandMeshUpdatedEventHandler_144; }
	inline void set_OnHandMeshUpdatedEventHandler_144(EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * value)
	{
		___OnHandMeshUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_145() const { return ___RaiseHandMeshUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_145() { return &___RaiseHandMeshUpdatedPerfMarker_145; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchStartedEventHandler_146)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchStartedEventHandler_146() const { return ___OnTouchStartedEventHandler_146; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchStartedEventHandler_146() { return &___OnTouchStartedEventHandler_146; }
	inline void set_OnTouchStartedEventHandler_146(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchStartedEventHandler_146 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_146), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_147() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchStartedPerfMarker_147)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_147() const { return ___RaiseOnTouchStartedPerfMarker_147; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_147() { return &___RaiseOnTouchStartedPerfMarker_147; }
	inline void set_RaiseOnTouchStartedPerfMarker_147(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_147 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_148() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchCompletedEventHandler_148)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchCompletedEventHandler_148() const { return ___OnTouchCompletedEventHandler_148; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchCompletedEventHandler_148() { return &___OnTouchCompletedEventHandler_148; }
	inline void set_OnTouchCompletedEventHandler_148(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchCompletedEventHandler_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_148), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_149() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchCompletedPerfMarker_149)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_149() const { return ___RaiseOnTouchCompletedPerfMarker_149; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_149() { return &___RaiseOnTouchCompletedPerfMarker_149; }
	inline void set_RaiseOnTouchCompletedPerfMarker_149(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_149 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_150() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchUpdatedEventHandler_150)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchUpdatedEventHandler_150() const { return ___OnTouchUpdatedEventHandler_150; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchUpdatedEventHandler_150() { return &___OnTouchUpdatedEventHandler_150; }
	inline void set_OnTouchUpdatedEventHandler_150(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchUpdatedEventHandler_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_150), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_151() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_151)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_151() const { return ___RaiseOnTouchUpdatedPerfMarker_151; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_151() { return &___RaiseOnTouchUpdatedPerfMarker_151; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_151(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_151 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_152() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ProcessRulesInternalPerfMarker_152)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_152() const { return ___ProcessRulesInternalPerfMarker_152; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_152() { return &___ProcessRulesInternalPerfMarker_152; }
	inline void set_ProcessRulesInternalPerfMarker_152(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_152 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t3C96C946DA271FDE8787E85630D1934A793D894C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___first0, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___second1);
il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);


// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method);
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

// COM Callable Wrapper for Uduino.IsActiveDictionnary
struct IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper>, IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA, IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19
{
	inline IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19*>(this);
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
		interfaceIds[0] = IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA::IID;
		interfaceIds[1] = IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273(Il2CppHString ___key0, bool ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6(IIterator_1_t3C96C946DA271FDE8787E85630D1934A793D894C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___first0, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsActiveDictionnary_tA0B18274EA03298F2803D9A6B1F7F6CB30E33CBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsApplicationVariableDefined
struct IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsApplicationVariableDefined_t39933A415BAEB0D992DCB1109EA9BF83F7E0294F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsGraphVariableDefined
struct IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsGraphVariableDefined_tBE5A97EE1E599501AD2FC5BE444929AE77D457AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsObjectVariableDefined
struct IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsObjectVariableDefined_t7A934812EE32C236EE862A9C867AB90B9B527FE4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Uduino.IsPresentDictionnary
struct IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper>, IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA, IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19
{
	inline IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19*>(this);
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
		interfaceIds[0] = IMap_2_tF04B0A8EA05D8A2ACC7A52FB9EF7921A678AB6AA::IID;
		interfaceIds[1] = IIterable_1_t295E17CD87DA733ABC9C511B0592A26A9B232E42::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mE7017A2C3B2643D6E5C05937D5E4AE7C93B0F268_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mEC93106F07C53A5A29C8C5BA9CF8ADF520D84D0E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m3DAE9D12417F91DD6A9DDFC82029AD2CDB8FBC95_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m582242D6A133A002520B945C19DE203AA8D18E31_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273(Il2CppHString ___key0, bool ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m8AEDA01366E0DADBBCF756FA4811A12A530B6273_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m1F484D3085023AFDECAEB7CA2D6E27BD19B96685_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m374137AD35291E1960E826D28DD771B830BC9595_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6(IIterator_1_t3C96C946DA271FDE8787E85630D1934A793D894C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m778D0990732D547D3EC33004FC550BFB437F13D6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m81D0AB7F0A73F76ADAC7189F29E9EE1B577ECB1A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m76AD75D0BAE45F335E1EC7E88A5D3DCFCDA83294_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mF45F1EA82830FFFAE7086336845C731A848965AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4(IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___first0, IMapView_2_tC83BF07A9CF64D6145F4B60BEA2D2665B1496A19** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m1D274234D4405A00DE58386571FD6B9B85A180D4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsPresentDictionnary_tEE9E3E7FB8C8771D17214B3D5DDD62C46C203D00_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsSavedVariableDefined
struct IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsSavedVariableDefined_t4E263F740DBDDCB113CA055EDA6800941E2222F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsSceneVariableDefined
struct IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsSceneVariableDefined_t4E6DA02AC8076785283A3A88F77059E376B72D2D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.IsVariableDefined
struct IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IsVariableDefined_t58E1C9B378B81600469C0109BA23D763F3334826_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.LastItem
struct LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LastItem_t1D662C09D0E8A6C78EA0E4EC7655824D2BE78D5C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.LateUpdate
struct LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LateUpdate_t8274BF2D6AAD9D5B2CB50131B7EC22B56C239994_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Less
struct Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Less_t8C093C48E0510823DCB88CE44A16F79ECE048239(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Less_t8C093C48E0510823DCB88CE44A16F79ECE048239_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.LessOrEqual
struct LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LessOrEqual_tCE458D6E98932724608292D323A6E4A4FB85896C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.ListContainsItem
struct ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListContainsItem_tF774631718A54EF76F07E50624D7BD5CD1E1DF2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA*>(this);
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
		interfaceIds[0] = IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject * returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2(__thisValue, ___index0, NULL);
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
		Il2CppIInspectable* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) IL2CPP_OVERRIDE
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
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		RuntimeObject * ____value0_unmarshaled = NULL;
		if (___value0 != NULL)
		{
			____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____value0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value0_unmarshaled), Il2CppIInspectable::IID, ___value0);
			}
		}
		else
		{
			____value0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___index1' to managed representation
		uint32_t ____index1_empty = 0;

		// Managed method invocation
		bool returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD(__thisValue, ____value0_unmarshaled, (&____index1_empty), NULL);
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

		// Marshaling of parameter '___index1' back from managed representation
		*___index1 = ____index1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.Literal
struct Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Literal_tF927DA26B3598A37CDFA21D5C7749C40EBBDAF02_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LostTrackingService_t52A45EA06928FCDD13E4F7A434DD94CE5B3A55BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
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
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
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
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
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
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.MergeDictionaries
struct MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeDictionaries_tEEDCF68E5AD5F5F7E8AB8D2BE0661112BA1586BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.MergeLists
struct MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeLists_t7A8A11146AF261E8F3AE22926295611E827B9ECA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.VisualScripting.MergedGraphElementCollection
struct MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper>, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergedGraphElementCollection_t625258852FB9CE9B0B149699F25F364DB096F839_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(obj));
}
