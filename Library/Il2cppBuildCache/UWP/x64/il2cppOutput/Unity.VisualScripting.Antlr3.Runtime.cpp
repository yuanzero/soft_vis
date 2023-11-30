#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
// Unity.VisualScripting.Antlr3.Runtime.BitSet[]
struct BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.IDictionary[]
struct IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream
struct ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66;
// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1;
// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94;
// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t875E73133A3326A6AFB6643EE1FB522910166258;
// Unity.VisualScripting.Antlr3.Runtime.CharStreamState
struct CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225;
// Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode
struct CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080;
// Unity.VisualScripting.Antlr3.Runtime.CommonToken
struct CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680;
// Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream
struct CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D;
// Unity.VisualScripting.Antlr3.Runtime.DFA
struct DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.VisualScripting.Antlr3.Runtime.EarlyExitException
struct EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException
struct FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565;
// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList
struct HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Unity.VisualScripting.Antlr3.Runtime.ICharStream
struct ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Unity.VisualScripting.Antlr3.Runtime.IIntStream
struct IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Unity.VisualScripting.Antlr3.Runtime.IToken
struct IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391;
// Unity.VisualScripting.Antlr3.Runtime.ITokenSource
struct ITokenSource_t49233EB70C09B3C01A387894CF4290BFBD40F284;
// Unity.VisualScripting.Antlr3.Runtime.ITokenStream
struct ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITree
struct ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Unity.VisualScripting.Antlr3.Runtime.Lexer
struct Lexer_t76D65B86F31F9994BB63217BC400E851C498F236;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedNotSetException
struct MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException
struct MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException
struct MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException
struct MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA;
// Unity.VisualScripting.Antlr3.Runtime.MissingTokenException
struct MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B;
// Unity.VisualScripting.Antlr3.Runtime.NoViableAltException
struct NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Unity.VisualScripting.Antlr3.Runtime.Parser
struct Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA;
// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8;
// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8;
// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E;
// Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope
struct RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException
struct UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000;
// Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler
struct SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6;
// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator
struct HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD;
// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection
struct KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78;
// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection
struct ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B;

IL2CPP_EXTERN_C RuntimeClass* BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenSource_t49233EB70C09B3C01A387894CF4290BFBD40F284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39;
IL2CPP_EXTERN_C String_t* _stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538;
IL2CPP_EXTERN_C String_t* _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469;
IL2CPP_EXTERN_C String_t* _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE550D00484E81C95E34B74340AAC5C93E738D6;
IL2CPP_EXTERN_C String_t* _stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122;
IL2CPP_EXTERN_C String_t* _stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C;
IL2CPP_EXTERN_C String_t* _stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
IL2CPP_EXTERN_C String_t* _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
IL2CPP_EXTERN_C String_t* _stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777;
IL2CPP_EXTERN_C String_t* _stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA;
IL2CPP_EXTERN_C String_t* _stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1;
IL2CPP_EXTERN_C String_t* _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300;
IL2CPP_EXTERN_C String_t* _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
IL2CPP_EXTERN_C String_t* _stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC433421D84928768AA8C58FA51C38B423E100127;
IL2CPP_EXTERN_C String_t* _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58;
IL2CPP_EXTERN_C String_t* _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284;
IL2CPP_EXTERN_C String_t* _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9CF256B478BDF53420854CC509AB9C76BD6842C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379;
IL2CPP_EXTERN_C String_t* _stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112;
IL2CPP_EXTERN_C String_t* _stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRecognizer_RecoverFromMismatchedToken_mAF70C0790A24B3E0EE0000F645D286DA976D19BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTree_AddChild_m6D06EC9A37FA8B218CC7D71976F2EFFC7EF9D7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitSet_Clone_mA854A025A342F638134B6232AA4461A9B82F7DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_MoveNext_mC63544E98A80D757D05381A3E069D3125B0F4CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_Reset_mB0C8E5864A935BD511BE7D319BF90AF1607E4B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Current_mFCBE73B65DF5D4B765F987B61CDB03220CB92F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Entry_m103BEA15F73EF28502D5100A95ABC1E191FAF291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Key_m1F26037B51DB3248AD97BAF1940D3406E4CD7669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashListEnumerator_get_Value_m9670AC0444204436517F1A5C4715CF90FA69934D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_MatchRange_m0F9E0B9139312D9E7C13F33C5969BC5134B30772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_Match_m6DC718FC89DC1C88E3AF0B3F3B5D3BEF250765FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_Match_mEF2C2B4E1A8F46F6CB0278534199988662EF86D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Start_mCF01DF4B9465F0635B5480F59902E55FEE3FBD62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Stop_mAB95983E88FBC68B9D168E5698F23AF2EA7734AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuleReturnScope_set_Tree_m3282E415715B1B5EE802ABA432F4B43EEEE769AE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
struct BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFEB75C9ECEBCD206DCB446E395DC47055A4684B5 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream
struct ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1  : public RuntimeObject
{
public:
	// System.Char[] Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::data
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___data_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::n
	int32_t ___n_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::p
	int32_t ___p_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::line
	int32_t ___line_3;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::charPositionInLine
	int32_t ___charPositionInLine_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::markDepth
	int32_t ___markDepth_5;
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::markers
	RuntimeObject* ___markers_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::lastMarker
	int32_t ___lastMarker_7;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___data_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_data_0() const { return ___data_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_n_1() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___n_1)); }
	inline int32_t get_n_1() const { return ___n_1; }
	inline int32_t* get_address_of_n_1() { return &___n_1; }
	inline void set_n_1(int32_t value)
	{
		___n_1 = value;
	}

	inline static int32_t get_offset_of_p_2() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___p_2)); }
	inline int32_t get_p_2() const { return ___p_2; }
	inline int32_t* get_address_of_p_2() { return &___p_2; }
	inline void set_p_2(int32_t value)
	{
		___p_2 = value;
	}

	inline static int32_t get_offset_of_line_3() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___line_3)); }
	inline int32_t get_line_3() const { return ___line_3; }
	inline int32_t* get_address_of_line_3() { return &___line_3; }
	inline void set_line_3(int32_t value)
	{
		___line_3 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_4() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___charPositionInLine_4)); }
	inline int32_t get_charPositionInLine_4() const { return ___charPositionInLine_4; }
	inline int32_t* get_address_of_charPositionInLine_4() { return &___charPositionInLine_4; }
	inline void set_charPositionInLine_4(int32_t value)
	{
		___charPositionInLine_4 = value;
	}

	inline static int32_t get_offset_of_markDepth_5() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___markDepth_5)); }
	inline int32_t get_markDepth_5() const { return ___markDepth_5; }
	inline int32_t* get_address_of_markDepth_5() { return &___markDepth_5; }
	inline void set_markDepth_5(int32_t value)
	{
		___markDepth_5 = value;
	}

	inline static int32_t get_offset_of_markers_6() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___markers_6)); }
	inline RuntimeObject* get_markers_6() const { return ___markers_6; }
	inline RuntimeObject** get_address_of_markers_6() { return &___markers_6; }
	inline void set_markers_6(RuntimeObject* value)
	{
		___markers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markers_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastMarker_7() { return static_cast<int32_t>(offsetof(ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1, ___lastMarker_7)); }
	inline int32_t get_lastMarker_7() const { return ___lastMarker_7; }
	inline int32_t* get_address_of_lastMarker_7() { return &___lastMarker_7; }
	inline void set_lastMarker_7(int32_t value)
	{
		___lastMarker_7 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::state
	RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * ___state_1;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66, ___state_1)); }
	inline RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * get_state_1() const { return ___state_1; }
	inline RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_1), (void*)value);
	}
};

struct BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_StaticFields
{
public:
	// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::NEXT_TOKEN_RULE_NAME
	String_t* ___NEXT_TOKEN_RULE_NAME_0;

public:
	inline static int32_t get_offset_of_NEXT_TOKEN_RULE_NAME_0() { return static_cast<int32_t>(offsetof(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_StaticFields, ___NEXT_TOKEN_RULE_NAME_0)); }
	inline String_t* get_NEXT_TOKEN_RULE_NAME_0() const { return ___NEXT_TOKEN_RULE_NAME_0; }
	inline String_t** get_address_of_NEXT_TOKEN_RULE_NAME_0() { return &___NEXT_TOKEN_RULE_NAME_0; }
	inline void set_NEXT_TOKEN_RULE_NAME_0(String_t* value)
	{
		___NEXT_TOKEN_RULE_NAME_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NEXT_TOKEN_RULE_NAME_0), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1  : public RuntimeObject
{
public:
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::children
	RuntimeObject* ___children_0;

public:
	inline static int32_t get_offset_of_children_0() { return static_cast<int32_t>(offsetof(BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1, ___children_0)); }
	inline RuntimeObject* get_children_0() const { return ___children_0; }
	inline RuntimeObject** get_address_of_children_0() { return &___children_0; }
	inline void set_children_0(RuntimeObject* value)
	{
		___children_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_0), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94  : public RuntimeObject
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::uniqueNodeID
	int32_t ___uniqueNodeID_0;

public:
	inline static int32_t get_offset_of_uniqueNodeID_0() { return static_cast<int32_t>(offsetof(BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94, ___uniqueNodeID_0)); }
	inline int32_t get_uniqueNodeID_0() const { return ___uniqueNodeID_0; }
	inline int32_t* get_address_of_uniqueNodeID_0() { return &___uniqueNodeID_0; }
	inline void set_uniqueNodeID_0(int32_t value)
	{
		___uniqueNodeID_0 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t875E73133A3326A6AFB6643EE1FB522910166258  : public RuntimeObject
{
public:
	// System.UInt64[] Unity.VisualScripting.Antlr3.Runtime.BitSet::bits
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___bits_1;

public:
	inline static int32_t get_offset_of_bits_1() { return static_cast<int32_t>(offsetof(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258, ___bits_1)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_bits_1() const { return ___bits_1; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_bits_1() { return &___bits_1; }
	inline void set_bits_1(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___bits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bits_1), (void*)value);
	}
};

struct BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_StaticFields
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::MOD_MASK
	int32_t ___MOD_MASK_0;

public:
	inline static int32_t get_offset_of_MOD_MASK_0() { return static_cast<int32_t>(offsetof(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_StaticFields, ___MOD_MASK_0)); }
	inline int32_t get_MOD_MASK_0() const { return ___MOD_MASK_0; }
	inline int32_t* get_address_of_MOD_MASK_0() { return &___MOD_MASK_0; }
	inline void set_MOD_MASK_0(int32_t value)
	{
		___MOD_MASK_0 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.CharStreamState
struct CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225  : public RuntimeObject
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CharStreamState::p
	int32_t ___p_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CharStreamState::line
	int32_t ___line_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CharStreamState::charPositionInLine
	int32_t ___charPositionInLine_2;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225, ___p_0)); }
	inline int32_t get_p_0() const { return ___p_0; }
	inline int32_t* get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(int32_t value)
	{
		___p_0 = value;
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_2() { return static_cast<int32_t>(offsetof(CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225, ___charPositionInLine_2)); }
	inline int32_t get_charPositionInLine_2() const { return ___charPositionInLine_2; }
	inline int32_t* get_address_of_charPositionInLine_2() { return &___charPositionInLine_2; }
	inline void set_charPositionInLine_2(int32_t value)
	{
		___charPositionInLine_2 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.CommonToken
struct CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680  : public RuntimeObject
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::type
	int32_t ___type_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::line
	int32_t ___line_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::charPositionInLine
	int32_t ___charPositionInLine_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::channel
	int32_t ___channel_3;
	// Unity.VisualScripting.Antlr3.Runtime.ICharStream Unity.VisualScripting.Antlr3.Runtime.CommonToken::input
	RuntimeObject* ___input_4;
	// System.String Unity.VisualScripting.Antlr3.Runtime.CommonToken::text
	String_t* ___text_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::index
	int32_t ___index_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::start
	int32_t ___start_7;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::stop
	int32_t ___stop_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_2() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___charPositionInLine_2)); }
	inline int32_t get_charPositionInLine_2() const { return ___charPositionInLine_2; }
	inline int32_t* get_address_of_charPositionInLine_2() { return &___charPositionInLine_2; }
	inline void set_charPositionInLine_2(int32_t value)
	{
		___charPositionInLine_2 = value;
	}

	inline static int32_t get_offset_of_channel_3() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___channel_3)); }
	inline int32_t get_channel_3() const { return ___channel_3; }
	inline int32_t* get_address_of_channel_3() { return &___channel_3; }
	inline void set_channel_3(int32_t value)
	{
		___channel_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___input_4)); }
	inline RuntimeObject* get_input_4() const { return ___input_4; }
	inline RuntimeObject** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(RuntimeObject* value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___start_7)); }
	inline int32_t get_start_7() const { return ___start_7; }
	inline int32_t* get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(int32_t value)
	{
		___start_7 = value;
	}

	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680, ___stop_8)); }
	inline int32_t get_stop_8() const { return ___stop_8; }
	inline int32_t* get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(int32_t value)
	{
		___stop_8 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream
struct CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.ITokenSource Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::tokenSource
	RuntimeObject* ___tokenSource_0;
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::tokens
	RuntimeObject* ___tokens_1;
	// System.Collections.IDictionary Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::channelOverrideMap
	RuntimeObject* ___channelOverrideMap_2;
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::discardSet
	HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___discardSet_3;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::channel
	int32_t ___channel_4;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::discardOffChannelTokens
	bool ___discardOffChannelTokens_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::lastMarker
	int32_t ___lastMarker_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::p
	int32_t ___p_7;

public:
	inline static int32_t get_offset_of_tokenSource_0() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___tokenSource_0)); }
	inline RuntimeObject* get_tokenSource_0() const { return ___tokenSource_0; }
	inline RuntimeObject** get_address_of_tokenSource_0() { return &___tokenSource_0; }
	inline void set_tokenSource_0(RuntimeObject* value)
	{
		___tokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___tokens_1)); }
	inline RuntimeObject* get_tokens_1() const { return ___tokens_1; }
	inline RuntimeObject** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(RuntimeObject* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokens_1), (void*)value);
	}

	inline static int32_t get_offset_of_channelOverrideMap_2() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___channelOverrideMap_2)); }
	inline RuntimeObject* get_channelOverrideMap_2() const { return ___channelOverrideMap_2; }
	inline RuntimeObject** get_address_of_channelOverrideMap_2() { return &___channelOverrideMap_2; }
	inline void set_channelOverrideMap_2(RuntimeObject* value)
	{
		___channelOverrideMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelOverrideMap_2), (void*)value);
	}

	inline static int32_t get_offset_of_discardSet_3() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___discardSet_3)); }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * get_discardSet_3() const { return ___discardSet_3; }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 ** get_address_of_discardSet_3() { return &___discardSet_3; }
	inline void set_discardSet_3(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * value)
	{
		___discardSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___discardSet_3), (void*)value);
	}

	inline static int32_t get_offset_of_channel_4() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___channel_4)); }
	inline int32_t get_channel_4() const { return ___channel_4; }
	inline int32_t* get_address_of_channel_4() { return &___channel_4; }
	inline void set_channel_4(int32_t value)
	{
		___channel_4 = value;
	}

	inline static int32_t get_offset_of_discardOffChannelTokens_5() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___discardOffChannelTokens_5)); }
	inline bool get_discardOffChannelTokens_5() const { return ___discardOffChannelTokens_5; }
	inline bool* get_address_of_discardOffChannelTokens_5() { return &___discardOffChannelTokens_5; }
	inline void set_discardOffChannelTokens_5(bool value)
	{
		___discardOffChannelTokens_5 = value;
	}

	inline static int32_t get_offset_of_lastMarker_6() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___lastMarker_6)); }
	inline int32_t get_lastMarker_6() const { return ___lastMarker_6; }
	inline int32_t* get_address_of_lastMarker_6() { return &___lastMarker_6; }
	inline void set_lastMarker_6(int32_t value)
	{
		___lastMarker_6 = value;
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711, ___p_7)); }
	inline int32_t get_p_7() const { return ___p_7; }
	inline int32_t* get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(int32_t value)
	{
		___p_7 = value;
	}
};


// System.Console
struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07  : public RuntimeObject
{
public:

public:
};

struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdout_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stderr_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdin_2)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___inputEncoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___outputEncoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.DFA
struct DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B  : public RuntimeObject
{
public:
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::eot
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___eot_0;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::eof
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___eof_1;
	// System.Char[] Unity.VisualScripting.Antlr3.Runtime.DFA::min
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___min_2;
	// System.Char[] Unity.VisualScripting.Antlr3.Runtime.DFA::max
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___max_3;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::accept
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___accept_4;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::special
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___special_5;
	// System.Int16[][] Unity.VisualScripting.Antlr3.Runtime.DFA::transition
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* ___transition_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA::decisionNumber
	int32_t ___decisionNumber_7;
	// Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler Unity.VisualScripting.Antlr3.Runtime.DFA::specialStateTransitionHandler
	SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * ___specialStateTransitionHandler_8;
	// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer Unity.VisualScripting.Antlr3.Runtime.DFA::recognizer
	BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * ___recognizer_9;

public:
	inline static int32_t get_offset_of_eot_0() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___eot_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_eot_0() const { return ___eot_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_eot_0() { return &___eot_0; }
	inline void set_eot_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___eot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eot_0), (void*)value);
	}

	inline static int32_t get_offset_of_eof_1() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___eof_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_eof_1() const { return ___eof_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_eof_1() { return &___eof_1; }
	inline void set_eof_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___eof_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eof_1), (void*)value);
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___min_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_min_2() const { return ___min_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___min_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___min_2), (void*)value);
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___max_3)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_max_3() const { return ___max_3; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___max_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___max_3), (void*)value);
	}

	inline static int32_t get_offset_of_accept_4() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___accept_4)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_accept_4() const { return ___accept_4; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_accept_4() { return &___accept_4; }
	inline void set_accept_4(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___accept_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accept_4), (void*)value);
	}

	inline static int32_t get_offset_of_special_5() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___special_5)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_special_5() const { return ___special_5; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_special_5() { return &___special_5; }
	inline void set_special_5(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___special_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___special_5), (void*)value);
	}

	inline static int32_t get_offset_of_transition_6() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___transition_6)); }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* get_transition_6() const { return ___transition_6; }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77** get_address_of_transition_6() { return &___transition_6; }
	inline void set_transition_6(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* value)
	{
		___transition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transition_6), (void*)value);
	}

	inline static int32_t get_offset_of_decisionNumber_7() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___decisionNumber_7)); }
	inline int32_t get_decisionNumber_7() const { return ___decisionNumber_7; }
	inline int32_t* get_address_of_decisionNumber_7() { return &___decisionNumber_7; }
	inline void set_decisionNumber_7(int32_t value)
	{
		___decisionNumber_7 = value;
	}

	inline static int32_t get_offset_of_specialStateTransitionHandler_8() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___specialStateTransitionHandler_8)); }
	inline SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * get_specialStateTransitionHandler_8() const { return ___specialStateTransitionHandler_8; }
	inline SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 ** get_address_of_specialStateTransitionHandler_8() { return &___specialStateTransitionHandler_8; }
	inline void set_specialStateTransitionHandler_8(SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * value)
	{
		___specialStateTransitionHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specialStateTransitionHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_recognizer_9() { return static_cast<int32_t>(offsetof(DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B, ___recognizer_9)); }
	inline BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * get_recognizer_9() const { return ___recognizer_9; }
	inline BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 ** get_address_of_recognizer_9() { return &___recognizer_9; }
	inline void set_recognizer_9(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * value)
	{
		___recognizer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizer_9), (void*)value);
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

// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.BitSet[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* ___following_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::followingStackPointer
	int32_t ___followingStackPointer_1;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// System.Collections.IDictionary[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::ruleMemo
	IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* ___ruleMemo_7;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_8;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_9;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_10;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_11;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::channel
	int32_t ___channel_12;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::type
	int32_t ___type_13;
	// System.String Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::text
	String_t* ___text_14;

public:
	inline static int32_t get_offset_of_following_0() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___following_0)); }
	inline BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* get_following_0() const { return ___following_0; }
	inline BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D** get_address_of_following_0() { return &___following_0; }
	inline void set_following_0(BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* value)
	{
		___following_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___following_0), (void*)value);
	}

	inline static int32_t get_offset_of_followingStackPointer_1() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___followingStackPointer_1)); }
	inline int32_t get_followingStackPointer_1() const { return ___followingStackPointer_1; }
	inline int32_t* get_address_of_followingStackPointer_1() { return &___followingStackPointer_1; }
	inline void set_followingStackPointer_1(int32_t value)
	{
		___followingStackPointer_1 = value;
	}

	inline static int32_t get_offset_of_errorRecovery_2() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___errorRecovery_2)); }
	inline bool get_errorRecovery_2() const { return ___errorRecovery_2; }
	inline bool* get_address_of_errorRecovery_2() { return &___errorRecovery_2; }
	inline void set_errorRecovery_2(bool value)
	{
		___errorRecovery_2 = value;
	}

	inline static int32_t get_offset_of_lastErrorIndex_3() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___lastErrorIndex_3)); }
	inline int32_t get_lastErrorIndex_3() const { return ___lastErrorIndex_3; }
	inline int32_t* get_address_of_lastErrorIndex_3() { return &___lastErrorIndex_3; }
	inline void set_lastErrorIndex_3(int32_t value)
	{
		___lastErrorIndex_3 = value;
	}

	inline static int32_t get_offset_of_failed_4() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___failed_4)); }
	inline bool get_failed_4() const { return ___failed_4; }
	inline bool* get_address_of_failed_4() { return &___failed_4; }
	inline void set_failed_4(bool value)
	{
		___failed_4 = value;
	}

	inline static int32_t get_offset_of_syntaxErrors_5() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___syntaxErrors_5)); }
	inline int32_t get_syntaxErrors_5() const { return ___syntaxErrors_5; }
	inline int32_t* get_address_of_syntaxErrors_5() { return &___syntaxErrors_5; }
	inline void set_syntaxErrors_5(int32_t value)
	{
		___syntaxErrors_5 = value;
	}

	inline static int32_t get_offset_of_backtracking_6() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___backtracking_6)); }
	inline int32_t get_backtracking_6() const { return ___backtracking_6; }
	inline int32_t* get_address_of_backtracking_6() { return &___backtracking_6; }
	inline void set_backtracking_6(int32_t value)
	{
		___backtracking_6 = value;
	}

	inline static int32_t get_offset_of_ruleMemo_7() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___ruleMemo_7)); }
	inline IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* get_ruleMemo_7() const { return ___ruleMemo_7; }
	inline IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9** get_address_of_ruleMemo_7() { return &___ruleMemo_7; }
	inline void set_ruleMemo_7(IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* value)
	{
		___ruleMemo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleMemo_7), (void*)value);
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___token_8)); }
	inline RuntimeObject* get_token_8() const { return ___token_8; }
	inline RuntimeObject** get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(RuntimeObject* value)
	{
		___token_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_8), (void*)value);
	}

	inline static int32_t get_offset_of_tokenStartCharIndex_9() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___tokenStartCharIndex_9)); }
	inline int32_t get_tokenStartCharIndex_9() const { return ___tokenStartCharIndex_9; }
	inline int32_t* get_address_of_tokenStartCharIndex_9() { return &___tokenStartCharIndex_9; }
	inline void set_tokenStartCharIndex_9(int32_t value)
	{
		___tokenStartCharIndex_9 = value;
	}

	inline static int32_t get_offset_of_tokenStartLine_10() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___tokenStartLine_10)); }
	inline int32_t get_tokenStartLine_10() const { return ___tokenStartLine_10; }
	inline int32_t* get_address_of_tokenStartLine_10() { return &___tokenStartLine_10; }
	inline void set_tokenStartLine_10(int32_t value)
	{
		___tokenStartLine_10 = value;
	}

	inline static int32_t get_offset_of_tokenStartCharPositionInLine_11() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___tokenStartCharPositionInLine_11)); }
	inline int32_t get_tokenStartCharPositionInLine_11() const { return ___tokenStartCharPositionInLine_11; }
	inline int32_t* get_address_of_tokenStartCharPositionInLine_11() { return &___tokenStartCharPositionInLine_11; }
	inline void set_tokenStartCharPositionInLine_11(int32_t value)
	{
		___tokenStartCharPositionInLine_11 = value;
	}

	inline static int32_t get_offset_of_channel_12() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___channel_12)); }
	inline int32_t get_channel_12() const { return ___channel_12; }
	inline int32_t* get_address_of_channel_12() { return &___channel_12; }
	inline void set_channel_12(int32_t value)
	{
		___channel_12 = value;
	}

	inline static int32_t get_offset_of_type_13() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___type_13)); }
	inline int32_t get_type_13() const { return ___type_13; }
	inline int32_t* get_address_of_type_13() { return &___type_13; }
	inline void set_type_13(int32_t value)
	{
		___type_13 = value;
	}

	inline static int32_t get_offset_of_text_14() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E, ___text_14)); }
	inline String_t* get_text_14() const { return ___text_14; }
	inline String_t** get_address_of_text_14() { return &___text_14; }
	inline void set_text_14(String_t* value)
	{
		___text_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_14), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope
struct RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Token
struct Token_tC4A258DE42A68C568F43DB1356E8D1A234747058  : public RuntimeObject
{
public:

public:
};

struct Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Token::MIN_TOKEN_TYPE
	int32_t ___MIN_TOKEN_TYPE_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Token::EOF
	int32_t ___EOF_1;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::EOF_TOKEN
	RuntimeObject* ___EOF_TOKEN_2;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::INVALID_TOKEN
	RuntimeObject* ___INVALID_TOKEN_3;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::SKIP_TOKEN
	RuntimeObject* ___SKIP_TOKEN_4;

public:
	inline static int32_t get_offset_of_MIN_TOKEN_TYPE_0() { return static_cast<int32_t>(offsetof(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields, ___MIN_TOKEN_TYPE_0)); }
	inline int32_t get_MIN_TOKEN_TYPE_0() const { return ___MIN_TOKEN_TYPE_0; }
	inline int32_t* get_address_of_MIN_TOKEN_TYPE_0() { return &___MIN_TOKEN_TYPE_0; }
	inline void set_MIN_TOKEN_TYPE_0(int32_t value)
	{
		___MIN_TOKEN_TYPE_0 = value;
	}

	inline static int32_t get_offset_of_EOF_1() { return static_cast<int32_t>(offsetof(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields, ___EOF_1)); }
	inline int32_t get_EOF_1() const { return ___EOF_1; }
	inline int32_t* get_address_of_EOF_1() { return &___EOF_1; }
	inline void set_EOF_1(int32_t value)
	{
		___EOF_1 = value;
	}

	inline static int32_t get_offset_of_EOF_TOKEN_2() { return static_cast<int32_t>(offsetof(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields, ___EOF_TOKEN_2)); }
	inline RuntimeObject* get_EOF_TOKEN_2() const { return ___EOF_TOKEN_2; }
	inline RuntimeObject** get_address_of_EOF_TOKEN_2() { return &___EOF_TOKEN_2; }
	inline void set_EOF_TOKEN_2(RuntimeObject* value)
	{
		___EOF_TOKEN_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EOF_TOKEN_2), (void*)value);
	}

	inline static int32_t get_offset_of_INVALID_TOKEN_3() { return static_cast<int32_t>(offsetof(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields, ___INVALID_TOKEN_3)); }
	inline RuntimeObject* get_INVALID_TOKEN_3() const { return ___INVALID_TOKEN_3; }
	inline RuntimeObject** get_address_of_INVALID_TOKEN_3() { return &___INVALID_TOKEN_3; }
	inline void set_INVALID_TOKEN_3(RuntimeObject* value)
	{
		___INVALID_TOKEN_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___INVALID_TOKEN_3), (void*)value);
	}

	inline static int32_t get_offset_of_SKIP_TOKEN_4() { return static_cast<int32_t>(offsetof(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields, ___SKIP_TOKEN_4)); }
	inline RuntimeObject* get_SKIP_TOKEN_4() const { return ___SKIP_TOKEN_4; }
	inline RuntimeObject** get_address_of_SKIP_TOKEN_4() { return &___SKIP_TOKEN_4; }
	inline void set_SKIP_TOKEN_4(RuntimeObject* value)
	{
		___SKIP_TOKEN_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SKIP_TOKEN_4), (void*)value);
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

// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection
struct KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::_hashList
	HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ____hashList_0;

public:
	inline static int32_t get_offset_of__hashList_0() { return static_cast<int32_t>(offsetof(KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78, ____hashList_0)); }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * get__hashList_0() const { return ____hashList_0; }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 ** get_address_of__hashList_0() { return &____hashList_0; }
	inline void set__hashList_0(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * value)
	{
		____hashList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashList_0), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection
struct ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::_hashList
	HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ____hashList_0;

public:
	inline static int32_t get_offset_of__hashList_0() { return static_cast<int32_t>(offsetof(ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B, ____hashList_0)); }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * get__hashList_0() const { return ____hashList_0; }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 ** get_address_of__hashList_0() { return &____hashList_0; }
	inline void set__hashList_0(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * value)
	{
		____hashList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashList_0), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7  : public BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_2;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::token
	RuntimeObject* ___token_3;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::parent
	CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * ___parent_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_5;

public:
	inline static int32_t get_offset_of_startIndex_1() { return static_cast<int32_t>(offsetof(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7, ___startIndex_1)); }
	inline int32_t get_startIndex_1() const { return ___startIndex_1; }
	inline int32_t* get_address_of_startIndex_1() { return &___startIndex_1; }
	inline void set_startIndex_1(int32_t value)
	{
		___startIndex_1 = value;
	}

	inline static int32_t get_offset_of_stopIndex_2() { return static_cast<int32_t>(offsetof(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7, ___stopIndex_2)); }
	inline int32_t get_stopIndex_2() const { return ___stopIndex_2; }
	inline int32_t* get_address_of_stopIndex_2() { return &___stopIndex_2; }
	inline void set_stopIndex_2(int32_t value)
	{
		___stopIndex_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7, ___token_3)); }
	inline RuntimeObject* get_token_3() const { return ___token_3; }
	inline RuntimeObject** get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(RuntimeObject* value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_3), (void*)value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7, ___parent_4)); }
	inline CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * get_parent_4() const { return ___parent_4; }
	inline CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_childIndex_5() { return static_cast<int32_t>(offsetof(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7, ___childIndex_5)); }
	inline int32_t get_childIndex_5() const { return ___childIndex_5; }
	inline int32_t* get_address_of_childIndex_5() { return &___childIndex_5; }
	inline void set_childIndex_5(int32_t value)
	{
		___childIndex_5 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD  : public BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94
{
public:

public:
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
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


// Unity.VisualScripting.Antlr3.Runtime.Lexer
struct Lexer_t76D65B86F31F9994BB63217BC400E851C498F236  : public BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.ICharStream Unity.VisualScripting.Antlr3.Runtime.Lexer::input
	RuntimeObject* ___input_2;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Lexer_t76D65B86F31F9994BB63217BC400E851C498F236, ___input_2)); }
	inline RuntimeObject* get_input_2() const { return ___input_2; }
	inline RuntimeObject** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(RuntimeObject* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_2), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.Parser
struct Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA  : public BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.ITokenStream Unity.VisualScripting.Antlr3.Runtime.Parser::input
	RuntimeObject* ___input_2;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA, ___input_2)); }
	inline RuntimeObject* get_input_2() const { return ___input_2; }
	inline RuntimeObject** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(RuntimeObject* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_2), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8  : public RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::start
	RuntimeObject* ___start_0;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::stop
	RuntimeObject* ___stop_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8, ___start_0)); }
	inline RuntimeObject* get_start_0() const { return ___start_0; }
	inline RuntimeObject** get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(RuntimeObject* value)
	{
		___start_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_0), (void*)value);
	}

	inline static int32_t get_offset_of_stop_1() { return static_cast<int32_t>(offsetof(ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8, ___stop_1)); }
	inline RuntimeObject* get_stop_1() const { return ___stop_1; }
	inline RuntimeObject** get_address_of_stop_1() { return &___stop_1; }
	inline void set_stop_1(RuntimeObject* value)
	{
		___stop_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stop_1), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode
struct CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080  : public CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::input
	RuntimeObject* ___input_6;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::start
	RuntimeObject* ___start_7;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::stop
	RuntimeObject* ___stop_8;
	// Unity.VisualScripting.Antlr3.Runtime.RecognitionException Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::trappedException
	RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___trappedException_9;

public:
	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080, ___input_6)); }
	inline RuntimeObject* get_input_6() const { return ___input_6; }
	inline RuntimeObject** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(RuntimeObject* value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_6), (void*)value);
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080, ___start_7)); }
	inline RuntimeObject* get_start_7() const { return ___start_7; }
	inline RuntimeObject** get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(RuntimeObject* value)
	{
		___start_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_7), (void*)value);
	}

	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080, ___stop_8)); }
	inline RuntimeObject* get_stop_8() const { return ___stop_8; }
	inline RuntimeObject** get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(RuntimeObject* value)
	{
		___stop_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stop_8), (void*)value);
	}

	inline static int32_t get_offset_of_trappedException_9() { return static_cast<int32_t>(offsetof(CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080, ___trappedException_9)); }
	inline RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * get_trappedException_9() const { return ___trappedException_9; }
	inline RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 ** get_address_of_trappedException_9() { return &___trappedException_9; }
	inline void set_trappedException_9(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * value)
	{
		___trappedException_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trappedException_9), (void*)value);
	}
};


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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator/EnumerationMode
struct EnumerationMode_t4D42AE737F70A442D984A1052119F2F1987B2125 
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator/EnumerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnumerationMode_t4D42AE737F70A442D984A1052119F2F1987B2125, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8  : public Exception_t
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.RecognitionException::input
	RuntimeObject* ___input_17;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::index
	int32_t ___index_18;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::token
	RuntimeObject* ___token_19;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::node
	RuntimeObject * ___node_20;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::c
	int32_t ___c_21;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::line
	int32_t ___line_22;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::charPositionInLine
	int32_t ___charPositionInLine_23;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognitionException::approximateLineInfo
	bool ___approximateLineInfo_24;

public:
	inline static int32_t get_offset_of_input_17() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___input_17)); }
	inline RuntimeObject* get_input_17() const { return ___input_17; }
	inline RuntimeObject** get_address_of_input_17() { return &___input_17; }
	inline void set_input_17(RuntimeObject* value)
	{
		___input_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_17), (void*)value);
	}

	inline static int32_t get_offset_of_index_18() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___index_18)); }
	inline int32_t get_index_18() const { return ___index_18; }
	inline int32_t* get_address_of_index_18() { return &___index_18; }
	inline void set_index_18(int32_t value)
	{
		___index_18 = value;
	}

	inline static int32_t get_offset_of_token_19() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___token_19)); }
	inline RuntimeObject* get_token_19() const { return ___token_19; }
	inline RuntimeObject** get_address_of_token_19() { return &___token_19; }
	inline void set_token_19(RuntimeObject* value)
	{
		___token_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_19), (void*)value);
	}

	inline static int32_t get_offset_of_node_20() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___node_20)); }
	inline RuntimeObject * get_node_20() const { return ___node_20; }
	inline RuntimeObject ** get_address_of_node_20() { return &___node_20; }
	inline void set_node_20(RuntimeObject * value)
	{
		___node_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_20), (void*)value);
	}

	inline static int32_t get_offset_of_c_21() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___c_21)); }
	inline int32_t get_c_21() const { return ___c_21; }
	inline int32_t* get_address_of_c_21() { return &___c_21; }
	inline void set_c_21(int32_t value)
	{
		___c_21 = value;
	}

	inline static int32_t get_offset_of_line_22() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___line_22)); }
	inline int32_t get_line_22() const { return ___line_22; }
	inline int32_t* get_address_of_line_22() { return &___line_22; }
	inline void set_line_22(int32_t value)
	{
		___line_22 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_23() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___charPositionInLine_23)); }
	inline int32_t get_charPositionInLine_23() const { return ___charPositionInLine_23; }
	inline int32_t* get_address_of_charPositionInLine_23() { return &___charPositionInLine_23; }
	inline void set_charPositionInLine_23(int32_t value)
	{
		___charPositionInLine_23 = value;
	}

	inline static int32_t get_offset_of_approximateLineInfo_24() { return static_cast<int32_t>(offsetof(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8, ___approximateLineInfo_24)); }
	inline bool get_approximateLineInfo_24() const { return ___approximateLineInfo_24; }
	inline bool* get_address_of_approximateLineInfo_24() { return &___approximateLineInfo_24; }
	inline void set_approximateLineInfo_24(bool value)
	{
		___approximateLineInfo_24 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator
struct HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD  : public RuntimeObject
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_hashList
	HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ____hashList_0;
	// System.Collections.Generic.List`1<System.Object> Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_orderList
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____orderList_1;
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator/EnumerationMode Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_mode
	int32_t ____mode_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_index
	int32_t ____index_3;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_version
	int32_t ____version_4;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_key
	RuntimeObject * ____key_5;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::_value
	RuntimeObject * ____value_6;

public:
	inline static int32_t get_offset_of__hashList_0() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____hashList_0)); }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * get__hashList_0() const { return ____hashList_0; }
	inline HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 ** get_address_of__hashList_0() { return &____hashList_0; }
	inline void set__hashList_0(HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * value)
	{
		____hashList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashList_0), (void*)value);
	}

	inline static int32_t get_offset_of__orderList_1() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____orderList_1)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__orderList_1() const { return ____orderList_1; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__orderList_1() { return &____orderList_1; }
	inline void set__orderList_1(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____orderList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____orderList_1), (void*)value);
	}

	inline static int32_t get_offset_of__mode_2() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____mode_2)); }
	inline int32_t get__mode_2() const { return ____mode_2; }
	inline int32_t* get_address_of__mode_2() { return &____mode_2; }
	inline void set__mode_2(int32_t value)
	{
		____mode_2 = value;
	}

	inline static int32_t get_offset_of__index_3() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____index_3)); }
	inline int32_t get__index_3() const { return ____index_3; }
	inline int32_t* get_address_of__index_3() { return &____index_3; }
	inline void set__index_3(int32_t value)
	{
		____index_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__key_5() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____key_5)); }
	inline RuntimeObject * get__key_5() const { return ____key_5; }
	inline RuntimeObject ** get_address_of__key_5() { return &____key_5; }
	inline void set__key_5(RuntimeObject * value)
	{
		____key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_5), (void*)value);
	}

	inline static int32_t get_offset_of__value_6() { return static_cast<int32_t>(offsetof(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD, ____value_6)); }
	inline RuntimeObject * get__value_6() const { return ____value_6; }
	inline RuntimeObject ** get_address_of__value_6() { return &____value_6; }
	inline void set__value_6(RuntimeObject * value)
	{
		____value_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_6), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.EarlyExitException
struct EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.EarlyExitException::decisionNumber
	int32_t ___decisionNumber_25;

public:
	inline static int32_t get_offset_of_decisionNumber_25() { return static_cast<int32_t>(offsetof(EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC, ___decisionNumber_25)); }
	inline int32_t get_decisionNumber_25() const { return ___decisionNumber_25; }
	inline int32_t* get_address_of_decisionNumber_25() { return &___decisionNumber_25; }
	inline void set_decisionNumber_25(int32_t value)
	{
		___decisionNumber_25 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException
struct FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.String Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException::ruleName
	String_t* ___ruleName_25;
	// System.String Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException::predicateText
	String_t* ___predicateText_26;

public:
	inline static int32_t get_offset_of_ruleName_25() { return static_cast<int32_t>(offsetof(FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565, ___ruleName_25)); }
	inline String_t* get_ruleName_25() const { return ___ruleName_25; }
	inline String_t** get_address_of_ruleName_25() { return &___ruleName_25; }
	inline void set_ruleName_25(String_t* value)
	{
		___ruleName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleName_25), (void*)value);
	}

	inline static int32_t get_offset_of_predicateText_26() { return static_cast<int32_t>(offsetof(FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565, ___predicateText_26)); }
	inline String_t* get_predicateText_26() const { return ___predicateText_26; }
	inline String_t** get_address_of_predicateText_26() { return &___predicateText_26; }
	inline void set_predicateText_26(String_t* value)
	{
		___predicateText_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicateText_26), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException
struct MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::a
	int32_t ___a_25;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::b
	int32_t ___b_26;

public:
	inline static int32_t get_offset_of_a_25() { return static_cast<int32_t>(offsetof(MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34, ___a_25)); }
	inline int32_t get_a_25() const { return ___a_25; }
	inline int32_t* get_address_of_a_25() { return &___a_25; }
	inline void set_a_25(int32_t value)
	{
		___a_25 = value;
	}

	inline static int32_t get_offset_of_b_26() { return static_cast<int32_t>(offsetof(MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34, ___b_26)); }
	inline int32_t get_b_26() const { return ___b_26; }
	inline int32_t* get_address_of_b_26() { return &___b_26; }
	inline void set_b_26(int32_t value)
	{
		___b_26 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException
struct MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::expecting
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___expecting_25;

public:
	inline static int32_t get_offset_of_expecting_25() { return static_cast<int32_t>(offsetof(MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4, ___expecting_25)); }
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * get_expecting_25() const { return ___expecting_25; }
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 ** get_address_of_expecting_25() { return &___expecting_25; }
	inline void set_expecting_25(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * value)
	{
		___expecting_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expecting_25), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException
struct MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::expecting
	int32_t ___expecting_25;

public:
	inline static int32_t get_offset_of_expecting_25() { return static_cast<int32_t>(offsetof(MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323, ___expecting_25)); }
	inline int32_t get_expecting_25() const { return ___expecting_25; }
	inline int32_t* get_address_of_expecting_25() { return &___expecting_25; }
	inline void set_expecting_25(int32_t value)
	{
		___expecting_25 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException::expecting
	int32_t ___expecting_25;

public:
	inline static int32_t get_offset_of_expecting_25() { return static_cast<int32_t>(offsetof(MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA, ___expecting_25)); }
	inline int32_t get_expecting_25() const { return ___expecting_25; }
	inline int32_t* get_address_of_expecting_25() { return &___expecting_25; }
	inline void set_expecting_25(int32_t value)
	{
		___expecting_25 = value;
	}
};


// Unity.VisualScripting.Antlr3.Runtime.NoViableAltException
struct NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14  : public RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8
{
public:
	// System.String Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::grammarDecisionDescription
	String_t* ___grammarDecisionDescription_25;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::decisionNumber
	int32_t ___decisionNumber_26;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::stateNumber
	int32_t ___stateNumber_27;

public:
	inline static int32_t get_offset_of_grammarDecisionDescription_25() { return static_cast<int32_t>(offsetof(NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14, ___grammarDecisionDescription_25)); }
	inline String_t* get_grammarDecisionDescription_25() const { return ___grammarDecisionDescription_25; }
	inline String_t** get_address_of_grammarDecisionDescription_25() { return &___grammarDecisionDescription_25; }
	inline void set_grammarDecisionDescription_25(String_t* value)
	{
		___grammarDecisionDescription_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grammarDecisionDescription_25), (void*)value);
	}

	inline static int32_t get_offset_of_decisionNumber_26() { return static_cast<int32_t>(offsetof(NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14, ___decisionNumber_26)); }
	inline int32_t get_decisionNumber_26() const { return ___decisionNumber_26; }
	inline int32_t* get_address_of_decisionNumber_26() { return &___decisionNumber_26; }
	inline void set_decisionNumber_26(int32_t value)
	{
		___decisionNumber_26 = value;
	}

	inline static int32_t get_offset_of_stateNumber_27() { return static_cast<int32_t>(offsetof(NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14, ___stateNumber_27)); }
	inline int32_t get_stateNumber_27() const { return ___stateNumber_27; }
	inline int32_t* get_address_of_stateNumber_27() { return &___stateNumber_27; }
	inline void set_stateNumber_27(int32_t value)
	{
		___stateNumber_27 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler
struct SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6  : public MulticastDelegate_t
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.MismatchedNotSetException
struct MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2  : public MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4
{
public:

public:
};


// Unity.VisualScripting.Antlr3.Runtime.MissingTokenException
struct MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B  : public MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323
{
public:
	// System.Object Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::inserted
	RuntimeObject * ___inserted_26;

public:
	inline static int32_t get_offset_of_inserted_26() { return static_cast<int32_t>(offsetof(MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B, ___inserted_26)); }
	inline RuntimeObject * get_inserted_26() const { return ___inserted_26; }
	inline RuntimeObject ** get_address_of_inserted_26() { return &___inserted_26; }
	inline void set_inserted_26(RuntimeObject * value)
	{
		___inserted_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inserted_26), (void*)value);
	}
};


// Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException
struct UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008  : public MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.IDictionary[]
struct IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9  : public RuntimeArray
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
// Unity.VisualScripting.Antlr3.Runtime.BitSet[]
struct BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * m_Items[1];

public:
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* m_Items[1];

public:
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CharStreamState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharStreamState__ctor_mC4F1BFD2E040E2944F6BB2484038211065DC4E8E (CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m21B6F47E11A5E9036A304A251F68A70DE64F02AD (RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::get_Expecting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method);
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException::get_UnexpectedToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_mE3313F9C502B2255273C3B5F84FD3638EB22455B_inline (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_m013A39F39CF4DE3DD3F66B23F727CB6D7C834244_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mF4B081A6E6D2558D0972FF9BE2BB72F464C99697_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC8718EA35386A775C9A7983763DAA0A863623D73 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_mAD81D39C424CF6727B39950DFDEAFAF7605B2901_inline (const RuntimeMethod* method);
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::MismatchIsUnwantedToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsUnwantedToken_m4F100FA1ACFB9EF727338DB9684A51CD10EA0355 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, int32_t ___ttype1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_m4C1E2A65F8F623033E9906086DA0D321CA975DA0 (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method);
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::MismatchIsMissingToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsMissingToken_m2EA63241E82025B7B8C3EA8B07ADBAC1D679DCA7 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_m4EFCFB8DCD01F50253D87AEF5FB91A9C6E48413E (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, int32_t ___expecting0, RuntimeObject* ___input1, RuntimeObject * ___inserted2, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mD63B97E65E84D79C2995DFC031DBECF46BE28F6B (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_mCB71D5E4A5A353319D54F870C463E74FF179C1C8_inline (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode__ctor_m54C179086CE57BD2F07CB4AC44E7E19425CB6679 (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, RuntimeObject* ___input0, RuntimeObject* ___start1, RuntimeObject* ___stop2, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e3, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mDD23A62D44C5D55B8FFFD1E95E4F72AF8FC4F5B8 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___nbits0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::SetSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_SetSize_m0A1A318760DCB2D207CE9E5975729BD9075DC1BD (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___nwords0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::WordNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_WordNumber_m149663BD52EE1788E06FE7AE0B7634C2DB6F9D2B (int32_t ___bit0, const RuntimeMethod* method);
// System.UInt64 Unity.VisualScripting.Antlr3.Runtime.BitSet::BitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitSet_BitMask_m4A3CB90D700D7AE1854F9186AD63C30EA6856985 (int32_t ___bitNumber0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m29972277898725CF5403FB9765F335F0FAEA8162 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m2167AEFE6A03B57C05D5A28E33463E79239CD1F6 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::get_MissingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MissingTokenException_get_MissingType_mCEA3612C50CD092B0C05614FF7CECF9760947C00 (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_m7DFE44E7B3AE40CC35504A3B09293B60CE5CEE66 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_Contains_m80CFC38635CA372583986615444A9AB74E3D4591 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_mDBDF8DAB6B60CF03CA86824F3CBC7467E48E0D2A (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::.ctor(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m2CC1DD83452FF82DB156C3A8BE70A8CBB2D2F970 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, RuntimeObject* ___t0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor__ctor_mB859C26C74776E469037BAC4BF37A3CB667834EF (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler::Invoke(Unity.VisualScripting.Antlr3.Runtime.DFA,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_m55ECD3D9416B7BB43171FC8B0C5ADE2FB6F0318B (SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * __this, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * ___dfa0, int32_t ___s1, RuntimeObject* ___input2, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::NoViableAlt(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41 (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, int32_t ___s0, RuntimeObject* ___input1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::.ctor(System.String,System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m5610F35092AFA4EBEDB3669428A6C3218C86AC9B (NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * __this, String_t* ___grammarDecisionDescription0, int32_t ___decisionNumber1, int32_t ___stateNumber2, RuntimeObject* ___input3, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::UnpackEncodedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* DFA_UnpackEncodedString_m5D4FB90E2C1F7122A57D9E993BE91561B610D206 (String_t* ___encodedString0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, RuntimeObject* ___input0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList,Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator/EnumerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
inline bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mD8A91DB91D08C3AD52A19FEE71C7199458CF3EEF (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m02B73DC41FF35156299B74B1681AFEF2698D4415 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4 (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455 (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_mE29DEF90AEC335861E05129B2BE03904BF788C5C (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor(Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m3CB6CC87074045CDB011422E4E2B4E4E45CF894B (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * ___state0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_mEC04743808D106E034BC2E5BF098245E564ADAF2 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(Unity.VisualScripting.Antlr3.Runtime.ICharStream,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mE7CEC88A9F3804CA6355BE992BCB314B536631D9 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, RuntimeObject* ___input0, int32_t ___type1, int32_t ___channel2, int32_t ___start3, int32_t ___stop4, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::.ctor(System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_m455217F5C80CAF9CC2E160F1DEE6427559BB2868 (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, int32_t ___a0, int32_t ___b1, RuntimeObject* ___input2, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Char()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method);
// System.String Unity.VisualScripting.Antlr3.Runtime.Lexer::GetCharErrorDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, int32_t ___c0, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_mDA9674550C9D3D5F9D88ABABC4EE6A66670F17AD_inline (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mF1912E7F4E6A60EE74EDD5CC9DCAF180A0C743A9_inline (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method);
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m5CFD335336614BD786BB44E7857E135AB8F53FDB (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenNames1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m997FA0EE3D2B6F21062C9B5A327E7A5CCE4A8402 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m715F73D46B490407C1EE544C6D02D554A76F4032 (MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_mF0E91260FE3732A9F292EEB9A16AC40E27AEB000 (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mEBE281BD30ED96A4A7F6AA92A77532D60296F52B (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope__ctor_m98AF1C4C0D151BAB8C8604B5E4632520A8A279B0 (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(System.String,System.Exception,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m16E3AD189C22B6F872E281458B5548DF7A3BD37E (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, String_t* ___message0, Exception_t * ___inner1, RuntimeObject* ___input2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::ExtractInformationFromTreeNodeStream(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException_ExtractInformationFromTreeNodeStream_m1BBF6EB89ABF70840BA6E8E45365F1CE1D8243B6 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, RuntimeObject* ___input0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mA7F5B1D102FE2C99D1E690407D5047CF734B778B (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashList_get_Item_m2C25A555AC0DBA9410F9CCBE2CA9135C82F4F4B9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method);
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsSynchronized_mF776737957D087761FB0A87F0CB4E90482539364 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method);
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashList_get_Count_mB27178928462775B09F8270ED58E1094985C1BB9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::CopyKeysTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyKeysTo_mC876AE53080E4D41C5663D3A86920BC736091955 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashList_get_SyncRoot_mD396ECD5D5D583D766A2B8D36D5A28E54342C7C9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method);
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::CopyValuesTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyValuesTo_mFAF11369490C801772DBD0DB8CCC2F15009F9B52 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream__ctor_m27E517DAD067F3875B358F47B1BB8F43C6A2C0EB (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	{
		__this->set_line_3(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1;
		L_1 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_0, /*hidden argument*/NULL);
		__this->set_data_0(L_1);
		String_t* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		__this->set_n_1(L_3);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_Line_mF411D98619D4A9395581374F5FCF2963E86B9FE1 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_3();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_CharPositionInLine_m8436905B7D8D236EA94A3890705E743F094670C1 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPositionInLine_4();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Consume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Consume_m0B934005F48C7A8D560DCFCE6717E71DAA396920 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_p_2();
		int32_t L_1 = __this->get_n_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_2 = __this->get_charPositionInLine_4();
		__this->set_charPositionInLine_4(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = __this->get_data_0();
		int32_t L_4 = __this->get_p_2();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->get_line_3();
		__this->set_line_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		__this->set_charPositionInLine_4(0);
	}

IL_0042:
	{
		int32_t L_8 = __this->get_p_2();
		__this->set_p_2(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0050:
	{
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::LA(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_LA_mEC617D72B5FEC8CBCB5D7BA6809F40E71B982CB1 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___i0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___i0;
		___i0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = __this->get_p_2();
		int32_t L_4 = ___i0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)1))) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_5 = __this->get_p_2();
		int32_t L_6 = ___i0;
		int32_t L_7 = __this->get_n_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), (int32_t)1))) < ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		return (-1);
	}

IL_0031:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = __this->get_data_0();
		int32_t L_9 = __this->get_p_2();
		int32_t L_10 = ___i0;
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)1));
		uint16_t L_12 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_Index_m9EC3465E77ADCEB2161B404936C9A0987EFD845E (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_p_2();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_get_Count_m6DFDE66BB17EB38B263FCDED4D9626FB1AD6C045 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_n_1();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Mark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ANTLRStringStream_Mark_m8A7F309A6A34333E427263E0BF5686D711B15B91 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_markers_6();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_1, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		__this->set_markers_6(L_1);
		RuntimeObject* L_2 = __this->get_markers_6();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, NULL);
	}

IL_0020:
	{
		int32_t L_4 = __this->get_markDepth_5();
		__this->set_markDepth_5(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		V_0 = (CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 *)NULL;
		int32_t L_5 = __this->get_markDepth_5();
		RuntimeObject* L_6 = __this->get_markers_6();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_8 = (CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 *)il2cpp_codegen_object_new(CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var);
		CharStreamState__ctor_mC4F1BFD2E040E2944F6BB2484038211065DC4E8E(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = __this->get_markers_6();
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_9, L_10);
		goto IL_006f;
	}

IL_0058:
	{
		RuntimeObject* L_12 = __this->get_markers_6();
		int32_t L_13 = __this->get_markDepth_5();
		NullCheck(L_12);
		RuntimeObject * L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_12, L_13);
		V_0 = ((CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 *)CastclassClass((RuntimeObject*)L_14, CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var));
	}

IL_006f:
	{
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_15 = V_0;
		int32_t L_16 = __this->get_p_2();
		NullCheck(L_15);
		L_15->set_p_0(L_16);
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_17 = V_0;
		int32_t L_18 = __this->get_line_3();
		NullCheck(L_17);
		L_17->set_line_1(L_18);
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_19 = V_0;
		int32_t L_20 = __this->get_charPositionInLine_4();
		NullCheck(L_19);
		L_19->set_charPositionInLine_2(L_20);
		int32_t L_21 = __this->get_markDepth_5();
		__this->set_lastMarker_7(L_21);
		int32_t L_22 = __this->get_markDepth_5();
		return L_22;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Rewind(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Rewind_m200377D1063B3BD968A124B6E2B326D58CF27022 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, int32_t ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_markers_6();
		int32_t L_1 = ___m0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = ((CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 *)CastclassClass((RuntimeObject*)L_2, CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225_il2cpp_TypeInfo_var));
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_p_0();
		VirtActionInvoker1< int32_t >::Invoke(23 /* System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Seek(System.Int32) */, __this, L_4);
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_line_1();
		__this->set_line_3(L_6);
		CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_charPositionInLine_2();
		__this->set_charPositionInLine_4(L_8);
		int32_t L_9 = ___m0;
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Release(System.Int32) */, __this, L_9);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Release(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Release_m28B7BB1E78B86986F36BD2ED6743D6F62E5DF01A (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, int32_t ___marker0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___marker0;
		__this->set_markDepth_5(L_0);
		int32_t L_1 = __this->get_markDepth_5();
		__this->set_markDepth_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Seek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ANTLRStringStream_Seek_mCF74B4A45A8048B684F1F48370309D829782998C (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_p_2();
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___index0;
		__this->set_p_2(L_2);
		return;
	}

IL_0011:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Consume() */, __this);
	}

IL_0017:
	{
		int32_t L_3 = __this->get_p_2();
		int32_t L_4 = ___index0;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.ANTLRStringStream::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ANTLRStringStream_Substring_m67034EE892F44D66A376EAD5B03F771660FE5088 (ANTLRStringStream_t97B92F891335E4B0FAE9202F6FA571DFD6E610B1 * __this, int32_t ___start0, int32_t ___stop1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get_data_0();
		int32_t L_1 = ___start0;
		int32_t L_2 = ___stop1;
		int32_t L_3 = ___start0;
		String_t* L_4;
		L_4 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_0, L_1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), (int32_t)1)), /*hidden argument*/NULL);
		return L_4;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_mE29DEF90AEC335861E05129B2BE03904BF788C5C (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = (RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E *)il2cpp_codegen_object_new(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E_il2cpp_TypeInfo_var);
		RecognizerSharedState__ctor_m21B6F47E11A5E9036A304A251F68A70DE64F02AD(L_0, /*hidden argument*/NULL);
		__this->set_state_1(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor(Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m3CB6CC87074045CDB011422E4E2B4E4E45CF894B (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = ___state0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_1 = (RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E *)il2cpp_codegen_object_new(RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E_il2cpp_TypeInfo_var);
		RecognizerSharedState__ctor_m21B6F47E11A5E9036A304A251F68A70DE64F02AD(L_1, /*hidden argument*/NULL);
		___state0 = L_1;
	}

IL_0010:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = ___state0;
		__this->set_state_1(L_2);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_mEC04743808D106E034BC2E5BF098245E564ADAF2 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = __this->get_state_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_1 = __this->get_state_1();
		NullCheck(L_1);
		L_1->set_followingStackPointer_1((-1));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = __this->get_state_1();
		NullCheck(L_2);
		L_2->set_errorRecovery_2((bool)0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_3 = __this->get_state_1();
		NullCheck(L_3);
		L_3->set_lastErrorIndex_3((-1));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_4 = __this->get_state_1();
		NullCheck(L_4);
		L_4->set_failed_4((bool)0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = __this->get_state_1();
		NullCheck(L_5);
		L_5->set_syntaxErrors_5(0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_6 = __this->get_state_1();
		NullCheck(L_6);
		L_6->set_backtracking_6(0);
		V_0 = 0;
		goto IL_0067;
	}

IL_0055:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = __this->get_state_1();
		NullCheck(L_7);
		IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* L_8 = L_7->get_ruleMemo_7();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0067:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_11 = __this->get_state_1();
		NullCheck(L_11);
		IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* L_12 = L_11->get_ruleMemo_7();
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_13 = V_0;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_14 = __this->get_state_1();
		NullCheck(L_14);
		IDictionaryU5BU5D_tF43D440981140961992FCDD8F1FBCA5087698EF9* L_15 = L_14->get_ruleMemo_7();
		NullCheck(L_15);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0055;
		}
	}

IL_0084:
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseRecognizer_Match_m7F00F4889A96737D9DC1F972EDA57C325526ECB6 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, int32_t ___ttype1, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___input0;
		RuntimeObject * L_1;
		L_1 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject* >::Invoke(22 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetCurrentInputSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream) */, __this, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_2, 1);
		int32_t L_4 = ___ttype1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___input0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_5);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_6 = __this->get_state_1();
		NullCheck(L_6);
		L_6->set_errorRecovery_2((bool)0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = __this->get_state_1();
		NullCheck(L_7);
		L_7->set_failed_4((bool)0);
		RuntimeObject * L_8 = V_0;
		return L_8;
	}

IL_0032:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_9 = __this->get_state_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_backtracking_6();
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_11 = __this->get_state_1();
		NullCheck(L_11);
		L_11->set_failed_4((bool)1);
		RuntimeObject * L_12 = V_0;
		return L_12;
	}

IL_004e:
	{
		RuntimeObject* L_13 = ___input0;
		int32_t L_14 = ___ttype1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_15 = ___follow2;
		RuntimeObject * L_16;
		L_16 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject*, int32_t, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(15 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::RecoverFromMismatchedToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_13, L_14, L_15);
		V_0 = L_16;
		RuntimeObject * L_17 = V_0;
		return L_17;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::MismatchIsUnwantedToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsUnwantedToken_m4F100FA1ACFB9EF727338DB9684A51CD10EA0355 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, int32_t ___ttype1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0, 2);
		int32_t L_2 = ___ttype1;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::MismatchIsMissingToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRecognizer_MismatchIsMissingToken_m2EA63241E82025B7B8C3EA8B07ADBAC1D679DCA7 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_0 = NULL;
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_0 = ___follow1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_1 = ___follow1;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, L_1, 1);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_3;
		L_3 = VirtFuncInvoker0< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(20 /* Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ComputeContextSensitiveRuleFOLLOW() */, __this);
		V_0 = L_3;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_4 = ___follow1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_5 = V_0;
		NullCheck(L_4);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_6;
		L_6 = VirtFuncInvoker1< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(4 /* Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BitSet::Or(Unity.VisualScripting.Antlr3.Runtime.BitSet) */, L_4, L_5);
		___follow1 = L_6;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = __this->get_state_1();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_followingStackPointer_1();
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_9 = ___follow1;
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::Remove(System.Int32) */, L_9, 1);
	}

IL_0033:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_10 = ___follow1;
		RuntimeObject* L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_11, 1);
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, L_10, L_12);
		if (L_13)
		{
			goto IL_004b;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_14 = ___follow1;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, L_14, 1);
		if (!L_15)
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		return (bool)0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_ReportError_mC1ABE82E5E4ABD93AABD992FC2B8F4BD28487330 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, const RuntimeMethod* method)
{
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = __this->get_state_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_errorRecovery_2();
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = __this->get_state_1();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_syntaxErrors_5();
		NullCheck(L_3);
		L_3->set_syntaxErrors_5(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = __this->get_state_1();
		NullCheck(L_5);
		L_5->set_errorRecovery_2((bool)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(18 /* System.String[] Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_7 = ___e0;
		VirtActionInvoker2< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::DisplayRecognitionError(System.String[],Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_6, L_7);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::DisplayRecognitionError(System.String[],Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_DisplayRecognitionError_mCBD4134F48FC7CE98B087BE9B930CEB5FC0D07CE (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenNames0, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_0 = ___e1;
		String_t* L_1;
		L_1 = VirtFuncInvoker1< String_t*, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorHeader(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_0);
		V_0 = L_1;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_2 = ___e1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___tokenNames0;
		String_t* L_4;
		L_4 = VirtFuncInvoker2< String_t*, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(8 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[]) */, __this, L_2, L_3);
		V_1 = L_4;
		String_t* L_5 = V_0;
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::EmitErrorMessage(System.String) */, __this, L_7);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m5CFD335336614BD786BB44E7857E135AB8F53FDB (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenNames1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * V_1 = NULL;
	String_t* V_2 = NULL;
	MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * V_3 = NULL;
	String_t* V_4 = NULL;
	MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * V_5 = NULL;
	String_t* V_6 = NULL;
	MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * V_7 = NULL;
	String_t* V_8 = NULL;
	MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * V_9 = NULL;
	MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 * V_10 = NULL;
	FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 * V_11 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_12 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_13 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_14 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_15 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B20_1 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_1 = NULL;
	RuntimeObject * G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_2 = NULL;
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		V_0 = L_1;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_2 = ___e0;
		if (!((UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)IsInstClass((RuntimeObject*)L_2, UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_3 = ___e0;
		V_1 = ((UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)CastclassClass((RuntimeObject*)L_3, UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var));
		V_2 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_003a;
	}

IL_0031:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___tokenNames1;
		UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
	}

IL_003a:
	{
		UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = UnwantedTokenException_get_UnexpectedToken_mE3313F9C502B2255273C3B5F84FD3638EB22455B_inline(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_13);
		String_t* L_15 = V_2;
		String_t* L_16;
		L_16 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteralDC86DAA27565F3C4B534F244D9F1CBFE024D7EAE, L_14, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_02dd;
	}

IL_005c:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_17 = ___e0;
		if (!((MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)IsInstClass((RuntimeObject*)L_17, MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_18 = ___e0;
		V_3 = ((MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)CastclassClass((RuntimeObject*)L_18, MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var));
		V_4 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_0088;
		}
	}
	{
		V_4 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_0092;
	}

IL_0088:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = ___tokenNames1;
		MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_4 = L_26;
	}

IL_0092:
	{
		String_t* L_27 = V_4;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_28 = ___e0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_29);
		String_t* L_31;
		L_31 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral776C7FDE238457F8357FDF71D2BE4203F194B5D8, L_27, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		goto IL_02dd;
	}

IL_00b5:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_32 = ___e0;
		if (!((MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)IsInstClass((RuntimeObject*)L_32, MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)))
		{
			goto IL_0111;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_33 = ___e0;
		V_5 = ((MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)CastclassClass((RuntimeObject*)L_33, MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var));
		V_6 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_36 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00e3;
		}
	}
	{
		V_6 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_00ee;
	}

IL_00e3:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = ___tokenNames1;
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_38 = V_5;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_40 = L_39;
		String_t* L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
	}

IL_00ee:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_42 = ___e0;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_42, /*hidden argument*/NULL);
		String_t* L_44;
		L_44 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_43);
		String_t* L_45 = V_6;
		String_t* L_46;
		L_46 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D, L_44, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_45, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_02dd;
	}

IL_0111:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_47 = ___e0;
		if (!((MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA *)IsInstClass((RuntimeObject*)L_47, MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA_il2cpp_TypeInfo_var)))
		{
			goto IL_01a3;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_48 = ___e0;
		V_7 = ((MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA *)CastclassClass((RuntimeObject*)L_48, MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA_il2cpp_TypeInfo_var));
		V_8 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
		MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * L_49 = V_7;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_expecting_25();
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_51 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0142;
		}
	}
	{
		V_8 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_014d;
	}

IL_0142:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = ___tokenNames1;
		MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * L_53 = V_7;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_expecting_25();
		NullCheck(L_52);
		int32_t L_55 = L_54;
		String_t* L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_8 = L_56;
	}

IL_014d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_12 = L_57;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = V_12;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral5AE6F45871669BB25CC574BBF0A2C2201C4F7B7B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = V_12;
		MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * L_60 = V_7;
		NullCheck(L_60);
		RuntimeObject * L_61;
		L_61 = RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664_inline(L_60, /*hidden argument*/NULL);
		G_B20_0 = 1;
		G_B20_1 = L_59;
		if (!L_61)
		{
			G_B21_0 = 1;
			G_B21_1 = L_59;
			goto IL_0178;
		}
	}
	{
		MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * L_62 = V_7;
		NullCheck(L_62);
		RuntimeObject * L_63;
		L_63 = RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664_inline(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
		if (L_64)
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			goto IL_017f;
		}
	}

IL_0178:
	{
		String_t* L_65 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B23_0 = ((RuntimeObject *)(L_65));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_0186;
	}

IL_017f:
	{
		MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * L_66 = V_7;
		NullCheck(L_66);
		RuntimeObject * L_67;
		L_67 = RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664_inline(L_66, /*hidden argument*/NULL);
		G_B23_0 = L_67;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_0186:
	{
		NullCheck(G_B23_2);
		ArrayElementTypeCheck (G_B23_2, G_B23_0);
		(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = V_12;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = V_12;
		String_t* L_70 = V_8;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_70);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = V_12;
		String_t* L_72;
		L_72 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_71, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_02dd;
	}

IL_01a3:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_73 = ___e0;
		if (!((NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)IsInstClass((RuntimeObject*)L_73, NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var)))
		{
			goto IL_01c7;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_74 = ___e0;
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_74, /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_75);
		String_t* L_77;
		L_77 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralECD4CB8C5D196C86050FD2C960761F6FA892771D, L_76, /*hidden argument*/NULL);
		V_0 = L_77;
		goto IL_02dd;
	}

IL_01c7:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_78 = ___e0;
		if (!((EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC *)IsInstClass((RuntimeObject*)L_78, EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var)))
		{
			goto IL_01eb;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_79 = ___e0;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_79, /*hidden argument*/NULL);
		String_t* L_81;
		L_81 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_80);
		String_t* L_82;
		L_82 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral0F33453EE0F85707619E21D32FDB0D7D909DF122, L_81, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_02dd;
	}

IL_01eb:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_83 = ___e0;
		if (!((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)IsInstClass((RuntimeObject*)L_83, MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var)))
		{
			goto IL_023d;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_84 = ___e0;
		V_9 = ((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)CastclassClass((RuntimeObject*)L_84, MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_85 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_13 = L_85;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = V_13;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = V_13;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_88 = ___e0;
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_88, /*hidden argument*/NULL);
		String_t* L_90;
		L_90 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_89);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_90);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_91 = V_13;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_92 = V_13;
		MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * L_93 = V_9;
		NullCheck(L_93);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_94 = L_93->get_expecting_25();
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_94);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = V_13;
		String_t* L_96;
		L_96 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_95, /*hidden argument*/NULL);
		V_0 = L_96;
		goto IL_02dd;
	}

IL_023d:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_97 = ___e0;
		if (!((MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 *)IsInstClass((RuntimeObject*)L_97, MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var)))
		{
			goto IL_028c;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_98 = ___e0;
		V_10 = ((MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 *)CastclassClass((RuntimeObject*)L_98, MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_99 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_14 = L_99;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = V_14;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC58281F94EF1D27E7727DB75A7B9059EB1B3922D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_101 = V_14;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_102 = ___e0;
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_102, /*hidden argument*/NULL);
		String_t* L_104;
		L_104 = VirtFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_104);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_105 = V_14;
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_106 = V_14;
		MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 * L_107 = V_10;
		NullCheck(L_107);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_108 = ((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)L_107)->get_expecting_25();
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_108);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_108);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_109 = V_14;
		String_t* L_110;
		L_110 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_109, /*hidden argument*/NULL);
		V_0 = L_110;
		goto IL_02dd;
	}

IL_028c:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_111 = ___e0;
		if (!((FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 *)IsInstClass((RuntimeObject*)L_111, FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565_il2cpp_TypeInfo_var)))
		{
			goto IL_02dd;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_112 = ___e0;
		V_11 = ((FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 *)CastclassClass((RuntimeObject*)L_112, FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		V_15 = L_113;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = V_15;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, _stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2E17E19787A8E4C68AF47C8C58B4F88730743736);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = V_15;
		FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 * L_116 = V_11;
		NullCheck(L_116);
		String_t* L_117 = L_116->get_ruleName_25();
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, L_117);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_117);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = V_15;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, _stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral02B0B24969585DD39673A5765009AF30D6D2E538);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = V_15;
		FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 * L_120 = V_11;
		NullCheck(L_120);
		String_t* L_121 = L_120->get_predicateText_26();
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_121);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_122 = V_15;
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, _stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB672AC300BB7EC71FCB5654BA90363C9A37A0087);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = V_15;
		String_t* L_124;
		L_124 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_123, /*hidden argument*/NULL);
		V_0 = L_124;
	}

IL_02dd:
	{
		String_t* L_125 = V_0;
		return L_125;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorHeader(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorHeader_mEAD1FA3B91EF77BA336E34BE7A58E07938BC84EA (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_3 = ___e0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RecognitionException_get_Line_m013A39F39CF4DE3DD3F66B23F727CB6D7C834244_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_0;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RecognitionException_get_CharPositionInLine_mF4B081A6E6D2558D0972FF9BE2BB72F464C99697_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetTokenErrorDisplay(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetTokenErrorDisplay_mA7FB3CF7AAF3EB7F6C5AEBF90FDB9C027AFB7AD5 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_001f;
		}
	}
	{
		V_0 = _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
		goto IL_003a;
	}

IL_001f:
	{
		RuntimeObject* L_6 = ___t0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Concat_mC8718EA35386A775C9A7983763DAA0A863623D73(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_003a:
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_13, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_15, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_17, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::EmitErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_EmitErrorMessage_m6709FAA02A06CF89913C6FC17DB6E4010F973613 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0;
		L_0 = Console_get_Error_mAD81D39C424CF6727B39950DFDEAFAF7605B2901_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___msg0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Recover_mCDA9F8E2E4896CC12C80AF2D5EE65B1AA9486F12 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___re1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_0 = NULL;
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = __this->get_state_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_lastErrorIndex_3();
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Index() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___input0;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_4);
	}

IL_0019:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = __this->get_state_1();
		RuntimeObject* L_6 = ___input0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Index() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->set_lastErrorIndex_3(L_7);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_8;
		L_8 = VirtFuncInvoker0< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(19 /* Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ComputeErrorRecoverySet() */, __this);
		V_0 = L_8;
		VirtActionInvoker0::Invoke(13 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::BeginResync() */, __this);
		RuntimeObject* L_9 = ___input0;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_10 = V_0;
		VirtActionInvoker2< RuntimeObject*, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ConsumeUntil(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_9, L_10);
		VirtActionInvoker0::Invoke(14 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::EndResync() */, __this);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::BeginResync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_BeginResync_m85E14FF956E930A6DABDEE4D51163FF26ABFF0B7 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::EndResync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_EndResync_m844631A823D1BEDDDD9431304D0F8BE825344BD5 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::RecoverFromMismatchedToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseRecognizer_RecoverFromMismatchedToken_mAF70C0790A24B3E0EE0000F645D286DA976D19BA (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, int32_t ___ttype1, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		V_0 = (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)NULL;
		RuntimeObject* L_0 = ___input0;
		int32_t L_1 = ___ttype1;
		bool L_2;
		L_2 = BaseRecognizer_MismatchIsUnwantedToken_m4F100FA1ACFB9EF727338DB9684A51CD10EA0355(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = ___ttype1;
		RuntimeObject* L_4 = ___input0;
		UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * L_5 = (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)il2cpp_codegen_object_new(UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var);
		UnwantedTokenException__ctor_m4C1E2A65F8F623033E9906086DA0D321CA975DA0(L_5, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		VirtActionInvoker0::Invoke(13 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::BeginResync() */, __this);
		RuntimeObject* L_6 = ___input0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_6);
		VirtActionInvoker0::Invoke(14 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::EndResync() */, __this);
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_7 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_7);
		RuntimeObject* L_8 = ___input0;
		RuntimeObject * L_9;
		L_9 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject* >::Invoke(22 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetCurrentInputSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream) */, __this, L_8);
		V_1 = L_9;
		RuntimeObject* L_10 = ___input0;
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_10);
		RuntimeObject * L_11 = V_1;
		return L_11;
	}

IL_003d:
	{
		RuntimeObject* L_12 = ___input0;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_13 = ___follow2;
		bool L_14;
		L_14 = BaseRecognizer_MismatchIsMissingToken_m2EA63241E82025B7B8C3EA8B07ADBAC1D679DCA7(__this, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_15 = ___input0;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_16 = V_0;
		int32_t L_17 = ___ttype1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_18 = ___follow2;
		RuntimeObject * L_19;
		L_19 = VirtFuncInvoker4< RuntimeObject *, RuntimeObject*, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *, int32_t, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(23 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetMissingSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_15, L_16, L_17, L_18);
		V_2 = L_19;
		int32_t L_20 = ___ttype1;
		RuntimeObject* L_21 = ___input0;
		RuntimeObject * L_22 = V_2;
		MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * L_23 = (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)il2cpp_codegen_object_new(MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var);
		MissingTokenException__ctor_m4EFCFB8DCD01F50253D87AEF5FB91A9C6E48413E(L_23, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_24 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_24);
		RuntimeObject * L_25 = V_2;
		return L_25;
	}

IL_0064:
	{
		int32_t L_26 = ___ttype1;
		RuntimeObject* L_27 = ___input0;
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_28 = (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF(L_28, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_29 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseRecognizer_RecoverFromMismatchedToken_mAF70C0790A24B3E0EE0000F645D286DA976D19BA_RuntimeMethod_var)));
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ConsumeUntil(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_ConsumeUntil_m81C207FEB2BD4A935F3BA5F6B8812A9566364C2D (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___set1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0, 1);
		V_0 = L_1;
		goto IL_0018;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_3, 1);
		V_0 = L_4;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_7 = ___set1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, L_7, L_8);
		if (!L_9)
		{
			goto IL_000a;
		}
	}

IL_0029:
	{
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_GrammarFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_get_GrammarFileName_m2154AEB1D65BA2988E6C989BF14237CD39D2BEFF (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.String[] Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_TokenNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BaseRecognizer_get_TokenNames_m3F989EF10627AD8AB63813C163671A047D5EFA59 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		return (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ComputeErrorRecoverySet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * BaseRecognizer_ComputeErrorRecoverySet_m758637CB382678AE35BD9FAB1457CC6ACCA8F097 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_0;
		L_0 = VirtFuncInvoker1< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *, bool >::Invoke(21 /* Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::CombineFollows(System.Boolean) */, __this, (bool)0);
		return L_0;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ComputeContextSensitiveRuleFOLLOW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * BaseRecognizer_ComputeContextSensitiveRuleFOLLOW_m60CF672B3679CBCECCF9BDE1CAB50F0A6807E256 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, const RuntimeMethod* method)
{
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_0;
		L_0 = VirtFuncInvoker1< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *, bool >::Invoke(21 /* Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::CombineFollows(System.Boolean) */, __this, (bool)1);
		return L_0;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::CombineFollows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * BaseRecognizer_CombineFollows_m27AC137831792D71EFEB1937F0AA663EE5F46140 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, bool ___exact0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_1 = NULL;
	int32_t V_2 = 0;
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_3 = NULL;
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = __this->get_state_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_followingStackPointer_1();
		V_0 = L_1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_2 = (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)il2cpp_codegen_object_new(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		BitSet__ctor_mD63B97E65E84D79C2995DFC031DBECF46BE28F6B(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0046;
	}

IL_0016:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_4 = __this->get_state_1();
		NullCheck(L_4);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_5 = L_4->get_following_0();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_9 = V_1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_10 = V_3;
		NullCheck(L_9);
		VirtActionInvoker1< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::OrInPlace(Unity.VisualScripting.Antlr3.Runtime.BitSet) */, L_9, L_10);
		bool L_11 = ___exact0;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, L_12, 1);
		if (!L_13)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_15 = V_1;
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::Remove(System.Int32) */, L_15, 1);
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}

IL_004a:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_18 = V_1;
		return L_18;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetCurrentInputSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseRecognizer_GetCurrentInputSymbol_m61C267839FCD54429BBF0B45EC7278BEFAC2831D (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetMissingSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseRecognizer_GetMissingSymbol_mF9EE4297A834493A2DF00950A8F1E3C254F32FAC (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, RuntimeObject* ___input0, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e1, int32_t ___expectedTokenType2, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow3, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::PushFollow(Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_PushFollow_m11967F9822D4EE617516BE168C8312BF5FB543A9 (BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * __this, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___fset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = __this->get_state_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_followingStackPointer_1();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = __this->get_state_1();
		NullCheck(L_2);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_3 = L_2->get_following_0();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_005d;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_4 = __this->get_state_1();
		NullCheck(L_4);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_5 = L_4->get_following_0();
		NullCheck(L_5);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_6 = (BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D*)(BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D*)SZArrayNew(BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)2)));
		V_0 = L_6;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = __this->get_state_1();
		NullCheck(L_7);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_8 = L_7->get_following_0();
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_9 = V_0;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_10 = __this->get_state_1();
		NullCheck(L_10);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_11 = L_10->get_following_0();
		NullCheck(L_11);
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_12 = __this->get_state_1();
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_13 = V_0;
		NullCheck(L_12);
		L_12->set_following_0(L_13);
	}

IL_005d:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_14 = __this->get_state_1();
		NullCheck(L_14);
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_15 = L_14->get_following_0();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_16 = __this->get_state_1();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_followingStackPointer_1();
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		V_1 = L_19;
		NullCheck(L_17);
		L_17->set_followingStackPointer_1(L_19);
		int32_t L_20 = V_1;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_21 = ___fset0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_21);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)L_21);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__cctor_m4FBB988A2C50AE6D6CCD515C49AB8B7D5CC86D13 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC433421D84928768AA8C58FA51C38B423E100127);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_StaticFields*)il2cpp_codegen_static_fields_for(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var))->set_NEXT_TOKEN_RULE_NAME_0(_stringLiteralC433421D84928768AA8C58FA51C38B423E100127);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_mDBDF8DAB6B60CF03CA86824F3CBC7467E48E0D2A (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_ChildCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_ChildCount_m572487A978AB3DCBA37C634EB88346DAF58033A1 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_children_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->get_children_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseTree_get_IsNil_m751E9ECC7BD70BCB71763D168CA6576B2F941E22 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_Line_m6D6BBD12CEF392C3A891C791FDF73F0D8E7CD362 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTree_get_CharPositionInLine_m92F863A85D2AD056280813336AC33AC21881A9E3 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_GetChild_mFABC9A086D6B56B6B93D4B6287B2AD056ADDEB5F (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_children_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___i0;
		RuntimeObject* L_2 = __this->get_children_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (RuntimeObject*)NULL;
	}

IL_0018:
	{
		RuntimeObject* L_4 = __this->get_children_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_4, L_5);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_mCB71D5E4A5A353319D54F870C463E74FF179C1C8 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_children_0();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::AddChild(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_AddChild_m6D06EC9A37FA8B218CC7D71976F2EFFC7EF9D7F7 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___t0;
		V_0 = ((BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 *)CastclassClass((RuntimeObject*)L_1, BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1_il2cpp_TypeInfo_var));
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_IsNil() */, L_2);
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_children_0();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_children_0();
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_children_0();
		if ((!(((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)L_7))))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9CF256B478BDF53420854CC509AB9C76BD6842C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseTree_AddChild_m6D06EC9A37FA8B218CC7D71976F2EFFC7EF9D7F7_RuntimeMethod_var)));
	}

IL_0037:
	{
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->get_children_0();
		if (!L_10)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_11 = __this->get_children_0();
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->get_children_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
		V_2 = 0;
		goto IL_0097;
	}

IL_005a:
	{
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = BaseTree_get_Children_mCB71D5E4A5A353319D54F870C463E74FF179C1C8_inline(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		RuntimeObject * L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_16, L_17);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = __this->get_children_0();
		RuntimeObject* L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_19, L_20);
		RuntimeObject* L_22 = V_3;
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_22, __this);
		RuntimeObject* L_23 = V_3;
		RuntimeObject* L_24 = __this->get_children_0();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_ChildIndex(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_009c:
	{
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_29 = V_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->get_children_0();
		__this->set_children_0(L_30);
		VirtActionInvoker0::Invoke(23 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::FreshenParentAndChildIndexes() */, __this);
		return;
	}

IL_00af:
	{
		RuntimeObject* L_31 = __this->get_children_0();
		if (L_31)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::CreateChildrenList() */, __this);
		__this->set_children_0(L_32);
	}

IL_00c3:
	{
		RuntimeObject* L_33 = __this->get_children_0();
		RuntimeObject* L_34 = ___t0;
		NullCheck(L_33);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_33, L_34);
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_36 = V_0;
		NullCheck(L_36);
		VirtActionInvoker1< RuntimeObject* >::Invoke(26 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree) */, L_36, __this);
		BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * L_37 = V_0;
		RuntimeObject* L_38 = __this->get_children_0();
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_37);
		VirtActionInvoker1< int32_t >::Invoke(25 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::set_ChildIndex(System.Int32) */, L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)));
	}

IL_00ea:
	{
		return;
	}
}
// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::CreateChildrenList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_CreateChildrenList_m3B5B08F6A27170F37F2B815F3DA3268F984B61B4 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::FreshenParentAndChildIndexes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_FreshenParentAndChildIndexes_mAD3B26543EF8166D8760F9691E46569213E4FA89 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(24 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::FreshenParentAndChildIndexes(System.Int32) */, __this, 0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::FreshenParentAndChildIndexes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_FreshenParentAndChildIndexes_mE8E13489DF4177340C146ED4A860109A16284443 (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_ChildCount() */, __this);
		V_0 = L_0;
		int32_t L_1 = ___offset0;
		V_1 = L_1;
		goto IL_0025;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		RuntimeObject* L_3;
		L_3 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::GetChild(System.Int32) */, __this, L_2);
		V_2 = L_3;
		RuntimeObject* L_4 = V_2;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_ChildIndex(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_6, __this);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::set_ChildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_set_ChildIndex_m2DB7794E3F15A6610E60A448A4D1220C7611B84D (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree_set_Parent_mFD3DEE85A7B4CF633EDF33E7DB1825187647E73F (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
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
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::GetNilNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseTreeAdaptor_GetNilNode_m74198796BE4A118649A9C1BDB520612FAE8F3D5A (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject* >::Invoke(19 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, (RuntimeObject*)NULL);
		return L_0;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseTreeAdaptor_ErrorNode_m1B6608B9A57C66D4C97C5641B9346B6120D43C3D (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, RuntimeObject* ___input0, RuntimeObject* ___start1, RuntimeObject* ___stop2, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___input0;
		RuntimeObject* L_1 = ___start1;
		RuntimeObject* L_2 = ___stop2;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_3 = ___e3;
		CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * L_4 = (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 *)il2cpp_codegen_object_new(CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080_il2cpp_TypeInfo_var);
		CommonErrorNode__ctor_m54C179086CE57BD2F07CB4AC44E7E19425CB6679(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::AddChild(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor_AddChild_m4D763653A719FDF54C91A7F0CEFBC4F71E2ED69D (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, RuntimeObject * ___t0, RuntimeObject * ___child1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___child1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_2 = ___t0;
		RuntimeObject * L_3 = ___child1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::AddChild(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::RulePostProcessing(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BaseTreeAdaptor_RulePostProcessing_m88078E03E625EB13D945ADD8B6EAA922C4120672 (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, RuntimeObject * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___root0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_IsNil() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_ChildCount() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_003d;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_ChildCount() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(8 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::GetChild(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_8, 0);
		V_0 = L_9;
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)NULL);
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_ChildIndex(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_11, (-1));
	}

IL_003d:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::GetNodeType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseTreeAdaptor_GetNodeType_mDB5960464C9771E0FA165F0683AA615E5736EE88 (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, RuntimeObject * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___t0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Type() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::GetNodeText(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseTreeAdaptor_GetNodeText_m042EE36E7B1411078ED1AFDDD82B94B71F0C3436 (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, RuntimeObject * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___t0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Text() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor__ctor_mB859C26C74776E469037BAC4BF37A3CB667834EF (BaseTreeAdaptor_tE645813B5B3884A41AAF49C2E968435DE6BB9F94 * __this, const RuntimeMethod* method)
{
	{
		__this->set_uniqueNodeID_0(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mD63B97E65E84D79C2995DFC031DBECF46BE28F6B (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, const RuntimeMethod* method)
{
	{
		BitSet__ctor_mDD23A62D44C5D55B8FFFD1E95E4F72AF8FC4F5B8(__this, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_m64EDE019C88A8E14D8C65F388AA411AA346C69A4 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___bits_0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___bits_0;
		__this->set_bits_1(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mDD23A62D44C5D55B8FFFD1E95E4F72AF8FC4F5B8 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___nbits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___nbits0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))>>(int32_t)6)), (int32_t)1)));
		__this->set_bits_1(L_1);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.BitSet::Or(Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * BitSet_Or_m198DA8770125B546B8C97A93D01382E765EA01F4 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_0 = NULL;
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_0 = ___a0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return __this;
	}

IL_0005:
	{
		RuntimeObject * L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BitSet::Clone() */, __this);
		V_0 = ((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)CastclassClass((RuntimeObject*)L_1, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var));
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_2 = V_0;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_3 = ___a0;
		NullCheck(L_2);
		VirtActionInvoker1< BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::OrInPlace(Unity.VisualScripting.Antlr3.Runtime.BitSet) */, L_2, L_3);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::OrInPlace(Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_OrInPlace_mA3D06A514D996B33BAB02074A822A20ADAE92317 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_0 = ___a0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_1 = ___a0;
		NullCheck(L_1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = L_1->get_bits_1();
		NullCheck(L_2);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = __this->get_bits_1();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_4 = ___a0;
		NullCheck(L_4);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = L_4->get_bits_1();
		NullCheck(L_5);
		BitSet_SetSize_m0A1A318760DCB2D207CE9E5975729BD9075DC1BD(__this, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
	}

IL_0024:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = __this->get_bits_1();
		NullCheck(L_6);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_7 = ___a0;
		NullCheck(L_7);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = L_7->get_bits_1();
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		goto IL_0064;
	}

IL_0040:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_11 = __this->get_bits_1();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		uint64_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		uint64_t L_14 = (*(uint64_t*)L_13);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_15 = ___a0;
		NullCheck(L_15);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_16 = L_15->get_bits_1();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int64_t L_19 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		*(uint64_t*)L_13 = ((int64_t)((int64_t)L_14|(int64_t)L_19));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.BitSet::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BitSet_Clone_mA854A025A342F638134B6232AA4461A9B82F7DD1 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		V_0 = ((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)CastclassClass((RuntimeObject*)L_0, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var));
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_1 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = __this->get_bits_1();
		NullCheck(L_2);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		NullCheck(L_1);
		L_1->set_bits_1(L_3);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = __this->get_bits_1();
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_5 = V_0;
		NullCheck(L_5);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = L_5->get_bits_1();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_7 = __this->get_bits_1();
		NullCheck(L_7);
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_4, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		goto IL_0049;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_8 = V_1;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0DE550D00484E81C95E34B74340AAC5C93E738D6)), L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitSet_Clone_mA854A025A342F638134B6232AA4461A9B82F7DD1_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0049:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitSet_Member_m157B4DE1ADBB7E0863E6D4E0A5064767D521FCC0 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___el0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___el0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		int32_t L_1 = ___el0;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitSet_WordNumber_m149663BD52EE1788E06FE7AE0B7634C2DB6F9D2B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = __this->get_bits_1();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = __this->get_bits_1();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int64_t L_8 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___el0;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		uint64_t L_10;
		L_10 = BitSet_BitMask_m4A3CB90D700D7AE1854F9186AD63C30EA6856985(L_9, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_8&(int64_t)L_10))) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_Remove_m0568D89483D836D0E834E5468714E4346DB45D5A (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___el0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___el0;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitSet_WordNumber_m149663BD52EE1788E06FE7AE0B7634C2DB6F9D2B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = __this->get_bits_1();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = __this->get_bits_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint64_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		uint64_t L_7 = (*(uint64_t*)L_6);
		int32_t L_8 = ___el0;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		uint64_t L_9;
		L_9 = BitSet_BitMask_m4A3CB90D700D7AE1854F9186AD63C30EA6856985(L_8, /*hidden argument*/NULL);
		*(uint64_t*)L_6 = ((int64_t)((int64_t)L_7&(int64_t)((~L_9))));
	}

IL_0031:
	{
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::WordNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_WordNumber_m149663BD52EE1788E06FE7AE0B7634C2DB6F9D2B (int32_t ___bit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bit0;
		return ((int32_t)((int32_t)L_0>>(int32_t)6));
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BitSet::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitSet_ToString_mA7BB1122FE28B779A92B67F8794A01BA7A98A0BE (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker1< String_t*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.BitSet::ToString(System.String[]) */, __this, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		return L_0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.BitSet::ToString(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitSet_ToString_mFBFECBE87D76C824598FDA65168FDA7C400DA242 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenNames0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		V_2 = (bool)0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, ((int32_t)123), /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0050;
	}

IL_001b:
	{
		int32_t L_3 = V_3;
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, int32_t >::Invoke(7 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Member(System.Int32) */, __this, L_3);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0033:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___tokenNames0;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___tokenNames0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_15, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0042:
	{
		StringBuilder_t * L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_17, L_18, /*hidden argument*/NULL);
	}

IL_004a:
	{
		V_2 = (bool)1;
	}

IL_004c:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_21 = V_3;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_22 = __this->get_bits_1();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))<<(int32_t)6)))))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)125), /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		return L_26;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.BitSet::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitSet_Equals_m78F41A40D780FD229A4DC57071C7FD6226CC5BF1 (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)IsInstClass((RuntimeObject*)L_1, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = ((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 *)CastclassClass((RuntimeObject*)L_2, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = __this->get_bits_1();
		NullCheck(L_3);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_4 = V_0;
		NullCheck(L_4);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = L_4->get_bits_1();
		NullCheck(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_002e:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_7 = __this->get_bits_1();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int64_t L_10 = (int64_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_11 = V_0;
		NullCheck(L_11);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = L_11->get_bits_1();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int64_t L_15 = (int64_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int64_t)L_10) == ((int64_t)L_15)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002e;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_19 = __this->get_bits_1();
		NullCheck(L_19);
		int32_t L_20 = V_1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) <= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_21 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		goto IL_006d;
	}

IL_005b:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_22 = __this->get_bits_1();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int64_t L_25 = (int64_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int64_t)L_25) == ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0069:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_27 = V_3;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_28 = __this->get_bits_1();
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00ad;
	}

IL_007a:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_29 = V_0;
		NullCheck(L_29);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_30 = L_29->get_bits_1();
		NullCheck(L_30);
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))) <= ((int32_t)L_31)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_32 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		goto IL_00a1;
	}

IL_008c:
	{
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_33 = V_0;
		NullCheck(L_33);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_34 = L_33->get_bits_1();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int64_t L_37 = (int64_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int64_t)L_37) == ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00a1:
	{
		int32_t L_39 = V_4;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_40 = V_0;
		NullCheck(L_40);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_41 = L_40->get_bits_1();
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_008c;
		}
	}

IL_00ad:
	{
		return (bool)1;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitSet_GetHashCode_mC79F31BD6F1209AE9F2F050D28FD2C76CF7B9A5D (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m29972277898725CF5403FB9765F335F0FAEA8162(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Unity.VisualScripting.Antlr3.Runtime.BitSet::BitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitSet_BitMask_m4A3CB90D700D7AE1854F9186AD63C30EA6856985 (int32_t ___bitNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bitNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var))->get_MOD_MASK_0();
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)L_1));
		int32_t L_2 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)1))<<(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)63)))));
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::SetSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet_SetSize_m0A1A318760DCB2D207CE9E5975729BD9075DC1BD (BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * __this, int32_t ___nwords0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___nwords0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___nwords0;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = __this->get_bits_1();
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(L_2, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		V_1 = L_4;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = __this->get_bits_1();
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = V_0;
		int32_t L_7 = V_1;
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, L_7, /*hidden argument*/NULL);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = V_0;
		__this->set_bits_1(L_8);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__cctor_m5B6D5B6ABB3A9CC604BE419C924E8BA7F2362259 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t875E73133A3326A6AFB6643EE1FB522910166258_il2cpp_TypeInfo_var))->set_MOD_MASK_0(((int32_t)63));
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.CharStreamState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharStreamState__ctor_mC4F1BFD2E040E2944F6BB2484038211065DC4E8E (CharStreamState_t344C61404143A816F6A6017C34F7C895BBB82225 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode__ctor_m54C179086CE57BD2F07CB4AC44E7E19425CB6679 (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, RuntimeObject* ___input0, RuntimeObject* ___start1, RuntimeObject* ___stop2, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTree__ctor_m2167AEFE6A03B57C05D5A28E33463E79239CD1F6(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___stop2;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = ___stop2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___start1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = ___stop2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}

IL_0024:
	{
		RuntimeObject* L_8 = ___start1;
		___stop2 = L_8;
	}

IL_0027:
	{
		RuntimeObject* L_9 = ___input0;
		__this->set_input_6(L_9);
		RuntimeObject* L_10 = ___start1;
		__this->set_start_7(L_10);
		RuntimeObject* L_11 = ___stop2;
		__this->set_stop_8(L_11);
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_12 = ___e3;
		__this->set_trappedException_9(L_12);
		return;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonErrorNode_get_IsNil_mF95E315380C481B440302DCCAA557AA2DD5F79FE (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonErrorNode_get_Type_mB76FC9C26A348FE3D839D28EDC02C334FBE854B5 (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_get_Text_m1F22C5AFD28BBC61BAADBEB3E6F281ABD0064036 (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (String_t*)NULL;
		RuntimeObject* L_0 = __this->get_start_7();
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_start_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = __this->get_stop_8();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		RuntimeObject* L_5 = __this->get_stop_8();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_8 = __this->get_input_6();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::get_Count() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		V_2 = L_9;
	}

IL_0045:
	{
		RuntimeObject* L_10 = __this->get_input_6();
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = InterfaceFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(1 /* System.String Unity.VisualScripting.Antlr3.Runtime.ITokenStream::ToString(System.Int32,System.Int32) */, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)), L_11, L_12);
		V_0 = L_13;
		goto IL_008c;
	}

IL_005a:
	{
		RuntimeObject* L_14 = __this->get_start_7();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_14, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_15 = __this->get_input_6();
		RuntimeObject* L_16 = __this->get_start_7();
		RuntimeObject* L_17 = __this->get_stop_8();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = InterfaceFuncInvoker2< String_t*, RuntimeObject *, RuntimeObject * >::Invoke(2 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::ToString(System.Object,System.Object) */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var)), L_16, L_17);
		V_0 = L_18;
		goto IL_008c;
	}

IL_0086:
	{
		V_0 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
	}

IL_008c:
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonErrorNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_ToString_m9694249BB6389E3E22E08A8588AFAFCD39A55824 (CommonErrorNode_tF93C43A6FA2D342BE0F4AB7800853F5D27CBB080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_0 = __this->get_trappedException_9();
		if (!((MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)IsInstClass((RuntimeObject*)L_0, MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_1 = __this->get_trappedException_9();
		NullCheck(((MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)CastclassClass((RuntimeObject*)L_1, MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var)));
		int32_t L_2;
		L_2 = MissingTokenException_get_MissingType_mCEA3612C50CD092B0C05614FF7CECF9760947C00(((MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B *)CastclassClass((RuntimeObject*)L_1, MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Concat_mC8718EA35386A775C9A7983763DAA0A863623D73(_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58, L_4, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return L_5;
	}

IL_0032:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_6 = __this->get_trappedException_9();
		if (!((UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)IsInstClass((RuntimeObject*)L_6, UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_7;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_10 = __this->get_trappedException_9();
		NullCheck(((UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)CastclassClass((RuntimeObject*)L_10, UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var)));
		RuntimeObject* L_11;
		L_11 = UnwantedTokenException_get_UnexpectedToken_mE3313F9C502B2255273C3B5F84FD3638EB22455B_inline(((UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 *)CastclassClass((RuntimeObject*)L_10, UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_0;
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0081:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_18 = __this->get_trappedException_9();
		if (!((MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)IsInstClass((RuntimeObject*)L_18, MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)))
		{
			goto IL_00cb;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_19;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = V_1;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_22 = __this->get_trappedException_9();
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = V_1;
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00cb:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_30 = __this->get_trappedException_9();
		if (!((NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)IsInstClass((RuntimeObject*)L_30, NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var)))
		{
			goto IL_0115;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_2 = L_31;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = V_2;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = V_2;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_34 = __this->get_trappedException_9();
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_2;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = V_2;
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_38);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = V_2;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = V_2;
		String_t* L_41;
		L_41 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0115:
	{
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Text() */, __this);
		String_t* L_43;
		L_43 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F, L_42, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return L_43;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mA7F5B1D102FE2C99D1E690407D5047CF734B778B (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	{
		__this->set_charPositionInLine_2((-1));
		__this->set_index_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(Unity.VisualScripting.Antlr3.Runtime.ICharStream,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mE7CEC88A9F3804CA6355BE992BCB314B536631D9 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, RuntimeObject* ___input0, int32_t ___type1, int32_t ___channel2, int32_t ___start3, int32_t ___stop4, const RuntimeMethod* method)
{
	{
		__this->set_charPositionInLine_2((-1));
		__this->set_index_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___input0;
		__this->set_input_4(L_0);
		int32_t L_1 = ___type1;
		__this->set_type_0(L_1);
		int32_t L_2 = ___channel2;
		__this->set_channel_3(L_2);
		int32_t L_3 = ___start3;
		__this->set_start_7(L_3);
		int32_t L_4 = ___stop4;
		__this->set_stop_8(L_4);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mEBE281BD30ED96A4A7F6AA92A77532D60296F52B (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method)
{
	{
		__this->set_charPositionInLine_2((-1));
		__this->set_index_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		__this->set_channel_3(0);
		String_t* L_1 = ___text1;
		__this->set_text_5(L_1);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Type_m4C4C39AC18F60F6282938B5230BBFD5B542A009B (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_0();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Line_m3F5871DE69E1A196B1FEF93A4E0EAC2B7AD064C2 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_1();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_Line(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Line_mF8A49C0AC704648AF04952ABFDD57DE0B52F5CAF (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_line_1(L_0);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_CharPositionInLine_mB856DC8330D612BC3C0E37DF98BCF1344BBA88F7 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPositionInLine_2();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_CharPositionInLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_CharPositionInLine_mFE581C0EEA8713CA4E57DB081F999DBC9F9FAB05 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_charPositionInLine_2(L_0);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_Channel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_Channel_mF85D5DA19E8B7BD582367424F9261F12B4DBA327 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_channel_3();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_Channel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Channel_m6B32576BA98BEBB303256393EE8FE8EEE971B8C4 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_channel_3(L_0);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_TokenIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonToken_get_TokenIndex_mB1B7F16BC213D9F864FCEB0FFFCBC41E2ABBF170 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_index_6();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_TokenIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_TokenIndex_m3B7DAB71FC069A5E277EE3A926C47FD5DF887215 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_index_6(L_0);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonToken_get_Text_mF36B7BA6D8EF7C96FF7F017D94FE90DA4D7ED834 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_text_5();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_text_5();
		return L_1;
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->get_input_4();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->get_input_4();
		int32_t L_4 = __this->get_start_7();
		int32_t L_5 = __this->get_stop_8();
		NullCheck(L_3);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(2 /* System.String Unity.VisualScripting.Antlr3.Runtime.ICharStream::Substring(System.Int32,System.Int32) */, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		__this->set_text_5(L_6);
		String_t* L_7 = __this->get_text_5();
		return L_7;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken_set_Text_m8E3D118D4A412D4D6C17EF93C420DB7F7FBB1F02 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_text_5(L_0);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonToken::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonToken_ToString_m08B45D78DF96719B2562DB07AD0D50BCEBD49397 (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = __this->get_channel_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = __this->get_channel_3();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128(_stringLiteralC2EC8D8B53A3AA7BF79DEF31EB6943C932CE10DE, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0025:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_Text() */, __this);
		V_1 = L_5;
		String_t* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_9, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_11, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, _stringLiteral068F71F7A557397093A781E1521F2E89FC1A116E, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_006a;
	}

IL_0064:
	{
		V_1 = _stringLiteral1E47D32175F4D9BAB39319CCD9FE626B7445E745;
	}

IL_006a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_2 = L_13;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA037E63CFA2C247B31B0B97D99D6BAF5418D6796);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_TokenIndex() */, __this);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_2;
		int32_t L_21 = __this->get_start_7();
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_2;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = V_2;
		int32_t L_26 = __this->get_stop_8();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = V_2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_2;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = V_2;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteralB4C806C39305FD572A99C388DB132BCFFB866300);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = V_2;
		int32_t L_34 = __this->get_type_0();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_36);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = V_2;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = V_2;
		String_t* L_39 = V_0;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_39);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = V_2;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = V_2;
		int32_t L_42 = __this->get_line_1();
		int32_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_44);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = V_2;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = V_2;
		int32_t L_47;
		L_47 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::get_CharPositionInLine() */, __this);
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_49);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = V_2;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_51 = V_2;
		String_t* L_52;
		L_52 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_51, /*hidden argument*/NULL);
		return L_52;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_m7DFE44E7B3AE40CC35504A3B09293B60CE5CEE66 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_p_7((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_channel_4(0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538(L_0, ((int32_t)500), /*hidden argument*/List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var);
		__this->set_tokens_1(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_mB14A411CC5E3ECD181BBE2602C6AABB50E547C54 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, RuntimeObject* ___tokenSource0, const RuntimeMethod* method)
{
	{
		CommonTokenStream__ctor_m7DFE44E7B3AE40CC35504A3B09293B60CE5CEE66(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___tokenSource0;
		__this->set_tokenSource_0(L_0);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::LT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTokenStream_LT_mC0689D6725922CAC0DDB6E52130DEF759C8E3FBD (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_p_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer() */, __this);
	}

IL_000f:
	{
		int32_t L_1 = ___k0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0014:
	{
		int32_t L_2 = ___k0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___k0;
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::LB(System.Int32) */, __this, ((-L_3)));
		return L_4;
	}

IL_0021:
	{
		int32_t L_5 = __this->get_p_7();
		int32_t L_6 = ___k0;
		RuntimeObject* L_7 = __this->get_tokens_1();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_7);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), (int32_t)1))) < ((int32_t)L_8)))
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_TOKEN_2();
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = __this->get_p_7();
		V_0 = L_10;
		V_1 = 1;
		goto IL_0057;
	}

IL_0049:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(23 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannels(System.Int32) */, __this, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		V_0 = L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___k0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		RuntimeObject* L_17 = __this->get_tokens_1();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_TOKEN_2();
		return L_19;
	}

IL_006f:
	{
		RuntimeObject* L_20 = __this->get_tokens_1();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject * L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_20, L_21);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_22, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var));
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTokenStream_ToString_m5961B92DEFBDB20F3C7BF69B0A1B76C5F1ACD1C1 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___start0, int32_t ___stop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___start0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___stop1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		int32_t L_2 = __this->get_p_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer() */, __this);
	}

IL_0019:
	{
		int32_t L_3 = ___stop1;
		RuntimeObject* L_4 = __this->get_tokens_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_4);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_tokens_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_6);
		___stop1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
	}

IL_0036:
	{
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = ___start0;
		V_1 = L_9;
		goto IL_0063;
	}

IL_0040:
	{
		RuntimeObject* L_10 = __this->get_tokens_1();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_10, L_11);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var));
		StringBuilder_t * L_13 = V_0;
		RuntimeObject* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_13);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___stop1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0040;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Consume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Consume_mAACF31CBBC4FAFAE204CDFC0CBBC1F83787C86DC (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_p_7();
		RuntimeObject* L_1 = __this->get_tokens_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_p_7();
		__this->set_p_7(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_p_7();
		int32_t L_5;
		L_5 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(23 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannels(System.Int32) */, __this, L_4);
		__this->set_p_7(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::LA(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_LA_mBCEBB34198E6E3844F10BAAF3A63B44395B64A36 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(13 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::LT(System.Int32) */, __this, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Mark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_Mark_m231ACDB3A191CC2E957BF2791042F8E38087ADA7 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_p_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer() */, __this);
	}

IL_000f:
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Index() */, __this);
		__this->set_lastMarker_6(L_1);
		int32_t L_2 = __this->get_lastMarker_6();
		return L_2;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_Index_m158A19E8C993BB1EC7BC57E0A9018A4E77B692E5 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_p_7();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Rewind(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Rewind_m1654594DFC029A80A97073E2C6F99F2C90CC9479 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___marker0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___marker0;
		VirtActionInvoker1< int32_t >::Invoke(20 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Seek(System.Int32) */, __this, L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Seek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_Seek_mD562CEBCD308B81E7392D0D08AE3678AB839D165 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		__this->set_p_7(L_0);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_get_Count_m0CE2C40E8603DDD22BCEB8810CAA9CE6BE7C5AB7 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_tokens_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream_FillBuffer_m324AA0801EB37E1648190616FBF97F227FFDFA22 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenSource_t49233EB70C09B3C01A387894CF4290BFBD40F284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->get_tokenSource_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenSource::NextToken() */, ITokenSource_t49233EB70C09B3C01A387894CF4290BFBD40F284_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		goto IL_00aa;
	}

IL_0013:
	{
		V_2 = (bool)0;
		RuntimeObject* L_2 = __this->get_channelOverrideMap_2();
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_channelOverrideMap_2();
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		RuntimeObject * L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_3, L_7);
		V_3 = L_8;
		RuntimeObject * L_9 = V_3;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject * L_11 = V_3;
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IToken::set_Channel(System.Int32) */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_10, ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0043:
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_12 = __this->get_discardSet_3();
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_13 = __this->get_discardSet_3();
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_14);
		V_4 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_17;
		L_17 = HashList_Contains_m80CFC38635CA372583986615444A9AB74E3D4591(L_13, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0083;
	}

IL_006b:
	{
		bool L_18 = __this->get_discardOffChannelTokens_5();
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Channel() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_19);
		int32_t L_21 = __this->get_channel_4();
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_0083:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IToken::set_TokenIndex(System.Int32) */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_23, L_24);
		RuntimeObject* L_25 = __this->get_tokens_1();
		RuntimeObject* L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_25, L_26);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_009e:
	{
		RuntimeObject* L_29 = __this->get_tokenSource_0();
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenSource::NextToken() */, ITokenSource_t49233EB70C09B3C01A387894CF4290BFBD40F284_il2cpp_TypeInfo_var, L_29);
		V_1 = L_30;
	}

IL_00aa:
	{
		RuntimeObject* L_31 = V_1;
		if (!L_31)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_32);
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}

IL_00b9:
	{
		__this->set_p_7(0);
		int32_t L_34 = __this->get_p_7();
		int32_t L_35;
		L_35 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(23 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannels(System.Int32) */, __this, L_34);
		__this->set_p_7(L_35);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_SkipOffTokenChannels_m29B27D7833195136A159FD9B383A9E3328093D79 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->get_tokens_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_0013;
	}

IL_000e:
	{
		int32_t L_2 = ___i0;
		___i0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = ___i0;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_tokens_1();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		RuntimeObject * L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Channel() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		int32_t L_9 = __this->get_channel_4();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_000e;
		}
	}

IL_0035:
	{
		int32_t L_10 = ___i0;
		return L_10;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannelsReverse(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTokenStream_SkipOffTokenChannelsReverse_mDF638CC035633BD479A060CA9D43B78F6F7C3A6A (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0007;
	}

IL_0002:
	{
		int32_t L_0 = ___i0;
		___i0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
	}

IL_0007:
	{
		int32_t L_1 = ___i0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_tokens_1();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		RuntimeObject * L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_4, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Channel() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		int32_t L_6 = __this->get_channel_4();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		int32_t L_7 = ___i0;
		return L_7;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::LB(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTokenStream_LB_m9A4C10D0C23F7E423A5C60AC5D9406627D1C4A0C (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_p_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer() */, __this);
	}

IL_000f:
	{
		int32_t L_1 = ___k0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0014:
	{
		int32_t L_2 = __this->get_p_7();
		int32_t L_3 = ___k0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0021:
	{
		int32_t L_4 = __this->get_p_7();
		V_0 = L_4;
		V_1 = 1;
		goto IL_003a;
	}

IL_002c:
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(24 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::SkipOffTokenChannelsReverse(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___k0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0044:
	{
		RuntimeObject* L_11 = __this->get_tokens_1();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_11, L_12);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_13, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var));
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTokenStream_ToString_m3B69232CE34338F7CFDE2C06758D02F1C4C70334 (CommonTokenStream_t58EAA767E21C867E9A8318B999FDDFC713934711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_p_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::FillBuffer() */, __this);
	}

IL_000f:
	{
		RuntimeObject* L_1 = __this->get_tokens_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(14 /* System.String Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::ToString(System.Int32,System.Int32) */, __this, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		return L_3;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m2167AEFE6A03B57C05D5A28E33463E79239CD1F6 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	{
		__this->set_startIndex_1((-1));
		__this->set_stopIndex_2((-1));
		__this->set_childIndex_5((-1));
		BaseTree__ctor_mDBDF8DAB6B60CF03CA86824F3CBC7467E48E0D2A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::.ctor(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m2CC1DD83452FF82DB156C3A8BE70A8CBB2D2F970 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	{
		__this->set_startIndex_1((-1));
		__this->set_stopIndex_2((-1));
		__this->set_childIndex_5((-1));
		BaseTree__ctor_mDBDF8DAB6B60CF03CA86824F3CBC7467E48E0D2A(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___t0;
		__this->set_token_3(L_0);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_mAC8C4B8B89C0AAE25D86ABCF7991BD9D3EFD7812 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_token_3();
		return L_0;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTree_get_IsNil_m0B9B292962D15ABB62E5DF4175F8071C2F683B85 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_token_3();
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Type_mF2678BF825AFB467EDE91DE07B410D8C695D2FDF (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_token_3();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->get_token_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_get_Text_mD72CE8984E83B13B9D161EFDB71874FA57317643 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_token_3();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->get_token_3();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Line_m02F2D66DEEAD5A0F82A83AB0B332376A8460B934 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_token_3();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_token_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_002d;
		}
	}

IL_0015:
	{
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_ChildCount() */, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::GetChild(System.Int32) */, __this, 0);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Line() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002b:
	{
		return 0;
	}

IL_002d:
	{
		RuntimeObject* L_6 = __this->get_token_3();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_CharPositionInLine_m524162B3D3A1D22FCBBA741D16EC8E955A1A3CEA (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_token_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_token_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_ChildCount() */, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::GetChild(System.Int32) */, __this, 0);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_CharPositionInLine() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002c:
	{
		return 0;
	}

IL_002e:
	{
		RuntimeObject* L_6 = __this->get_token_3();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::set_TokenStartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStartIndex_m679222758B8D91E57031E3A27BE7FFBC87100172 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_startIndex_1(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::set_TokenStopIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStopIndex_mED86215CEE1CA5AE0DA04B0C38705E1F4C785A3A (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_stopIndex_2(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::set_ChildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_ChildIndex_m8C818115169E9D594650DAC9638650F215063311 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_childIndex_5(L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::set_Parent(Unity.VisualScripting.Antlr3.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Parent_m0B9AA03A70A1A86210EDABE7CB8B8E2DFAC81F37 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_parent_4(((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)CastclassClass((RuntimeObject*)L_0, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_ToString_m044DAB48EC6E742BA3BB6D6975EE9768E1611928 (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_IsNil() */, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
	}

IL_000e:
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::get_Type() */, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		return _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
	}

IL_001c:
	{
		RuntimeObject* L_2 = __this->get_token_3();
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0026:
	{
		RuntimeObject* L_3 = __this->get_token_3();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_3);
		return L_4;
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
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CommonTreeAdaptor_Create_mF868C1B2EA6B8423FFEF896485B21BB7C1FDDC2E (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, RuntimeObject* ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___payload0;
		CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 * L_1 = (CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)il2cpp_codegen_object_new(CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var);
		CommonTree__ctor_m2CC1DD83452FF82DB156C3A8BE70A8CBB2D2F970(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor_SetTokenBoundaries_mF1C41637145FF95DB8CBD8E9343A62F59BD27C61 (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, RuntimeObject * ___t0, RuntimeObject* ___startToken1, RuntimeObject* ___stopToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = 0;
		V_1 = 0;
		RuntimeObject* L_1 = ___startToken1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___startToken1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___stopToken2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_5 = ___stopToken2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_TokenIndex() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_001c:
	{
		RuntimeObject * L_7 = ___t0;
		int32_t L_8 = V_0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_TokenStartIndex(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)), L_8);
		RuntimeObject * L_9 = ___t0;
		int32_t L_10 = V_1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::set_TokenStopIndex(System.Int32) */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)), L_10);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::GetNodeText(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTreeAdaptor_GetNodeText_m01D1D0F61BD10686E3BA7790409302079043507C (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, RuntimeObject * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___t0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Text() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::GetNodeType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTreeAdaptor_GetNodeType_m0B0FA64B4825CD82ABE984D2E2525124570A892C (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, RuntimeObject * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___t0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Type() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::GetToken(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_GetToken_m205A5FACCB6A1C14C8AFA6A66EB84C4F34FE7F92 (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, RuntimeObject * ___treeNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___treeNode0;
		if (!((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)IsInstClass((RuntimeObject*)L_0, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_1 = ___treeNode0;
		NullCheck(((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)CastclassClass((RuntimeObject*)L_1, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(31 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Token() */, ((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)CastclassClass((RuntimeObject*)L_1, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0014:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_mA2DE363777E197932BE062C73A81BFAE03074C43 (CommonTreeAdaptor_tBB37E8C698201381AD9BF571C92B2ED2BBF6C0FD * __this, const RuntimeMethod* method)
{
	{
		BaseTreeAdaptor__ctor_mB859C26C74776E469037BAC4BF37A3CB667834EF(__this, /*hidden argument*/NULL);
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
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA::Predict(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DFA_Predict_m338D1E5796886EF6A88AE7CDED0F563932D0077C (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Mark() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = 0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = __this->get_special_5();
			int32_t L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_2 = L_5;
			int32_t L_6 = V_2;
			if ((((int32_t)L_6) < ((int32_t)0)))
			{
				goto IL_0041;
			}
		}

IL_0016:
		{
			SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * L_7 = __this->get_specialStateTransitionHandler_8();
			int32_t L_8 = V_2;
			RuntimeObject* L_9 = ___input0;
			NullCheck(L_7);
			int32_t L_10;
			L_10 = SpecialStateTransitionHandler_Invoke_m55ECD3D9416B7BB43171FC8B0C5ADE2FB6F0318B(L_7, __this, L_8, L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			int32_t L_11 = V_1;
			if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
			{
				goto IL_0039;
			}
		}

IL_0029:
		{
			int32_t L_12 = V_1;
			RuntimeObject* L_13 = ___input0;
			DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41(__this, L_12, L_13, /*hidden argument*/NULL);
			V_5 = 0;
			IL2CPP_LEAVE(0x129, FINALLY_0121);
		}

IL_0039:
		{
			RuntimeObject* L_14 = ___input0;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_14);
			goto IL_0009;
		}

IL_0041:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_accept_4();
			int32_t L_16 = V_1;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			if ((((int32_t)L_18) < ((int32_t)1)))
			{
				goto IL_005b;
			}
		}

IL_004c:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = __this->get_accept_4();
			int32_t L_20 = V_1;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			V_5 = L_22;
			IL2CPP_LEAVE(0x129, FINALLY_0121);
		}

IL_005b:
		{
			RuntimeObject* L_23 = ___input0;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_23, 1);
			V_3 = ((int32_t)((uint16_t)L_24));
			Il2CppChar L_25 = V_3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = __this->get_min_2();
			int32_t L_27 = V_1;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			if ((((int32_t)L_25) < ((int32_t)L_29)))
			{
				goto IL_00ce;
			}
		}

IL_006f:
		{
			Il2CppChar L_30 = V_3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = __this->get_max_3();
			int32_t L_32 = V_1;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			uint16_t L_34 = (uint16_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			if ((((int32_t)L_30) > ((int32_t)L_34)))
			{
				goto IL_00ce;
			}
		}

IL_007a:
		{
			Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_35 = __this->get_transition_6();
			int32_t L_36 = V_1;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_38 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			Il2CppChar L_39 = V_3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = __this->get_min_2();
			int32_t L_41 = V_1;
			NullCheck(L_40);
			int32_t L_42 = L_41;
			uint16_t L_43 = (uint16_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			NullCheck(L_38);
			int32_t L_44 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_43));
			int16_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
			V_4 = L_45;
			int32_t L_46 = V_4;
			if ((((int32_t)L_46) >= ((int32_t)0)))
			{
				goto IL_00c0;
			}
		}

IL_0094:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_47 = __this->get_eot_0();
			int32_t L_48 = V_1;
			NullCheck(L_47);
			int32_t L_49 = L_48;
			int16_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
			if ((((int32_t)L_50) < ((int32_t)0)))
			{
				goto IL_00b3;
			}
		}

IL_009f:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_51 = __this->get_eot_0();
			int32_t L_52 = V_1;
			NullCheck(L_51);
			int32_t L_53 = L_52;
			int16_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			V_1 = L_54;
			RuntimeObject* L_55 = ___input0;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_55);
			goto IL_0009;
		}

IL_00b3:
		{
			int32_t L_56 = V_1;
			RuntimeObject* L_57 = ___input0;
			DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41(__this, L_56, L_57, /*hidden argument*/NULL);
			V_5 = 0;
			IL2CPP_LEAVE(0x129, FINALLY_0121);
		}

IL_00c0:
		{
			int32_t L_58 = V_4;
			V_1 = L_58;
			RuntimeObject* L_59 = ___input0;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_59);
			goto IL_0009;
		}

IL_00ce:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_60 = __this->get_eot_0();
			int32_t L_61 = V_1;
			NullCheck(L_60);
			int32_t L_62 = L_61;
			int16_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
			if ((((int32_t)L_63) < ((int32_t)0)))
			{
				goto IL_00ed;
			}
		}

IL_00d9:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_64 = __this->get_eot_0();
			int32_t L_65 = V_1;
			NullCheck(L_64);
			int32_t L_66 = L_65;
			int16_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
			V_1 = L_67;
			RuntimeObject* L_68 = ___input0;
			NullCheck(L_68);
			InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_68);
			goto IL_0009;
		}

IL_00ed:
		{
			Il2CppChar L_69 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
			int32_t L_70 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
			if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)((uint16_t)L_70))))))
			{
				goto IL_0114;
			}
		}

IL_00f6:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_71 = __this->get_eof_1();
			int32_t L_72 = V_1;
			NullCheck(L_71);
			int32_t L_73 = L_72;
			int16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			if ((((int32_t)L_74) < ((int32_t)0)))
			{
				goto IL_0114;
			}
		}

IL_0101:
		{
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_75 = __this->get_accept_4();
			Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_76 = __this->get_eof_1();
			int32_t L_77 = V_1;
			NullCheck(L_76);
			int32_t L_78 = L_77;
			int16_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
			NullCheck(L_75);
			int16_t L_80 = L_79;
			int16_t L_81 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
			V_5 = L_81;
			IL2CPP_LEAVE(0x129, FINALLY_0121);
		}

IL_0114:
		{
			int32_t L_82 = V_1;
			RuntimeObject* L_83 = ___input0;
			DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41(__this, L_82, L_83, /*hidden argument*/NULL);
			V_5 = 0;
			IL2CPP_LEAVE(0x129, FINALLY_0121);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0121;
	}

FINALLY_0121:
	{ // begin finally (depth: 1)
		RuntimeObject* L_84 = ___input0;
		int32_t L_85 = V_0;
		NullCheck(L_84);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Rewind(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_84, L_85);
		IL2CPP_END_FINALLY(289)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(289)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x129, IL_0129)
	}

IL_0129:
	{
		int32_t L_86 = V_5;
		return L_86;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::NoViableAlt(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41 (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, int32_t ___s0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * V_0 = NULL;
	{
		BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * L_0 = __this->get_recognizer_9();
		NullCheck(L_0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_1 = L_0->get_state_1();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_backtracking_6();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 * L_3 = __this->get_recognizer_9();
		NullCheck(L_3);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_4 = L_3->get_state_1();
		NullCheck(L_4);
		L_4->set_failed_4((bool)1);
		return;
	}

IL_0025:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Unity.VisualScripting.Antlr3.Runtime.DFA::get_Description() */, __this);
		int32_t L_6 = __this->get_decisionNumber_7();
		int32_t L_7 = ___s0;
		RuntimeObject* L_8 = ___input1;
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_9 = (NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var)));
		NoViableAltException__ctor_m5610F35092AFA4EBEDB3669428A6C3218C86AC9B(L_9, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_10 = V_0;
		VirtActionInvoker1< NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * >::Invoke(4 /* System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::Error(Unity.VisualScripting.Antlr3.Runtime.NoViableAltException) */, __this, L_10);
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_11 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DFA_NoViableAlt_m41C0CED8B4EBDA5D5EFBECF49C2ADE22FE7FAA41_RuntimeMethod_var)));
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::Error(Unity.VisualScripting.Antlr3.Runtime.NoViableAltException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA_Error_m22978C4F9F61B54B3994C6DAA5CBAECBC566A112 (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * ___nvae0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.DFA::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA_get_Description_mD2CADAE671E85F258BD429FC9826B26AC7B52647 (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
	}
}
// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::UnpackEncodedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* DFA_UnpackEncodedString_m5D4FB90E2C1F7122A57D9E993BE91561B610D206 (String_t* ___encodedString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		String_t* L_1 = ___encodedString0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2));
	}

IL_0014:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = ___encodedString0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_8 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_002b:
	{
		String_t* L_10 = ___encodedString0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		String_t* L_13 = ___encodedString0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_15;
		V_7 = 1;
		goto IL_0056;
	}

IL_0046:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		Il2CppChar L_19 = V_6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int16_t)((int16_t)((int16_t)L_19)));
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_21 = V_7;
		Il2CppChar L_22 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2));
	}

IL_0062:
	{
		int32_t L_24 = V_4;
		String_t* L_25 = ___encodedString0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_002b;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = V_2;
		return L_27;
	}
}
// System.Int16[][] Unity.VisualScripting.Antlr3.Runtime.DFA::UnpackEncodedStringArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* DFA_UnpackEncodedStringArray_m1603A0D95AAE96A795DBEFC48C7DBB98F21C7A3A (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___encodedStrings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___encodedStrings0;
		NullCheck(L_0);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_1 = (Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)SZArrayNew(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_2 = V_0;
		int32_t L_3 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___encodedStrings0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8;
		L_8 = DFA_UnpackEncodedString_m5D4FB90E2C1F7122A57D9E993BE91561B610D206(L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___encodedStrings0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_12 = V_0;
		return L_12;
	}
}
// System.Char[] Unity.VisualScripting.Antlr3.Runtime.DFA::UnpackEncodedStringToUnsignedChars(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* DFA_UnpackEncodedStringToUnsignedChars_m9816C68CF454C508C60D15AE65119F1D5ACDD0B6 (String_t* ___encodedString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		String_t* L_1 = ___encodedString0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2));
	}

IL_0014:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = ___encodedString0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_8 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		V_3 = 0;
		V_4 = 0;
		goto IL_0061;
	}

IL_002b:
	{
		String_t* L_10 = ___encodedString0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		String_t* L_13 = ___encodedString0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_15;
		V_7 = 1;
		goto IL_0055;
	}

IL_0046:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		Il2CppChar L_19 = V_6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)L_19);
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_21 = V_7;
		Il2CppChar L_22 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2));
	}

IL_0061:
	{
		int32_t L_24 = V_4;
		String_t* L_25 = ___encodedString0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_002b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = V_2;
		return L_27;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_m47264516B13D480C4C62FCE50DB6D0442B3F3A70 (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.EarlyExitException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarlyExitException__ctor_m6C000EEBABF81923F39F5C525E33167138A911B2 (EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.EarlyExitException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarlyExitException__ctor_m396FFC464C5F635CD95DA63D26C139959959B748 (EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC * __this, int32_t ___decisionNumber0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input1;
		RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___decisionNumber0;
		__this->set_decisionNumber_25(L_1);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedPredicateException__ctor_m4AFA2B3F5D3BE9ED2A335D92923E9BE103EB90C6 (FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.FailedPredicateException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FailedPredicateException_ToString_mA1E84AF9A11A4E1F1A048044EA47B2AF232C5F93 (FailedPredicateException_t3EE7532C8D6CCF19FE1CE544F8E1116B9F037565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE57A52EEA6A5FF8543FFE4D8ACA937ACCD7C5458);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		String_t* L_3 = __this->get_ruleName_25();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56626DE0EFD91D9DFE7EAC03BEA17A2B3DDA87DA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		String_t* L_6 = __this->get_predicateText_26();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFE6D7C0828400A663B0542D323AD5ADC39004047);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsReadOnly_m162FDA6E7CBF1CA6ABFB58A692AF60BB93FE8575 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Collections.Hashtable::get_IsReadOnly() */, L_0);
		return L_1;
	}
}
// System.Collections.IDictionaryEnumerator Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_GetEnumerator_mC3291BEEB69C915EA1A8EA1092A2B3B53BEDB574 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * L_0 = (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD *)il2cpp_codegen_object_new(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB(L_0, __this, 2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashList_get_Item_m2C25A555AC0DBA9410F9CCBE2CA9135C82F4F4B9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_set_Item_mF2CCE45BD5C5F489FA13071F1D95AF518B0F2D5A (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_3 = __this->get__dictionary_0();
		RuntimeObject * L_4 = ___key0;
		RuntimeObject * L_5 = ___value1;
		NullCheck(L_3);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_4, L_5);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = __this->get__insertionOrderList_1();
		RuntimeObject * L_8 = ___key0;
		NullCheck(L_7);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_7, L_8, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_9 = __this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Remove_mC6BECCD39AD779C28E1F82A6B05CE8FD1CD377E8 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(39 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_0, L_1);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get__insertionOrderList_1();
		RuntimeObject * L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7(L_2, L_3, /*hidden argument*/List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_RuntimeMethod_var);
		int32_t L_5 = __this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		return;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_Contains_m80CFC38635CA372583986615444A9AB74E3D4591 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Clear_m2668E5E9705EE41030D3A8EE7CE9131260929AFC (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get__insertionOrderList_1();
		NullCheck(L_1);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_1, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		int32_t L_2 = __this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		return;
	}
}
// System.Collections.ICollection Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Values_mCB1E6EDDD72350661B34CC01C73F5BDB1C0404E4 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * L_0 = (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B *)il2cpp_codegen_object_new(ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B_il2cpp_TypeInfo_var);
		ValueCollection__ctor_mD8A91DB91D08C3AD52A19FEE71C7199458CF3EEF(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_Add_m8B4373678645A8D34F5D3BADF68FE4D5AD0ED8B6 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		RuntimeObject * L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_0, L_1, L_2);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = __this->get__insertionOrderList_1();
		RuntimeObject * L_4 = ___key0;
		NullCheck(L_3);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_3, L_4, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		int32_t L_5 = __this->get__version_2();
		__this->set__version_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		return;
	}
}
// System.Collections.ICollection Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_get_Keys_mC32C7F78D4F846317508A06B1E62257005C7F361 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * L_0 = (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 *)il2cpp_codegen_object_new(KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var);
		KeyCollection__ctor_m02B73DC41FF35156299B74B1681AFEF2698D4415(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsFixedSize_mD3F3065BBBDAEBF08678ADE937836DBB1FAB949E (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Collections.Hashtable::get_IsFixedSize() */, L_0);
		return L_1;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashList_get_IsSynchronized_mF776737957D087761FB0A87F0CB4E90482539364 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Collections.Hashtable::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashList_get_Count_mB27178928462775B09F8270ED58E1094985C1BB9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyTo_m18E74CF22DB61E9E1262D99C59156B09A856D7AC (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get__insertionOrderList_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0050;
	}

IL_0010:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get__insertionOrderList_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject * L_4;
		L_4 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_5 = __this->get__dictionary_0();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = __this->get__insertionOrderList_1();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject * L_8;
		L_8 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject * L_9;
		L_9 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, L_8);
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_2), L_4, L_9, /*hidden argument*/NULL);
		RuntimeArray * L_10 = ___array0;
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_11 = V_2;
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12 = L_11;
		RuntimeObject * L_13 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14 = ___index1;
		int32_t L_15 = L_14;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_10);
		Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455(L_10, L_13, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashList_get_SyncRoot_mD396ECD5D5D583D766A2B8D36D5A28E54342C7C9 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get__dictionary_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashList_System_Collections_IEnumerable_GetEnumerator_mDE6DDDC741C0B4E4D09642095EDE697B7802B642 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * L_0 = (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD *)il2cpp_codegen_object_new(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB(L_0, __this, 2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::CopyKeysTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyKeysTo_mC876AE53080E4D41C5663D3A86920BC736091955 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get__insertionOrderList_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_002c;
	}

IL_0010:
	{
		RuntimeArray * L_2 = ___array0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = __this->get__insertionOrderList_1();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		int32_t L_6 = ___index1;
		int32_t L_7 = L_6;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_2);
		Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455(L_2, L_5, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList::CopyValuesTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashList_CopyValuesTo_mFAF11369490C801772DBD0DB8CCC2F15009F9B52 (HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get__insertionOrderList_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0037;
	}

IL_0010:
	{
		RuntimeArray * L_2 = ___array0;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_3 = __this->get__dictionary_0();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = __this->get__insertionOrderList_1();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_6);
		int32_t L_8 = ___index1;
		int32_t L_9 = L_8;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_2);
		Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455(L_2, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0010;
		}
	}
	{
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m15D0C7C0C3B50D73C347AFA5AEFF484B452C6C70 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_mE29DEF90AEC335861E05129B2BE03904BF788C5C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::.ctor(Unity.VisualScripting.Antlr3.Runtime.ICharStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mA49D32202396A531AA26EB731B069F32C4D25690 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, RuntimeObject* ___input0, RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = ___state1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m3CB6CC87074045CDB011422E4E2B4E4E45CF894B(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		__this->set_input_2(L_1);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Lexer::get_CharIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_CharIndex_m223185A05A47372821CD1BA2193F7BF6CEA27106 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Index() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Reset_mE67145D20C274E7EDC2A284441A92DD3D76B98CA (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_mEC04743808D106E034BC2E5BF098245E564ADAF2(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_input_2();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_input_2();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_3 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_3);
		L_3->set_token_8((RuntimeObject*)NULL);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_4 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_4);
		L_4->set_type_13(0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_5);
		L_5->set_channel_12(0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_6 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_6);
		L_6->set_tokenStartCharIndex_9((-1));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_7);
		L_7->set_tokenStartCharPositionInLine_11((-1));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_8 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_8);
		L_8->set_tokenStartLine_10((-1));
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_9 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_9);
		L_9->set_text_14((String_t*)NULL);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lexer_NextToken_m21D5A221865A25A6FFA8410848204A87E82F903D (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * V_0 = NULL;
	RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_0);
		L_0->set_token_8((RuntimeObject*)NULL);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_1 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_1);
		L_1->set_channel_12(0);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_2 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		RuntimeObject* L_3 = __this->get_input_2();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Index() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		L_2->set_tokenStartCharIndex_9(L_4);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		RuntimeObject* L_6 = __this->get_input_2();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.ICharStream::get_CharPositionInLine() */, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->set_tokenStartCharPositionInLine_11(L_7);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_8 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		RuntimeObject* L_9 = __this->get_input_2();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.ICharStream::get_Line() */, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		L_8->set_tokenStartLine_10(L_10);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_11 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_11);
		L_11->set_text_14((String_t*)NULL);
		RuntimeObject* L_12 = __this->get_input_2();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_12, 1);
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_007b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_TOKEN_2();
		return L_14;
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker0::Invoke(27 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::mTokens() */, __this);
			RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_15 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->get_token_8();
			if (L_16)
			{
				goto IL_0097;
			}
		}

IL_008e:
		{
			RuntimeObject* L_17;
			L_17 = VirtFuncInvoker0< RuntimeObject* >::Invoke(29 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Lexer::Emit() */, __this);
			goto IL_00ae;
		}

IL_0097:
		{
			RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_18 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
			NullCheck(L_18);
			RuntimeObject* L_19 = L_18->get_token_8();
			IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_SKIP_TOKEN_4();
			if ((!(((RuntimeObject*)(RuntimeObject*)L_19) == ((RuntimeObject*)(RuntimeObject*)L_20))))
			{
				goto IL_00ae;
			}
		}

IL_00a9:
		{
			goto IL_0000;
		}

IL_00ae:
		{
			RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_21 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
			NullCheck(L_21);
			RuntimeObject* L_22 = L_21->get_token_8();
			V_2 = L_22;
			goto IL_00dd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d0;
		}
		throw e;
	}

CATCH_00bc:
	{ // begin catch(Unity.VisualScripting.Antlr3.Runtime.NoViableAltException)
		V_0 = ((NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)IL2CPP_GET_ACTIVE_EXCEPTION(NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *));
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_23 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_23);
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_24 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(33 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Recover(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_24);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0000;
	} // end catch (depth: 1)

CATCH_00d0:
	{ // begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
		V_1 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *));
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_25 = V_1;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_25);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0000;
	} // end catch (depth: 1)

IL_00dd:
	{
		RuntimeObject* L_26 = V_2;
		return L_26;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Emit(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Emit_mD67EAB6BB73AD21D64E8BF0C275A94C3D3A751BB (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, RuntimeObject* ___token0, const RuntimeMethod* method)
{
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		RuntimeObject* L_1 = ___token0;
		NullCheck(L_0);
		L_0->set_token_8(L_1);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Lexer::Emit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lexer_Emit_m4FCBEC246B0C0C7A1F163066B8F4AE4C031DBBE1 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_input_2();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_1 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_13();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_3 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_channel_12();
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_tokenStartCharIndex_9();
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Lexer::get_CharIndex() */, __this);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_8 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mE7CEC88A9F3804CA6355BE992BCB314B536631D9(L_8, L_0, L_2, L_4, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_10 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_tokenStartLine_10();
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IToken::set_Line(System.Int32) */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_9, L_11);
		RuntimeObject* L_12 = V_0;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_13 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_text_14();
		NullCheck(L_12);
		InterfaceActionInvoker1< String_t* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IToken::set_Text(System.String) */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_15 = V_0;
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_16 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_tokenStartCharPositionInLine_11();
		NullCheck(L_15);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IToken::set_CharPositionInLine(System.Int32) */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(28 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Emit(Unity.VisualScripting.Antlr3.Runtime.IToken) */, __this, L_18);
		RuntimeObject* L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Match_mEF2C2B4E1A8F46F6CB0278534199988662EF86D5 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_006b;
	}

IL_0004:
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0, 1);
		String_t* L_2 = ___s0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_backtracking_6();
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_7 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_7);
		L_7->set_failed_4((bool)1);
		return;
	}

IL_0034:
	{
		String_t* L_8 = ___s0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		RuntimeObject* L_11 = __this->get_input_2();
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_12 = (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF(L_12, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_13 = V_1;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(33 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Recover(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_13);
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_14 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_Match_mEF2C2B4E1A8F46F6CB0278534199988662EF86D5_RuntimeMethod_var)));
	}

IL_0050:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		RuntimeObject* L_16 = __this->get_input_2();
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_16);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_17 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_17);
		L_17->set_failed_4((bool)0);
	}

IL_006b:
	{
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Match_m6DC718FC89DC1C88E3AF0B3F3B5D3BEF250765FF (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0, 1);
		int32_t L_2 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0040;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_3 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_backtracking_6();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_5 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_5);
		L_5->set_failed_4((bool)1);
		return;
	}

IL_002a:
	{
		int32_t L_6 = ___c0;
		RuntimeObject* L_7 = __this->get_input_2();
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_8 = (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)));
		MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_9 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(33 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Recover(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_9);
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_10 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_Match_m6DC718FC89DC1C88E3AF0B3F3B5D3BEF250765FF_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeObject* L_11 = __this->get_input_2();
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_11);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_12 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_12);
		L_12->set_failed_4((bool)0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::MatchRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_MatchRange_m0F9E0B9139312D9E7C13F33C5969BC5134B30772 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0, 1);
		int32_t L_2 = ___a0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_input_2();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_3, 1);
		int32_t L_5 = ___b1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0050;
		}
	}

IL_001e:
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_6 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_backtracking_6();
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_8 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_8);
		L_8->set_failed_4((bool)1);
		return;
	}

IL_0039:
	{
		int32_t L_9 = ___a0;
		int32_t L_10 = ___b1;
		RuntimeObject* L_11 = __this->get_input_2();
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_12 = (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34_il2cpp_TypeInfo_var)));
		MismatchedRangeException__ctor_m455217F5C80CAF9CC2E160F1DEE6427559BB2868(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_13 = V_0;
		VirtActionInvoker1< RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(33 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Recover(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_13);
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_14 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_MatchRange_m0F9E0B9139312D9E7C13F33C5969BC5134B30772_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_15 = __this->get_input_2();
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_15);
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_16 = ((BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66 *)__this)->get_state_1();
		NullCheck(L_16);
		L_16->set_failed_4((bool)0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::Recover(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_Recover_mD703A94BB7C397EBB64877E4AAB00ED6704EE0D5 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___re0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Lexer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_ReportError_mFE2B146F89BEB266034EFB88A441D910B0338F78 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(18 /* System.String[] Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_1 = ___e0;
		VirtActionInvoker2< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::DisplayRecognitionError(System.String[],Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_0, L_1);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Lexer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetErrorMessage_mDA62211758D6CD813662608EB7FAF97B8BC4C9B5 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenNames1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * V_1 = NULL;
	NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * V_2 = NULL;
	EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC * V_3 = NULL;
	MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * V_4 = NULL;
	MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * V_5 = NULL;
	MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * V_6 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_7 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_8 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_9 = NULL;
	{
		V_0 = (String_t*)NULL;
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_0 = ___e0;
		if (!((MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)IsInstClass((RuntimeObject*)L_0, MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_1 = ___e0;
		V_1 = ((MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 *)CastclassClass((RuntimeObject*)L_1, MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323_il2cpp_TypeInfo_var));
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_2 = ___e0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_3, /*hidden argument*/NULL);
		MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4, L_4, _stringLiteralE7C2F97B85069D989C801839E217B6CDCE01D379, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_01b0;
	}

IL_003e:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_9 = ___e0;
		if (!((NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)IsInstClass((RuntimeObject*)L_9, NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var)))
		{
			goto IL_0069;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_10 = ___e0;
		V_2 = ((NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 *)CastclassClass((RuntimeObject*)L_10, NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14_il2cpp_TypeInfo_var));
		NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral6B4494BD6F11C452454C855BB3BEC40FBCE30246, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_01b0;
	}

IL_0069:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_15 = ___e0;
		if (!((EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC *)IsInstClass((RuntimeObject*)L_15, EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_16 = ___e0;
		V_3 = ((EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC *)CastclassClass((RuntimeObject*)L_16, EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC_il2cpp_TypeInfo_var));
		EarlyExitException_tF2478AFAF1ECD23703D1501763814557CEAA1CEC * L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral7CB5A72888DBC6EACBDA745AEF7C34A44085ECD4, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_01b0;
	}

IL_0094:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_21 = ___e0;
		if (!((MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 *)IsInstClass((RuntimeObject*)L_21, MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2_il2cpp_TypeInfo_var)))
		{
			goto IL_00e7;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_22 = ___e0;
		V_4 = ((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)CastclassClass((RuntimeObject*)L_22, MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_23;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_7;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = V_7;
		MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = V_7;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_7;
		MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * L_31 = V_4;
		NullCheck(L_31);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_32 = L_31->get_expecting_25();
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = V_7;
		String_t* L_34;
		L_34 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_01b0;
	}

IL_00e7:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_35 = ___e0;
		if (!((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)IsInstClass((RuntimeObject*)L_35, MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var)))
		{
			goto IL_0137;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_36 = ___e0;
		V_5 = ((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)CastclassClass((RuntimeObject*)L_36, MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_8 = L_37;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = V_8;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = V_8;
		MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * L_40 = V_5;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_42);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = V_8;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = V_8;
		MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * L_45 = V_5;
		NullCheck(L_45);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_46 = L_45->get_expecting_25();
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_46);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_47 = V_8;
		String_t* L_48;
		L_48 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_47, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_01b0;
	}

IL_0137:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_49 = ___e0;
		if (!((MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 *)IsInstClass((RuntimeObject*)L_49, MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34_il2cpp_TypeInfo_var)))
		{
			goto IL_01a7;
		}
	}
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_50 = ___e0;
		V_6 = ((MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 *)CastclassClass((RuntimeObject*)L_50, MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		V_9 = L_51;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = V_9;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB4478EF9821BE598679E5ECE435D35FC7600A6E4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = V_9;
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_54 = V_6;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline(L_54, /*hidden argument*/NULL);
		String_t* L_56;
		L_56 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = V_9;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7AA71642CE7AA2FD4AF9353DFF15546BA82DF5DA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = V_9;
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = MismatchedRangeException_get_A_mDA9674550C9D3D5F9D88ABABC4EE6A66670F17AD_inline(L_59, /*hidden argument*/NULL);
		String_t* L_61;
		L_61 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_61);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = V_9;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = V_9;
		MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * L_64 = V_6;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = MismatchedRangeException_get_B_mF1912E7F4E6A60EE74EDD5CC9DCAF180A0C743A9_inline(L_64, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793(__this, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = V_9;
		String_t* L_68;
		L_68 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_01b0;
	}

IL_01a7:
	{
		RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * L_69 = ___e0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = ___tokenNames1;
		String_t* L_71;
		L_71 = BaseRecognizer_GetErrorMessage_m5CFD335336614BD786BB44E7857E135AB8F53FDB(__this, L_69, L_70, /*hidden argument*/NULL);
		V_0 = L_71;
	}

IL_01b0:
	{
		String_t* L_72 = V_0;
		return L_72;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Lexer::GetCharErrorDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetCharErrorDisplay_mAA7F985E41CBAD49D294831D087FBBC088264793 (Lexer_t76D65B86F31F9994BB63217BC400E851C498F236 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___c0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0025:
	{
		V_0 = _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
		goto IL_004d;
	}

IL_002d:
	{
		V_0 = _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
		goto IL_004d;
	}

IL_0035:
	{
		V_0 = _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
		goto IL_004d;
	}

IL_003d:
	{
		V_0 = _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
		goto IL_004d;
	}

IL_0045:
	{
		int32_t L_3 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToString_m997FA0EE3D2B6F21062C9B5A327E7A5CCE4A8402(((int32_t)((uint16_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_004d:
	{
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_5, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		return L_6;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedNotSetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedNotSetException__ctor_mC8B7EACE21E19F6F5C582FF11D5723C76A76A9D9 (MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 * __this, const RuntimeMethod* method)
{
	{
		MismatchedSetException__ctor_m715F73D46B490407C1EE544C6D02D554A76F4032(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MismatchedNotSetException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedNotSetException_ToString_m4B3DBD44D860033AB40C243B52A6D19E4D5088E9 (MismatchedNotSetException_tFF83D12E1691A92A15FD92A527B52443F5B3FBE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_8 = ((MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 *)__this)->get_expecting_25();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::get_A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_mDA9674550C9D3D5F9D88ABABC4EE6A66670F17AD (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_a_25();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mF1912E7F4E6A60EE74EDD5CC9DCAF180A0C743A9 (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_b_26();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_m2DDAFB4940464E60426D7EFCCA9E7C629A1B94F8 (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::.ctor(System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedRangeException__ctor_m455217F5C80CAF9CC2E160F1DEE6427559BB2868 (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, int32_t ___a0, int32_t ___b1, RuntimeObject* ___input2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input2;
		RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___a0;
		__this->set_a_25(L_1);
		int32_t L_2 = ___b1;
		__this->set_b_26(L_2);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MismatchedRangeException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedRangeException_ToString_m3150802DBACADD13E437222D21203A25EC88BE85 (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD151B7BEBE7273A8FCA17D122CAB836868C0EB9C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral696D2E96A654F212949DF20C24EA9CE3495AFA27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		int32_t L_8 = __this->get_a_25();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		int32_t L_13 = __this->get_b_26();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_17, /*hidden argument*/NULL);
		return L_18;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m715F73D46B490407C1EE544C6D02D554A76F4032 (MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::.ctor(Unity.VisualScripting.Antlr3.Runtime.BitSet,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m363B64686BC0ABC37BACA9C4B6CC7E6DD02A47C1 (MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * __this, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input1;
		RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E(__this, L_0, /*hidden argument*/NULL);
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_1 = ___expecting0;
		__this->set_expecting_25(L_1);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedSetException_ToString_mBB463213D503D4BE9D9A925E73F72DA384E49B99 (MismatchedSetException_tE70BEE2A08A267F29501C6103A5F705B91CFCEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral010FD1A4E7CFE170E6B749B2D8B6E689C923A6F1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * L_8 = __this->get_expecting_25();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::get_Expecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540 (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_expecting_25();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_mF0E91260FE3732A9F292EEB9A16AC40E27AEB000 (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input1;
		RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___expecting0;
		__this->set_expecting_25(L_1);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MismatchedTokenException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedTokenException_ToString_mFEEA3B2E5B561A17EC507FC34B2D1A36781CD95F (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral5344162BAF253B06CDAC1B2EC90C6B5A8233C777);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		int32_t L_8 = __this->get_expecting_25();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTreeNodeException__ctor_m4C2726E6B5DE1EDBDE7718B20DF9BCA5F1D23E97 (MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MismatchedTreeNodeException_ToString_m0E07A1BCE8DDBDDC5BE112B97B6A3BA1E03C8337 (MismatchedTreeNodeException_t7923871B25C977A12F9D17BBCAD2ACECCA316CDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral67BDD04DFC424EFEBF0D139BB53B98B27AB2A5F1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		int32_t L_8 = __this->get_expecting_25();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_mA7FD544A264CBAF07DABD5659A787D0ACF09CE8F (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, const RuntimeMethod* method)
{
	{
		MismatchedTokenException__ctor_mF0E91260FE3732A9F292EEB9A16AC40E27AEB000(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTokenException__ctor_m4EFCFB8DCD01F50253D87AEF5FB91A9C6E48413E (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, int32_t ___expecting0, RuntimeObject* ___input1, RuntimeObject * ___inserted2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___expecting0;
		RuntimeObject* L_1 = ___input1;
		MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___inserted2;
		__this->set_inserted_26(L_2);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::get_MissingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MissingTokenException_get_MissingType_mCEA3612C50CD092B0C05614FF7CECF9760947C00 (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.MissingTokenException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MissingTokenException_ToString_m0895BBC98F28E1358B77AA5AB8CD268C2009F3C5 (MissingTokenException_tA7D313DDFF8F8B345A0B4AD8534FB078A606046B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_inserted_26();
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_1 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral028C74A0DB1E632B4407A7E6DCFFFBD9B074CF39);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		RuntimeObject * L_5 = __this->get_inserted_26();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		RuntimeObject* L_8 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_004d:
	{
		RuntimeObject* L_13 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_14 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_14);
		String_t* L_16;
		L_16 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral572FF46D3B9511AD8D3805B2824FB1339FD57103, L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_16;
	}

IL_0070:
	{
		return _stringLiteralF69DA5EB0BBCF119F35BBA6BB5AF87157B85B1BA;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m8A9AAE982F37025347355EC6B73A9318CECCCBD3 (NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::.ctor(System.String,System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m5610F35092AFA4EBEDB3669428A6C3218C86AC9B (NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * __this, String_t* ___grammarDecisionDescription0, int32_t ___decisionNumber1, int32_t ___stateNumber2, RuntimeObject* ___input3, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input3;
		RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___grammarDecisionDescription0;
		__this->set_grammarDecisionDescription_25(L_1);
		int32_t L_2 = ___decisionNumber1;
		__this->set_decisionNumber_26(L_2);
		int32_t L_3 = ___stateNumber2;
		__this->set_stateNumber_27(L_3);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoViableAltException_ToString_mD8A279FEDAA9115E137316C5378231606D6C1F57 (NoViableAltException_tB34E101CF8F4B8DA7312380A747E221DC7756D14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_input_17();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral831E78D748882CC97BD9765EB1675D24CE94B470);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		Il2CppChar L_5 = ((Il2CppChar)((int32_t)((uint16_t)L_4)));
		RuntimeObject * L_6 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralF269882C28438C0C37FD3291D5FEFE33D1D2C112);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_0;
		String_t* L_9 = __this->get_grammarDecisionDescription_25();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_004b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_1 = L_13;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2A1AEDB5CAEE8E90D62850F6BDC43033E49619F2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_1;
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType() */, __this);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_1;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral11BBE02CC103A1E73ED5F67A3DD726585A1CBA5C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_1;
		String_t* L_21 = __this->get_grammarDecisionDescription_25();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = V_1;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralD6CF0ED06F53D0678D0D343C84AA89E63768E897);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_23, /*hidden argument*/NULL);
		return L_24;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Parser::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m6DC3AC3F8B61B99AAA56C63E1EF0A608132E11CD (Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA * __this, RuntimeObject* ___input0, RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * L_0 = ___state1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseRecognizer_tBDBF0AB9BDAF2CB9637C7782538EB718F3318E66_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m3CB6CC87074045CDB011422E4E2B4E4E45CF894B(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Parser::set_TokenStream(Unity.VisualScripting.Antlr3.Runtime.ITokenStream) */, __this, L_1);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Parser::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Reset_m47CFDFC18DA0F3B5566FD715C9D9BDF177108804 (Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_mEC04743808D106E034BC2E5BF098245E564ADAF2(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_input_2();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_input_2();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Parser::GetCurrentInputSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_GetCurrentInputSymbol_m38563400D8882FD5DA97DA7DD9D065B3256ACDE3 (Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Parser::GetMissingSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_GetMissingSymbol_m2E559AF1DD2C3C44521C11871ED8C9B8ABB455CB (Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA * __this, RuntimeObject* ___input0, RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * ___e1, int32_t ___expectedTokenType2, BitSet_t875E73133A3326A6AFB6643EE1FB522910166258 * ___follow3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = ___expectedTokenType2;
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
		goto IL_002a;
	}

IL_0012:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(18 /* System.String[] Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		int32_t L_3 = ___expectedTokenType2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		String_t* L_6;
		L_6 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_5, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002a:
	{
		int32_t L_7 = ___expectedTokenType2;
		String_t* L_8 = V_0;
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_9 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mEBE281BD30ED96A4A7F6AA92A77532D60296F52B(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RuntimeObject* L_10 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)), 1);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_15 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)), (-1));
		V_2 = L_16;
	}

IL_0059:
	{
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_17 = V_1;
		RuntimeObject* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_17);
		L_17->set_line_1(L_19);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_20 = V_1;
		RuntimeObject* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_CharPositionInLine(System.Int32) */, L_20, L_22);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_23 = V_1;
		NullCheck(L_23);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::set_Channel(System.Int32) */, L_23, 0);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_24 = V_1;
		return L_24;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Parser::set_TokenStream(Unity.VisualScripting.Antlr3.Runtime.ITokenStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_set_TokenStream_m2B2593F9CFFCE9C5155417BC2307480593432DD2 (Parser_t259E13AA8766F40EB03A25F671A0BD7FC693D9BA * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		__this->set_input_2((RuntimeObject*)NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Reset() */, __this);
		RuntimeObject* L_0 = ___value0;
		__this->set_input_2(L_0);
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
// System.Object Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParserRuleReturnScope_get_Start_m0F449FE66729CB16210B21CA158F74FA529493DC (ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_start_0();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::set_Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope_set_Start_mAB698290B76E14259B7FF9E330C6FA52A1308D01 (ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_start_0(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::get_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParserRuleReturnScope_get_Stop_mBA8F1007F57DF5B9E0678AB583122586A8F1136D (ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_stop_1();
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::set_Stop(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope_set_Stop_m46CC9529667DAFCB40429F7EDE5183E641C9C41E (ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_stop_1(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope__ctor_m4E93358C84801674FD89A8BB56FDDE5325708EBB (ParserRuleReturnScope_t592D147A879C2272F93954054293F6A27E5C81D8 * __this, const RuntimeMethod* method)
{
	{
		RuleReturnScope__ctor_m98AF1C4C0D151BAB8C8604B5E4632520A8A279B0(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m39F9F91484BBD7B6D544B76F00859B8DB39FEA7F (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		RecognitionException__ctor_m16E3AD189C22B6F872E281458B5548DF7A3BD37E(__this, (String_t*)NULL, (Exception_t *)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m8C9D38BDC0D8A6981501370A0E0271A0D97BE5B5 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		RecognitionException__ctor_m16E3AD189C22B6F872E281458B5548DF7A3BD37E(__this, L_0, (Exception_t *)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m605B79C4F0F386CAEA1CCE3EA5C0F6B940A9FF0E (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___input0;
		RecognitionException__ctor_m16E3AD189C22B6F872E281458B5548DF7A3BD37E(__this, (String_t*)NULL, (Exception_t *)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(System.String,System.Exception,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m16E3AD189C22B6F872E281458B5548DF7A3BD37E (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, String_t* ___message0, Exception_t * ___inner1, RuntimeObject* ___input2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___input2;
		__this->set_input_17(L_2);
		RuntimeObject* L_3 = ___input2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::Index() */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_3);
		__this->set_index_18(L_4);
		RuntimeObject* L_5 = ___input2;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = ___input2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)), 1);
		__this->set_token_19(L_7);
		RuntimeObject* L_8 = __this->get_token_19();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_8);
		__this->set_line_22(L_9);
		RuntimeObject* L_10 = __this->get_token_19();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_10);
		__this->set_charPositionInLine_23(L_11);
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___input2;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_12, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var)))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_13 = ___input2;
		RecognitionException_ExtractInformationFromTreeNodeStream_m1BBF6EB89ABF70840BA6E8E45365F1CE1D8243B6(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0067:
	{
		RuntimeObject* L_14 = ___input2;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_14, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_15 = ___input2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_15, 1);
		__this->set_c_21(L_16);
		RuntimeObject* L_17 = ___input2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_17, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)));
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.ICharStream::get_Line() */, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_17, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)));
		__this->set_line_22(L_18);
		RuntimeObject* L_19 = ___input2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.ICharStream::get_CharPositionInLine() */, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, ICharStream_tB16DE49DC10F2C626C4A544950A3188CACFE8360_il2cpp_TypeInfo_var)));
		__this->set_charPositionInLine_23(L_20);
		return;
	}

IL_009f:
	{
		RuntimeObject* L_21 = ___input2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t311FB53A06DB7F2CF896A48D09BE60057D1847E7_il2cpp_TypeInfo_var, L_21, 1);
		__this->set_c_21(L_22);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_token_19();
		return L_0;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_node_20();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Char()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_c_21();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mF4B081A6E6D2558D0972FF9BE2BB72F464C99697 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPositionInLine_23();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_m013A39F39CF4DE3DD3F66B23F727CB6D7C834244 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_22();
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_UnexpectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_UnexpectedType_mF4E0EF700523FB2CB19EF34D5EABB0C187340E45 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->get_input_17();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITokenStream_tC2D5331052878005AE74D65964D9C51A8AE13DED_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_token_19();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->get_input_17();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_input_17();
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		RuntimeObject * L_8 = __this->get_node_20();
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(5 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeType(System.Object) */, ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}

IL_0046:
	{
		int32_t L_10 = __this->get_c_21();
		return L_10;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::ExtractInformationFromTreeNodeStream(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException_ExtractInformationFromTreeNodeStream_m1BBF6EB89ABF70840BA6E8E45365F1CE1D8243B6 (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		RuntimeObject* L_0 = ___input0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(1 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, L_1, 1);
		__this->set_node_20(L_2);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		RuntimeObject * L_6 = __this->get_node_20();
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject * >::Invoke(7 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		__this->set_token_19(L_9);
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		V_3 = (-1);
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		RuntimeObject * L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(1 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, L_12, L_13);
		V_4 = L_14;
		goto IL_0092;
	}

IL_004b:
	{
		RuntimeObject* L_15 = V_1;
		RuntimeObject * L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject * >::Invoke(7 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var, L_15, L_16);
		V_5 = L_17;
		RuntimeObject* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_19);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_21 = V_5;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_21);
		__this->set_line_22(L_22);
		RuntimeObject* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_23);
		__this->set_charPositionInLine_23(L_24);
		__this->set_approximateLineInfo_24((bool)1);
		return;
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		RuntimeObject* L_26 = V_0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		RuntimeObject * L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(1 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t70F98E9B070437AF2D9C65BB16BF35BD849D8A96_il2cpp_TypeInfo_var, L_26, L_27);
		V_4 = L_28;
	}

IL_0092:
	{
		RuntimeObject * L_29 = V_4;
		if (L_29)
		{
			goto IL_004b;
		}
	}
	{
		return;
	}

IL_0097:
	{
		RuntimeObject* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Line() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_30);
		__this->set_line_22(L_31);
		RuntimeObject* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_CharPositionInLine() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_32);
		__this->set_charPositionInLine_23(L_33);
		return;
	}

IL_00b0:
	{
		RuntimeObject * L_34 = __this->get_node_20();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_34, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)))
		{
			goto IL_010d;
		}
	}
	{
		RuntimeObject * L_35 = __this->get_node_20();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_35, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_Line() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_35, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		__this->set_line_22(L_36);
		RuntimeObject * L_37 = __this->get_node_20();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_37, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		int32_t L_38;
		L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITree::get_CharPositionInLine() */, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_37, ITree_t2AACD259F93FB8AC3BC060856FE9D0F6F0359B33_il2cpp_TypeInfo_var)));
		__this->set_charPositionInLine_23(L_38);
		RuntimeObject * L_39 = __this->get_node_20();
		if (!((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)IsInstClass((RuntimeObject*)L_39, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject * L_40 = __this->get_node_20();
		NullCheck(((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)CastclassClass((RuntimeObject*)L_40, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_41;
		L_41 = VirtFuncInvoker0< RuntimeObject* >::Invoke(31 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::get_Token() */, ((CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7 *)CastclassClass((RuntimeObject*)L_40, CommonTree_t91613C592DEEEC5807CD424F1BC60F1B287AACE7_il2cpp_TypeInfo_var)));
		__this->set_token_19(L_41);
		return;
	}

IL_010d:
	{
		RuntimeObject* L_42 = V_1;
		RuntimeObject * L_43 = __this->get_node_20();
		NullCheck(L_42);
		int32_t L_44;
		L_44 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(5 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeType(System.Object) */, ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var, L_42, L_43);
		V_6 = L_44;
		RuntimeObject* L_45 = V_1;
		RuntimeObject * L_46 = __this->get_node_20();
		NullCheck(L_45);
		String_t* L_47;
		L_47 = InterfaceFuncInvoker1< String_t*, RuntimeObject * >::Invoke(6 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeText(System.Object) */, ITreeAdaptor_tE62A52D05BB04E54C14744234F6A8933758E0808_il2cpp_TypeInfo_var, L_45, L_46);
		V_7 = L_47;
		int32_t L_48 = V_6;
		String_t* L_49 = V_7;
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_50 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mEBE281BD30ED96A4A7F6AA92A77532D60296F52B(L_50, L_48, L_49, /*hidden argument*/NULL);
		__this->set_token_19(L_50);
	}

IL_0138:
	{
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m21B6F47E11A5E9036A304A251F68A70DE64F02AD (RecognizerSharedState_t68F89761246BA192D3364B5E02B50E0BB415FA3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D* L_0 = (BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D*)(BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D*)SZArrayNew(BitSetU5BU5D_t50E87C0437A01C04D422A874D21C2A0F10CBBD9D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_following_0(L_0);
		__this->set_followingStackPointer_1((-1));
		__this->set_lastErrorIndex_3((-1));
		__this->set_tokenStartCharIndex_9((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuleReturnScope_get_Start_mAEA8ED031CFF571FF69F0AB803444DC232187680 (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Start_mCF01DF4B9465F0635B5480F59902E55FEE3FBD62 (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Start_mCF01DF4B9465F0635B5480F59902E55FEE3FBD62_RuntimeMethod_var)));
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuleReturnScope_get_Stop_m565A7100CD3E9A409A434493A91B5BC1FE2798E1 (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Stop_mAB95983E88FBC68B9D168E5698F23AF2EA7734AB (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Stop_mAB95983E88FBC68B9D168E5698F23AF2EA7734AB_RuntimeMethod_var)));
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuleReturnScope_get_Tree_m7619E736D6B83379037741F2FDAF5B8EA9069DFB (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope_set_Tree_m3282E415715B1B5EE802ABA432F4B43EEEE769AE (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459B1E9592507DEB4EB3B07B39793CA93C67A3B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuleReturnScope_set_Tree_m3282E415715B1B5EE802ABA432F4B43EEEE769AE_RuntimeMethod_var)));
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope__ctor_m98AF1C4C0D151BAB8C8604B5E4632520A8A279B0 (RuleReturnScope_tAFAE1DBCD171D7EE274315713BB883048AE9B16F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Token::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__cctor_mF4FB4A57764401789A8500B89F55244612D3CE51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->set_MIN_TOKEN_TYPE_0(4);
		((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->set_EOF_1((-1));
		int32_t L_0 = ((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->get_EOF_1();
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_1 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mA7F5B1D102FE2C99D1E690407D5047CF734B778B(L_1, L_0, /*hidden argument*/NULL);
		((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->set_EOF_TOKEN_2(L_1);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_2 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mA7F5B1D102FE2C99D1E690407D5047CF734B778B(L_2, 0, /*hidden argument*/NULL);
		((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->set_INVALID_TOKEN_3(L_2);
		CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 * L_3 = (CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680 *)il2cpp_codegen_object_new(CommonToken_t411A3C063C1008E9BF2EF223AFD83F2F0EA14680_il2cpp_TypeInfo_var);
		CommonToken__ctor_mA7F5B1D102FE2C99D1E690407D5047CF734B778B(L_3, 0, /*hidden argument*/NULL);
		((Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_StaticFields*)il2cpp_codegen_static_fields_for(Token_tC4A258DE42A68C568F43DB1356E8D1A234747058_il2cpp_TypeInfo_var))->set_SKIP_TOKEN_4(L_3);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_m4C1E2A65F8F623033E9906086DA0D321CA975DA0 (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___expecting0;
		RuntimeObject* L_1 = ___input1;
		MismatchedTokenException__ctor_m0711F2D247057B3D28DC0392B43C51C0098449AF(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException::get_UnexpectedToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_mE3313F9C502B2255273C3B5F84FD3638EB22455B (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		return L_0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.UnwantedTokenException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnwantedTokenException_ToString_m1EA7970B7A2A8AF64B7BD5CB2FD11CD98AF41521 (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128(_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_6, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_7;
	}

IL_003d:
	{
		RuntimeObject* L_8 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t54B1790E4F968444B73AB24A99ABBB234D2EB391_il2cpp_TypeInfo_var, L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_9, L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_11;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialStateTransitionHandler__ctor_mFB33241F730D44E5C17F995820F61864481CB9F4 (SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler::Invoke(Unity.VisualScripting.Antlr3.Runtime.DFA,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_m55ECD3D9416B7BB43171FC8B0C5ADE2FB6F0318B (SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * __this, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * ___dfa0, int32_t ___s1, RuntimeObject* ___input2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dfa0, ___s1, ___input2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(targetMethod, ___dfa0, ___s1, ___input2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(targetMethod, ___dfa0, ___s1, ___input2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___dfa0, ___s1, ___input2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___dfa0, ___s1, ___input2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject* >::Invoke(targetMethod, targetThis, ___dfa0, ___s1, ___input2);
					else
						result = GenericVirtFuncInvoker3< int32_t, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject* >::Invoke(targetMethod, targetThis, ___dfa0, ___s1, ___input2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dfa0, ___s1, ___input2);
					else
						result = VirtFuncInvoker3< int32_t, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dfa0, ___s1, ___input2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef int32_t (*FunctionPointerType) (DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B *, int32_t, RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dfa0, ___s1, ___input2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler::BeginInvoke(Unity.VisualScripting.Antlr3.Runtime.DFA,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpecialStateTransitionHandler_BeginInvoke_m10CF53A98CF6844A57CDDD5E890A911E1A30A76B (SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * __this, DFA_tFA34CBD52846B898FD80A5F294CAA41F45599C1B * ___dfa0, int32_t ___s1, RuntimeObject* ___input2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___dfa0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___s1);
	__d_args[2] = ___input2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_EndInvoke_m640ABADFCE969D433CD998AB399A3C718334CE7A (SpecialStateTransitionHandler_t2BD0072D852491FE1AC12AEE5943B59714B13BF6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList,Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator/EnumerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = ___hashList0;
		__this->set__hashList_0(L_0);
		int32_t L_1 = ___mode1;
		__this->set__mode_2(L_1);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_2 = ___hashList0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__version_2();
		__this->set__version_4(L_3);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_4 = ___hashList0;
		NullCheck(L_4);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = L_4->get__insertionOrderList_1();
		__this->set__orderList_1(L_5);
		__this->set__index_3(0);
		__this->set__key_5(NULL);
		__this->set__value_6(NULL);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashListEnumerator_get_Key_m1F26037B51DB3248AD97BAF1940D3406E4CD7669 (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Key_m1F26037B51DB3248AD97BAF1940D3406E4CD7669_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = __this->get__key_5();
		return L_2;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashListEnumerator_get_Value_m9670AC0444204436517F1A5C4715CF90FA69934D (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Value_m9670AC0444204436517F1A5C4715CF90FA69934D_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = __this->get__value_6();
		return L_2;
	}
}
// System.Collections.DictionaryEntry Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  HashListEnumerator_get_Entry_m103BEA15F73EF28502D5100A95ABC1E191FAF291 (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Entry_m103BEA15F73EF28502D5100A95ABC1E191FAF291_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = __this->get__key_5();
		RuntimeObject * L_3 = __this->get__value_6();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashListEnumerator_Reset_mB0C8E5864A935BD511BE7D319BF90AF1607E4B18 (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__version_4();
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_1 = __this->get__hashList_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get__version_2();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_Reset_mB0C8E5864A935BD511BE7D319BF90AF1607E4B18_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->set__index_3(0);
		__this->set__key_5(NULL);
		__this->set__value_6(NULL);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * HashListEnumerator_get_Current_mFCBE73B65DF5D4B765F987B61CDB03220CB92F9D (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get__key_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_get_Current_mFCBE73B65DF5D4B765F987B61CDB03220CB92F9D_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->get__mode_2();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__key_5();
		return L_3;
	}

IL_0022:
	{
		int32_t L_4 = __this->get__mode_2();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_5 = __this->get__value_6();
		return L_5;
	}

IL_0032:
	{
		RuntimeObject * L_6 = __this->get__key_5();
		RuntimeObject * L_7 = __this->get__value_6();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_9 = L_8;
		RuntimeObject * L_10 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/HashListEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashListEnumerator_MoveNext_mC63544E98A80D757D05381A3E069D3125B0F4CF1 (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__version_4();
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_1 = __this->get__hashList_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get__version_2();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashListEnumerator_MoveNext_mC63544E98A80D757D05381A3E069D3125B0F4CF1_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = __this->get__index_3();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get__orderList_1();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_5, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = __this->get__orderList_1();
		int32_t L_8 = __this->get__index_3();
		NullCheck(L_7);
		RuntimeObject * L_9;
		L_9 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		__this->set__key_5(L_9);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_10 = __this->get__hashList_0();
		RuntimeObject * L_11 = __this->get__key_5();
		NullCheck(L_10);
		RuntimeObject * L_12;
		L_12 = HashList_get_Item_m2C25A555AC0DBA9410F9CCBE2CA9135C82F4F4B9(L_10, L_11, /*hidden argument*/NULL);
		__this->set__value_6(L_12);
		int32_t L_13 = __this->get__index_3();
		__this->set__index_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		return (bool)1;
	}

IL_006f:
	{
		__this->set__key_5(NULL);
		return (bool)0;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m02B73DC41FF35156299B74B1681AFEF2698D4415 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = ___hashList0;
		__this->set__hashList_0(L_0);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyCollection_ToString_mE9EA7F731D8E102D27DDA96396B75306E855507B (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_3 = __this->get__hashList_0();
		NullCheck(L_3);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = L_3->get__insertionOrderList_1();
		V_1 = L_4;
		V_2 = 0;
		goto IL_0044;
	}

IL_0022:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0032:
	{
		StringBuilder_t * L_8 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_15, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyCollection_Equals_mF9BF3AC611190B61D8A0CF8D3965C99ACE40852C (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		if (!((KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 *)IsInstSealed((RuntimeObject*)L_0, KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		V_0 = ((KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 *)CastclassSealed((RuntimeObject*)L_1, KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78_il2cpp_TypeInfo_var));
		int32_t L_2;
		L_2 = KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		int32_t L_5;
		L_5 = KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C(__this, /*hidden argument*/NULL);
		KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0092;
		}
	}
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_0036:
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_8 = __this->get__hashList_0();
		NullCheck(L_8);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = L_8->get__insertionOrderList_1();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * L_12 = V_0;
		NullCheck(L_12);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_13 = L_12->get__hashList_0();
		NullCheck(L_13);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = L_13->get__insertionOrderList_1();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16;
		L_16 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		if ((((RuntimeObject*)(RuntimeObject *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_16)))
		{
			goto IL_0083;
		}
	}
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_17 = __this->get__hashList_0();
		NullCheck(L_17);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_18 = L_17->get__insertionOrderList_1();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject * L_20;
		L_20 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * L_21 = V_0;
		NullCheck(L_21);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_22 = L_21->get__hashList_0();
		NullCheck(L_22);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_23 = L_22->get__insertionOrderList_1();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject * L_25;
		L_25 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_20);
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_20, L_25);
		if (!L_26)
		{
			goto IL_0085;
		}
	}

IL_0083:
	{
		return (bool)1;
	}

IL_0085:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_28 = V_1;
		int32_t L_29;
		L_29 = KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0036;
		}
	}

IL_0092:
	{
		return (bool)0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_GetHashCode_m31E624F2FC216A6DA0B4DF45A19426943EEA9F60 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = L_0->get__insertionOrderList_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyCollection_get_IsSynchronized_mB4B7FC0BEB065542A2E1CBB9FC137C90E08D0303 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HashList_get_IsSynchronized_mF776737957D087761FB0A87F0CB4E90482539364(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m4DFA24C212225C0B54E002B94C15DABA2B87458C (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashList_get_Count_mB27178928462775B09F8270ED58E1094985C1BB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_m1EABB075AE1D634EE8B3F8A29B25A5D2E18FAA6F (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		HashList_CopyKeysTo_mC876AE53080E4D41C5663D3A86920BC736091955(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyCollection_get_SyncRoot_mA136ED148C93E42DC9A41E96C81F0F93690BA294 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = HashList_get_SyncRoot_mD396ECD5D5D583D766A2B8D36D5A28E54342C7C9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/KeyCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_GetEnumerator_m76EDFFDA37CFD578D2C080E7DBC95E88A8C10D37 (KeyCollection_tAC8688F545A151B40438B5D9C19BAF7159453B78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * L_1 = (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD *)il2cpp_codegen_object_new(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB(L_1, L_0, 0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::.ctor(Unity.VisualScripting.Antlr3.Runtime.Collections.HashList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mD8A91DB91D08C3AD52A19FEE71C7199458CF3EEF (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * ___hashList0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = ___hashList0;
		__this->set__hashList_0(L_0);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueCollection_ToString_mFF4A21DC00854684839B785A490323DBA0513822 (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringBuilder_t * G_B3_0 = NULL;
	StringBuilder_t * G_B2_0 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	StringBuilder_t * G_B4_1 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	RuntimeObject * G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_3 = __this->get__hashList_0();
		HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * L_4 = (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD *)il2cpp_codegen_object_new(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB(L_4, L_3, 1, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
		G_B2_0 = L_7;
		if (!L_9)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
		G_B4_0 = L_11;
		G_B4_1 = G_B2_0;
		goto IL_003d;
	}

IL_0038:
	{
		G_B4_0 = ((RuntimeObject *)(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B4_1 = G_B3_0;
	}

IL_003d:
	{
		NullCheck(G_B4_1);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_0045:
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject * L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_16);
		G_B6_0 = L_15;
		if (!L_17)
		{
			G_B7_0 = L_15;
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
		G_B8_0 = L_19;
		G_B8_1 = G_B6_0;
		goto IL_0067;
	}

IL_0062:
	{
		G_B8_0 = ((RuntimeObject *)(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B8_1 = G_B7_0;
	}

IL_0067:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_006d:
	{
		RuntimeObject* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_0045;
		}
	}

IL_0075:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		return L_26;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_get_IsSynchronized_mA55C3A71FD234FE1DC11350E52BF74FB41DF2C62 (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HashList_get_IsSynchronized_mF776737957D087761FB0A87F0CB4E90482539364(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m9D899EED21E1C5C14AA8DEEDDF2D00E842DCA148 (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashList_get_Count_mB27178928462775B09F8270ED58E1094985C1BB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mE5EBFED8409A68447872BE1DDFB198E3C4DE023B (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		HashList_CopyValuesTo_mFAF11369490C801772DBD0DB8CCC2F15009F9B52(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueCollection_get_SyncRoot_m74C42571FA0AD87A60834FD8D50A35A709ADF534 (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, const RuntimeMethod* method)
{
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = HashList_get_SyncRoot_mD396ECD5D5D583D766A2B8D36D5A28E54342C7C9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Unity.VisualScripting.Antlr3.Runtime.Collections.HashList/ValueCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_GetEnumerator_m5DF8087744443FF66BA6B03519E88DC37E508CB7 (ValueCollection_t02BAFD868932F7CD990D1DEC119795CCEBBE8E8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashList_t5CA3A33F38AB3CD20E49392E31F4605B0B712A84 * L_0 = __this->get__hashList_0();
		HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD * L_1 = (HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD *)il2cpp_codegen_object_new(HashListEnumerator_t37655473137D44EBE8A686A8BA530C7A90965FAD_il2cpp_TypeInfo_var);
		HashListEnumerator__ctor_mD9AAD5ABD9C0BD105EC606481A214B45697B6FEB(L_1, L_0, 1, /*hidden argument*/NULL);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_mF1C44FC89C4E19368FF37732E3EC368B752F4540_inline (MismatchedTokenException_t99326AF6DBD9A93BDB21CD2DE61BA008ABC18323 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_expecting_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_mE3313F9C502B2255273C3B5F84FD3638EB22455B_inline (UnwantedTokenException_t40C3F08A544E6E0D3B53C0A77D423AC6D529D008 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 *)__this)->get_token_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m8FCA8A9E02A94F09FD162EAD87E01681A9DCC9ED_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_token_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * RecognitionException_get_Node_m55A0004A7104B7F62B04B1AF63D26F2BE2797664_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_node_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_m013A39F39CF4DE3DD3F66B23F727CB6D7C834244_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mF4B081A6E6D2558D0972FF9BE2BB72F464C99697_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPositionInLine_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_mAD81D39C424CF6727B39950DFDEAFAF7605B2901_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ((Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields*)il2cpp_codegen_static_fields_for(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseTree_get_Children_mCB71D5E4A5A353319D54F870C463E74FF179C1C8_inline (BaseTree_t0D16B39D2ADC89FDF9EC8444C1A10D9CC35F42B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_children_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Char_m1902D6DA611DA79693B52694788EAF4069CD77D1_inline (RecognitionException_tDDB99242393CED04C4825D7DBA7F9B7AADEA4AD8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_c_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_A_mDA9674550C9D3D5F9D88ABABC4EE6A66670F17AD_inline (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_a_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedRangeException_get_B_mF1912E7F4E6A60EE74EDD5CC9DCAF180A0C743A9_inline (MismatchedRangeException_tAE2A4496B7DAE036821B0AAAF178ECDCA2D24D34 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_b_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
