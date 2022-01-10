﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation>
struct Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef>
struct Dictionary_2_tB85C1B2FFF985BA01AD2B7199C083B43C1476CC1;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>
struct Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>
struct Dictionary_2_t129029582481E96143BD747690E92DB7E444261E;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName>
struct Dictionary_2_t8E385BAD05584AB244D10E6FAAA2C60FB9BA5F64;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Xml.XmlQualifiedName>
struct IEqualityComparer_1_t34D541B5FA7B648B0BA88CB13474D1CE66138B8D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Xml.Schema.SchemaNotation>
struct KeyCollection_t5D8F69434F54ADB75F5F7E8F5F6C8EE84A3ACC5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct KeyCollection_tAC5857868E78413258567286465D888874B2985E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>
struct KeyCollection_t2FCB408F1EB9CA12888AE6E0ACEA3FA995A5DAA3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>
struct KeyCollection_t3F2FECD4AC086FD3ABAE5D31881677BABA02B0D0;
// System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo>
struct List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>
struct Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Xml.Schema.SchemaNotation>
struct ValueCollection_t8898F5330699C43BF4307CDFD83DB8DC4ED26F1F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>
struct ValueCollection_tBA3CDE187BE7665A5798B190605F306816272791;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>
struct ValueCollection_t5E6BEDEB2CEF7A818BACE8D90DFE44BE5DAC4431;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Xml.Schema.SchemaNotation>[]
struct EntryU5BU5D_tD75588C64683EE9F29934F54AF3282733AA0E53A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Xml.DtdParser/UndeclaredNotation>[]
struct EntryU5BU5D_t17CE8D8F56CC6F62D77D7826D711AA84E2B46ED0;
// System.Collections.Generic.Dictionary`2/Entry<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>[]
struct EntryU5BU5D_t0C8848FA8C979298F3C182D8EB03570D8FA26FA7;
// System.Collections.Generic.Dictionary`2/Entry<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>[]
struct EntryU5BU5D_tD59BF430101A4C2080228ED133FC9737B0A030EE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Xml.Schema.CompiledIdentityConstraint[]
struct CompiledIdentityConstraintU5BU5D_tA8E35C25853FEF33AAE27549EE1E30F039429D16;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_tFC0CF817A6D2131D94AB6387E4EAE7D97B3FFC40;
// System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame[]
struct ParseElementOnlyContent_LocalFrameU5BU5D_t611D26D044101E53D04B538C85A8214818CA615B;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A;
// System.Xml.XmlNodeReaderNavigator/VirtualAttribute[]
struct VirtualAttributeU5BU5D_t15B4DCB20E70B3A9A3E256B3EC01658ED46E0D83;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Xml.Base64Decoder
struct Base64Decoder_t1126DFB7A4962925EEAF46C6A4D676CBB1EE66F5;
// System.Xml.BinHexDecoder
struct BinHexDecoder_tB77546D79B7899F37DF674F845BC5FB69A8EF02E;
// System.Xml.Schema.ContentValidator
struct ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE;
// System.Xml.DomNameTable
struct DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45;
// System.Xml.DtdParser
struct DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
// System.Exception
struct Exception_t;
// System.Xml.HWStack
struct HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Xml.IDtdInfo
struct IDtdInfo_tD6983F7C3E35C4997BE28F42ED50EF866DAE14F8;
// System.Xml.IDtdParser
struct IDtdParser_t91A29AF9801876CAFD81A0496F5AB8A65527B54B;
// System.Xml.IDtdParserAdapter
struct IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311;
// System.Xml.IDtdParserAdapterWithValidation
struct IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347;
// System.Xml.IValidationEventHandling
struct IValidationEventHandling_t5929D7539D965D446556F7740F36A2BF7C6CC57E;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
// System.Xml.IncrementalReadDecoder
struct IncrementalReadDecoder_t55EB8A2FB2A5FFCB1B68AE7F784C4E00DCE1E55B;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46;
// System.Xml.Schema.ParticleContentValidator
struct ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF;
// System.Xml.PositionInfo
struct PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5;
// System.Xml.Schema.Positions
struct Positions_tA1718BCD59D1E183041E480D7602A5DF38182B4B;
// System.Xml.ReadContentAsBinaryHelper
struct ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897;
// System.Xml.ReaderPositionInfo
struct ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaAttDef
struct SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553;
// System.Xml.Schema.SchemaDeclBase
struct SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B;
// System.Xml.Schema.SchemaElementDecl
struct SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD;
// System.Xml.Schema.SchemaEntity
struct SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E;
// System.Xml.Schema.SchemaNotation
struct SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Xml.Schema.SymbolsDictionary
struct SymbolsDictionary_t6294BD40672E01F1C87B524AE88C84A267C78CF3;
// System.Xml.Schema.SyntaxTreeNode
struct SyntaxTreeNode_t1165A00492617EF072B11DECC26AA0AA3BF72EBE;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.XmlException
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596;
// System.Xml.XmlImplementation
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlName
struct XmlName_t0704430D24D202146901D342E34D878246E14F33;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B;
// System.Xml.XmlNodeReader
struct XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B;
// System.Xml.XmlNodeReaderNavigator
struct XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825;
// System.Xml.XmlNotation
struct XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t35947D4DA687AA3C531135CEC5EBE7AB1C3EF821;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2674CD673C9358AEDF1F318A8CF5DE9EB01AF601;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t84C9B4F059E687FBF7845373F5A6B2795F982091;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t55D593FB2AB45488862F2C620A08F84A422A7E93;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE;
// System.Xml.XmlText
struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A;
// System.Xml.XmlUnspecifiedAttribute
struct XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame
struct ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8;
// System.Xml.DtdParser/UndeclaredNotation
struct UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E;
// System.Xml.NameTable/Entry
struct Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DtdValidator_tF916F1805E2290242B688583602409378173CF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValidationEventHandling_t5929D7539D965D446556F7740F36A2BF7C6CC57E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3;
IL2CPP_EXTERN_C String_t* _stringLiteral168C49673280639EC773D92BF193FBACAED8BF52;
IL2CPP_EXTERN_C String_t* _stringLiteral17372CA6EE06884491DF8D3AEFE02DC203DF0717;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29;
IL2CPP_EXTERN_C String_t* _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265063C5E5B7055CDC527A6D234A14747DC2D71E;
IL2CPP_EXTERN_C String_t* _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632;
IL2CPP_EXTERN_C String_t* _stringLiteral292FFF1AFC6A39FAE710753C820C4EC3DD0D4613;
IL2CPP_EXTERN_C String_t* _stringLiteral2E08A69B160B273B33CB600405C55F98F76617CC;
IL2CPP_EXTERN_C String_t* _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7;
IL2CPP_EXTERN_C String_t* _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4;
IL2CPP_EXTERN_C String_t* _stringLiteral34202956739DA5FD8C25F589724F7651D367199C;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral412CDD51CEFF0076D98025A6A06AA2AF9F83EF80;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral41EF1659C5E772235CFEA4B5A94D5DF6799C5608;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral427B5CD0C06701810B3C126A307EAE3A6260A3C9;
IL2CPP_EXTERN_C String_t* _stringLiteral465E30F3D21D06E0DA20D8DA61A1DEC0DAB8C6A5;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral49457BCC8BD0CC8C758CAB29E29AAC6EE6A36D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F463628A5B55C40369849BC669644FDA7E2FD4E;
IL2CPP_EXTERN_C String_t* _stringLiteral501B98A6E74F1C51225E59A5DAE2EE433B125499;
IL2CPP_EXTERN_C String_t* _stringLiteral59EB542A9E6EFCBFACCAE7DFE982B1F399E566DA;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral5EA907DF837264718D0DC8D41DDEAFB889AC5C57;
IL2CPP_EXTERN_C String_t* _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB660E1248762B48B0356F19FC1CB2FC99F1ABF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF61ABC5F7B64F3477624AFB1B9EBB636A0543B;
IL2CPP_EXTERN_C String_t* _stringLiteral6C370F917A6284F4D431AD8EB3AD2C86D406AB52;
IL2CPP_EXTERN_C String_t* _stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF85EA4A9725419E00C90B0EC2DCE10FD2E8CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral72AA82468046288272E323F13B397B70AFA72BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral744DBAE461E32AD381B1A38CE73D4E473E600816;
IL2CPP_EXTERN_C String_t* _stringLiteral7899B2E8A04E6FD13A12E445A7ED6DFA996101EC;
IL2CPP_EXTERN_C String_t* _stringLiteral798FAE79042022F0E20CDBB3AD4A4E26A3AA7677;
IL2CPP_EXTERN_C String_t* _stringLiteral7CA3591A74B899B2FB7AAADBB9C6AA9722CD2C06;
IL2CPP_EXTERN_C String_t* _stringLiteral7CCE57C5D7E1EEE86D308C81EAB8B71D0964327F;
IL2CPP_EXTERN_C String_t* _stringLiteral7E813A351BDAF588C5F27BAF94CA6FA9357A2BD3;
IL2CPP_EXTERN_C String_t* _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221;
IL2CPP_EXTERN_C String_t* _stringLiteral85E61EF83FCD7B08C40AA3B100CA8FC4B41A934C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF28038BAE3947FE2A10B2562359E7D3A2BF989;
IL2CPP_EXTERN_C String_t* _stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48;
IL2CPP_EXTERN_C String_t* _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9D11CBA54D41168E05EDD70A039AE4D55FEEE7;
IL2CPP_EXTERN_C String_t* _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D214974A6E3CCDE1B595EE7A016D3FEA5FAA61;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FD09D6160D857BE2ADC20AF0BEB4D45333320A;
IL2CPP_EXTERN_C String_t* _stringLiteralA98C4EB777C388F69EC48A492C07DBBBEBF41DC1;
IL2CPP_EXTERN_C String_t* _stringLiteralB04A560846A93D4D813C44EFBD0968D2875C5049;
IL2CPP_EXTERN_C String_t* _stringLiteralB080109AD5D6C864D18C1BFD1A3B9116504CCC72;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05;
IL2CPP_EXTERN_C String_t* _stringLiteralB8592558A3214B8F63A256B8806C4A8EF96EF5FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB9895E6DD32A29F645457E316DC78EBC804C2C86;
IL2CPP_EXTERN_C String_t* _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
IL2CPP_EXTERN_C String_t* _stringLiteralC3304C21E7F8F3D25BF870F3A00FB0D196C695E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A4DCEE2BCE29D8E3625DA7D1C87881873A907C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBECB429388DF905A7D97C6877C490611CB01F3E;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFFBF7695883D821E64C727304FFE2682330A22;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A;
IL2CPP_EXTERN_C String_t* _stringLiteralD27E638C5F6B34DE55DDC1E7B33B6C164CB88CAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralD93DDB9BA74539B5989A13715EBB5158C4B43486;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB06DE16F44A88CD00ED1FDBEB9E9BFE0F4D1C2A;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9AA762B72BCD6BE256CC115B658BDBC21C36EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE37FDA7277F15534CECEDAEFDA7350672DC07A1D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BAFB0222941360F2752ADB95BF13DFDF07C373;
IL2CPP_EXTERN_C String_t* _stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF270172D9DCB1A35388598EC124CE3AE08AC3E54;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1BD6D03E43DE090315E2B473EC6665083565F73E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF9A60D8A0C976AFEE10941219915771AE92C4AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1E37C29A7B6036E5D212EDE08E94808C0020EE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m620783E54E80B6F38403C978D1134BC1613768B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF8AA7901FEFABA7D6FCE95EB586FD42E58B1F0A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE03838E6B9827A6EFC4AF300FBEFAEFECFC20210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mD416BBB037BD250D7C597A72EB36BB50CD033DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DtdParser_InitializeFreeFloatingDtd_m1508B91CB75E55A064D4DC2EC796EF2B35785B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8ED1DCC22330B97D3DD70AD4094E53E84535AF06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3D12963AA9A1E78352AD17756F85E7F8E0281CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBB1E0A2F071C3C58AD52810FA1C157F300EB85FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HWStack_Push_mB56F1D723F4F22AEF3D79471002C5C28B941E520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HWStack_get_Item_m22D16C45E0F052B2C253F5E415C6A3EFB446C6A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HWStack_set_Item_mDF787484E3F13831EC68953C27A6C984A48471D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameTable_Add_m5ACB3656DCB4016DAA199A6CC1ACEF6E6B01F363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameTable_Get_m3E92F325593978B474D3BDF7E2DCEC77DEA956D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m0C074AC550A3838F3407E0C3699055604445DB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mB31BECBC0F3FF13AE5D0EC3C5F3738DBCA64F93D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m859E9CA447DBF5EE9DD9D0ECDBDA9D98D49CD0CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mF5D38961851C67F431DDC6AA9FA9BC2BE63DBE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateNames_SplitQName_m808CCD9614317080CFDC44BB0DE78CA077847498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mABC01CB19F774F69E736CCAB8E79BFEFC3702C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeReader_GetAttribute_m23D09CF51432C8F35AF5EF1662E83C064CE18BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeReader_MoveToAttribute_mB0B55215A40638BBB68352FD793ABF6335C17B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeReader_ResolveEntity_m29E73FD2E0D4146A75D1839275A0BC3D03BD50C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeReader__ctor_mE43EB30477EC25D9823AA7906EC0F3826154E9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNotation_CloneNode_m80D1F12EC01AB84F1B7FBE736BE186E37EABA50B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNotation_set_InnerXml_m622282FD814F18EAABCF209E0D94BEE3027C6708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlSignificantWhitespace__ctor_mCE8AE4FC827464B5A5A54191D5D62E2AF41E078F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlSignificantWhitespace_set_Value_m4E49DAC92DB2964DD041856C8573EB765A3EF983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlWhitespace__ctor_m95E6CA1AFEECB5C1B3EDDAA039864BDF315FD0AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlWhitespace_set_Value_m21C564680F3206E6130A184D9AE3DC86EC723A4E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation>
struct Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD75588C64683EE9F29934F54AF3282733AA0E53A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5D8F69434F54ADB75F5F7E8F5F6C8EE84A3ACC5A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8898F5330699C43BF4307CDFD83DB8DC4ED26F1F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17CE8D8F56CC6F62D77D7826D711AA84E2B46ED0* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAC5857868E78413258567286465D888874B2985E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>
struct Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0C8848FA8C979298F3C182D8EB03570D8FA26FA7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2FCB408F1EB9CA12888AE6E0ACEA3FA995A5DAA3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA3CDE187BE7665A5798B190605F306816272791* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>
struct Dictionary_2_t129029582481E96143BD747690E92DB7E444261E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD59BF430101A4C2080228ED133FC9737B0A030EE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3F2FECD4AC086FD3ABAE5D31881677BABA02B0D0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5E6BEDEB2CEF7A818BACE8D90DFE44BE5DAC4431* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>
struct Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ParseElementOnlyContent_LocalFrameU5BU5D_t611D26D044101E53D04B538C85A8214818CA615B* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Xml.HWStack
struct HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5  : public RuntimeObject
{
	// System.Object[] System.Xml.HWStack::stack
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___stack_0;
	// System.Int32 System.Xml.HWStack::growthRate
	int32_t ___growthRate_1;
	// System.Int32 System.Xml.HWStack::used
	int32_t ___used_2;
	// System.Int32 System.Xml.HWStack::size
	int32_t ___size_3;
	// System.Int32 System.Xml.HWStack::limit
	int32_t ___limit_4;
};

// System.Xml.PositionInfo
struct PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5  : public RuntimeObject
{
};

// System.Xml.Ref
struct Ref_t4AE893B7D0F8A6F31DFD7F8B30847A9050BA5AFF  : public RuntimeObject
{
};

// System.Xml.Schema.SchemaEntity
struct SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7  : public RuntimeObject
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaEntity::qname
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_0;
	// System.String System.Xml.Schema.SchemaEntity::url
	String_t* ___url_1;
	// System.String System.Xml.Schema.SchemaEntity::pubid
	String_t* ___pubid_2;
	// System.String System.Xml.Schema.SchemaEntity::text
	String_t* ___text_3;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaEntity::ndata
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___ndata_4;
	// System.Int32 System.Xml.Schema.SchemaEntity::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Xml.Schema.SchemaEntity::linePosition
	int32_t ___linePosition_6;
	// System.Boolean System.Xml.Schema.SchemaEntity::isParameter
	bool ___isParameter_7;
	// System.Boolean System.Xml.Schema.SchemaEntity::isExternal
	bool ___isExternal_8;
	// System.Boolean System.Xml.Schema.SchemaEntity::parsingInProgress
	bool ___parsingInProgress_9;
	// System.Boolean System.Xml.Schema.SchemaEntity::isDeclaredInExternal
	bool ___isDeclaredInExternal_10;
	// System.String System.Xml.Schema.SchemaEntity::baseURI
	String_t* ___baseURI_11;
	// System.String System.Xml.Schema.SchemaEntity::declaredURI
	String_t* ___declaredURI_12;
};

// System.Xml.Schema.SchemaNotation
struct SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269  : public RuntimeObject
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNotation::name
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name_0;
	// System.String System.Xml.Schema.SchemaNotation::systemLiteral
	String_t* ___systemLiteral_1;
	// System.String System.Xml.Schema.SchemaNotation::pubid
	String_t* ___pubid_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.XmlComplianceUtil
struct XmlComplianceUtil_t2CFC9BAF5E4FAFA4F8D3611AA3F20BD37B2F4ECA  : public RuntimeObject
{
};

// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode_0;
};

// System.Xml.XmlNodeReaderNavigator
struct XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNodeReaderNavigator::curNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___curNode_0;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderNavigator::elemNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___elemNode_1;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderNavigator::logNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___logNode_2;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::attrIndex
	int32_t ___attrIndex_3;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::logAttrIndex
	int32_t ___logAttrIndex_4;
	// System.Xml.XmlNameTable System.Xml.XmlNodeReaderNavigator::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_5;
	// System.Xml.XmlDocument System.Xml.XmlNodeReaderNavigator::doc
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc_6;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::nAttrInd
	int32_t ___nAttrInd_7;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::nDeclarationAttrCount
	int32_t ___nDeclarationAttrCount_8;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::nDocTypeAttrCount
	int32_t ___nDocTypeAttrCount_9;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::nLogLevel
	int32_t ___nLogLevel_10;
	// System.Int32 System.Xml.XmlNodeReaderNavigator::nLogAttrInd
	int32_t ___nLogAttrInd_11;
	// System.Boolean System.Xml.XmlNodeReaderNavigator::bLogOnAttrVal
	bool ___bLogOnAttrVal_12;
	// System.Boolean System.Xml.XmlNodeReaderNavigator::bCreatedOnAttribute
	bool ___bCreatedOnAttribute_13;
	// System.Xml.XmlNodeReaderNavigator/VirtualAttribute[] System.Xml.XmlNodeReaderNavigator::decNodeAttributes
	VirtualAttributeU5BU5D_t15B4DCB20E70B3A9A3E256B3EC01658ED46E0D83* ___decNodeAttributes_14;
	// System.Xml.XmlNodeReaderNavigator/VirtualAttribute[] System.Xml.XmlNodeReaderNavigator::docTypeNodeAttributes
	VirtualAttributeU5BU5D_t15B4DCB20E70B3A9A3E256B3EC01658ED46E0D83* ___docTypeNodeAttributes_15;
	// System.Boolean System.Xml.XmlNodeReaderNavigator::bOnAttrVal
	bool ___bOnAttrVal_16;
};

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9  : public RuntimeObject
{
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;
};

struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_StaticFields
{
	// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate System.Xml.XmlQualifiedName::hashCodeDelegate
	HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA* ___hashCodeDelegate_0;
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___Empty_4;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D  : public RuntimeObject
{
};

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNum
	int32_t ___lineNum_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePos
	int32_t ___linePos_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t55D593FB2AB45488862F2C620A08F84A422A7E93* ___namespaces_3;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___parent_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isProcessing
	bool ___isProcessing_5;
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// System.Xml.DtdParser/UndeclaredNotation
struct UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E  : public RuntimeObject
{
	// System.String System.Xml.DtdParser/UndeclaredNotation::name
	String_t* ___name_0;
	// System.Int32 System.Xml.DtdParser/UndeclaredNotation::lineNo
	int32_t ___lineNo_1;
	// System.Int32 System.Xml.DtdParser/UndeclaredNotation::linePos
	int32_t ___linePos_2;
	// System.Xml.DtdParser/UndeclaredNotation System.Xml.DtdParser/UndeclaredNotation::next
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* ___next_3;
};

// System.Xml.NameTable/Entry
struct Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC  : public RuntimeObject
{
	// System.String System.Xml.NameTable/Entry::str
	String_t* ___str_0;
	// System.Int32 System.Xml.NameTable/Entry::hashCode
	int32_t ___hashCode_1;
	// System.Xml.NameTable/Entry System.Xml.NameTable/Entry::next
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* ___next_2;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Xml.DtdParser/UndeclaredNotation>
struct Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Xml.LineInfo
struct LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 
{
	// System.Int32 System.Xml.LineInfo::lineNo
	int32_t ___lineNo_0;
	// System.Int32 System.Xml.LineInfo::linePos
	int32_t ___linePos_1;
};

// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46  : public XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8
{
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::entries
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* ___entries_0;
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_1;
	// System.Int32 System.Xml.NameTable::mask
	int32_t ___mask_2;
	// System.Int32 System.Xml.NameTable::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_3;
};

// System.Xml.ReaderPositionInfo
struct ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338  : public PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5
{
	// System.Xml.IXmlLineInfo System.Xml.ReaderPositionInfo::lineInfo
	RuntimeObject* ___lineInfo_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_2;
};

// System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties_2;
};

struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields
{
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject* ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CharProperties_1;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45* ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject* ___objLock_40;
	// System.Xml.XmlAttribute System.Xml.XmlDocument::namespaceXml
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* ___namespaceXml_41;
};

struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_44;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_45;
};

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next_1;
};

// System.Xml.XmlNotation
struct XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.String System.Xml.XmlNotation::publicId
	String_t* ___publicId_1;
	// System.String System.Xml.XmlNotation::systemId
	String_t* ___systemId_2;
	// System.String System.Xml.XmlNotation::name
	String_t* ___name_3;
};

// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id_6;
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_t35947D4DA687AA3C531135CEC5EBE7AB1C3EF821* ___annotation_7;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::moreAttributes
	XmlAttributeU5BU5D_tFC0CF817A6D2131D94AB6387E4EAE7D97B3FFC40* ___moreAttributes_8;
};

// System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 
{
	// System.String System.Xml.XmlNodeReaderNavigator/VirtualAttribute::name
	String_t* ___name_0;
	// System.String System.Xml.XmlNodeReaderNavigator/VirtualAttribute::value
	String_t* ___value_1;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke
{
	char* ___name_0;
	char* ___value_1;
};
// Native definition for COM marshalling of System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___value_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Xml.ReadState
struct ReadState_t1D77BBA83B1B8C9A73F295AA02C60CF3E3E43960 
{
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;
};

// System.Xml.Schema.SchemaType
struct SchemaType_tEA68C27A0E1DF3AA694B9C8C3025FEDF4D713711 
{
	// System.Int32 System.Xml.Schema.SchemaType::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.Xml.ValidateNames
struct ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598  : public RuntimeObject
{
};

struct ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields
{
	// System.Xml.XmlCharType System.Xml.ValidateNames::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_0;
};

// System.Xml.XPath.XPathNodeType
struct XPathNodeType_t9B616C7E0F9C34B8770B16D681C126408C367E6B 
{
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___2;
};

// System.Xml.XmlCharacterData
struct XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;
};

// System.Xml.XmlNamespaceScope
struct XmlNamespaceScope_t9EB2A1CEC55CBA30A4612AD7EAAAF4106B96AD01 
{
	// System.Int32 System.Xml.XmlNamespaceScope::value__
	int32_t ___value___2;
};

// System.Xml.XmlNodeChangedAction
struct XmlNodeChangedAction_tDF172D469BF61A7AF723976395070B130A65A233 
{
	// System.Int32 System.Xml.XmlNodeChangedAction::value__
	int32_t ___value___2;
};

// System.Xml.XmlNodeType
struct XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95 
{
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;
};

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_2;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_3;
};

// System.Xml.Schema.XmlSchemaContentType
struct XmlSchemaContentType_t30F65D76DF78B49262A67031AF1B166EDF032600 
{
	// System.Int32 System.Xml.Schema.XmlSchemaContentType::value__
	int32_t ___value___2;
};

// System.Xml.Schema.XmlSchemaDerivationMethod
struct XmlSchemaDerivationMethod_t079141185E69D21187DC6E38FF803DFBDC9A173D 
{
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___2;
};

// System.Xml.Schema.XmlSeverityType
struct XmlSeverityType_t561D2CF1B3134CC79EEAB254D53D878EC45F6071 
{
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___2;
};

// System.Xml.XmlTokenizedType
struct XmlTokenizedType_t30C36B69325D7EDF02900F00EB744EE6BA8D19E4 
{
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___2;
};

// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_tCA027FC382F4E2DBDF63CB305D942DDFC072E064 
{
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;
};

// System.Xml.XmlUnspecifiedAttribute
struct XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC  : public XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18
{
	// System.Boolean System.Xml.XmlUnspecifiedAttribute::fSpecified
	bool ___fSpecified_3;
};

// System.Xml.DtdParser/LiteralType
struct LiteralType_t77DF27422EE20D91694854252FB42DF8D635CAC9 
{
	// System.Int32 System.Xml.DtdParser/LiteralType::value__
	int32_t ___value___2;
};

// System.Xml.DtdParser/ScanningFunction
struct ScanningFunction_t3E9E513CAC96C832C616686354E85B8D130C12FF 
{
	// System.Int32 System.Xml.DtdParser/ScanningFunction::value__
	int32_t ___value___2;
};

// System.Xml.DtdParser/Token
struct Token_t03BF19B04D644DEBAE5FA9A923BFBAE931399185 
{
	// System.Int32 System.Xml.DtdParser/Token::value__
	int32_t ___value___2;
};

// System.Xml.ReadContentAsBinaryHelper/State
struct State_tFAC725C130DC954C0F91FADA137D7C3710F1A7E0 
{
	// System.Int32 System.Xml.ReadContentAsBinaryHelper/State::value__
	int32_t ___value___2;
};

// System.Xml.Schema.SchemaAttDef/Reserve
struct Reserve_tDAED14B521B7F6339D31BDE0156E370E47AB49BF 
{
	// System.Int32 System.Xml.Schema.SchemaAttDef/Reserve::value__
	int32_t ___value___2;
};

// System.Xml.Schema.SchemaDeclBase/Use
struct Use_tC7E0CA6B6AE6F37FB36AA9911EA2B1829AC18EAC 
{
	// System.Int32 System.Xml.Schema.SchemaDeclBase/Use::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Xml.Schema.ContentValidator
struct ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE  : public RuntimeObject
{
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.ContentValidator::contentType
	int32_t ___contentType_0;
	// System.Boolean System.Xml.Schema.ContentValidator::isOpen
	bool ___isOpen_1;
	// System.Boolean System.Xml.Schema.ContentValidator::isEmptiable
	bool ___isEmptiable_2;
};

struct ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_StaticFields
{
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Empty
	ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___Empty_3;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::TextOnly
	ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___TextOnly_4;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Mixed
	ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___Mixed_5;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.ContentValidator::Any
	ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___Any_6;
};

// System.Xml.DtdParser
struct DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53  : public RuntimeObject
{
	// System.Xml.IDtdParserAdapter System.Xml.DtdParser::readerAdapter
	RuntimeObject* ___readerAdapter_0;
	// System.Xml.IDtdParserAdapterWithValidation System.Xml.DtdParser::readerAdapterWithValidation
	RuntimeObject* ___readerAdapterWithValidation_1;
	// System.Xml.XmlNameTable System.Xml.DtdParser::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_2;
	// System.Xml.Schema.SchemaInfo System.Xml.DtdParser::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_3;
	// System.Xml.XmlCharType System.Xml.DtdParser::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_4;
	// System.String System.Xml.DtdParser::systemId
	String_t* ___systemId_5;
	// System.String System.Xml.DtdParser::publicId
	String_t* ___publicId_6;
	// System.Boolean System.Xml.DtdParser::normalize
	bool ___normalize_7;
	// System.Boolean System.Xml.DtdParser::validate
	bool ___validate_8;
	// System.Boolean System.Xml.DtdParser::supportNamespaces
	bool ___supportNamespaces_9;
	// System.Boolean System.Xml.DtdParser::v1Compat
	bool ___v1Compat_10;
	// System.Char[] System.Xml.DtdParser::chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars_11;
	// System.Int32 System.Xml.DtdParser::charsUsed
	int32_t ___charsUsed_12;
	// System.Int32 System.Xml.DtdParser::curPos
	int32_t ___curPos_13;
	// System.Xml.DtdParser/ScanningFunction System.Xml.DtdParser::scanningFunction
	int32_t ___scanningFunction_14;
	// System.Xml.DtdParser/ScanningFunction System.Xml.DtdParser::nextScaningFunction
	int32_t ___nextScaningFunction_15;
	// System.Xml.DtdParser/ScanningFunction System.Xml.DtdParser::savedScanningFunction
	int32_t ___savedScanningFunction_16;
	// System.Boolean System.Xml.DtdParser::whitespaceSeen
	bool ___whitespaceSeen_17;
	// System.Int32 System.Xml.DtdParser::tokenStartPos
	int32_t ___tokenStartPos_18;
	// System.Int32 System.Xml.DtdParser::colonPos
	int32_t ___colonPos_19;
	// System.Text.StringBuilder System.Xml.DtdParser::internalSubsetValueSb
	StringBuilder_t* ___internalSubsetValueSb_20;
	// System.Int32 System.Xml.DtdParser::externalEntitiesDepth
	int32_t ___externalEntitiesDepth_21;
	// System.Int32 System.Xml.DtdParser::currentEntityId
	int32_t ___currentEntityId_22;
	// System.Boolean System.Xml.DtdParser::freeFloatingDtd
	bool ___freeFloatingDtd_23;
	// System.Boolean System.Xml.DtdParser::hasFreeFloatingInternalSubset
	bool ___hasFreeFloatingInternalSubset_24;
	// System.Text.StringBuilder System.Xml.DtdParser::stringBuilder
	StringBuilder_t* ___stringBuilder_25;
	// System.Int32 System.Xml.DtdParser::condSectionDepth
	int32_t ___condSectionDepth_26;
	// System.Xml.LineInfo System.Xml.DtdParser::literalLineInfo
	LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 ___literalLineInfo_27;
	// System.Char System.Xml.DtdParser::literalQuoteChar
	Il2CppChar ___literalQuoteChar_28;
	// System.String System.Xml.DtdParser::documentBaseUri
	String_t* ___documentBaseUri_29;
	// System.String System.Xml.DtdParser::externalDtdBaseUri
	String_t* ___externalDtdBaseUri_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation> System.Xml.DtdParser::undeclaredNotations
	Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* ___undeclaredNotations_31;
	// System.Int32[] System.Xml.DtdParser::condSectionEntityIds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___condSectionEntityIds_32;
};

// System.Xml.ReadContentAsBinaryHelper
struct ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897  : public RuntimeObject
{
	// System.Xml.XmlReader System.Xml.ReadContentAsBinaryHelper::reader
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader_0;
	// System.Xml.ReadContentAsBinaryHelper/State System.Xml.ReadContentAsBinaryHelper::state
	int32_t ___state_1;
	// System.Int32 System.Xml.ReadContentAsBinaryHelper::valueOffset
	int32_t ___valueOffset_2;
	// System.Boolean System.Xml.ReadContentAsBinaryHelper::isEnd
	bool ___isEnd_3;
	// System.Boolean System.Xml.ReadContentAsBinaryHelper::canReadValueChunk
	bool ___canReadValueChunk_4;
	// System.Char[] System.Xml.ReadContentAsBinaryHelper::valueChunk
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___valueChunk_5;
	// System.Int32 System.Xml.ReadContentAsBinaryHelper::valueChunkLength
	int32_t ___valueChunkLength_6;
	// System.Xml.IncrementalReadDecoder System.Xml.ReadContentAsBinaryHelper::decoder
	IncrementalReadDecoder_t55EB8A2FB2A5FFCB1B68AE7F784C4E00DCE1E55B* ___decoder_7;
	// System.Xml.Base64Decoder System.Xml.ReadContentAsBinaryHelper::base64Decoder
	Base64Decoder_t1126DFB7A4962925EEAF46C6A4D676CBB1EE66F5* ___base64Decoder_8;
	// System.Xml.BinHexDecoder System.Xml.ReadContentAsBinaryHelper::binHexDecoder
	BinHexDecoder_tB77546D79B7899F37DF674F845BC5FB69A8EF02E* ___binHexDecoder_9;
};

// System.Xml.Schema.SchemaDeclBase
struct SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B  : public RuntimeObject
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaDeclBase::name
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name_0;
	// System.String System.Xml.Schema.SchemaDeclBase::prefix
	String_t* ___prefix_1;
	// System.Boolean System.Xml.Schema.SchemaDeclBase::isDeclaredInExternal
	bool ___isDeclaredInExternal_2;
	// System.Xml.Schema.SchemaDeclBase/Use System.Xml.Schema.SchemaDeclBase::presence
	int32_t ___presence_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.SchemaDeclBase::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_4;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.SchemaDeclBase::datatype
	XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* ___datatype_5;
	// System.String System.Xml.Schema.SchemaDeclBase::defaultValueRaw
	String_t* ___defaultValueRaw_6;
	// System.Object System.Xml.Schema.SchemaDeclBase::defaultValueTyped
	RuntimeObject* ___defaultValueTyped_7;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::maxLength
	int64_t ___maxLength_8;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::minLength
	int64_t ___minLength_9;
	// System.Collections.Generic.List`1<System.String> System.Xml.Schema.SchemaDeclBase::values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___values_10;
};

// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::elementDecls
	Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* ___elementDecls_0;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::undeclaredElementDecls
	Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* ___undeclaredElementDecls_1;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::generalEntities
	Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* ___generalEntities_2;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::parameterEntities
	Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* ___parameterEntities_3;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaInfo::docTypeName
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___docTypeName_4;
	// System.String System.Xml.Schema.SchemaInfo::internalDtdSubset
	String_t* ___internalDtdSubset_5;
	// System.Boolean System.Xml.Schema.SchemaInfo::hasNonCDataAttributes
	bool ___hasNonCDataAttributes_6;
	// System.Boolean System.Xml.Schema.SchemaInfo::hasDefaultAttributes
	bool ___hasDefaultAttributes_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Xml.Schema.SchemaInfo::targetNamespaces
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___targetNamespaces_8;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> System.Xml.Schema.SchemaInfo::attributeDecls
	Dictionary_2_tB85C1B2FFF985BA01AD2B7199C083B43C1476CC1* ___attributeDecls_9;
	// System.Int32 System.Xml.Schema.SchemaInfo::errorCount
	int32_t ___errorCount_10;
	// System.Xml.Schema.SchemaType System.Xml.Schema.SchemaInfo::schemaType
	int32_t ___schemaType_11;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::elementDeclsByType
	Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* ___elementDeclsByType_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> System.Xml.Schema.SchemaInfo::notations
	Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* ___notations_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Xml.XmlNodeChangedAction System.Xml.XmlNodeChangedEventArgs::action
	int32_t ___action_1;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::node
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node_2;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::oldParent
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___oldParent_3;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::newParent
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___newParent_4;
	// System.String System.Xml.XmlNodeChangedEventArgs::oldValue
	String_t* ___oldValue_5;
	// System.String System.Xml.XmlNodeChangedEventArgs::newValue
	String_t* ___newValue_6;
};

// System.Xml.XmlNodeReader
struct XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B  : public XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD
{
	// System.Xml.XmlNodeReaderNavigator System.Xml.XmlNodeReader::readerNav
	XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* ___readerNav_3;
	// System.Xml.XmlNodeType System.Xml.XmlNodeReader::nodeType
	int32_t ___nodeType_4;
	// System.Int32 System.Xml.XmlNodeReader::curDepth
	int32_t ___curDepth_5;
	// System.Xml.ReadState System.Xml.XmlNodeReader::readState
	int32_t ___readState_6;
	// System.Boolean System.Xml.XmlNodeReader::fEOF
	bool ___fEOF_7;
	// System.Boolean System.Xml.XmlNodeReader::bResolveEntity
	bool ___bResolveEntity_8;
	// System.Boolean System.Xml.XmlNodeReader::bStartFromDocument
	bool ___bStartFromDocument_9;
	// System.Boolean System.Xml.XmlNodeReader::bInReadBinary
	bool ___bInReadBinary_10;
	// System.Xml.ReadContentAsBinaryHelper System.Xml.XmlNodeReader::readBinaryHelper
	ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* ___readBinaryHelper_11;
};

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF  : public XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04
{
	// System.String System.Xml.Schema.XmlSchemaType::name
	String_t* ___name_9;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final_10;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::derivedBy
	int32_t ___derivedBy_11;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::baseSchemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___baseSchemaType_12;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::datatype
	XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* ___datatype_13;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::finalResolved
	int32_t ___finalResolved_14;
	// System.Xml.Schema.SchemaElementDecl modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::elementDecl
	SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___elementDecl_15;
	// System.Xml.XmlQualifiedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::qname
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_16;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::redefined
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___redefined_17;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaType::contentType
	int32_t ___contentType_18;
};

// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlText
struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlWhitespace
struct XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame
struct ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8  : public RuntimeObject
{
	// System.Int32 System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame::startParenEntityId
	int32_t ___startParenEntityId_0;
	// System.Xml.DtdParser/Token System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame::parsingSchema
	int32_t ___parsingSchema_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Xml.Schema.ParticleContentValidator
struct ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF  : public ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE
{
	// System.Xml.Schema.SymbolsDictionary System.Xml.Schema.ParticleContentValidator::symbols
	SymbolsDictionary_t6294BD40672E01F1C87B524AE88C84A267C78CF3* ___symbols_7;
	// System.Xml.Schema.Positions System.Xml.Schema.ParticleContentValidator::positions
	Positions_tA1718BCD59D1E183041E480D7602A5DF38182B4B* ___positions_8;
	// System.Collections.Stack System.Xml.Schema.ParticleContentValidator::stack
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* ___stack_9;
	// System.Xml.Schema.SyntaxTreeNode System.Xml.Schema.ParticleContentValidator::contentNode
	SyntaxTreeNode_t1165A00492617EF072B11DECC26AA0AA3BF72EBE* ___contentNode_10;
	// System.Boolean System.Xml.Schema.ParticleContentValidator::isPartial
	bool ___isPartial_11;
	// System.Int32 System.Xml.Schema.ParticleContentValidator::minMaxNodesCount
	int32_t ___minMaxNodesCount_12;
	// System.Boolean System.Xml.Schema.ParticleContentValidator::enableUpaCheck
	bool ___enableUpaCheck_13;
};

// System.Xml.Schema.SchemaAttDef
struct SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553  : public SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B
{
	// System.String System.Xml.Schema.SchemaAttDef::defExpanded
	String_t* ___defExpanded_11;
	// System.Int32 System.Xml.Schema.SchemaAttDef::lineNum
	int32_t ___lineNum_12;
	// System.Int32 System.Xml.Schema.SchemaAttDef::linePos
	int32_t ___linePos_13;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLineNum
	int32_t ___valueLineNum_14;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLinePos
	int32_t ___valueLinePos_15;
	// System.Xml.Schema.SchemaAttDef/Reserve System.Xml.Schema.SchemaAttDef::reserved
	int32_t ___reserved_16;
	// System.Boolean System.Xml.Schema.SchemaAttDef::defaultValueChecked
	bool ___defaultValueChecked_17;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.SchemaAttDef::schemaAttribute
	XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F* ___schemaAttribute_18;
};

struct SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553_StaticFields
{
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.SchemaAttDef::Empty
	SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___Empty_19;
};

// System.Xml.Schema.SchemaElementDecl
struct SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD  : public SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B
{
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> System.Xml.Schema.SchemaElementDecl::attdefs
	Dictionary_2_tB85C1B2FFF985BA01AD2B7199C083B43C1476CC1* ___attdefs_11;
	// System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo> System.Xml.Schema.SchemaElementDecl::defaultAttdefs
	List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58* ___defaultAttdefs_12;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isIdDeclared
	bool ___isIdDeclared_13;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::hasNonCDataAttribute
	bool ___hasNonCDataAttribute_14;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isAbstract
	bool ___isAbstract_15;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isNillable
	bool ___isNillable_16;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::hasRequiredAttribute
	bool ___hasRequiredAttribute_17;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isNotationDeclared
	bool ___isNotationDeclared_18;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName> System.Xml.Schema.SchemaElementDecl::prohibitedAttributes
	Dictionary_2_t8E385BAD05584AB244D10E6FAAA2C60FB9BA5F64* ___prohibitedAttributes_19;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.SchemaElementDecl::contentValidator
	ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___contentValidator_20;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.SchemaElementDecl::anyAttribute
	XmlSchemaAnyAttribute_t2674CD673C9358AEDF1F318A8CF5DE9EB01AF601* ___anyAttribute_21;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.SchemaElementDecl::block
	int32_t ___block_22;
	// System.Xml.Schema.CompiledIdentityConstraint[] System.Xml.Schema.SchemaElementDecl::constraints
	CompiledIdentityConstraintU5BU5D_tA8E35C25853FEF33AAE27549EE1E30F039429D16* ___constraints_23;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.SchemaElementDecl::schemaElement
	XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970* ___schemaElement_24;
};

struct SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_StaticFields
{
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.SchemaElementDecl::Empty
	SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___Empty_25;
};

// System.Xml.XmlException
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Xml.XmlException::res
	String_t* ___res_18;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args_19;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_20;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_21;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_22;
	// System.String System.Xml.XmlException::message
	String_t* ___message_23;
};

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Xml.Schema.XmlSchemaException::res
	String_t* ___res_18;
	// System.String[] System.Xml.Schema.XmlSchemaException::args
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args_19;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_20;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_21;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_22;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceSchemaObject
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___sourceSchemaObject_23;
	// System.String System.Xml.Schema.XmlSchemaException::message
	String_t* ___message_24;
};

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8  : public XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF
{
	// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::content
	XmlSchemaSimpleTypeContent_t84C9B4F059E687FBF7845373F5A6B2795F982091* ___content_19;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* m_Items[1];

	inline Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void System.Xml.XmlNodeReaderNavigator/VirtualAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAttribute__ctor_mEE4086B6E26EB486E3C66CB620FB0451E6215622 (VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReader__ctor_m4E3A6201CC692B2B2F05ED58652056E893995477 (XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator__ctor_m9E329D9B1DC0A5B9ED88F9B5122652CDE1A5AE3F (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReader::IsInReadingStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_Name_m866DDA99C93C273E0CA59CB421BED78F424197D9 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_LocalName_m163985EBB7CF9CDF623AF1BAE14288BBC3322042 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_NamespaceURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_NamespaceURI_m8894DBC5068E141F84F33E657F06E2DABBE04114 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_Prefix_m2B64A6F5DF7B2ACA67005D2DAF8AE207F0323C51 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_Value_mA303F30826D5FD934B6631E9264A3C67794A5CAF (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::get_BaseURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_get_BaseURI_mC5A1EBC076E72B5E55D9C0521D39161B51262835 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::get_IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_get_IsEmptyElement_mE0709052E4D88AC1EFAE118FAEDE9E61A9E3674D (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_get_IsDefault_mFE55F04E1CAC6B5BF60904684FD5FBE7A5F3AFF4 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderNavigator::get_SchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeReaderNavigator_get_SchemaInfo_mB8FE3DA04729A9915ADCFD6D09E11500DDA39986 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlNodeReaderNavigator::get_AttributeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReaderNavigator_get_AttributeCount_mBE5B6B6A3C82FF2E9726F36B3A98B198E5DA1E4F (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::GetAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_GetAttribute_m7D7D34AEE4FC4303F2A7283A481C67489EE46A11 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::GetAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_GetAttribute_mC74FB78B251DCC686492D25A927D0BC6FBB3394C (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::GetAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_GetAttribute_mEC9A5B5635D6BB1ADFAC4CCA01F76289EDDF8382 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t ___attributeIndex0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::ResetMove(System.Int32&,System.Xml.XmlNodeType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t* ___level0, int32_t* ___nt1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToAttribute_mFA4DED33FC5D613E80FB2C0410E83C5771DE7EDA (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderNavigator::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReader::FinishReadBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::RollBackMove(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t* ___level0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToAttribute_mA3415D672AE7BF5BCB52436B5E40FA4F6BC6EAAF (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___name0, String_t* ___namespaceURI1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::MoveToAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator_MoveToAttribute_m3885BC255D4054C9DBCC66D5AE71F54400E1C7F6 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t ___attributeIndex0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::LogMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator_LogMove_m3C5C982ACE97D18B0CF05B08D26D7C85A1C10A19 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReaderNavigator::ResetToAttribute(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReaderNavigator_ResetToAttribute_mE795356BC813DBF5DBEAD105C9C9A138F6613EDC (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t* ___level0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToNextAttribute(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToNextAttribute_m17D4E3620C4FCA2AE7CFE15E83DE03CC7D8FD9AF (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t* ___level0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToElement_m9E428A600D7BE7A1526B16E7D8F7907609D90FE8 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReader::Read(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_Read_m4D70EA1E8CBBE7C4272B282C463DB63B0505A517 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReader::ReadNextNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadNextNode_m2349843A9B23E4174C7CE8512CA99D3A80A2782B (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReader::ReSetReadingMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_ReSetReadingMarks_m1111EC7F4DD055A8EA4FB0B88F408E0FED6610BF (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::get_CreatedOnAttribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_get_CreatedOnAttribute_m0CC89DD9AB3B1EBB471932E038EA6ECDC09BC12B_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToFirstChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToFirstChild_mCBE902AF29A259D1A0FAB5673485523D44F43E1F (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReader::ReadForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadForward_m94A7362B23F60E5694A81E0891BCC9B6968D7673 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNodeReader::SetEndOfFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_SetEndOfFile_mAEEEDE22550F7AFE001C9EB1E7EFCDF8311C5188 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReader::ReadAtZeroLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadAtZeroLevel_m912D5CB04F4E4B38316D3742C8B9980B833BE5CE (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToNext_mD5E1547A646BF37C514165D107D5616DFC66C075 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::MoveToParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_MoveToParent_m96B16F99BD1D84568FDB3482AA704651C68C9744 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderNavigator::get_NameTable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlNodeReaderNavigator_get_NameTable_m4C906E955567E27602C24A7ECEB72818E97D7626_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_LookupNamespace_m38553FC4B8A93D4D5FEA14339125BA60A7057938 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___prefix0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlNodeReaderNavigator::ReadAttributeValue(System.Int32&,System.Boolean&,System.Xml.XmlNodeType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_ReadAttributeValue_m54893BB123B90C9FD167B7CA8A0C7D93D56B4DFF (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t* ___level0, bool* ___bResolveEntity1, int32_t* ___nt2, const RuntimeMethod* method) ;
// System.Xml.ReadContentAsBinaryHelper System.Xml.ReadContentAsBinaryHelper::CreateOrReset(System.Xml.ReadContentAsBinaryHelper,System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* ReadContentAsBinaryHelper_CreateOrReset_m318C0AAED68429D2474FD3E397C60C79EF0F8A96 (ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* ___helper0, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader1, const RuntimeMethod* method) ;
// System.Int32 System.Xml.ReadContentAsBinaryHelper::ReadContentAsBase64(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadContentAsBinaryHelper_ReadContentAsBase64_mD3382349F48970D072DFBCD4607C3ED972FF2CC3 (ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.Xml.ReadContentAsBinaryHelper::ReadContentAsBinHex(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadContentAsBinaryHelper_ReadContentAsBinHex_mADADE6373FD0BED7439FA4B9EC8BEE11FEF89BBD (ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Xml.ReadContentAsBinaryHelper::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadContentAsBinaryHelper_Finish_m56919E9B4A660955115D1C0680C0FF772DC649F9 (ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.XmlNodeReaderNavigator::GetNamespacesInScope(System.Xml.XmlNamespaceScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeReaderNavigator_GetNamespacesInScope_mFA4DA304A8430D6826EE57355AE3E60801CD71CF (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, int32_t ___scope0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::LookupPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_LookupPrefix_m9811B8FC4073E8937486E7FF5441D05D4E05B7FB (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___namespaceName0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlNodeReaderNavigator::DefaultLookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReaderNavigator_DefaultLookupNamespace_m35DEB6CAA8E91414DC2AF8559F5686C1E6AA9804 (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, String_t* ___prefix0, const RuntimeMethod* method) ;
// System.Xml.XmlDocument System.Xml.XmlNodeReaderNavigator::get_Document()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* XmlNodeReaderNavigator_get_Document_mF1C26CBEAA6E73F0CD108F8BB23ACEB63AB6D28D_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::get_DtdSchemaInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* XmlDocument_get_DtdSchemaInfo_mF52E9F32AB9D1914DBC6D91A8277AE843B6E1E6E_inline (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode__ctor_m4EBED07EBE4C8D8191BE58A23594E381A8E43DCA (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc0, const RuntimeMethod* method) ;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlLinkedNode__ctor_mBAF93AD97DBA998E16940918D8F7EF3E585C7633 (XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlProcessingInstruction::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_set_Data_m0B021604CB3E04C6B776A8E70E31D658E0BBB6F8 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharacterData__ctor_m8B84C0BD8FF7329F4C5190230FA2495D808B34AF (XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B* __this, String_t* ___data0, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlDocument::get_IsLoading()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlDocument_get_IsLoading_mD97F2D54DE1BD3B4F8B496F4D8D31C061FA8A52D_inline (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharacterData::CheckOnData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharacterData_CheckOnData_mD20947276C3B576599E015E4E19C0F2779862FBA (XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_ParentNode_mF576AC1CF834069B79BF32E497BB1A05E3E4AF63 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharacterData::DecideXPNodeTypeForTextNodes(System.Xml.XmlNode,System.Xml.XPath.XPathNodeType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharacterData_DecideXPNodeTypeForTextNodes_m5E3AA296A84778246A1C441AF0F75C2E1F0DF898 (XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, int32_t* ___xnt1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText__ctor_m8FFB8DDBB2C9013F10FD94A1573DCF6A2F104059 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, String_t* ___strData0, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlUnspecifiedAttribute::SetSpecified(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_SetSpecified_m1CF67FF3E90E62DC5B0983B8DE91B6E95228509B_inline (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, bool ___f0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute__ctor_m11339257CF537ACBDA1BC5ED16CD45BF0C318971 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc3, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlAttribute::set_InnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute_set_InnerText_m8C2905157BABDF6E243AE718524293A57422A9D2 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlAttribute_RemoveChild_m81EEA6827E61E919CF45D3E4157ED643D3B81D18 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___oldChild0, const RuntimeMethod* method) ;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlAttribute_AppendChild_mF31F0A172D904DEE1DF58B25093DCCF9E0C4CC75 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___newChild0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAttribute_WriteTo_mD4DF594D7278F46E44DF3CC46453309F3D270578 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.HWStack::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack__ctor_m99FCAA41A47F1804002247BD900432EB254448EC (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, int32_t ___GrowthRate0, int32_t ___limit1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mD7C8E5B35C43BCEDBB41ADC035A38088DFE88A87 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___res0, String_t* ___arg1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.HWStack::.ctor(System.Object[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack__ctor_m2F8F3305E714F61B045C8552EB4D49C6F3616484 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___stack0, int32_t ___growthRate1, int32_t ___used2, int32_t ___size3, const RuntimeMethod* method) ;
// System.Void System.Xml.ReaderPositionInfo::.ctor(System.Xml.IXmlLineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderPositionInfo__ctor_m7D560CD9AF19A8C7287A728AE2245D444B16CBD4 (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* __this, RuntimeObject* ___lineInfo0, const RuntimeMethod* method) ;
// System.Void System.Xml.PositionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionInfo__ctor_mAF0BC66656F80EFD0380EABD218CED5AABA13012 (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.LineInfo::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0 (LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method) ;
// System.Void System.Xml.LineInfo::Set(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfo_Set_m5D59B42332EDBA296FA9AED5CF63D8BECC18214E (LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNameTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNameTable__ctor_m165D6C26354AF163FA559778C1998B36A8A5FBF6 (XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276 (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_AddEntry_mF259DCB5A89DFE81744AF039838B918F52020C5F (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.NameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameTable_TextEquals_mB56344E2C4832FFE2E398E446B1742A921FCF87A (String_t* ___str10, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Xml.NameTable/Entry::.ctor(System.String,System.Int32,System.Xml.NameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m659BC03FEAA3AE1874FE82AD8740CCDEAE1CDFED (Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* __this, String_t* ___str0, int32_t ___hashCode1, Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* ___next2, const RuntimeMethod* method) ;
// System.Void System.Xml.NameTable::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable_Grow_m34F300598474A63CEA90D7F7A71C6F9EB536D5B2 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) ;
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD (const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser__ctor_m4E3B38D8F814505EEBDC983BE9A9AAE448F9F279 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaInfo__ctor_mF2778D9A328648120368A2B00DC41949E52E0963 (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaInfo::set_SchemaType(System.Xml.Schema.SchemaType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_SchemaType_m00F5B5934AC3BDDD71AAEB8CA3E307451FA51229_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Initialize(System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Initialize_m0EBA9112535360FF3CB54D32A2F693231023460F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, RuntimeObject* ___readerAdapter0, const RuntimeMethod* method) ;
// System.ArgumentException System.Xml.XmlConvert::CreateInvalidNameArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* XmlConvert_CreateInvalidNameArgumentException_m0B235FA7E46AD1CFB389413509E11D59B6BA9AA2 (String_t* ___name0, String_t* ___argumentName1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyName_m5A3D4679962414F4932E7B0C480BDD7D732F52B1 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m2DD62019A76524587CC7204E1AB903CDAADA6545 (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaInfo::set_DocTypeName(System.Xml.XmlQualifiedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_DocTypeName_mB87F85301E58DCCDD63697CE790A4417A07A54B0_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlCharType::IsOnlyCharData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsOnlyCharData_m5BFEFD55C4578A0117D1ED3305ACF4C062DCE9D3 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ThrowInvalidChar(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowInvalidChar_mD2161D4741D7A76279757B830E981723BEB64CA3 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___data1, int32_t ___invCharPos2, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlCharType::IsPublicId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Parse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Parse_m251123EFA9598E4851882EB21A72EDF13E3D6EC6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___saveInternalSubset0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::InitializeFreeFloatingDtd(System.String,System.String,System.String,System.String,System.String,System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_InitializeFreeFloatingDtd_m1508B91CB75E55A064D4DC2EC796EF2B35785B13 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___baseUri0, String_t* ___docTypeName1, String_t* ___publicId2, String_t* ___systemId3, String_t* ___internalSubset4, RuntimeObject* ___adapter5, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseFreeFloatingDtd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseFreeFloatingDtd_mD311D1717B2C75FCD8301944583EC6872085E967 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseInDocumentDtd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseInDocumentDtd_m152ABA7579FAFD24B3F745D24B25C5210C584668 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___saveInternalSubset0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaInfo::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaInfo_Finish_m2819E8B404C31776D077502515C4BA78BD02F569 (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>::get_Values()
inline ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089* Dictionary_2_get_Values_mD416BBB037BD250D7C597A72EB36BB50CD033DC6 (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089* (*) (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Xml.DtdParser/UndeclaredNotation>::GetEnumerator()
inline Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060 ValueCollection_GetEnumerator_mABC01CB19F774F69E736CCAB8E79BFEFC3702C8C (ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060 (*) (ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Xml.DtdParser/UndeclaredNotation>::Dispose()
inline void Enumerator_Dispose_m8ED1DCC22330B97D3DD70AD4094E53E84535AF06 (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Xml.DtdParser/UndeclaredNotation>::get_Current()
inline UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* Enumerator_get_Current_mBB1E0A2F071C3C58AD52810FA1C157F300EB85FF_inline (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060* __this, const RuntimeMethod* method)
{
	return ((  UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* (*) (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.String System.Xml.DtdParser::get_BaseUriStr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* __this, String_t* ___res0, String_t* ___arg1, String_t* ___sourceUri2, int32_t ___lineNumber3, int32_t ___linePosition4, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Xml.Schema.XmlSeverityType,System.Xml.Schema.XmlSchemaException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___severity0, XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* ___e1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Xml.DtdParser/UndeclaredNotation>::MoveNext()
inline bool Enumerator_MoveNext_m3D12963AA9A1E78352AD17756F85E7F8E0281CAA (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Xml.DtdParser::LoadParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::GetToken(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___needWhiteSpace0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::OnUnexpectedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.XmlQualifiedName System.Xml.DtdParser::GetNameQualified(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___canHavePrefix0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseExternalId(System.Xml.DtdParser/Token,System.Xml.DtdParser/Token,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseExternalId_m2B6C7C539D6B9BAA81D2D39DD40915B0F8EE1680 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___idTokenType0, int32_t ___declType1, String_t** ___publicId2, String_t** ___systemId3, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::SaveParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseInternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseInternalSubset_m4CA8AEDF9E87543186DF6F820A4F1CB15F5EA0A8 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseExternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseExternalSubset_m32ACD9461EF71173C98644D59A4E0A82576D98B4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseSubset_mDF6AA95DF1D5EFF0A66211B1CD546977176D66B4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseAttlistDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistDecl_m56790F6B55821549A8340D00586BA134FFDA28C1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseElementDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementDecl_m04A22275D2342422E13554DD1FEA56FEDF7F7CA1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseEntityDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseEntityDecl_mDDF946172429F7DBFB301FE5F113084713B48B57 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseNotationDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseNotationDecl_mBCCE845466278E35DDADC504075E85C358FA9EC1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseComment_mAAB19E9100AB4E6929F69BF9895CFE5430B39E96 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParsePI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParsePI_m78FD95C2338F0BCF9535C89A24CEFB6F0802E4C9 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::get_ParsingInternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseCondSection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseCondSection_m6DF82F4650A08BC0E920DEA62D346383C57C677D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Int32,System.Xml.Schema.XmlSeverityType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, int32_t ___severity1, String_t* ___code2, String_t* ___arg3, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::SaveParsingBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SaveParsingBuffer_m002F46CF1017FA4228DEAE75ABD891C78F2505AF (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___internalSubsetValueEndPos0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaInfo::set_InternalDtdSubset(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_InternalDtdSubset_m8352C52C8065FDD87C562CC9AC5CC098B7697CD5_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ThrowUnexpectedToken(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___expectedToken1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::get_ElementDecls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* SchemaInfo_get_ElementDecls_m238E5681BECA397E7010F7BEFBAC2D0FBEC43BD7_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::get_UndeclaredElementDecls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Namespace_m0CAE4A651EF1CA6F0EB657C83608A796038A2615_inline (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaElementDecl::.ctor(System.Xml.XmlQualifiedName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaElementDecl__ctor_m37D4F8688A2FCD66D64D442660B6E6BB0F30E70C (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name0, String_t* ___prefix1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>::Add(TKey,TValue)
inline void Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3 (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Xml.Schema.SchemaAttDef::.ctor(System.Xml.XmlQualifiedName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaAttDef__ctor_mCE4B0F520716988FF7D1285FF25B92060D0DA76C (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name0, String_t* ___prefix1, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaDeclBase::set_IsDeclaredInExternal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_IsDeclaredInExternal_m3F57DA2AD9DBAC1C431293C53E4E052A8E915D96_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Xml.DtdParser::get_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_LineNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_LineNumber_mA7F00D8F6FAB9626DBF9444371C2D5B0EF99E07E_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Xml.DtdParser::get_LinePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_LinePosition(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_LinePosition_mC3B43012E31CCE6784CCFE1B9FE8CC15B0C7E584_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.SchemaDeclBase::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SchemaDeclBase_get_Prefix_mE72A285F12958A0C40F8CDEDA2838B3A09233455 (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) ;
// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaDeclBase::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlQualifiedName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_Reserved(System.Xml.Schema.SchemaAttDef/Reserve)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.SchemaDeclBase::get_Datatype()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.SchemaAttDef::get_LineNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SchemaAttDef_get_LineNumber_m8A9494C90F0B132F2A84AF7203FE074046529A1C_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.SchemaAttDef::get_LinePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SchemaAttDef_get_LinePosition_m192E37BC23204F940B4BC5BBBCC248EEAE4481D1_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Throw(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___res0, String_t* ___arg1, int32_t ___lineNo2, int32_t ___linePos3, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::CheckXmlSpace(System.Xml.IValidationEventHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaAttDef_CheckXmlSpace_m03EFF5426C02492D7C4EEFEC396DC7386E20DB74 (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, RuntimeObject* ___validationEventHandling0, const RuntimeMethod* method) ;
// System.Xml.Schema.SchemaAttDef System.Xml.Schema.SchemaElementDecl::GetAttDef(System.Xml.XmlQualifiedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* SchemaElementDecl_GetAttDef_m157EF6E66718BDD7F087323423296A4AF4719259 (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseAttlistType(System.Xml.Schema.SchemaAttDef,System.Xml.Schema.SchemaElementDecl,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistType_mC7CF6695229010B0320A5311BA2FA9298F6A5D29 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attrDef0, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___elementDecl1, bool ___ignoreErrors2, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseAttlistDefault(System.Xml.Schema.SchemaAttDef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistDefault_m2E49FD966B82593A64DFCB15F7D49C30183D859A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attrDef0, bool ___ignoreErrors1, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.SchemaAttDef::get_DefaultValueExpanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SchemaAttDef_get_DefaultValueExpanded_m61569B11E4FBDEED7A35CD5A39675B57CE6DB78F (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Xml.XmlTokenizedType System.Xml.Schema.SchemaAttDef::get_TokenizedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchemaAttDef_get_TokenizedType_m57FC667A4FC7D2904B78B639A39E872595F7EF86 (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaElementDecl::AddAttDef(System.Xml.Schema.SchemaAttDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaElementDecl_AddAttDef_mAF964F8485156FF16A7554A1B8DC76B7A83C12BA (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attdef0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaElementDecl::set_HasNonCDataAttribute(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_HasNonCDataAttribute_m66C35DA3287AD11A2D0DD2E47FE3B8198851F01E_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::IsAttributeValueType(System.Xml.DtdParser/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_IsAttributeValueType_m973F7C314B5AC9D43A0AE8BAE06F879DE66F9115 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_TokenizedType(System.Xml.XmlTokenizedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaAttDef_set_TokenizedType_m66E5B35A86397A9C6E7B97C3DE2A47FC49B5D1FA (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8* XmlSchemaType_GetBuiltInSimpleType_mCB3679D57A227BD055F702CBE00D47AFAF730B79 (int32_t ___typeCode0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaDeclBase::set_SchemaType(System.Xml.Schema.XmlSchemaType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_SchemaType_m4A34BA7ABAAD6A60F7AE3A2572EDD3E86893A21F_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.SchemaElementDecl::get_IsIdDeclared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaElementDecl_get_IsIdDeclared_m44ADA012ED628AF85A038CF178E9CA86806077B3_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Xml.Schema.XmlSeverityType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m79ECFFB3D03874AE9095BA539FC8B7191018E58B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___severity0, String_t* ___code1, String_t* ___arg2, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaElementDecl::set_IsIdDeclared(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_IsIdDeclared_m88620A2DF06335275FD59A77CB5073E5707BA5AD_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.SchemaElementDecl::get_IsNotationDeclared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaElementDecl_get_IsNotationDeclared_m56FEF2BE202BF5AC41DDFB7BCA33983F71A0FB0B_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.ContentValidator System.Xml.Schema.SchemaElementDecl::get_ContentValidator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* SchemaElementDecl_get_ContentValidator_m687E7878F142CFC03B5D7B4FFD6FE1F4AE6526E1_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.ContentValidator::get_ContentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ContentValidator_get_ContentType_m2E9C64DB3522E5A29BE6CAA4A929CBABAD1CEF23_inline (ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaElementDecl::set_IsNotationDeclared(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_IsNotationDeclared_m33DFE77CEA01A59316738F4BC49110A7C98A2365_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::GetNameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> System.Xml.Schema.SchemaInfo::get_Notations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* SchemaInfo_get_Notations_m922CD199C8750B3D6F5662DB0EA272805A7EA3A1 (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206 (Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Xml.DtdParser::AddUndeclaredNotation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_AddUndeclaredNotation_mF35809833D2C33608CD892441E552FAEA80F4A70 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___notationName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> System.Xml.Schema.SchemaDeclBase::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Xml.Schema.SchemaDeclBase::AddValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaDeclBase_AddValue_m9C70610A093F7CD2287EB47D9FA619E1D29A1958 (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::GetNmtokenString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetNmtokenString_m2FBC77BC5054E435A4F99466E1E21D664260D1EB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaDeclBase::set_Presence(System.Xml.Schema.SchemaDeclBase/Use)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_Presence_mB1FAF4B21DA1F38F9A40D57E54260010E54C1B91_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::GetValueWithStrippedSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetValueWithStrippedSpaces_mA7A8B5EF2DDCC7C0C1AE9845AF9EF4D149094FEA (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_DefaultValueExpanded(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_DefaultValueExpanded_mE4A42E55D630D5C41EAF3480F721749DBB59B801_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_ValueLineNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_ValueLineNumber_mD19157EDC780F89AA9FD6C07FEE28363DB7BDC91_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaAttDef::set_ValueLinePosition(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_ValueLinePosition_m8AEAB2128F36C4F66C16E9CB778C94402E15D387_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.DtdValidator::SetDefaultTypedValue(System.Xml.Schema.SchemaAttDef,System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdValidator_SetDefaultTypedValue_m01168D78BF4E99F4682A6281ACE4CC6A018F4E25 (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attdef0, RuntimeObject* ___readerAdapter1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>::Remove(TKey)
inline bool Dictionary_2_Remove_m1E37C29A7B6036E5D212EDE08E94808C0020EE55 (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void System.Xml.Schema.SchemaElementDecl::set_ContentValidator(System.Xml.Schema.ContentValidator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::.ctor(System.Xml.Schema.XmlSchemaContentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator__ctor_m3B7E26A1371336703F3B8B1A1A721C139E1E8078 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, int32_t ___contentType0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_Start_mA9E5F5D3C90F19E23A9C60551E105DAE86DF45AC (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::OpenGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_OpenGroup_mB1BC05C6D2410C538451E560BBB054D89259FD38 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseElementMixedContent(System.Xml.Schema.ParticleContentValidator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementMixedContent_mF075DA5FDA964DB2A05D84C79204A37A2F4453D6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, int32_t ___startParenEntityId1, const RuntimeMethod* method) ;
// System.Xml.Schema.ContentValidator System.Xml.Schema.ParticleContentValidator::Finish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ParticleContentValidator_Finish_mB1589F15458B320D1A6DC7179BB70F5C616ED192 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, bool ___useDFA0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseElementOnlyContent(System.Xml.Schema.ParticleContentValidator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementOnlyContent_m8227BEF84B1E93AE070877C03E77C9BA204F5F35 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, int32_t ___startParenEntityId1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>::.ctor()
inline void Stack_1__ctor_m859E9CA447DBF5EE9DD9D0ECDBDA9D98D49CD0CA (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseElementOnlyContent_LocalFrame__ctor_m7E1F8F1E449038C870E9A418F8597ECFE5E6FDD1 (ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* __this, int32_t ___startParentEntityIdParam0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>::Push(T)
inline void Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70 (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* __this, ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*, ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Xml.Schema.ParticleContentValidator::AddName(System.Xml.XmlQualifiedName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddName_m664A347C22696BE8E7587622B923EEF8DBAD2025 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name0, RuntimeObject* ___particle1, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ParseHowMany(System.Xml.Schema.ParticleContentValidator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseHowMany_mEA47F6A972504F1CE7D55AFACC025D61A0ED3126 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::AddSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddSequence_m4E844C5C7E35EB35FD72B4A18F0FB55198EBA7DA (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::AddChoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddChoice_mC56136642F8957A5E0450EBFECD4DC45CC5E0A60 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::CloseGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_CloseGroup_mA124590CE4ABB10E0E03B9EF146A249731616B30 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>::Pop()
inline ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* Stack_1_Pop_mB31BECBC0F3FF13AE5D0EC3C5F3738DBCA64F93D (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* __this, const RuntimeMethod* method)
{
	return ((  ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* (*) (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>::get_Count()
inline int32_t Stack_1_get_Count_mF5D38961851C67F431DDC6AA9FA9BC2BE63DBE2A_inline (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame>::Peek()
inline ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* Stack_1_Peek_m0C074AC550A3838F3407E0C3699055604445DB7A (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* __this, const RuntimeMethod* method)
{
	return ((  ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* (*) (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void System.Xml.Schema.ParticleContentValidator::AddStar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddStar_mEE53402121A554278856D01DD84040B0DAF06017 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::AddQMark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddQMark_m55D3B074D8781502F6A5093A434D1950C804A155 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.ParticleContentValidator::AddPlus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleContentValidator_AddPlus_mA6877E25D2F1BBC78C9A16AE29B12F9CE955C7C5 (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.ParticleContentValidator::Exists(System.Xml.XmlQualifiedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleContentValidator_Exists_mBCB763C6C4DA1D4732D98E21ECECFA2987132B9E (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::.ctor(System.Xml.XmlQualifiedName,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaEntity__ctor_m7444C0D862E0CC6A87EE2B39B4D058F657AA299C (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname0, bool ___isParameter1, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_BaseURI(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_BaseURI_mFC468DD1928AD24B87E405653FBB189A67042C61_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_DeclaredURI(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_DeclaredURI_m0411EACB64E056C515ADBBD2118036872D76AC96_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::get_ParameterEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* SchemaInfo_get_ParameterEntities_m54F4C298FA2B2AAE10FAA43965E9DD2C84E76FBB (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::get_GeneralEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* SchemaInfo_get_GeneralEntities_mB8E4E7E02EB79C03BDEEB06638EBFA631DE9C9D2 (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_DeclaredInExternal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_DeclaredInExternal_mE6A46D7897D9CDBF7400135BF42A153AB313D66F_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_ParsingInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_ParsingInProgress_m6DA2762E08D1C44455A0E1CF86B7B208A6BD1480_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_IsExternal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_IsExternal_mEA049015A7FB2840CFC3870A2F41FAC927612D12_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaEntity_set_Url_m39051E42954FC32EF9283C192653BA148CB41249 (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_Pubid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Pubid_m38932D2D6C40B066741B4F3C85478DA7A49F1FC2_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, String_t* ___arg2, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_NData(System.Xml.XmlQualifiedName)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_NData_mB7C417287EC6223758560683CFEF6961CCA9DD4F_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___value0, const RuntimeMethod* method) ;
// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaEntity::get_NData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaEntity_get_NData_m7B05467BF6357AB27C1DAFBFE27F9720C79CEC3C_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaEntity_set_Text_m62FCB261049A0B400D7C27470AFC73EA227861AF (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_Line(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Line_m3F4EBBBF917403C4F93292B873B64063DD3850F3_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaEntity::set_Pos(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Pos_mD4124AF35C72621D401E02AED280FF8A8934FABB_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>::Remove(TKey)
inline bool Dictionary_2_Remove_m620783E54E80B6F38403C978D1134BC1613768B2 (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void System.Xml.Schema.SchemaNotation::.ctor(System.Xml.XmlQualifiedName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemaNotation__ctor_m2C7E7540A7A33F4B18E31AEB896806C301466457 (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___name0, const RuntimeMethod* method) ;
// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNotation::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaNotation_get_Name_mF5CA9EBBD17ADAB3A31FC36FDB03B236C4847FCD_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1BD6D03E43DE090315E2B473EC6665083565F73E (Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* __this, String_t* ___key0, SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1*, String_t*, SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Xml.Schema.SchemaNotation::set_SystemLiteral(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaNotation_set_SystemLiteral_mE508FA22D4C2368801F3A5AA2B5797F1221234CD_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.SchemaNotation::set_Pubid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaNotation_set_Pubid_m3829B9FB66E7CB42DBAE04A487127361BFF4357B_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>::.ctor()
inline void Dictionary_2__ctor_mE03838E6B9827A6EFC4AF300FBEFAEFECFC20210 (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Xml.DtdParser/UndeclaredNotation::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UndeclaredNotation__ctor_m6237B782B12B39FB8BF173A6ABA4C298D685F300 (UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* __this, String_t* ___name0, int32_t ___lineNo1, int32_t ___linePos2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF8AA7901FEFABA7D6FCE95EB586FD42E58B1F0A7 (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* __this, String_t* ___key0, UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*, String_t*, UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.DtdParser/UndeclaredNotation>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF9A60D8A0C976AFEE10941219915771AE92C4AA2 (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* __this, String_t* ___key0, UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*, String_t*, UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Xml.DtdParser::get_SaveInternalSubsetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlException::get_ResString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlException_get_ResString_m977084C1A1F883C2BED73B1F956D980E62649C7A_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ThrowUnexpectedToken(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___expectedToken11, String_t* ___expectedToken22, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args2, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ThrowInvalidChar(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowInvalidChar_m67D089CB4F65FC2275C1FE545C178FF42CB61944 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___data0, int32_t ___length1, int32_t ___invCharPos2, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::get_Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::get_IgnoreEntityReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_IgnoreEntityReferences_m2DC8E61DFCB1C09453864CAC4031C467FB7340D8 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::HandleEntityReference(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityReference_mEE956B6F9F4B05B092B23769C7446B988111557C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___paramEntity0, bool ___inLiteral1, bool ___inAttribute2, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::ParseUnexpectedToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_ParseUnexpectedToken_m207C66A0CCCD7B01EC54A015C8F1CB228665119C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___startPos0, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNameExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNameExpected_mE86BA18BAC4E482467ACBF7324AC50A7A036612C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanQNameExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanQNameExpected_mA3CEF7926D1ADB4516533C14CA5AC11B577780DD (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNmtokenExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNmtokenExpected_mA1C480DC3339EDB16295740B126CD6E065C1A9EB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanSubsetContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanSubsetContent_m3DDC1C5F54961537AD8EFC21533E8B079CD3CFE4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanDoctype1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanDoctype1_m8CC5B6D8A23BC79BC7D24753A9283D4B7678BBD9 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanDoctype2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanDoctype2_m49CE285688D0AF32C97161251B5BAED8DC35CAC6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement1_m72C790C87EF7495318BB9181081FFB608299E94D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement2_m8B93B60343DFF685D0BD5A6769BD73FB39E39F45 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement3_m28CF7EC133A70479C5F5740091A0F58D03E70EA6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement4_m6F360CB881C17BFFB2C688BBF7FA4C9751AB284E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement5_m88E34616D6F10E1061C7B3CADEF68E1FF1DF7126 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement6_m5B40A19C9CD3EAED210B4829382140426A14E936 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement7_m3F94F17E421650A3A8D8BDEC02F8201CD2AB1BC7 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist1_m83EEEF8CFE21CC81A36DA270900584135021C828 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist2_m7E560A6A423783BEB4E7F99C9B4FF69C833D061D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist3_mF035EBFC23BF70F98B6DFD34112D12607DC8E74D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist4_mCD308E6A3D25EB060DBC8C35FADB8F6A67991587 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist5_m35AA80B4939B569B63EACFBD15C3A7A279E08C82 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist6_mF627B2ACA8D7005BF6E61B406E7D9016E817B0AE (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist7_m180D2F146EE05F9ED0732FDA13ADF88F8A0AB239 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNotation1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNotation1_m4C4E5782C3B83C24E6F9F08D87B22C4B82E780FB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanSystemId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanSystemId_m4BFDE8AB3CAEF9D217E5FDEBEA038712AC85F601 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanPublicId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanPublicId1_m1095E6AE70E11A9B956708FFBE530301689F82A5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanPublicId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanPublicId2_mFDAA7AB884FAFD43C7864DA3C22C00BD0024B9DD (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity1_mE0247D128601F57689966E73F7F89597F017AC53 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity2_m2C5A6BB88090ADF0B9649F21210AAD33A4FB7115 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity3_m83E67C0E0412FC7E29A40113DFBD9663F1832487 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection1_mC6FDCA0100720F5289856689A51097AA12C05FDC (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection2_m4F6CA7E86BF773FA2EAA8ACA577C4F96A1DC7A9A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection3_m1A14F74065167EFD8938C66911DA82D34F5B1429 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanClosingTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanClosingTag_m5AB673393CE16B30CE50A23B70DE0B8EC66E23B5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.DtdParser::ReadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::HandleEntityEnd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityEnd_m741F32D866045C1FEBD97EE495E22BECA25B453D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___inLiteral0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ScanName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanName_mC452081ACDFAE2FB825E73D7F7F506FD967F3DB0 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ScanQName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanQName_mAD528C25DE449B69809006B17DF6015439150DE3 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ScanNmtoken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanNmtoken_mD2A9057AA5C523117A422FBB2B5119B915133919 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::EatPublicKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_EatPublicKeyword_m36E41ED431E35D882457C69703585B584F86D47E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::EatSystemKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_EatSystemKeyword_mA6344D8F8E24209177DE25810ECC484A5202D452 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanLiteral(System.Xml.DtdParser/LiteralType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___literalType0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String[] System.Xml.XmlException::BuildCharExceptionArgs(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m85E22B1AE112B5BB1253D33A24F137F73240C556 (Il2CppChar ___invChar0, Il2CppChar ___nextChar1, const RuntimeMethod* method) ;
// System.Xml.XmlQualifiedName System.Xml.DtdParser::ScanEntityName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* DtdParser_ScanEntityName_m88D8D0B3BD33BEB5120E1AA008E13FEBC4B03482 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.SchemaEntity System.Xml.DtdParser::VerifyEntityReference(System.Xml.XmlQualifiedName,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* DtdParser_VerifyEntityReference_m84A330F3B961DFFD33E4BFA07F60013BCF96665E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___entityName0, bool ___paramEntity1, bool ___mustBeDeclared2, bool ___inAttribute3, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsHighSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_m9DE9C8AE82BE2FB2A8EA00142D2E5A7DFE6CC303 (int32_t ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsLowSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m062769B4A4869E4EDAC2EC6D0169BADCC2AC6C56 (int32_t ___ch0, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlException::get_LineNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlException_get_LineNumber_m4DBE53D0E13988CF2A5055C4B853F1399DE1A926_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlException::get_LinePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlException_get_LinePosition_m8045E03E183F6B07D6394A1B1FBD55E2CBE2DCB4_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Xml.DtdParser::ScanQName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanQName_mA660766FD83DC7827E0C5B52412321F8E9A0EDC4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___isQName0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::get_SupportNamespaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DtdParser_get_SupportNamespaces_m868EACB0340AAB10A0A36D3E54391F6B721A7791_inline (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::ReadDataInName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_ReadDataInName_mD211C27DF640D9443E3258AE20A48F095699717B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.String[] System.Xml.XmlException::BuildCharExceptionArgs(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_mC868154C32A2950D756F3E42B40D79DC4B7BBA33 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___data0, int32_t ___length1, int32_t ___invCharIndex2, const RuntimeMethod* method) ;
// System.String System.Xml.DtdParser::StripSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_StripSpaces_mA480984B85C66613574E2190887F68CF8DD94125 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::HandleEntityReference(System.Xml.XmlQualifiedName,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityReference_m372D3BB5C39D1333272D001572C4337128FD411B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___entityName0, bool ___paramEntity1, bool ___inLiteral2, bool ___inAttribute3, const RuntimeMethod* method) ;
// System.Boolean System.Xml.DtdParser::get_ParsingTopLevelMarkup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_ParsingTopLevelMarkup_m4836E76B7F5C3C3CA7D8574377C0F00BA2BB0BCF (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.SchemaEntity::get_ParsingInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaEntity_get_ParsingInProgress_m1A11FBE9700163EB33B81751FB96EA42F99F90EC_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.SchemaEntity::get_IsExternal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaEntity_get_IsExternal_mBFBDEF21B96AE11DAF242E5B7E2C3B63693FC8CE_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.SchemaEntity::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SchemaEntity_get_Text_mDCF201E623D7A98F87E859ACDEE9B5B6B4E953AE_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01 (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___key0, SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t129029582481E96143BD747690E92DB7E444261E*, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*, SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlQualifiedName_get_IsEmpty_m37942163D9A870E85BE8762845953C6A6579A400 (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m93B63C9E4FE7C5B4DAE86D7F5B9FA23451CC7077 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___res0, String_t* ___arg1, int32_t ___lineNumber2, int32_t ___linePosition3, String_t* ___sourceUri4, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9BF115E3E8CAC81B474E36A76805DC4F2E856879 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___res0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args1, int32_t ___lineNumber2, int32_t ___linePosition3, String_t* ___sourceUri4, const RuntimeMethod* method) ;
// System.String[] System.Xml.XmlException::BuildCharExceptionArgs(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46 (String_t* ___data0, int32_t ___invCharIndex1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsNCNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Xml.ValidateNames::ParseNameNoNamespaces(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNameNoNamespaces_mDB34F558B88D0F0CBCED466D0FF9B6B32EC6BDDF (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Int32 System.Xml.ValidateNames::ParseNCName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNCName_m29804E5FFF402FED8323F5A19784053A4DB9559F (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Int32 System.Xml.ValidateNames::ParseQName(System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseQName_mE71B5B34A2D2D773E4D3FF94EA866BBDBEC21095 (String_t* ___s0, int32_t ___offset1, int32_t* ___colonOffset2, const RuntimeMethod* method) ;
// System.Void System.Xml.ValidateNames::ThrowInvalidName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D (String_t* ___s0, int32_t ___offsetStartChar1, int32_t ___offsetBadChar2, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsStartNCNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mAAF5616098D1552646D4C4FDF1B381CB63822A21 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___res0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args1, const RuntimeMethod* method) ;
// System.String System.Xml.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mB929E696BF2E2F27CD03C0B61301A9DFE2FDEEF9 (String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Object System.Xml.XmlCharType::get_StaticLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_mC311794269D2A2500ECD686E106C0C00C45114E1 (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::SetProperties(System.Byte[],System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chProps0, String_t* ___ranges1, uint8_t ___value2, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m72A9AE2E6E8B4EDFC952B7D56E5BCEFA813A48BC (const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::.ctor(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::InitInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m187F4E551A38D61E4124ADB4E711D3FB2C2FCCE6 (const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsCharData(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsCharData_m39C87F830CD89F4F0029AA0338BB9AB5EFCC1AF5 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsPubidChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsPubidChar_m1B6AF6006A2514C09A7AE467296FAA1C3372F520 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsTextChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsTextChar_mD4DD7B3C0E63D031A4EFFDD6635F68DDE166A4AB (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLetter_m96DACE1E8C6E2FA82D842A40E6700F7383D119B5 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsNCNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNCNameCharXml4e_mD329203E44D17286699892D4E080A92F8AF9D56E (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsStartNCNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsStartNCNameCharXml4e_mB1A1B245AB61132E3C6F1CB221D3FE5330F9FD2A (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNameCharXml4e_mEA49083CCCCAAA61588D16FC58ED3655B0C3B0A8 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::InRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD (int32_t ___value0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlCharType::IsOnlyWhitespaceWithPos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsOnlyWhitespaceWithPos_mED48C365F707662F8D0AD0113155B24CAD53800C (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsOnlyWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsOnlyWhitespace_m6A7AD69BFF7BE6878F6984C952284C0755601490 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsDigit_m35A52077DD1B23150913BDAE7C1F5EEEF792DFD7 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlConfiguration.XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderSection_get_CollapseWhiteSpaceIntoEmptyString_mC778252E583E70FED611312296F0FBF1831E0063 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlNodeReaderNavigator/VirtualAttribute
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke(const VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49& unmarshaled, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_string(unmarshaled.___value_1);
}
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_back(const VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke& marshaled, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_string_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNodeReaderNavigator/VirtualAttribute
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_cleanup(VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlNodeReaderNavigator/VirtualAttribute
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_com(const VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49& unmarshaled, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___value_1);
}
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_com_back(const VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com& marshaled, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNodeReaderNavigator/VirtualAttribute
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_com_cleanup(VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
// System.Void System.Xml.XmlNodeReaderNavigator/VirtualAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAttribute__ctor_mEE4086B6E26EB486E3C66CB620FB0451E6215622 (VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		String_t* L_1 = ___value1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void VirtualAttribute__ctor_mEE4086B6E26EB486E3C66CB620FB0451E6215622_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49*>(__this + _offset);
	VirtualAttribute__ctor_mEE4086B6E26EB486E3C66CB620FB0451E6215622(_thisAdjusted, ___name0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader__ctor_mE43EB30477EC25D9823AA7906EC0F3826154E9CA (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var);
		XmlReader__ctor_m4E3A6201CC692B2B2F05ED58652056E893995477(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___node0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeReader__ctor_mE43EB30477EC25D9823AA7906EC0F3826154E9CA_RuntimeMethod_var)));
	}

IL_0014:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ___node0;
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_3 = (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825*)il2cpp_codegen_object_new(XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeReaderNavigator__ctor_m9E329D9B1DC0A5B9ED88F9B5122652CDE1A5AE3F(L_3, L_2, NULL);
		__this->___readerNav_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readerNav_3), (void*)L_3);
		__this->___curDepth_5 = 0;
		__this->___readState_6 = 0;
		__this->___fEOF_7 = (bool)0;
		__this->___nodeType_4 = 0;
		__this->___bResolveEntity_8 = (bool)0;
		__this->___bStartFromDocument_9 = (bool)0;
		return;
	}
}
// System.Boolean System.Xml.XmlNodeReader::IsInReadingStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_get_NodeType_mDD4D9BD62EB15CB821701A215FC86B74FC9BAFD3 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000a:
	{
		int32_t L_1 = __this->___nodeType_4;
		return L_1;
	}
}
// System.String System.Xml.XmlNodeReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_Name_mC384ED6762502071E98EA9A6CB68E3A55DEBE4E3 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_get_Name_m866DDA99C93C273E0CA59CB421BED78F424197D9(L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_LocalName_mE1DFAC29CF7E49BA97B51FBFAB09FC7820C05667 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_get_LocalName_m163985EBB7CF9CDF623AF1BAE14288BBC3322042(L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_NamespaceURI_mD30CECA6E60BD5DB37907A0E74E20E4654A5455B (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_get_NamespaceURI_m8894DBC5068E141F84F33E657F06E2DABBE04114(L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_Prefix_m455E7AF11659189D989DCC7DC181040953AD8D20 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_get_Prefix_m2B64A6F5DF7B2ACA67005D2DAF8AE207F0323C51(L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_Value_m13CCE44AE61F74EDDDCC74E4A261FD161CBD1FFA (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_get_Value_mA303F30826D5FD934B6631E9264A3C67794A5CAF(L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_get_Depth_m13AC9A03D31DA8C164D1D5A854E6F947AFA080FC (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___curDepth_5;
		return L_0;
	}
}
// System.String System.Xml.XmlNodeReader::get_BaseURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_get_BaseURI_mB1AE0F9FCED8F03B3E8C8AFA791324C7FBB01568 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlNodeReaderNavigator_get_BaseURI_mC5A1EBC076E72B5E55D9C0521D39161B51262835(L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_get_CanResolveEntity_m70029164E7CFDF52BE84E21415A574C1FFD8BDCA (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_get_IsEmptyElement_mB98FB0DC79819E218145E3C269EBFE65C5DB7C17 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = XmlNodeReaderNavigator_get_IsEmptyElement_mE0709052E4D88AC1EFAE118FAEDE9E61A9E3674D(L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_get_IsDefault_m0F631B810E42BCC7BB00D615E78CF5A2A9A6BEDD (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = XmlNodeReaderNavigator_get_IsDefault_mFE55F04E1CAC6B5BF60904684FD5FBE7A5F3AFF4(L_1, NULL);
		return L_2;
	}
}
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeReader_get_SchemaInfo_mE3299E824D2682F6AED0F865E6EF308A1025679A (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XmlNodeReaderNavigator_get_SchemaInfo_mB8FE3DA04729A9915ADCFD6D09E11500DDA39986(L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_get_AttributeCount_m56850E0F8275B5C48D16EA0916EB937AE4091150 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___nodeType_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XmlNodeReaderNavigator_get_AttributeCount_mBE5B6B6A3C82FF2E9726F36B3A98B198E5DA1E4F(L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_GetAttribute_m29B199DE8B386FE43A7F18732208294592D65DB4 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
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
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_GetAttribute_m7D7D34AEE4FC4303F2A7283A481C67489EE46A11(L_1, L_2, NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_GetAttribute_m4DC5BD55F9209C577C0F3A5B2DF585304B970B86 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___name0, String_t* ___namespaceURI1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
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
		String_t* L_1 = ___namespaceURI1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___namespaceURI1;
		G_B5_0 = L_2;
		goto IL_0015;
	}

IL_0010:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B5_0 = L_3;
	}

IL_0015:
	{
		V_0 = G_B5_0;
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		String_t* L_5 = ___name0;
		String_t* L_6 = V_0;
		NullCheck(L_4);
		String_t* L_7;
		L_7 = XmlNodeReaderNavigator_GetAttribute_mC74FB78B251DCC686492D25A927D0BC6FBB3394C(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.String System.Xml.XmlNodeReader::GetAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_GetAttribute_m23D09CF51432C8F35AF5EF1662E83C064CE18BAD (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, int32_t ___attributeIndex0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBECB429388DF905A7D97C6877C490611CB01F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeReader_GetAttribute_m23D09CF51432C8F35AF5EF1662E83C064CE18BAD_RuntimeMethod_var)));
	}

IL_0013:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		int32_t L_3 = ___attributeIndex0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = XmlNodeReaderNavigator_GetAttribute_mEC9A5B5635D6BB1ADFAC4CCA01F76289EDDF8382(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_MoveToAttribute_mC0AEEBB956A74A96690E6700D5C6AC9AEB472D33 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		int32_t* L_2 = (&__this->___curDepth_5);
		int32_t* L_3 = (&__this->___nodeType_4);
		NullCheck(L_1);
		XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C(L_1, L_2, L_3, NULL);
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		bool L_6;
		L_6 = XmlNodeReaderNavigator_MoveToAttribute_mFA4DED33FC5D613E80FB2C0410E83C5771DE7EDA(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_7 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_8 = __this->___readerNav_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_8, NULL);
		__this->___nodeType_4 = L_9;
		bool L_10 = __this->___bInReadBinary_10;
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_005c:
	{
		return (bool)1;
	}

IL_005e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_11 = __this->___readerNav_3;
		int32_t* L_12 = (&__this->___curDepth_5);
		NullCheck(L_11);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_11, L_12, NULL);
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_MoveToAttribute_m02123761D9AA176006BD9FDB8EC4A43A7A2A0C0C (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___name0, String_t* ___namespaceURI1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		int32_t* L_2 = (&__this->___curDepth_5);
		int32_t* L_3 = (&__this->___nodeType_4);
		NullCheck(L_1);
		XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C(L_1, L_2, L_3, NULL);
		String_t* L_4 = ___namespaceURI1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = ___namespaceURI1;
		G_B5_0 = L_5;
		goto IL_002c;
	}

IL_0027:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B5_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B5_0;
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_7 = __this->___readerNav_3;
		String_t* L_8 = ___name0;
		String_t* L_9 = V_0;
		NullCheck(L_7);
		bool L_10;
		L_10 = XmlNodeReaderNavigator_MoveToAttribute_mA3415D672AE7BF5BCB52436B5E40FA4F6BC6EAAF(L_7, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_11 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_12 = __this->___readerNav_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_12, NULL);
		__this->___nodeType_4 = L_13;
		bool L_14 = __this->___bInReadBinary_10;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_0069:
	{
		return (bool)1;
	}

IL_006b:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_15 = __this->___readerNav_3;
		int32_t* L_16 = (&__this->___curDepth_5);
		NullCheck(L_15);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_15, L_16, NULL);
		return (bool)0;
	}
}
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_MoveToAttribute_mB0B55215A40638BBB68352FD793ABF6335C17B44 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, int32_t ___attributeIndex0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBECB429388DF905A7D97C6877C490611CB01F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeReader_MoveToAttribute_mB0B55215A40638BBB68352FD793ABF6335C17B44_RuntimeMethod_var)));
	}

IL_0013:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		int32_t* L_3 = (&__this->___curDepth_5);
		int32_t* L_4 = (&__this->___nodeType_4);
		NullCheck(L_2);
		XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C(L_2, L_3, L_4, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_5;
			L_5 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_004f_1;
			}
		}
		{
			XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_6 = __this->___readerNav_3;
			int32_t L_7 = ___attributeIndex0;
			NullCheck(L_6);
			XmlNodeReaderNavigator_MoveToAttribute_m3885BC255D4054C9DBCC66D5AE71F54400E1C7F6(L_6, L_7, NULL);
			bool L_8 = __this->___bInReadBinary_10;
			if (!L_8)
			{
				goto IL_005a_1;
			}
		}
		{
			XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
			goto IL_005a_1;
		}

IL_004f_1:
		{
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBECB429388DF905A7D97C6877C490611CB01F3E)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeReader_MoveToAttribute_mB0B55215A40638BBB68352FD793ABF6335C17B44_RuntimeMethod_var)));
		}

IL_005a_1:
		{
			goto IL_0070;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005c;
		}
		throw e;
	}

CATCH_005c:
	{// begin catch(System.Object)
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_10 = __this->___readerNav_3;
		int32_t* L_11 = (&__this->___curDepth_5);
		NullCheck(L_10);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_10, L_11, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0070:
	{
		int32_t L_12 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_13 = __this->___readerNav_3;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_13, NULL);
		__this->___nodeType_4 = L_14;
		return;
	}
}
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_MoveToFirstAttribute_m4EB98B0EFC5C52CBEA7AA0AE589CDD467E89C987 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		int32_t* L_2 = (&__this->___curDepth_5);
		int32_t* L_3 = (&__this->___nodeType_4);
		NullCheck(L_1);
		XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C(L_1, L_2, L_3, NULL);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_5 = __this->___readerNav_3;
		NullCheck(L_5);
		XmlNodeReaderNavigator_MoveToAttribute_m3885BC255D4054C9DBCC66D5AE71F54400E1C7F6(L_5, 0, NULL);
		int32_t L_6 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_7 = __this->___readerNav_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_7, NULL);
		__this->___nodeType_4 = L_8;
		bool L_9 = __this->___bInReadBinary_10;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_0063:
	{
		return (bool)1;
	}

IL_0065:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_10 = __this->___readerNav_3;
		int32_t* L_11 = (&__this->___curDepth_5);
		NullCheck(L_10);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_10, L_11, NULL);
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_MoveToNextAttribute_m6424E281DC2C34D15126DEDF6D7C101586546440 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___nodeType_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (bool)0;
	}

IL_0014:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		int32_t L_3 = __this->___curDepth_5;
		NullCheck(L_2);
		XmlNodeReaderNavigator_LogMove_m3C5C982ACE97D18B0CF05B08D26D7C85A1C10A19(L_2, L_3, NULL);
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		int32_t* L_5 = (&__this->___curDepth_5);
		NullCheck(L_4);
		XmlNodeReaderNavigator_ResetToAttribute_mE795356BC813DBF5DBEAD105C9C9A138F6613EDC(L_4, L_5, NULL);
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_6 = __this->___readerNav_3;
		int32_t* L_7 = (&__this->___curDepth_5);
		NullCheck(L_6);
		bool L_8;
		L_8 = XmlNodeReaderNavigator_MoveToNextAttribute_m17D4E3620C4FCA2AE7CFE15E83DE03CC7D8FD9AF(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_9 = __this->___readerNav_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_9, NULL);
		__this->___nodeType_4 = L_10;
		bool L_11 = __this->___bInReadBinary_10;
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_0068:
	{
		return (bool)1;
	}

IL_006a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_12 = __this->___readerNav_3;
		int32_t* L_13 = (&__this->___curDepth_5);
		NullCheck(L_12);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_12, L_13, NULL);
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_MoveToElement_m4B2FE561A3F540353FB003BE3B8D4C35EC4932B8 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		int32_t L_2 = __this->___curDepth_5;
		NullCheck(L_1);
		XmlNodeReaderNavigator_LogMove_m3C5C982ACE97D18B0CF05B08D26D7C85A1C10A19(L_1, L_2, NULL);
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_3 = __this->___readerNav_3;
		int32_t* L_4 = (&__this->___curDepth_5);
		NullCheck(L_3);
		XmlNodeReaderNavigator_ResetToAttribute_mE795356BC813DBF5DBEAD105C9C9A138F6613EDC(L_3, L_4, NULL);
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_5 = __this->___readerNav_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = XmlNodeReaderNavigator_MoveToElement_m9E428A600D7BE7A1526B16E7D8F7907609D90FE8(L_5, NULL);
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_7 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_8 = __this->___readerNav_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_8, NULL);
		__this->___nodeType_4 = L_9;
		bool L_10 = __this->___bInReadBinary_10;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_0066:
	{
		return (bool)1;
	}

IL_0068:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_11 = __this->___readerNav_3;
		int32_t* L_12 = (&__this->___curDepth_5);
		NullCheck(L_11);
		XmlNodeReaderNavigator_RollBackMove_mAEA1047A9F9EA8A4F8BD283A0B60A08780820593(L_11, L_12, NULL);
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_Read_m012E2A57EA60AB69B2341E776DA544BD5A7B512E (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_Read_m4D70EA1E8CBBE7C4272B282C463DB63B0505A517(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::Read(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_Read_m4D70EA1E8CBBE7C4272B282C463DB63B0505A517 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___fEOF_7;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->___readState_6;
		if (L_1)
		{
			goto IL_0070;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0030;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0049;
		}
	}

IL_0030:
	{
		__this->___bStartFromDocument_9 = (bool)1;
		bool L_6 = ___fSkipChildren0;
		bool L_7;
		L_7 = XmlNodeReader_ReadNextNode_m2349843A9B23E4174C7CE8512CA99D3A80A2782B(__this, L_6, NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		__this->___readState_6 = 2;
		return (bool)0;
	}

IL_0049:
	{
		XmlNodeReader_ReSetReadingMarks_m1111EC7F4DD055A8EA4FB0B88F408E0FED6610BF(__this, NULL);
		__this->___readState_6 = 1;
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_8 = __this->___readerNav_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_8, NULL);
		__this->___nodeType_4 = L_9;
		__this->___curDepth_5 = 0;
		return (bool)1;
	}

IL_0070:
	{
		bool L_10 = __this->___bInReadBinary_10;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF(__this, NULL);
	}

IL_007e:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_11 = __this->___readerNav_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = XmlNodeReaderNavigator_get_CreatedOnAttribute_m0CC89DD9AB3B1EBB471932E038EA6ECDC09BC12B_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		return (bool)0;
	}

IL_008d:
	{
		XmlNodeReader_ReSetReadingMarks_m1111EC7F4DD055A8EA4FB0B88F408E0FED6610BF(__this, NULL);
		bool L_13 = ___fSkipChildren0;
		bool L_14;
		L_14 = XmlNodeReader_ReadNextNode_m2349843A9B23E4174C7CE8512CA99D3A80A2782B(__this, L_13, NULL);
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		return (bool)1;
	}

IL_009e:
	{
		int32_t L_15 = __this->___readState_6;
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_16 = __this->___readState_6;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00b6;
		}
	}

IL_00af:
	{
		__this->___readState_6 = 2;
	}

IL_00b6:
	{
		int32_t L_17 = __this->___readState_6;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00c6;
		}
	}
	{
		__this->___nodeType_4 = 0;
	}

IL_00c6:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::ReadNextNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadNextNode_m2349843A9B23E4174C7CE8512CA99D3A80A2782B (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___readState_6;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->___readState_6;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___nodeType_4 = 0;
		return (bool)0;
	}

IL_001a:
	{
		bool L_2 = ___fSkipChildren0;
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_3 = __this->___readerNav_3;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_3, NULL);
		V_0 = L_4;
		if (!((((int32_t)L_2) == ((int32_t)0))? 1 : 0))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_5 = __this->___nodeType_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)15))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_6 = __this->___nodeType_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)5))))
		{
			goto IL_0050;
		}
	}
	{
		bool L_9 = __this->___bResolveEntity_8;
		if (L_9)
		{
			goto IL_007c;
		}
	}

IL_0050:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_10 = __this->___readerNav_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_10, NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)9))))
		{
			goto IL_006e;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_12 = __this->___readerNav_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0079;
		}
	}

IL_006e:
	{
		int32_t L_14 = __this->___readState_6;
		G_B15_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0080;
	}

IL_0079:
	{
		G_B15_0 = 0;
		goto IL_0080;
	}

IL_007c:
	{
		G_B15_0 = 1;
		goto IL_0080;
	}

IL_007f:
	{
		G_B15_0 = 0;
	}

IL_0080:
	{
		if (!G_B15_0)
		{
			goto IL_0116;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_15 = __this->___readerNav_3;
		NullCheck(L_15);
		bool L_16;
		L_16 = XmlNodeReaderNavigator_MoveToFirstChild_mCBE902AF29A259D1A0FAB5673485523D44F43E1F(L_15, NULL);
		if (!L_16)
		{
			goto IL_00c2;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_17 = __this->___readerNav_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_17, NULL);
		__this->___nodeType_4 = L_18;
		int32_t L_19 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		bool L_20 = __this->___bResolveEntity_8;
		if (!L_20)
		{
			goto IL_00c0;
		}
	}
	{
		__this->___bResolveEntity_8 = (bool)0;
	}

IL_00c0:
	{
		return (bool)1;
	}

IL_00c2:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_21 = __this->___readerNav_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00e7;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_23 = __this->___readerNav_3;
		NullCheck(L_23);
		bool L_24;
		L_24 = XmlNodeReaderNavigator_get_IsEmptyElement_mE0709052E4D88AC1EFAE118FAEDE9E61A9E3674D(L_23, NULL);
		if (L_24)
		{
			goto IL_00e7;
		}
	}
	{
		__this->___nodeType_4 = ((int32_t)15);
		return (bool)1;
	}

IL_00e7:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_25 = __this->___readerNav_3;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_25, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)5))))
		{
			goto IL_010e;
		}
	}
	{
		bool L_27 = __this->___bResolveEntity_8;
		if (!L_27)
		{
			goto IL_010e;
		}
	}
	{
		__this->___bResolveEntity_8 = (bool)0;
		__this->___nodeType_4 = ((int32_t)16);
		return (bool)1;
	}

IL_010e:
	{
		bool L_28 = ___fSkipChildren0;
		bool L_29;
		L_29 = XmlNodeReader_ReadForward_m94A7362B23F60E5694A81E0891BCC9B6968D7673(__this, L_28, NULL);
		return L_29;
	}

IL_0116:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_30 = __this->___readerNav_3;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_30, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)5))))
		{
			goto IL_016b;
		}
	}
	{
		bool L_32 = __this->___bResolveEntity_8;
		if (!L_32)
		{
			goto IL_016b;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_33 = __this->___readerNav_3;
		NullCheck(L_33);
		bool L_34;
		L_34 = XmlNodeReaderNavigator_MoveToFirstChild_mCBE902AF29A259D1A0FAB5673485523D44F43E1F(L_33, NULL);
		if (!L_34)
		{
			goto IL_015a;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_35 = __this->___readerNav_3;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_35, NULL);
		__this->___nodeType_4 = L_36;
		int32_t L_37 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_0162;
	}

IL_015a:
	{
		__this->___nodeType_4 = ((int32_t)16);
	}

IL_0162:
	{
		__this->___bResolveEntity_8 = (bool)0;
		return (bool)1;
	}

IL_016b:
	{
		bool L_38 = ___fSkipChildren0;
		bool L_39;
		L_39 = XmlNodeReader_ReadForward_m94A7362B23F60E5694A81E0891BCC9B6968D7673(__this, L_38, NULL);
		return L_39;
	}
}
// System.Void System.Xml.XmlNodeReader::SetEndOfFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_SetEndOfFile_mAEEEDE22550F7AFE001C9EB1E7EFCDF8311C5188 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		__this->___fEOF_7 = (bool)1;
		__this->___readState_6 = 3;
		__this->___nodeType_4 = 0;
		return;
	}
}
// System.Boolean System.Xml.XmlNodeReader::ReadAtZeroLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadAtZeroLevel_m912D5CB04F4E4B38316D3742C8B9980B833BE5CE (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___fSkipChildren0;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = __this->___nodeType_4;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)15))))
		{
			goto IL_0032;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_2 = __this->___readerNav_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = XmlNodeReaderNavigator_get_IsEmptyElement_mE0709052E4D88AC1EFAE118FAEDE9E61A9E3674D(L_4, NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		__this->___nodeType_4 = ((int32_t)15);
		return (bool)1;
	}

IL_0032:
	{
		XmlNodeReader_SetEndOfFile_mAEEEDE22550F7AFE001C9EB1E7EFCDF8311C5188(__this, NULL);
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlNodeReader::ReadForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadForward_m94A7362B23F60E5694A81E0891BCC9B6968D7673 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, bool ___fSkipChildren0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		bool L_1 = __this->___bStartFromDocument_9;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = __this->___curDepth_5;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = ___fSkipChildren0;
		bool L_4;
		L_4 = XmlNodeReader_ReadAtZeroLevel_m912D5CB04F4E4B38316D3742C8B9980B833BE5CE(__this, L_3, NULL);
		return L_4;
	}

IL_0023:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_5 = __this->___readerNav_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = XmlNodeReaderNavigator_MoveToNext_mD5E1547A646BF37C514165D107D5616DFC66C075(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_7 = __this->___readerNav_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_7, NULL);
		__this->___nodeType_4 = L_8;
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_9 = __this->___curDepth_5;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		bool L_10 = ___fSkipChildren0;
		bool L_11;
		L_11 = XmlNodeReader_ReadAtZeroLevel_m912D5CB04F4E4B38316D3742C8B9980B833BE5CE(__this, L_10, NULL);
		return L_11;
	}

IL_0053:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_12 = __this->___readerNav_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = XmlNodeReaderNavigator_MoveToParent_m96B16F99BD1D84568FDB3482AA704651C68C9744(L_12, NULL);
		if (!L_13)
		{
			goto IL_00ae;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_14 = __this->___readerNav_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_16 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		__this->___nodeType_4 = ((int32_t)15);
		return (bool)1;
	}

IL_0086:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_17 = __this->___readerNav_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = XmlNodeReaderNavigator_get_NodeType_mD1F1EC6F6C52CDC315CFC2B172F4B5C573818944(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_19 = __this->___curDepth_5;
		__this->___curDepth_5 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		__this->___nodeType_4 = ((int32_t)16);
		return (bool)1;
	}

IL_00ac:
	{
		return (bool)1;
	}

IL_00ae:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlNodeReader::ReSetReadingMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_ReSetReadingMarks_m1111EC7F4DD055A8EA4FB0B88F408E0FED6610BF (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		int32_t* L_1 = (&__this->___curDepth_5);
		int32_t* L_2 = (&__this->___nodeType_4);
		NullCheck(L_0);
		XmlNodeReaderNavigator_ResetMove_mF788FE8F4A8EA71BD69EA1FF21CAA222EC4A582C(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_get_EOF_m3F528EB9D402C83DF9446F20E20695C03B3BFCBD (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___fEOF_7;
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlNodeReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_Close_m4221AE31F3E0830CF85B5D6D9B95F82C56762B8B (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		__this->___readState_6 = 4;
		return;
	}
}
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_get_ReadState_mA22DC8649C562FB7144A39DA5347E6928F5709C2 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		return L_0;
	}
}
// System.Void System.Xml.XmlNodeReader::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_Skip_m973EC1450075DEAA17575BFB39663BA83F92270D (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_Read_m4D70EA1E8CBBE7C4272B282C463DB63B0505A517(__this, (bool)1, NULL);
		return;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlNodeReader_get_NameTable_m8E4531EE6E8A2BE2131183C8947BEF12A29A4812 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		NullCheck(L_0);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_1;
		L_1 = XmlNodeReaderNavigator_get_NameTable_m4C906E955567E27602C24A7ECEB72818E97D7626_inline(L_0, NULL);
		return L_1;
	}
}
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_LookupNamespace_m732B341F7A77ABA0CD7E8A60E2A96C3DC33B646C (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___prefix0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
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
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_LookupNamespace_m38553FC4B8A93D4D5FEA14339125BA60A7057938(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0024:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_ResolveEntity_m29E73FD2E0D4146A75D1839275A0BC3D03BD50C3 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___nodeType_4;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0021;
		}
	}

IL_0011:
	{
		String_t* L_2;
		L_2 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7FD09D6160D857BE2ADC20AF0BEB4D45333320A)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeReader_ResolveEntity_m29E73FD2E0D4146A75D1839275A0BC3D03BD50C3_RuntimeMethod_var)));
	}

IL_0021:
	{
		__this->___bResolveEntity_8 = (bool)1;
		return;
	}
}
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeReader_ReadAttributeValue_m5F38E02257DEF046A7F5A05A9FBB1C281AE49429 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		int32_t* L_2 = (&__this->___curDepth_5);
		bool* L_3 = (&__this->___bResolveEntity_8);
		int32_t* L_4 = (&__this->___nodeType_4);
		NullCheck(L_1);
		bool L_5;
		L_5 = XmlNodeReaderNavigator_ReadAttributeValue_m54893BB123B90C9FD167B7CA8A0C7D93D56B4DFF(L_1, L_2, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		__this->___bInReadBinary_10 = (bool)0;
		return (bool)1;
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Int32 System.Xml.XmlNodeReader::ReadContentAsBase64(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_ReadContentAsBase64_m61FAE4F6B7EC79C78E64948E0133EE242EC13EFC (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		bool L_1 = __this->___bInReadBinary_10;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_2 = __this->___readBinaryHelper_11;
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_3;
		L_3 = ReadContentAsBinaryHelper_CreateOrReset_m318C0AAED68429D2474FD3E397C60C79EF0F8A96(L_2, __this, NULL);
		__this->___readBinaryHelper_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readBinaryHelper_11), (void*)L_3);
	}

IL_0025:
	{
		__this->___bInReadBinary_10 = (bool)0;
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_4 = __this->___readBinaryHelper_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = ReadContentAsBinaryHelper_ReadContentAsBase64_mD3382349F48970D072DFBCD4607C3ED972FF2CC3(L_4, L_5, L_6, L_7, NULL);
		__this->___bInReadBinary_10 = (bool)1;
		return L_8;
	}
}
// System.Int32 System.Xml.XmlNodeReader::ReadContentAsBinHex(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeReader_ReadContentAsBinHex_mDFF57EF7246FA0BC44DE69D28ADB0C3A55C68B90 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___readState_6;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		bool L_1 = __this->___bInReadBinary_10;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_2 = __this->___readBinaryHelper_11;
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_3;
		L_3 = ReadContentAsBinaryHelper_CreateOrReset_m318C0AAED68429D2474FD3E397C60C79EF0F8A96(L_2, __this, NULL);
		__this->___readBinaryHelper_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readBinaryHelper_11), (void*)L_3);
	}

IL_0025:
	{
		__this->___bInReadBinary_10 = (bool)0;
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_4 = __this->___readBinaryHelper_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = ReadContentAsBinaryHelper_ReadContentAsBinHex_mADADE6373FD0BED7439FA4B9EC8BEE11FEF89BBD(L_4, L_5, L_6, L_7, NULL);
		__this->___bInReadBinary_10 = (bool)1;
		return L_8;
	}
}
// System.Void System.Xml.XmlNodeReader::FinishReadBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeReader_FinishReadBinary_m4186DF8743B157AC2408DFAECFF4FDE0C6F945DF (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		__this->___bInReadBinary_10 = (bool)0;
		ReadContentAsBinaryHelper_t94D48E6891DEAC8DFE5DEA1B820091D277880897* L_0 = __this->___readBinaryHelper_11;
		NullCheck(L_0);
		ReadContentAsBinaryHelper_Finish_m56919E9B4A660955115D1C0680C0FF772DC649F9(L_0, NULL);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.XmlNodeReader::System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(System.Xml.XmlNamespaceScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeReader_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope_m6F01656D28D4A9F2DA5DA712FF66E34A1CB73189 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, int32_t ___scope0, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		int32_t L_1 = ___scope0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = XmlNodeReaderNavigator_GetNamespacesInScope_mFA4DA304A8430D6826EE57355AE3E60801CD71CF(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlNodeReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m58C2F92D673D5DB55B4337BFB3C52774F77E3EA7 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___namespaceName0, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = XmlNodeReaderNavigator_LookupPrefix_m9811B8FC4073E8937486E7FF5441D05D4E05B7FB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlNodeReader::System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeReader_System_Xml_IXmlNamespaceResolver_LookupNamespace_m48877A0A4A623C9BA5562205C1B51BEDC0A5F196 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, String_t* ___prefix0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = XmlNodeReader_IsInReadingStates_m041E50B6B4A9189784FAFD4934101BFF6008C3A2(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_1 = __this->___readerNav_3;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = XmlNodeReaderNavigator_DefaultLookupNamespace_m35DEB6CAA8E91414DC2AF8559F5686C1E6AA9804(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_4 = __this->___readerNav_3;
		String_t* L_5 = ___prefix0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = XmlNodeReaderNavigator_LookupNamespace_m38553FC4B8A93D4D5FEA14339125BA60A7057938(L_4, L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_8 = __this->___readerNav_3;
		NullCheck(L_8);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_9;
		L_9 = XmlNodeReaderNavigator_get_NameTable_m4C906E955567E27602C24A7ECEB72818E97D7626_inline(L_8, NULL);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		V_0 = L_11;
	}

IL_0037:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Xml.IDtdInfo System.Xml.XmlNodeReader::get_DtdInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeReader_get_DtdInfo_m89611180F9D3EF14A1952037043B93F10EAE3655 (XmlNodeReader_tDBF3D023AA2DE28D53355F30DD4E14F807B8428B* __this, const RuntimeMethod* method) 
{
	{
		XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* L_0 = __this->___readerNav_3;
		NullCheck(L_0);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1;
		L_1 = XmlNodeReaderNavigator_get_Document_mF1C26CBEAA6E73F0CD108F8BB23ACEB63AB6D28D_inline(L_0, NULL);
		NullCheck(L_1);
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2;
		L_2 = XmlDocument_get_DtdSchemaInfo_mF52E9F32AB9D1914DBC6D91A8277AE843B6E1E6E_inline(L_1, NULL);
		return L_2;
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
// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNotation__ctor_mB0560FA8AB3F3443FC6B1638265F00E268C4ED61 (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc3, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = ___doc3;
		XmlNode__ctor_m4EBED07EBE4C8D8191BE58A23594E381A8E43DCA(__this, L_0, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___doc3;
		NullCheck(L_1);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_2;
		L_2 = XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C(L_1, NULL);
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_2, L_3);
		__this->___name_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_3), (void*)L_4);
		String_t* L_5 = ___publicId1;
		__this->___publicId_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publicId_1), (void*)L_5);
		String_t* L_6 = ___systemId2;
		__this->___systemId_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemId_2), (void*)L_6);
		return;
	}
}
// System.String System.Xml.XmlNotation::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNotation_get_Name_m1202E926141C2E1CE9CED0298287F965F78B6CEE (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_3;
		return L_0;
	}
}
// System.String System.Xml.XmlNotation::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNotation_get_LocalName_m9707D69B763CF4D2FF4AC43DFA34A7196602F9E3 (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_3;
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNotation_get_NodeType_m72C6322ADBF0BA84D2BB23243B74B68480F57EEE (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)12));
	}
}
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNotation_CloneNode_m80D1F12EC01AB84F1B7FBE736BE186E37EABA50B (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, bool ___deep0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49457BCC8BD0CC8C758CAB29E29AAC6EE6A36D9A)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNotation_CloneNode_m80D1F12EC01AB84F1B7FBE736BE186E37EABA50B_RuntimeMethod_var)));
	}
}
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNotation_get_IsReadOnly_m6190C89D0880C37794A2ADA61F4B7CFB2F46806A (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlNotation::set_InnerXml(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNotation_set_InnerXml_m622282FD814F18EAABCF209E0D94BEE3027C6708 (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB06DE16F44A88CD00ED1FDBEB9E9BFE0F4D1C2A)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNotation_set_InnerXml_m622282FD814F18EAABCF209E0D94BEE3027C6708_RuntimeMethod_var)));
	}
}
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNotation_WriteTo_m9FF868547C3B2F141DC6B01DA19F719F19193624 (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNotation_WriteContentTo_m692E52F74A2A22FFA2C0D76D9700805CBFB430B2 (XmlNotation_t0CB6B652D5F20BB51A8A299F67BEE3D6EC91CE4D* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
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
// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction__ctor_m80AB71B3DDC0E1164705B676AD06037ACEB2FD67 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, String_t* ___target0, String_t* ___data1, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc2, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = ___doc2;
		XmlLinkedNode__ctor_mBAF93AD97DBA998E16940918D8F7EF3E585C7633(__this, L_0, NULL);
		String_t* L_1 = ___target0;
		__this->___target_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_2), (void*)L_1);
		String_t* L_2 = ___data1;
		__this->___data_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_2);
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Name_m5878F25C2BBAA4F3E45A4CB296168FF55A0735C9 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___target_2;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___target_2;
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_LocalName_mD5CA3656571EB5F561EA720C69AC26FE44F9733E (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Name() */, __this);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Value_m9BFC4E309173BF460597EC30F6D44DDA88F68F4C (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___data_3;
		return L_0;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_set_Value_m47BB16DD3271956E339331FC848855DB2B3C9225 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		XmlProcessingInstruction_set_Data_m0B021604CB3E04C6B776A8E70E31D658E0BBB6F8(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_set_Data_m0B021604CB3E04C6B776A8E70E31D658E0BBB6F8 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* V_1 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0;
		L_0 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(11 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, __this);
		V_0 = L_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = V_0;
		String_t* L_3 = __this->___data_3;
		String_t* L_4 = ___value0;
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_5;
		L_5 = VirtualFuncInvoker6< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, String_t*, String_t*, int32_t >::Invoke(45 /* System.Xml.XmlNodeChangedEventArgs System.Xml.XmlNode::GetEventArgs(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction) */, __this, __this, L_1, L_2, L_3, L_4, 2);
		V_1 = L_5;
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_7 = V_1;
		VirtualActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(46 /* System.Void System.Xml.XmlNode::BeforeEvent(System.Xml.XmlNodeChangedEventArgs) */, __this, L_7);
	}

IL_0023:
	{
		String_t* L_8 = ___value0;
		__this->___data_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_8);
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_10 = V_1;
		VirtualActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(47 /* System.Void System.Xml.XmlNode::AfterEvent(System.Xml.XmlNodeChangedEventArgs) */, __this, L_10);
	}

IL_0034:
	{
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_InnerText_mDDF2561B15E9D848132759CF7666B149E7BB3F86 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___data_3;
		return L_0;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_InnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_set_InnerText_m18D1063CD02F1717319F819F9CE7A54E6B15B6B1 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		XmlProcessingInstruction_set_Data_m0B021604CB3E04C6B776A8E70E31D658E0BBB6F8(__this, L_0, NULL);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlProcessingInstruction_get_NodeType_mA316EFA4D41F97CEDE5C8BD9B54CB3A81A35166C (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(7);
	}
}
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlProcessingInstruction_CloneNode_m2B3C10F20A1F79E13AB7F4EEF24DC28CBE07B7C6 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, bool ___deep0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = __this->___target_2;
		String_t* L_2 = __this->___data_3;
		NullCheck(L_0);
		XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* L_3;
		L_3 = VirtualFuncInvoker2< XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3*, String_t*, String_t* >::Invoke(59 /* System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_WriteTo_mABF354752E7FA33972A83CAD4E3E677A79D72DA9 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_0 = ___w0;
		String_t* L_1 = __this->___target_2;
		String_t* L_2 = __this->___data_3;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlProcessingInstruction_WriteContentTo_m1FDE3C19358CD856CD7706057135CD398370C16D (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_XPLocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_XPLocalName_m46B3DC13D75B12766D00058D7BA10F7A764BD363 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Name() */, __this);
		return L_0;
	}
}
// System.Xml.XPath.XPathNodeType System.Xml.XmlProcessingInstruction::get_XPNodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlProcessingInstruction_get_XPNodeType_m06BD8540060B11508211DF029293E9E4B188DB69 (XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(7);
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
// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSignificantWhitespace__ctor_mCE8AE4FC827464B5A5A54191D5D62E2AF41E078F (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, String_t* ___strData0, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___doc1;
		XmlCharacterData__ctor_m8B84C0BD8FF7329F4C5190230FA2495D808B34AF(__this, L_0, L_1, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_2 = ___doc1;
		NullCheck(L_2);
		bool L_3;
		L_3 = XmlDocument_get_IsLoading_mD97F2D54DE1BD3B4F8B496F4D8D31C061FA8A52D_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___strData0;
		bool L_5;
		L_5 = XmlCharacterData_CheckOnData_mD20947276C3B576599E015E4E19C0F2779862FBA(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6;
		L_6 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CCE57C5D7E1EEE86D308C81EAB8B71D0964327F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlSignificantWhitespace__ctor_mCE8AE4FC827464B5A5A54191D5D62E2AF41E078F_RuntimeMethod_var)));
	}

IL_0029:
	{
		return;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_Name_m567959AB8E2FE1356B88F20AAE6091C82CC7DBFB (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strSignificantWhitespaceName_34;
		return L_1;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_LocalName_m139F89C8361EDB472F9EBB8CFE63CA34EEAF8A2A (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strSignificantWhitespaceName_34;
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlSignificantWhitespace::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlSignificantWhitespace_get_NodeType_m21160A01DD6CB297930B84A6C4FCEFCD00CBAE2F (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)14));
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlSignificantWhitespace_get_ParentNode_m7CFDE3C1D02140F6046EED96E24A7B7AE0D52041 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0046;
	}

IL_0020:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = XmlNode_get_ParentNode_mF576AC1CF834069B79BF32E497BB1A05E3E4AF63(__this, NULL);
		return L_5;
	}

IL_0027:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_6);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = L_6->___parentNode_0;
		V_0 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = V_0;
		NullCheck(L_8);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = L_8->___parentNode_0;
		V_0 = L_9;
	}

IL_003c:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_10);
		if (L_11)
		{
			goto IL_0035;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = V_0;
		return L_12;
	}

IL_0046:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_13 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_13;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlSignificantWhitespace_CloneNode_mD037CFA06C03E34DBBEF5F69829B98E091BFB33B (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, bool ___deep0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* L_2;
		L_2 = VirtualFuncInvoker1< XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE*, String_t* >::Invoke(62 /* System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_Value_mD7C33B8F7D6D92583EC19AE399069B2851D97B49 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSignificantWhitespace_set_Value_m4E49DAC92DB2964DD041856C8573EB765A3EF983 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = XmlCharacterData_CheckOnData_mD20947276C3B576599E015E4E19C0F2779862FBA(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___value0;
		VirtualActionInvoker1< String_t* >::Invoke(53 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_2);
		return;
	}

IL_0011:
	{
		String_t* L_3;
		L_3 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CCE57C5D7E1EEE86D308C81EAB8B71D0964327F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlSignificantWhitespace_set_Value_m4E49DAC92DB2964DD041856C8573EB765A3EF983_RuntimeMethod_var)));
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSignificantWhitespace_WriteTo_mE569B6173B630873FEFD54ADCFFEADA4B541BB63 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_0 = ___w0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSignificantWhitespace_WriteContentTo_mAF13A398AF3A232891073267677EB513CD5689F2 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeType System.Xml.XmlSignificantWhitespace::get_XPNodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlSignificantWhitespace_get_XPNodeType_mEEA8CCBE0435E3B0CAF44F3AF256F506D2AE2560 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 5;
		bool L_0;
		L_0 = XmlCharacterData_DecideXPNodeTypeForTextNodes_m5E3AA296A84778246A1C441AF0F75C2E1F0DF898(__this, __this, (&V_0), NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean System.Xml.XmlSignificantWhitespace::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlSignificantWhitespace_get_IsText_m55119DC9A530D53A0B71107FD645882599483724 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::get_PreviousText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlSignificantWhitespace_get_PreviousText_m2E328F5E73D81302D6B7154127AA777AFAAAFAA9 (XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_2;
	}

IL_0014:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
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
// System.Void System.Xml.XmlText::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText__ctor_mD1D12098F7364C006DAAC8E7700C0C729CDEACDE (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, String_t* ___strData0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___strData0;
		XmlText__ctor_m8FFB8DDBB2C9013F10FD94A1573DCF6A2F104059(__this, L_0, (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText__ctor_m8FFB8DDBB2C9013F10FD94A1573DCF6A2F104059 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, String_t* ___strData0, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___doc1;
		XmlCharacterData__ctor_m8B84C0BD8FF7329F4C5190230FA2495D808B34AF(__this, L_0, L_1, NULL);
		return;
	}
}
// System.String System.Xml.XmlText::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlText_get_Name_mFFBDC4F67D5877B2CFC4D9784121B04887C5B31A (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strTextName_24;
		return L_1;
	}
}
// System.String System.Xml.XmlText::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlText_get_LocalName_mABBF7996A678D672606F8287E93F0FCFAE5EBCAA (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strTextName_24;
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlText_get_NodeType_m6D0D465CA1A36F5DAF640EEE3A4FB55DD0F654C5 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(3);
	}
}
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlText_get_ParentNode_m96163E85630F9606807D297C501A88D21670D719 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3))) > ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0041;
	}

IL_0020:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}

IL_0022:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_5);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = L_5->___parentNode_0;
		V_0 = L_6;
		goto IL_0037;
	}

IL_0030:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		NullCheck(L_7);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = L_7->___parentNode_0;
		V_0 = L_8;
	}

IL_0037:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_9);
		if (L_10)
		{
			goto IL_0030;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11 = V_0;
		return L_11;
	}

IL_0041:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_12;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlText_CloneNode_mC58FCAC8AD523804400FE1295053C382235F0962 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, bool ___deep0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* L_2;
		L_2 = VirtualFuncInvoker1< XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A*, String_t* >::Invoke(61 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlText::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlText_get_Value_m5CE492E7F1FFB377C9A1F9EC72E44259E0E9B23C (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlText::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText_set_Value_mE9EA76B47DF2CA7BD34DF45E77FE7BC6727BD1C7 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* V_1 = NULL;
	{
		String_t* L_0 = ___value0;
		VirtualActionInvoker1< String_t* >::Invoke(53 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_0);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		V_0 = L_1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = V_0;
		V_1 = ((XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC*)IsInstClass((RuntimeObject*)L_5, XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC_il2cpp_TypeInfo_var));
		XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(52 /* System.Boolean System.Xml.XmlAttribute::get_Specified() */, L_7);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* L_9 = V_1;
		NullCheck(L_9);
		XmlUnspecifiedAttribute_SetSpecified_m1CF67FF3E90E62DC5B0983B8DE91B6E95228509B_inline(L_9, (bool)1, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText_WriteTo_mC041FC91EDF60BE32143DE875DAE9482E0512168 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_0 = ___w0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlText_WriteContentTo_m8DF066DF522FB3EA2807C65AA5E9581EFE819B1B (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeType System.Xml.XmlText::get_XPNodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlText_get_XPNodeType_m1E90820C40D233CA44E2D2F6A11EF3F416B4ADA3 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Xml.XmlText::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlText_get_IsText_m52A204B0EEFECFB926476B40F8C7400DE8002E86 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::get_PreviousText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlText_get_PreviousText_m4A2F765F015E5C5B09F3DE108EE13D72F50965D7 (XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_2;
	}

IL_0014:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
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
// System.Void System.Xml.XmlUnspecifiedAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute__ctor_m44D3E93A1FE83F8B631B4BE61CC2EA76865E36A6 (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___namespaceURI2;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_3 = ___doc3;
		XmlAttribute__ctor_m11339257CF537ACBDA1BC5ED16CD45BF0C318971(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlUnspecifiedAttribute::get_Specified()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUnspecifiedAttribute_get_Specified_m7616C9E12FEDBD7614D533DA01AE6D1683681F63 (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___fSpecified_3;
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlUnspecifiedAttribute_CloneNode_mE263CEBF9D54C08ADE816062D36D35FD017D4413 (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, bool ___deep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		V_0 = L_0;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = V_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(31 /* System.String System.Xml.XmlNode::get_Prefix() */, __this);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(32 /* System.String System.Xml.XmlNode::get_LocalName() */, __this);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(30 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, __this);
		NullCheck(L_1);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_5;
		L_5 = VirtualFuncInvoker3< XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*, String_t*, String_t*, String_t* >::Invoke(66 /* System.Xml.XmlAttribute System.Xml.XmlDocument::CreateDefaultAttribute(System.String,System.String,System.String) */, L_1, L_2, L_3, L_4);
		XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* L_6 = ((XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC*)CastclassClass((RuntimeObject*)L_5, XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC_il2cpp_TypeInfo_var));
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker3< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, bool >::Invoke(29 /* System.Void System.Xml.XmlNode::CopyChildren(System.Xml.XmlDocument,System.Xml.XmlNode,System.Boolean) */, L_6, L_7, __this, (bool)1);
		XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* L_8 = L_6;
		NullCheck(L_8);
		L_8->___fSpecified_3 = (bool)1;
		return L_8;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::set_InnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_set_InnerText_mC86379C6CE1D874F02F13726BEC8018578B2B6F5 (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		XmlAttribute_set_InnerText_m8C2905157BABDF6E243AE718524293A57422A9D2(__this, L_0, NULL);
		__this->___fSpecified_3 = (bool)1;
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::RemoveChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlUnspecifiedAttribute_RemoveChild_m3227CEDFFD6F1317D41598C8FCB6E58A7137DFCC (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___oldChild0, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___oldChild0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = XmlAttribute_RemoveChild_m81EEA6827E61E919CF45D3E4157ED643D3B81D18(__this, L_0, NULL);
		__this->___fSpecified_3 = (bool)1;
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::AppendChild(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlUnspecifiedAttribute_AppendChild_m00F21938A305CBFE67ADD09005BC13316F218C3B (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___newChild0, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___newChild0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = XmlAttribute_AppendChild_mF31F0A172D904DEE1DF58B25093DCCF9E0C4CC75(__this, L_0, NULL);
		__this->___fSpecified_3 = (bool)1;
		return L_1;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_WriteTo_mE80E7C4C18C7199B63951974132A6241BD55190B (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___fSpecified_3;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_1 = ___w0;
		XmlAttribute_WriteTo_mD4DF594D7278F46E44DF3CC46453309F3D270578(__this, L_1, NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::SetSpecified(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_SetSpecified_m1CF67FF3E90E62DC5B0983B8DE91B6E95228509B (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, bool ___f0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___f0;
		__this->___fSpecified_3 = L_0;
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m95E6CA1AFEECB5C1B3EDDAA039864BDF315FD0AE (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, String_t* ___strData0, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___doc1;
		XmlCharacterData__ctor_m8B84C0BD8FF7329F4C5190230FA2495D808B34AF(__this, L_0, L_1, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_2 = ___doc1;
		NullCheck(L_2);
		bool L_3;
		L_3 = XmlDocument_get_IsLoading_mD97F2D54DE1BD3B4F8B496F4D8D31C061FA8A52D_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___strData0;
		bool L_5;
		L_5 = XmlCharacterData_CheckOnData_mD20947276C3B576599E015E4E19C0F2779862FBA(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6;
		L_6 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CCE57C5D7E1EEE86D308C81EAB8B71D0964327F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlWhitespace__ctor_m95E6CA1AFEECB5C1B3EDDAA039864BDF315FD0AE_RuntimeMethod_var)));
	}

IL_0029:
	{
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Name_mF6D7B4B3FED41218945AFCC8DAABAE23D113E2C7 (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strNonSignificantWhitespaceName_33;
		return L_1;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_LocalName_m27750405F6A0EA2A5AE58E3C36CE03E22BAB6F9B (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->___strNonSignificantWhitespaceName_33;
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_NodeType_m6CF504BF111BB7684DE6CED04FF541279D1A8A4D (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlWhitespace_get_ParentNode_m2741B3CD1D5B0D2758C9096F45CA253CC8E690BF (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0046;
	}

IL_0020:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = XmlNode_get_ParentNode_mF576AC1CF834069B79BF32E497BB1A05E3E4AF63(__this, NULL);
		return L_5;
	}

IL_0027:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_6);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = L_6->___parentNode_0;
		V_0 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = V_0;
		NullCheck(L_8);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = L_8->___parentNode_0;
		V_0 = L_9;
	}

IL_003c:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_10);
		if (L_11)
		{
			goto IL_0035;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = V_0;
		return L_12;
	}

IL_0046:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_13 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_13;
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Value_m10F045B861F64A2D7BF8B93A7E3B780BAF3EE85E (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_set_Value_m21C564680F3206E6130A184D9AE3DC86EC723A4E (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = XmlCharacterData_CheckOnData_mD20947276C3B576599E015E4E19C0F2779862FBA(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___value0;
		VirtualActionInvoker1< String_t* >::Invoke(53 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_2);
		return;
	}

IL_0011:
	{
		String_t* L_3;
		L_3 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CCE57C5D7E1EEE86D308C81EAB8B71D0964327F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlWhitespace_set_Value_m21C564680F3206E6130A184D9AE3DC86EC723A4E_RuntimeMethod_var)));
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlWhitespace_CloneNode_m3B9180F7900CCE22C9E9CE01D06742EE4F979D6A (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, bool ___deep0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0;
		L_0 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(16 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* L_2;
		L_2 = VirtualFuncInvoker1< XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24*, String_t* >::Invoke(64 /* System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_WriteTo_m17623B8295BC3DF464DD2A1D636CBC2A5E7EFE86 (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_0 = ___w0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWhitespace::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWhitespace_WriteContentTo_m08C97505A227B26D67D3D3ADDBDD745F39E1228D (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___w0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeType System.Xml.XmlWhitespace::get_XPNodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_XPNodeType_m9C22F2D7A8B57B31EAE4A85DC198AF25BA267309 (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		bool L_0;
		L_0 = XmlCharacterData_DecideXPNodeTypeForTextNodes_m5E3AA296A84778246A1C441AF0F75C2E1F0DF898(__this, __this, (&V_0), NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean System.Xml.XmlWhitespace::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlWhitespace_get_IsText_mC4F1ADD83662FEDCD8F54A2F2C60E82F0819E9DF (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_PreviousText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlWhitespace_get_PreviousText_mCA1128071E74099BA0921918383E6647DD484A07 (XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this)->___parentNode_0;
		return L_2;
	}

IL_0014:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
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
// System.Boolean System.Xml.EmptyEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmptyEnumerator_System_Collections_IEnumerator_MoveNext_m1D1ED329E1A11EB09BF11A969309A8C336363E06 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Xml.EmptyEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyEnumerator_System_Collections_IEnumerator_Reset_m60B63D059F4ABACCFF0136AD35A7B858CDC6DAD4 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object System.Xml.EmptyEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mDA55FC7FF8E2C038FBF35ECD8F23554CF9C31D43(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5_RuntimeMethod_var)));
	}
}
// System.Void System.Xml.EmptyEnumerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyEnumerator__ctor_m05DA73C42354A4E549CCA7E9485B294057ABA981 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Xml.HWStack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack__ctor_mC458E3344CF521C473E1C0FF77D350E65A11A9C9 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, int32_t ___GrowthRate0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___GrowthRate0;
		HWStack__ctor_m99FCAA41A47F1804002247BD900432EB254448EC(__this, L_0, ((int32_t)2147483647LL), NULL);
		return;
	}
}
// System.Void System.Xml.HWStack::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack__ctor_m99FCAA41A47F1804002247BD900432EB254448EC (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, int32_t ___GrowthRate0, int32_t ___limit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___GrowthRate0;
		__this->___growthRate_1 = L_0;
		__this->___used_2 = 0;
		int32_t L_1 = ___GrowthRate0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___stack_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stack_0), (void*)L_2);
		int32_t L_3 = ___GrowthRate0;
		__this->___size_3 = L_3;
		int32_t L_4 = ___limit1;
		__this->___limit_4 = L_4;
		return;
	}
}
// System.Object System.Xml.HWStack::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HWStack_Push_mB56F1D723F4F22AEF3D79471002C5C28B941E520 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___used_2;
		int32_t L_1 = __this->___size_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_2 = __this->___limit_4;
		int32_t L_3 = __this->___used_2;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_5 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		XmlException__ctor_mD7C8E5B35C43BCEDBB41ADC035A38088DFE88A87(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7899B2E8A04E6FD13A12E445A7ED6DFA996101EC)), L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HWStack_Push_mB56F1D723F4F22AEF3D79471002C5C28B941E520_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = __this->___size_3;
		int32_t L_7 = __this->___growthRate_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_6, L_7)));
		V_0 = L_8;
		int32_t L_9 = __this->___used_2;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->___stack_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		int32_t L_12 = __this->___used_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_005c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		__this->___stack_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stack_0), (void*)L_13);
		int32_t L_14 = __this->___size_3;
		int32_t L_15 = __this->___growthRate_1;
		__this->___size_3 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0076:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___stack_0;
		int32_t L_17 = __this->___used_2;
		V_1 = L_17;
		int32_t L_18 = V_1;
		__this->___used_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_1;
		NullCheck(L_16);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return L_21;
	}
}
// System.Object System.Xml.HWStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HWStack_Pop_m719771746919E84F388E413881376AD49B697471 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___used_2;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = __this->___used_2;
		__this->___used_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___stack_0;
		int32_t L_3 = __this->___used_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_0025:
	{
		return NULL;
	}
}
// System.Object System.Xml.HWStack::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HWStack_Peek_m4ACE3C92DC4F77A441791E8935F2A761139D38BF (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___used_2;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return NULL;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___stack_0;
		int32_t L_2 = __this->___used_2;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void System.Xml.HWStack::AddToTop(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack_AddToTop_m2906D8C7096B89DA2A642C6022A0BBDA3E56D38D (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___used_2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___stack_0;
		int32_t L_2 = __this->___used_2;
		RuntimeObject* L_3 = ___o0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_2, 1))), (RuntimeObject*)L_3);
	}

IL_0019:
	{
		return;
	}
}
// System.Object System.Xml.HWStack::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HWStack_get_Item_m22D16C45E0F052B2C253F5E415C6A3EFB446C6A6 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->___used_2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___stack_0;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_0016:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HWStack_get_Item_m22D16C45E0F052B2C253F5E415C6A3EFB446C6A6_RuntimeMethod_var)));
	}
}
// System.Void System.Xml.HWStack::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack_set_Item_mDF787484E3F13831EC68953C27A6C984A48471D9 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->___used_2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___stack_0;
		int32_t L_4 = ___index0;
		RuntimeObject* L_5 = ___value1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		return;
	}

IL_0017:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HWStack_set_Item_mDF787484E3F13831EC68953C27A6C984A48471D9_RuntimeMethod_var)));
	}
}
// System.Int32 System.Xml.HWStack::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HWStack_get_Length_m6363693F0CF183362158EE28989E47D9ED83120F (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___used_2;
		return L_0;
	}
}
// System.Void System.Xml.HWStack::.ctor(System.Object[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWStack__ctor_m2F8F3305E714F61B045C8552EB4D49C6F3616484 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___stack0, int32_t ___growthRate1, int32_t ___used2, int32_t ___size3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___stack0;
		__this->___stack_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stack_0), (void*)L_0);
		int32_t L_1 = ___growthRate1;
		__this->___growthRate_1 = L_1;
		int32_t L_2 = ___used2;
		__this->___used_2 = L_2;
		int32_t L_3 = ___size3;
		__this->___size_3 = L_3;
		return;
	}
}
// System.Object System.Xml.HWStack::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HWStack_Clone_mC94F0DE0287E23C656F0D547C523781CFEEADEC9 (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___stack_0;
		NullCheck((RuntimeArray*)L_0);
		RuntimeObject* L_1;
		L_1 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_0, NULL);
		int32_t L_2 = __this->___growthRate_1;
		int32_t L_3 = __this->___used_2;
		int32_t L_4 = __this->___size_3;
		HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5* L_5 = (HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5*)il2cpp_codegen_object_new(HWStack_tD40EE1D12E709BECF016469F161DC3071C020CC5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HWStack__ctor_m2F8F3305E714F61B045C8552EB4D49C6F3616484(L_5, ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), L_2, L_3, L_4, NULL);
		return L_5;
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
// System.Boolean System.Xml.PositionInfo::HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionInfo_HasLineInfo_mBC41D45A82DA70DDBA689931CA5C9F7EC0C27FFA (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 System.Xml.PositionInfo::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PositionInfo_get_LineNumber_mDB25B305515AA67406DE2E26DF50DEDEADC93FE9 (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Int32 System.Xml.PositionInfo::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PositionInfo_get_LinePosition_m38138426AF4BD6CB36348CF7C899F8589622FDCB (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Xml.PositionInfo System.Xml.PositionInfo::GetPositionInfo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* PositionInfo_GetPositionInfo_mBE513E266ACFBCBDE780ED61BF7571F872036A56 (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* L_3 = (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338*)il2cpp_codegen_object_new(ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ReaderPositionInfo__ctor_m7D560CD9AF19A8C7287A728AE2245D444B16CBD4(L_3, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* L_4 = (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5*)il2cpp_codegen_object_new(PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PositionInfo__ctor_mAF0BC66656F80EFD0380EABD218CED5AABA13012(L_4, NULL);
		return L_4;
	}
}
// System.Void System.Xml.PositionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionInfo__ctor_mAF0BC66656F80EFD0380EABD218CED5AABA13012 (PositionInfo_t1695F015DE0C183D3B4CE5A1562AD8A8A373F5B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Xml.ReaderPositionInfo::.ctor(System.Xml.IXmlLineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderPositionInfo__ctor_m7D560CD9AF19A8C7287A728AE2245D444B16CBD4 (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* __this, RuntimeObject* ___lineInfo0, const RuntimeMethod* method) 
{
	{
		PositionInfo__ctor_mAF0BC66656F80EFD0380EABD218CED5AABA13012(__this, NULL);
		RuntimeObject* L_0 = ___lineInfo0;
		__this->___lineInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineInfo_0), (void*)L_0);
		return;
	}
}
// System.Boolean System.Xml.ReaderPositionInfo::HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderPositionInfo_HasLineInfo_m3106194B829362F51F9A0E1452415E0680F2644B (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___lineInfo_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.ReaderPositionInfo::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderPositionInfo_get_LineNumber_m7DD0C75E6F091DAB821D20FFE95D5E9CE835AB6E (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___lineInfo_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.ReaderPositionInfo::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReaderPositionInfo_get_LinePosition_m8DA55B7C9111E0BC07D07AD2878E792CC9F357A2 (ReaderPositionInfo_t02F85F757B61614DE369B8F20F6C5C4AC860E338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___lineInfo_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tDD8332CE7D244FDA50A6C5744D7EAEC4A6CCBF05_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Xml.LineInfo::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0 (LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lineNo0;
		__this->___lineNo_0 = L_0;
		int32_t L_1 = ___linePos1;
		__this->___linePos_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0_AdjustorThunk (RuntimeObject* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24*>(__this + _offset);
	LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0(_thisAdjusted, ___lineNo0, ___linePos1, method);
}
// System.Void System.Xml.LineInfo::Set(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfo_Set_m5D59B42332EDBA296FA9AED5CF63D8BECC18214E (LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lineNo0;
		__this->___lineNo_0 = L_0;
		int32_t L_1 = ___linePos1;
		__this->___linePos_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void LineInfo_Set_m5D59B42332EDBA296FA9AED5CF63D8BECC18214E_AdjustorThunk (RuntimeObject* __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24*>(__this + _offset);
	LineInfo_Set_m5D59B42332EDBA296FA9AED5CF63D8BECC18214E(_thisAdjusted, ___lineNo0, ___linePos1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.NameTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNameTable__ctor_m165D6C26354AF163FA559778C1998B36A8A5FBF6(__this, NULL);
		__this->___mask_2 = ((int32_t)31);
		int32_t L_0 = __this->___mask_2;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_1 = (EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A*)(EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A*)SZArrayNew(EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		__this->___entries_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_0), (void*)L_1);
		int32_t L_2;
		L_2 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		__this->___hashCodeRandomizer_3 = L_2;
		return;
	}
}
// System.String System.Xml.NameTable::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_Add_m5ACB3656DCB4016DAA199A6CC1ACEF6E6B01F363 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_3 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameTable_Add_m5ACB3656DCB4016DAA199A6CC1ACEF6E6B01F363_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___key0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___hashCodeRandomizer_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		V_2 = 0;
		goto IL_003d;
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		String_t* L_10 = ___key0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((int32_t)(L_9<<7))^(int32_t)L_12))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		String_t* L_15 = ___key0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)(L_18>>((int32_t)17)))));
		int32_t L_19 = V_1;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)(L_20>>((int32_t)11)))));
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)(L_22>>5))));
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_23 = __this->___entries_0;
		int32_t L_24 = V_1;
		int32_t L_25 = __this->___mask_2;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)(L_24&L_25));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		goto IL_0091;
	}

IL_006c:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29 = L_28->___hashCode_1;
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_008a;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32 = L_31->___str_0;
		String_t* L_33 = ___key0;
		NullCheck(L_32);
		bool L_34;
		L_34 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_008a;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = L_35->___str_0;
		return L_36;
	}

IL_008a:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_37 = V_3;
		NullCheck(L_37);
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_38 = L_37->___next_2;
		V_3 = L_38;
	}

IL_0091:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_39 = V_3;
		if (L_39)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_40 = ___key0;
		int32_t L_41 = V_1;
		String_t* L_42;
		L_42 = NameTable_AddEntry_mF259DCB5A89DFE81744AF039838B918F52020C5F(__this, L_40, L_41, NULL);
		return L_42;
	}
}
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_Add_mCF098D8FE1698BF0476860D202B4953295A04B1A (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___key0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_3 = NULL;
	{
		int32_t L_0 = ___len2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___len2;
		int32_t L_3 = __this->___hashCodeRandomizer_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___key0;
		int32_t L_7 = ___start1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(((int32_t)(L_5<<7))^(int32_t)L_9))));
		int32_t L_10 = ___start1;
		int32_t L_11 = ___len2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = ___start1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0034;
	}

IL_0026:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = ___key0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(((int32_t)(L_14<<7))^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0034:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)(L_23>>((int32_t)17)))));
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25>>((int32_t)11)))));
		int32_t L_26 = V_0;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)(L_27>>5))));
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_28 = __this->___entries_0;
		int32_t L_29 = V_0;
		int32_t L_30 = __this->___mask_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)(L_29&L_30));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		goto IL_0085;
	}

IL_005e:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = L_33->___hashCode_1;
		int32_t L_35 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_007e;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37 = L_36->___str_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = ___key0;
		int32_t L_39 = ___start1;
		int32_t L_40 = ___len2;
		bool L_41;
		L_41 = NameTable_TextEquals_mB56344E2C4832FFE2E398E446B1742A921FCF87A(L_37, L_38, L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_007e;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_42 = V_3;
		NullCheck(L_42);
		String_t* L_43 = L_42->___str_0;
		return L_43;
	}

IL_007e:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_44 = V_3;
		NullCheck(L_44);
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_45 = L_44->___next_2;
		V_3 = L_45;
	}

IL_0085:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_46 = V_3;
		if (L_46)
		{
			goto IL_005e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = ___key0;
		int32_t L_48 = ___start1;
		int32_t L_49 = ___len2;
		String_t* L_50;
		L_50 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_47, L_48, L_49, NULL);
		int32_t L_51 = V_0;
		String_t* L_52;
		L_52 = NameTable_AddEntry_mF259DCB5A89DFE81744AF039838B918F52020C5F(__this, L_50, L_51, NULL);
		return L_52;
	}
}
// System.String System.Xml.NameTable::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_Get_m3E92F325593978B474D3BDF7E2DCEC77DEA956D8 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_2 = NULL;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameTable_Get_m3E92F325593978B474D3BDF7E2DCEC77DEA956D8_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001c:
	{
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = __this->___hashCodeRandomizer_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		V_1 = 0;
		goto IL_0040;
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		String_t* L_10 = ___value0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((int32_t)(L_9<<7))^(int32_t)L_12))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		int32_t L_14 = V_1;
		String_t* L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)(L_18>>((int32_t)17)))));
		int32_t L_19 = V_0;
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)(L_20>>((int32_t)11)))));
		int32_t L_21 = V_0;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)(L_22>>5))));
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_23 = __this->___entries_0;
		int32_t L_24 = V_0;
		int32_t L_25 = __this->___mask_2;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)(L_24&L_25));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		goto IL_0094;
	}

IL_006f:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = L_28->___hashCode_1;
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_008d;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32 = L_31->___str_0;
		String_t* L_33 = ___value0;
		NullCheck(L_32);
		bool L_34;
		L_34 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_008d;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36 = L_35->___str_0;
		return L_36;
	}

IL_008d:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_37 = V_2;
		NullCheck(L_37);
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_38 = L_37->___next_2;
		V_2 = L_38;
	}

IL_0094:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_39 = V_2;
		if (L_39)
		{
			goto IL_006f;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.NameTable::Get(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_Get_m530348864F9E389640190E2A8BDE43C1D0448ABE (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___key0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_3 = NULL;
	{
		int32_t L_0 = ___len2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___len2;
		int32_t L_3 = __this->___hashCodeRandomizer_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___key0;
		int32_t L_7 = ___start1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(((int32_t)(L_5<<7))^(int32_t)L_9))));
		int32_t L_10 = ___start1;
		int32_t L_11 = ___len2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = ___start1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0034;
	}

IL_0026:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = ___key0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(((int32_t)(L_14<<7))^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0034:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)(L_23>>((int32_t)17)))));
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25>>((int32_t)11)))));
		int32_t L_26 = V_0;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)(L_27>>5))));
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_28 = __this->___entries_0;
		int32_t L_29 = V_0;
		int32_t L_30 = __this->___mask_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)(L_29&L_30));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		goto IL_0085;
	}

IL_005e:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = L_33->___hashCode_1;
		int32_t L_35 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_007e;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37 = L_36->___str_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = ___key0;
		int32_t L_39 = ___start1;
		int32_t L_40 = ___len2;
		bool L_41;
		L_41 = NameTable_TextEquals_mB56344E2C4832FFE2E398E446B1742A921FCF87A(L_37, L_38, L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_007e;
		}
	}
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_42 = V_3;
		NullCheck(L_42);
		String_t* L_43 = L_42->___str_0;
		return L_43;
	}

IL_007e:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_44 = V_3;
		NullCheck(L_44);
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_45 = L_44->___next_2;
		V_3 = L_45;
	}

IL_0085:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_46 = V_3;
		if (L_46)
		{
			goto IL_005e;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameTable_AddEntry_mF259DCB5A89DFE81744AF039838B918F52020C5F (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashCode1;
		int32_t L_1 = __this->___mask_2;
		V_0 = ((int32_t)(L_0&L_1));
		String_t* L_2 = ___str0;
		int32_t L_3 = ___hashCode1;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_4 = __this->___entries_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_8 = (Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC*)il2cpp_codegen_object_new(Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Entry__ctor_m659BC03FEAA3AE1874FE82AD8740CCDEAE1CDFED(L_8, L_2, L_3, L_7, NULL);
		V_1 = L_8;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_9 = __this->___entries_0;
		int32_t L_10 = V_0;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_11 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC*)L_11);
		int32_t L_12 = __this->___count_1;
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->___count_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_2;
		int32_t L_15 = __this->___mask_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0041;
		}
	}
	{
		NameTable_Grow_m34F300598474A63CEA90D7F7A71C6F9EB536D5B2(__this, NULL);
	}

IL_0041:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = L_16->___str_0;
		return L_17;
	}
}
// System.Void System.Xml.NameTable::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable_Grow_m34F300598474A63CEA90D7F7A71C6F9EB536D5B2 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* V_1 = NULL;
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* V_2 = NULL;
	int32_t V_3 = 0;
	Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___mask_2;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_1 = __this->___entries_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_3 = (EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A*)(EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A*)SZArrayNew(EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_2 = L_3;
		V_3 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		goto IL_004b;
	}

IL_0026:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___hashCode_1;
		int32_t L_10 = V_0;
		V_5 = ((int32_t)(L_9&L_10));
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_11 = V_4;
		NullCheck(L_11);
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_12 = L_11->___next_2;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_13 = V_4;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_14 = V_2;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		L_13->___next_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___next_2), (void*)L_17);
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_18 = V_2;
		int32_t L_19 = V_5;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_20 = V_4;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC*)L_20);
		V_4 = L_12;
	}

IL_004b:
	{
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_21 = V_4;
		if (L_21)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0053:
	{
		int32_t L_23 = V_3;
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* L_25 = V_2;
		__this->___entries_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_0), (void*)L_25);
		int32_t L_26 = V_0;
		__this->___mask_2 = L_26;
		return;
	}
}
// System.Boolean System.Xml.NameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameTable_TextEquals_mB56344E2C4832FFE2E398E446B1742A921FCF87A (String_t* ___str10, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = ___str2Length3;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_000f:
	{
		String_t* L_3 = ___str10;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___str21;
		int32_t L_7 = ___str2Start2;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		uint16_t L_10 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_5) == ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		int32_t L_12 = V_0;
		String_t* L_13 = ___str10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
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
// System.Void System.Xml.NameTable/Entry::.ctor(System.String,System.Int32,System.Xml.NameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m659BC03FEAA3AE1874FE82AD8740CCDEAE1CDFED (Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* __this, String_t* ___str0, int32_t ___hashCode1, Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* ___next2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___str0;
		__this->___str_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___str_0), (void*)L_0);
		int32_t L_1 = ___hashCode1;
		__this->___hashCode_1 = L_1;
		Entry_t3313D8C63B0E5621D13B18196D1FD91E4612E4CC* L_2 = ___next2;
		__this->___next_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___next_2), (void*)L_2);
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
// System.Boolean System.Xml.Ref::Equal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ref_Equal_m91CE186A8D713DBCF387B2A4AA83138704C7B8B1 (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___strA0;
		String_t* L_1 = ___strB1;
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))? 1 : 0);
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
// System.Void System.Xml.DtdParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser__ctor_m4E3B38D8F814505EEBDC983BE9A9AAE448F9F279 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_0;
		L_0 = XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD(NULL);
		__this->___xmlCharType_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___xmlCharType_4))->___charProperties_2), (void*)NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___systemId_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemId_5), (void*)L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___publicId_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publicId_6), (void*)L_2);
		__this->___normalize_7 = (bool)1;
		__this->___supportNamespaces_9 = (bool)1;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_3;
		memset((&L_3), 0, sizeof(L_3));
		LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0((&L_3), 0, 0, /*hidden argument*/NULL);
		__this->___literalLineInfo_27 = L_3;
		__this->___literalQuoteChar_28 = ((int32_t)34);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___documentBaseUri_29 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___documentBaseUri_29), (void*)L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___externalDtdBaseUri_30 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalDtdBaseUri_30), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Xml.IDtdParser System.Xml.DtdParser::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdParser_Create_mEAB3483CB293C48815D7ED94E0EE32B2A175731B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* L_0 = (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53*)il2cpp_codegen_object_new(DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DtdParser__ctor_m4E3B38D8F814505EEBDC983BE9A9AAE448F9F279(L_0, NULL);
		return L_0;
	}
}
// System.Void System.Xml.DtdParser::Initialize(System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Initialize_m0EBA9112535360FF3CB54D32A2F693231023460F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, RuntimeObject* ___readerAdapter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___readerAdapter0;
		__this->___readerAdapter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readerAdapter_0), (void*)L_0);
		RuntimeObject* L_1 = ___readerAdapter0;
		__this->___readerAdapterWithValidation_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readerAdapterWithValidation_1), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2 = ___readerAdapter0;
		NullCheck(L_2);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_3;
		L_3 = InterfaceFuncInvoker0< XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* >::Invoke(0 /* System.Xml.XmlNameTable System.Xml.IDtdParserAdapter::get_NameTable() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_2);
		__this->___nameTable_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameTable_2), (void*)L_3);
		RuntimeObject* L_4 = ___readerAdapter0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IDtdParserAdapterWithValidation::get_DtdValidation() */, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var, L_6);
		__this->___validate_8 = L_7;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___readerAdapter0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IDtdParserAdapterV1::get_V1CompatibilityMode() */, IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var, L_10);
		__this->___v1Compat_10 = L_11;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Xml.IDtdParserAdapterV1::get_Normalization() */, IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var, L_12);
		__this->___normalize_7 = L_13;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IDtdParserAdapterV1::get_Namespaces() */, IDtdParserAdapterV1_t92703F78527FE332BF3631B8374DC793D1E82E6D_il2cpp_TypeInfo_var, L_14);
		__this->___supportNamespaces_9 = L_15;
	}

IL_0063:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_16 = (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E*)il2cpp_codegen_object_new(SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		SchemaInfo__ctor_mF2778D9A328648120368A2B00DC41949E52E0963(L_16, NULL);
		__this->___schemaInfo_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___schemaInfo_3), (void*)L_16);
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_17 = __this->___schemaInfo_3;
		NullCheck(L_17);
		SchemaInfo_set_SchemaType_m00F5B5934AC3BDDD71AAEB8CA3E307451FA51229_inline(L_17, 1, NULL);
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		__this->___stringBuilder_25 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringBuilder_25), (void*)L_18);
		RuntimeObject* L_19 = ___readerAdapter0;
		NullCheck(L_19);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_20;
		L_20 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_19);
		V_2 = L_20;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E(L_21, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00a1;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		__this->___documentBaseUri_29 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___documentBaseUri_29), (void*)L_24);
	}

IL_00a1:
	{
		__this->___freeFloatingDtd_23 = (bool)0;
		return;
	}
}
// System.Void System.Xml.DtdParser::InitializeFreeFloatingDtd(System.String,System.String,System.String,System.String,System.String,System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_InitializeFreeFloatingDtd_m1508B91CB75E55A064D4DC2EC796EF2B35785B13 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___baseUri0, String_t* ___docTypeName1, String_t* ___publicId2, String_t* ___systemId3, String_t* ___internalSubset4, RuntimeObject* ___adapter5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___adapter5;
		DtdParser_Initialize_m0EBA9112535360FF3CB54D32A2F693231023460F(__this, L_0, NULL);
		String_t* L_1 = ___docTypeName1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___docTypeName1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}

IL_0013:
	{
		String_t* L_4 = ___docTypeName1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5;
		L_5 = XmlConvert_CreateInvalidNameArgumentException_m0B235FA7E46AD1CFB389413509E11D59B6BA9AA2(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3304C21E7F8F3D25BF870F3A00FB0D196C695E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DtdParser_InitializeFreeFloatingDtd_m1508B91CB75E55A064D4DC2EC796EF2B35785B13_RuntimeMethod_var)));
	}

IL_001f:
	{
		String_t* L_6 = ___docTypeName1;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = XmlConvert_VerifyName_m5A3D4679962414F4932E7B0C480BDD7D732F52B1(L_6, NULL);
		String_t* L_8 = ___docTypeName1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_8, ((int32_t)58), NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0051;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_11 = __this->___schemaInfo_3;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_12 = __this->___nameTable_2;
		String_t* L_13 = ___docTypeName1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_12, L_13);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_15 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		XmlQualifiedName__ctor_m2DD62019A76524587CC7204E1AB903CDAADA6545(L_15, L_14, NULL);
		NullCheck(L_11);
		SchemaInfo_set_DocTypeName_mB87F85301E58DCCDD63697CE790A4417A07A54B0_inline(L_11, L_15, NULL);
		goto IL_0088;
	}

IL_0051:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_16 = __this->___schemaInfo_3;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_17 = __this->___nameTable_2;
		String_t* L_18 = ___docTypeName1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 0, L_19, NULL);
		NullCheck(L_17);
		String_t* L_21;
		L_21 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_17, L_20);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_22 = __this->___nameTable_2;
		String_t* L_23 = ___docTypeName1;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		NullCheck(L_22);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_22, L_25);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_27 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B(L_27, L_21, L_26, NULL);
		NullCheck(L_16);
		SchemaInfo_set_DocTypeName_mB87F85301E58DCCDD63697CE790A4417A07A54B0_inline(L_16, L_27, NULL);
	}

IL_0088:
	{
		String_t* L_28 = ___systemId3;
		if (!L_28)
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_29 = ___systemId3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_31 = (&__this->___xmlCharType_4);
		String_t* L_32 = ___systemId3;
		int32_t L_33;
		L_33 = XmlCharType_IsOnlyCharData_m5BFEFD55C4578A0117D1ED3305ACF4C062DCE9D3(L_31, L_32, NULL);
		int32_t L_34 = L_33;
		V_1 = L_34;
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_35 = __this->___curPos_13;
		String_t* L_36 = ___systemId3;
		int32_t L_37 = V_1;
		DtdParser_ThrowInvalidChar_mD2161D4741D7A76279757B830E981723BEB64CA3(__this, L_35, L_36, L_37, NULL);
	}

IL_00b7:
	{
		String_t* L_38 = ___systemId3;
		__this->___systemId_5 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemId_5), (void*)L_38);
	}

IL_00bf:
	{
		String_t* L_39 = ___publicId2;
		if (!L_39)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_40 = ___publicId2;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_42 = (&__this->___xmlCharType_4);
		String_t* L_43 = ___publicId2;
		int32_t L_44;
		L_44 = XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE(L_42, L_43, NULL);
		int32_t L_45 = L_44;
		V_1 = L_45;
		if ((((int32_t)L_45) < ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_46 = __this->___curPos_13;
		String_t* L_47 = ___publicId2;
		int32_t L_48 = V_1;
		DtdParser_ThrowInvalidChar_mD2161D4741D7A76279757B830E981723BEB64CA3(__this, L_46, L_47, L_48, NULL);
	}

IL_00ea:
	{
		String_t* L_49 = ___publicId2;
		__this->___publicId_6 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publicId_6), (void*)L_49);
	}

IL_00f1:
	{
		String_t* L_50 = ___internalSubset4;
		if (!L_50)
		{
			goto IL_0114;
		}
	}
	{
		String_t* L_51 = ___internalSubset4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_51, NULL);
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0114;
		}
	}
	{
		RuntimeObject* L_53 = __this->___readerAdapter_0;
		String_t* L_54 = ___baseUri0;
		String_t* L_55 = ___internalSubset4;
		NullCheck(L_53);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Xml.IDtdParserAdapter::PushInternalDtd(System.String,System.String) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_53, L_54, L_55);
		__this->___hasFreeFloatingInternalSubset_24 = (bool)1;
	}

IL_0114:
	{
		RuntimeObject* L_56 = __this->___readerAdapter_0;
		NullCheck(L_56);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_57;
		L_57 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_56);
		V_2 = L_57;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_58 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E(L_58, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_59)
		{
			goto IL_0135;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_60 = V_2;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		__this->___documentBaseUri_29 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___documentBaseUri_29), (void*)L_61);
	}

IL_0135:
	{
		__this->___freeFloatingDtd_23 = (bool)1;
		return;
	}
}
// System.Xml.IDtdInfo System.Xml.DtdParser::System.Xml.IDtdParser.ParseInternalDtd(System.Xml.IDtdParserAdapter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdParser_System_Xml_IDtdParser_ParseInternalDtd_m68D16C997BF5178214EFDB8E4D2DAD9B4C66D1DA (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, RuntimeObject* ___adapter0, bool ___saveInternalSubset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adapter0;
		DtdParser_Initialize_m0EBA9112535360FF3CB54D32A2F693231023460F(__this, L_0, NULL);
		bool L_1 = ___saveInternalSubset1;
		DtdParser_Parse_m251123EFA9598E4851882EB21A72EDF13E3D6EC6(__this, L_1, NULL);
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2 = __this->___schemaInfo_3;
		return L_2;
	}
}
// System.Xml.IDtdInfo System.Xml.DtdParser::System.Xml.IDtdParser.ParseFreeFloatingDtd(System.String,System.String,System.String,System.String,System.String,System.Xml.IDtdParserAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdParser_System_Xml_IDtdParser_ParseFreeFloatingDtd_mED081982C4FF1EC65690A9B95D002584C3FBF4A0 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___baseUri0, String_t* ___docTypeName1, String_t* ___publicId2, String_t* ___systemId3, String_t* ___internalSubset4, RuntimeObject* ___adapter5, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___baseUri0;
		String_t* L_1 = ___docTypeName1;
		String_t* L_2 = ___publicId2;
		String_t* L_3 = ___systemId3;
		String_t* L_4 = ___internalSubset4;
		RuntimeObject* L_5 = ___adapter5;
		DtdParser_InitializeFreeFloatingDtd_m1508B91CB75E55A064D4DC2EC796EF2B35785B13(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		DtdParser_Parse_m251123EFA9598E4851882EB21A72EDF13E3D6EC6(__this, (bool)0, NULL);
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_6 = __this->___schemaInfo_3;
		return L_6;
	}
}
// System.Boolean System.Xml.DtdParser::get_ParsingInternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___externalEntitiesDepth_21;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.DtdParser::get_IgnoreEntityReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_IgnoreEntityReferences_m2DC8E61DFCB1C09453864CAC4031C467FB7340D8 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___scanningFunction_14;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)26)))? 1 : 0);
	}
}
// System.Boolean System.Xml.DtdParser::get_SaveInternalSubsetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Xml.IDtdParserAdapter::get_EntityStackLength() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___internalSubsetValueSb_20;
		return (bool)((!(((RuntimeObject*)(StringBuilder_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.DtdParser::get_ParsingTopLevelMarkup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_ParsingTopLevelMarkup_m4836E76B7F5C3C3CA7D8574377C0F00BA2BB0BCF (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___scanningFunction_14;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->___scanningFunction_14;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___savedScanningFunction_16;
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.DtdParser::get_SupportNamespaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_SupportNamespaces_m868EACB0340AAB10A0A36D3E54391F6B721A7791 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___supportNamespaces_9;
		return L_0;
	}
}
// System.Boolean System.Xml.DtdParser::get_Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___normalize_7;
		return L_0;
	}
}
// System.Void System.Xml.DtdParser::Parse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Parse_m251123EFA9598E4851882EB21A72EDF13E3D6EC6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___saveInternalSubset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD416BBB037BD250D7C597A72EB36BB50CD033DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ED1DCC22330B97D3DD70AD4094E53E84535AF06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D12963AA9A1E78352AD17756F85E7F8E0281CAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB1E0A2F071C3C58AD52810FA1C157F300EB85FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mABC01CB19F774F69E736CCAB8E79BFEFC3702C8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA98C4EB777C388F69EC48A492C07DBBBEBF41DC1);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* V_1 = NULL;
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* V_2 = NULL;
	{
		bool L_0 = __this->___freeFloatingDtd_23;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		DtdParser_ParseFreeFloatingDtd_mD311D1717B2C75FCD8301944583EC6872085E967(__this, NULL);
		goto IL_0017;
	}

IL_0010:
	{
		bool L_1 = ___saveInternalSubset0;
		DtdParser_ParseInDocumentDtd_m152ABA7579FAFD24B3F745D24B25C5210C584668(__this, L_1, NULL);
	}

IL_0017:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2 = __this->___schemaInfo_3;
		NullCheck(L_2);
		SchemaInfo_Finish_m2819E8B404C31776D077502515C4BA78BD02F569(L_2, NULL);
		bool L_3 = __this->___validate_8;
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_4 = __this->___undeclaredNotations_31;
		if (!L_4)
		{
			goto IL_009d;
		}
	}
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_5 = __this->___undeclaredNotations_31;
		NullCheck(L_5);
		ValueCollection_t499BCEBD608E294D297D05F15B0261C6141FF089* L_6;
		L_6 = Dictionary_2_get_Values_mD416BBB037BD250D7C597A72EB36BB50CD033DC6(L_5, Dictionary_2_get_Values_mD416BBB037BD250D7C597A72EB36BB50CD033DC6_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_tFFB123B32E0A29A9F7621A05A0F893DF21310060 L_7;
		L_7 = ValueCollection_GetEnumerator_mABC01CB19F774F69E736CCAB8E79BFEFC3702C8C(L_6, ValueCollection_GetEnumerator_mABC01CB19F774F69E736CCAB8E79BFEFC3702C8C_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8ED1DCC22330B97D3DD70AD4094E53E84535AF06((&V_0), Enumerator_Dispose_m8ED1DCC22330B97D3DD70AD4094E53E84535AF06_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0084_1;
			}

IL_0045_1:
			{
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_8;
				L_8 = Enumerator_get_Current_mBB1E0A2F071C3C58AD52810FA1C157F300EB85FF_inline((&V_0), Enumerator_get_Current_mBB1E0A2F071C3C58AD52810FA1C157F300EB85FF_RuntimeMethod_var);
				V_1 = L_8;
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_9 = V_1;
				V_2 = L_9;
				goto IL_0081_1;
			}

IL_0051_1:
			{
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_10 = V_1;
				NullCheck(L_10);
				String_t* L_11 = L_10->___name_0;
				String_t* L_12;
				L_12 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_13 = V_1;
				NullCheck(L_13);
				int32_t L_14 = L_13->___lineNo_1;
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_15 = V_1;
				NullCheck(L_15);
				int32_t L_16 = L_15->___linePos_2;
				XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_17 = (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B*)il2cpp_codegen_object_new(XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB(L_17, _stringLiteralA98C4EB777C388F69EC48A492C07DBBBEBF41DC1, L_11, L_12, L_14, L_16, NULL);
				DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F(__this, 0, L_17, NULL);
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_18 = V_2;
				NullCheck(L_18);
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_19 = L_18->___next_3;
				V_2 = L_19;
			}

IL_0081_1:
			{
				UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_20 = V_2;
				if (L_20)
				{
					goto IL_0051_1;
				}
			}

IL_0084_1:
			{
				bool L_21;
				L_21 = Enumerator_MoveNext_m3D12963AA9A1E78352AD17756F85E7F8E0281CAA((&V_0), Enumerator_MoveNext_m3D12963AA9A1E78352AD17756F85E7F8E0281CAA_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseInDocumentDtd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseInDocumentDtd_m152ABA7579FAFD24B3F745D24B25C5210C584668 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___saveInternalSubset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		__this->___scanningFunction_14 = 2;
		__this->___nextScaningFunction_15 = 4;
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)23))))
		{
			goto IL_0025;
		}
	}
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_0025:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_1 = __this->___schemaInfo_3;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_2;
		L_2 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		NullCheck(L_1);
		SchemaInfo_set_DocTypeName_mB87F85301E58DCCDD63697CE790A4417A07A54B0_inline(L_1, L_2, NULL);
		int32_t L_3;
		L_3 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0066;
		}
	}

IL_0049:
	{
		int32_t L_6 = V_0;
		String_t** L_7 = (&__this->___publicId_6);
		String_t** L_8 = (&__this->___systemId_5);
		DtdParser_ParseExternalId_m2B6C7C539D6B9BAA81D2D39DD40915B0F8EE1680(__this, L_6, ((int32_t)36), L_7, L_8, NULL);
		int32_t L_9;
		L_9 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_0 = L_9;
	}

IL_0066:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)29))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_008c;
		}
	}
	{
		bool L_12 = ___saveInternalSubset0;
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_13, NULL);
		__this->___internalSubsetValueSb_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalSubsetValueSb_20), (void*)L_13);
	}

IL_0084:
	{
		DtdParser_ParseInternalSubset_m4CA8AEDF9E87543186DF6F820A4F1CB15F5EA0A8(__this, NULL);
		goto IL_0092;
	}

IL_008c:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_0092:
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		String_t* L_14 = __this->___systemId_5;
		if (!L_14)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_15 = __this->___systemId_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		DtdParser_ParseExternalSubset_m32ACD9461EF71173C98644D59A4E0A82576D98B4(__this, NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseFreeFloatingDtd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseFreeFloatingDtd_mD311D1717B2C75FCD8301944583EC6872085E967 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasFreeFloatingInternalSubset_24;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		DtdParser_ParseInternalSubset_m4CA8AEDF9E87543186DF6F820A4F1CB15F5EA0A8(__this, NULL);
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
	}

IL_001a:
	{
		String_t* L_1 = __this->___systemId_5;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_2 = __this->___systemId_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		DtdParser_ParseExternalSubset_m32ACD9461EF71173C98644D59A4E0A82576D98B4(__this, NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseInternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseInternalSubset_m4CA8AEDF9E87543186DF6F820A4F1CB15F5EA0A8 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		DtdParser_ParseSubset_mDF6AA95DF1D5EFF0A66211B1CD546977176D66B4(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseExternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseExternalSubset_m32ACD9461EF71173C98644D59A4E0A82576D98B4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		String_t* L_1 = __this->___systemId_5;
		String_t* L_2 = __this->___publicId_6;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, String_t* >::Invoke(20 /* System.Boolean System.Xml.IDtdParserAdapter::PushExternalSubset(System.String,System.String) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___readerAdapter_0;
		NullCheck(L_4);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5;
		L_5 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E(L_6, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		__this->___externalDtdBaseUri_30 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalDtdBaseUri_30), (void*)L_9);
	}

IL_003b:
	{
		int32_t L_10 = __this->___externalEntitiesDepth_21;
		__this->___externalEntitiesDepth_21 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		DtdParser_ParseSubset_mDF6AA95DF1D5EFF0A66211B1CD546977176D66B4(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseSubset_mDF6AA95DF1D5EFF0A66211B1CD546977176D66B4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C370F917A6284F4D431AD8EB3AD2C86D406AB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8592558A3214B8F63A256B8806C4A8EF96EF5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD259EE6AB580E33090940BF472020FA738C8617A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;

IL_0000:
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_1 = L_0;
		int32_t L_1 = __this->___currentEntityId_22;
		V_0 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)11))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0080;
			}
			case 6:
			{
				goto IL_008b;
			}
			case 7:
			{
				goto IL_00b8;
			}
			case 8:
			{
				goto IL_01a9;
			}
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)32))))
		{
			goto IL_0126;
		}
	}
	{
		goto IL_01e4;
	}

IL_0049:
	{
		DtdParser_ParseAttlistDecl_m56790F6B55821549A8340D00586BA134FFDA28C1(__this, NULL);
		goto IL_01e4;
	}

IL_0054:
	{
		DtdParser_ParseElementDecl_m04A22275D2342422E13554DD1FEA56FEDF7F7CA1(__this, NULL);
		goto IL_01e4;
	}

IL_005f:
	{
		DtdParser_ParseEntityDecl_mDDF946172429F7DBFB301FE5F113084713B48B57(__this, NULL);
		goto IL_01e4;
	}

IL_006a:
	{
		DtdParser_ParseNotationDecl_mBCCE845466278E35DDADC504075E85C358FA9EC1(__this, NULL);
		goto IL_01e4;
	}

IL_0075:
	{
		DtdParser_ParseComment_mAAB19E9100AB4E6929F69BF9895CFE5430B39E96(__this, NULL);
		goto IL_01e4;
	}

IL_0080:
	{
		DtdParser_ParsePI_m78FD95C2338F0BCF9535C89A24CEFB6F0802E4C9(__this, NULL);
		goto IL_01e4;
	}

IL_008b:
	{
		bool L_4;
		L_4 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		if (!L_4)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_5 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_subtract(L_5, 3)), _stringLiteral6C370F917A6284F4D431AD8EB3AD2C86D406AB52, NULL);
	}

IL_00a6:
	{
		DtdParser_ParseCondSection_m6DF82F4650A08BC0E920DEA62D346383C57C677D(__this, NULL);
		int32_t L_6 = __this->___currentEntityId_22;
		V_0 = L_6;
		goto IL_01e4;
	}

IL_00b8:
	{
		int32_t L_7 = __this->___condSectionDepth_26;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_8 = __this->___condSectionDepth_26;
		__this->___condSectionDepth_26 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		bool L_9 = __this->___validate_8;
		if (!L_9)
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_10 = __this->___currentEntityId_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___condSectionEntityIds_32;
		int32_t L_12 = __this->___condSectionDepth_26;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_15 = __this->___curPos_13;
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_15, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_16, NULL);
		goto IL_01e4;
	}

IL_010e:
	{
		int32_t L_17 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_subtract(L_17, 3)), _stringLiteralB8592558A3214B8F63A256B8806C4A8EF96EF5FB, NULL);
		goto IL_01e4;
	}

IL_0126:
	{
		bool L_18;
		L_18 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		if (!L_18)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_19 = __this->___condSectionDepth_26;
		if (!L_19)
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_20 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_20, _stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D, NULL);
	}

IL_0147:
	{
		StringBuilder_t* L_21 = __this->___internalSubsetValueSb_20;
		if (!L_21)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_22 = __this->___curPos_13;
		DtdParser_SaveParsingBuffer_m002F46CF1017FA4228DEAE75ABD891C78F2505AF(__this, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), NULL);
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_23 = __this->___schemaInfo_3;
		StringBuilder_t* L_24 = __this->___internalSubsetValueSb_20;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		NullCheck(L_23);
		SchemaInfo_set_InternalDtdSubset_m8352C52C8065FDD87C562CC9AC5CC098B7697CD5_inline(L_23, L_25, NULL);
		__this->___internalSubsetValueSb_20 = (StringBuilder_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalSubsetValueSb_20), (void*)(StringBuilder_t*)NULL);
	}

IL_017a:
	{
		int32_t L_26;
		L_26 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((((int32_t)L_26) == ((int32_t)((int32_t)29))))
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_27 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_27, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return;
	}

IL_0197:
	{
		int32_t L_28 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_28, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_01a8:
	{
		return;
	}

IL_01a9:
	{
		bool L_29;
		L_29 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		if (!L_29)
		{
			goto IL_01ca;
		}
	}
	{
		bool L_30 = __this->___freeFloatingDtd_23;
		if (L_30)
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_31 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_31, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
	}

IL_01ca:
	{
		int32_t L_32 = __this->___condSectionDepth_26;
		if (!L_32)
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_33 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_33, _stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D, NULL);
	}

IL_01e3:
	{
		return;
	}

IL_01e4:
	{
		int32_t L_34 = __this->___currentEntityId_22;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) == ((int32_t)L_35)))
		{
			goto IL_0000;
		}
	}
	{
		bool L_36 = __this->___validate_8;
		if (!L_36)
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_37 = __this->___curPos_13;
		String_t* L_38 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_37, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_38, NULL);
		goto IL_0000;
	}

IL_0214:
	{
		bool L_39 = __this->___v1Compat_10;
		if (L_39)
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_40 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_40, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, NULL);
		goto IL_0000;
	}
}
// System.Void System.Xml.DtdParser::ParseAttlistDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistDecl_m56790F6B55821549A8340D00586BA134FFDA28C1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E61EF83FCD7B08C40AA3B100CA8FC4B41A934C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_0 = NULL;
	SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* V_1 = NULL;
	SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_026f;
		}
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_1;
		L_1 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		V_0 = L_1;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2 = __this->___schemaInfo_3;
		NullCheck(L_2);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_3;
		L_3 = SchemaInfo_get_ElementDecls_m238E5681BECA397E7010F7BEFBAC2D0FBEC43BD7_inline(L_2, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_005f;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_6 = __this->___schemaInfo_3;
		NullCheck(L_6);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_7;
		L_7 = SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline(L_6, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A(L_7, L_8, (&V_1), Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_10 = V_0;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = XmlQualifiedName_get_Namespace_m0CAE4A651EF1CA6F0EB657C83608A796038A2615_inline(L_11, NULL);
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_13 = (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD*)il2cpp_codegen_object_new(SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		SchemaElementDecl__ctor_m37D4F8688A2FCD66D64D442660B6E6BB0F30E70C(L_13, L_10, L_12, NULL);
		V_1 = L_13;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_14 = __this->___schemaInfo_3;
		NullCheck(L_14);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_15;
		L_15 = SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline(L_14, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_16 = V_0;
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_17 = V_1;
		NullCheck(L_15);
		Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3(L_15, L_16, L_17, Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3_RuntimeMethod_var);
	}

IL_005f:
	{
		V_2 = (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553*)NULL;
	}

IL_0061:
	{
		int32_t L_18;
		L_18 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)23))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)29))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_026f;
	}

IL_007b:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_21;
		L_21 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_22 = L_21;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = XmlQualifiedName_get_Namespace_m0CAE4A651EF1CA6F0EB657C83608A796038A2615_inline(L_22, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_24 = (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553*)il2cpp_codegen_object_new(SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		SchemaAttDef__ctor_mCE4B0F520716988FF7D1285FF25B92060D0DA76C(L_24, L_22, L_23, NULL);
		V_2 = L_24;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_25 = V_2;
		bool L_26;
		L_26 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		NullCheck(L_25);
		SchemaDeclBase_set_IsDeclaredInExternal_m3F57DA2AD9DBAC1C431293C53E4E052A8E915D96_inline(L_25, (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0), NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_27 = V_2;
		int32_t L_28;
		L_28 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		NullCheck(L_27);
		SchemaAttDef_set_LineNumber_mA7F00D8F6FAB9626DBF9444371C2D5B0EF99E07E_inline(L_27, L_28, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_29 = V_2;
		int32_t L_30;
		L_30 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		int32_t L_31 = __this->___curPos_13;
		int32_t L_32 = __this->___tokenStartPos_18;
		NullCheck(L_29);
		SchemaAttDef_set_LinePosition_mC3B43012E31CCE6784CCFE1B9FE8CC15B0C7E584_inline(L_29, ((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)il2cpp_codegen_subtract(L_31, L_32)))), NULL);
		goto IL_015c;
	}

IL_00c8:
	{
		bool L_33 = __this->___v1Compat_10;
		if (!L_33)
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_34 = V_2;
		if (!L_34)
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = SchemaDeclBase_get_Prefix_mE72A285F12958A0C40F8CDEDA2838B3A09233455(L_35, NULL);
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)L_37) <= ((int32_t)0)))
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_38 = V_2;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = SchemaDeclBase_get_Prefix_mE72A285F12958A0C40F8CDEDA2838B3A09233455(L_38, NULL);
		NullCheck(L_39);
		bool L_40;
		L_40 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_39, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, NULL);
		if (!L_40)
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_41 = V_2;
		NullCheck(L_41);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_42;
		L_42 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_41, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_42, NULL);
		bool L_44;
		L_44 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_43, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (!L_44)
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_45 = V_2;
		NullCheck(L_45);
		SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline(L_45, 1, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_46 = V_2;
		NullCheck(L_46);
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_47;
		L_47 = SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline(L_46, NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType() */, L_47);
		if ((((int32_t)L_48) == ((int32_t)((int32_t)9))))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_49 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_50 = V_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = SchemaAttDef_get_LineNumber_m8A9494C90F0B132F2A84AF7203FE074046529A1C_inline(L_50, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = SchemaAttDef_get_LinePosition_m192E37BC23204F940B4BC5BBBCC248EEAE4481D1_inline(L_52, NULL);
		DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95(__this, _stringLiteral85E61EF83FCD7B08C40AA3B100CA8FC4B41A934C, L_49, L_51, L_53, NULL);
	}

IL_0142:
	{
		bool L_54 = __this->___validate_8;
		if (!L_54)
		{
			goto IL_015b;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_55 = V_2;
		RuntimeObject* L_56 = __this->___readerAdapterWithValidation_1;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Xml.IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation::get_ValidationEventHandling() */, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_55);
		SchemaAttDef_CheckXmlSpace_m03EFF5426C02492D7C4EEFEC396DC7386E20DB74(L_55, L_57, NULL);
	}

IL_015b:
	{
		return;
	}

IL_015c:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_58 = V_1;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_59 = V_2;
		NullCheck(L_59);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_60;
		L_60 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_59, NULL);
		NullCheck(L_58);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_61;
		L_61 = SchemaElementDecl_GetAttDef_m157EF6E66718BDD7F087323423296A4AF4719259(L_58, L_60, NULL);
		V_3 = (bool)((!(((RuntimeObject*)(SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_62 = V_2;
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_63 = V_1;
		bool L_64 = V_3;
		DtdParser_ParseAttlistType_mC7CF6695229010B0320A5311BA2FA9298F6A5D29(__this, L_62, L_63, L_64, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_65 = V_2;
		bool L_66 = V_3;
		DtdParser_ParseAttlistDefault_m2E49FD966B82593A64DFCB15F7D49C30183D859A(__this, L_65, L_66, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_67 = V_2;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = SchemaDeclBase_get_Prefix_mE72A285F12958A0C40F8CDEDA2838B3A09233455(L_67, NULL);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_68, NULL);
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_025d;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_70 = V_2;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = SchemaDeclBase_get_Prefix_mE72A285F12958A0C40F8CDEDA2838B3A09233455(L_70, NULL);
		NullCheck(L_71);
		bool L_72;
		L_72 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_71, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, NULL);
		if (!L_72)
		{
			goto IL_025d;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_73 = V_2;
		NullCheck(L_73);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_74;
		L_74 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_73, NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_74, NULL);
		bool L_76;
		L_76 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_75, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (!L_76)
		{
			goto IL_023f;
		}
	}
	{
		bool L_77 = __this->___v1Compat_10;
		if (!L_77)
		{
			goto IL_01f7;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_78 = V_2;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = SchemaAttDef_get_DefaultValueExpanded_m61569B11E4FBDEED7A35CD5A39675B57CE6DB78F(L_78, NULL);
		NullCheck(L_79);
		String_t* L_80;
		L_80 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_79, NULL);
		V_5 = L_80;
		String_t* L_81 = V_5;
		NullCheck(L_81);
		bool L_82;
		L_82 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_81, _stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48, NULL);
		if (L_82)
		{
			goto IL_01ee;
		}
	}
	{
		String_t* L_83 = V_5;
		NullCheck(L_83);
		bool L_84;
		L_84 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_83, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, NULL);
		if (!L_84)
		{
			goto IL_025d;
		}
	}

IL_01ee:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_85 = V_2;
		NullCheck(L_85);
		SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline(L_85, 1, NULL);
		goto IL_025d;
	}

IL_01f7:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_86 = V_2;
		NullCheck(L_86);
		SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline(L_86, 1, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_87 = V_2;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = SchemaAttDef_get_TokenizedType_m57FC667A4FC7D2904B78B639A39E872595F7EF86(L_87, NULL);
		if ((((int32_t)L_88) == ((int32_t)((int32_t)9))))
		{
			goto IL_0224;
		}
	}
	{
		String_t* L_89 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_90 = V_2;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = SchemaAttDef_get_LineNumber_m8A9494C90F0B132F2A84AF7203FE074046529A1C_inline(L_90, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_92 = V_2;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = SchemaAttDef_get_LinePosition_m192E37BC23204F940B4BC5BBBCC248EEAE4481D1_inline(L_92, NULL);
		DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95(__this, _stringLiteral85E61EF83FCD7B08C40AA3B100CA8FC4B41A934C, L_89, L_91, L_93, NULL);
	}

IL_0224:
	{
		bool L_94 = __this->___validate_8;
		if (!L_94)
		{
			goto IL_025d;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_95 = V_2;
		RuntimeObject* L_96 = __this->___readerAdapterWithValidation_1;
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Xml.IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation::get_ValidationEventHandling() */, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_95);
		SchemaAttDef_CheckXmlSpace_m03EFF5426C02492D7C4EEFEC396DC7386E20DB74(L_95, L_97, NULL);
		goto IL_025d;
	}

IL_023f:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_98 = V_2;
		NullCheck(L_98);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_99;
		L_99 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_98, NULL);
		NullCheck(L_99);
		String_t* L_100;
		L_100 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_99, NULL);
		bool L_101;
		L_101 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_100, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, NULL);
		if (!L_101)
		{
			goto IL_025d;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_102 = V_2;
		NullCheck(L_102);
		SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline(L_102, 2, NULL);
	}

IL_025d:
	{
		bool L_103 = V_3;
		if (L_103)
		{
			goto IL_0061;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_104 = V_1;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_105 = V_2;
		NullCheck(L_104);
		SchemaElementDecl_AddAttDef_mAF964F8485156FF16A7554A1B8DC76B7A83C12BA(L_104, L_105, NULL);
		goto IL_0061;
	}

IL_026f:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseAttlistType(System.Xml.Schema.SchemaAttDef,System.Xml.Schema.SchemaElementDecl,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistType_mC7CF6695229010B0320A5311BA2FA9298F6A5D29 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attrDef0, SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___elementDecl1, bool ___ignoreErrors2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265063C5E5B7055CDC527A6D234A14747DC2D71E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501B98A6E74F1C51225E59A5DAE2EE433B125499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D214974A6E3CCDE1B595EE7A016D3FEA5FAA61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD93DDB9BA74539B5989A13715EBB5158C4B43486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9AA762B72BCD6BE256CC115B658BDBC21C36EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_2 = ___elementDecl1;
		NullCheck(L_2);
		SchemaElementDecl_set_HasNonCDataAttribute_m66C35DA3287AD11A2D0DD2E47FE3B8198851F01E_inline(L_2, (bool)1, NULL);
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = DtdParser_IsAttributeValueType_m973F7C314B5AC9D43A0AE8BAE06F879DE66F9115(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_01c1;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_5 = ___attrDef0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		SchemaAttDef_set_TokenizedType_m66E5B35A86397A9C6E7B97C3DE2A47FC49B5D1FA(L_5, L_6, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_7 = ___attrDef0;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_8 = ___attrDef0;
		NullCheck(L_8);
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_9;
		L_9 = SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode() */, L_9);
		XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8* L_11;
		L_11 = XmlSchemaType_GetBuiltInSimpleType_mCB3679D57A227BD055F702CBE00D47AFAF730B79(L_10, NULL);
		NullCheck(L_7);
		SchemaDeclBase_set_SchemaType_m4A34BA7ABAAD6A60F7AE3A2572EDD3E86893A21F_inline(L_7, L_11, NULL);
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)8)))
		{
			goto IL_0094;
		}
	}
	{
		return;
	}

IL_0044:
	{
		bool L_14 = __this->___validate_8;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_15 = ___elementDecl1;
		NullCheck(L_15);
		bool L_16;
		L_16 = SchemaElementDecl_get_IsIdDeclared_m44ADA012ED628AF85A038CF178E9CA86806077B3_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_17 = ___elementDecl1;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_18 = ___attrDef0;
		NullCheck(L_18);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_19;
		L_19 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_18, NULL);
		NullCheck(L_17);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_20;
		L_20 = SchemaElementDecl_GetAttDef_m157EF6E66718BDD7F087323423296A4AF4719259(L_17, L_19, NULL);
		V_1 = L_20;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_21 = V_1;
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_22 = V_1;
		NullCheck(L_22);
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_23;
		L_23 = SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType() */, L_23);
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}

IL_0072:
	{
		bool L_25 = ___ignoreErrors2;
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_26 = ___elementDecl1;
		NullCheck(L_26);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_27;
		L_27 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		DtdParser_SendValidationEvent_m79ECFFB3D03874AE9095BA539FC8B7191018E58B(__this, 0, _stringLiteralD93DDB9BA74539B5989A13715EBB5158C4B43486, L_28, NULL);
	}

IL_008c:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_29 = ___elementDecl1;
		NullCheck(L_29);
		SchemaElementDecl_set_IsIdDeclared_m88620A2DF06335275FD59A77CB5073E5707BA5AD_inline(L_29, (bool)1, NULL);
		return;
	}

IL_0094:
	{
		bool L_30 = __this->___validate_8;
		if (!L_30)
		{
			goto IL_0107;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_31 = ___elementDecl1;
		NullCheck(L_31);
		bool L_32;
		L_32 = SchemaElementDecl_get_IsNotationDeclared_m56FEF2BE202BF5AC41DDFB7BCA33983F71A0FB0B_inline(L_31, NULL);
		if (!L_32)
		{
			goto IL_00c8;
		}
	}
	{
		bool L_33 = ___ignoreErrors2;
		if (L_33)
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_34 = __this->___curPos_13;
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_35 = ___elementDecl1;
		NullCheck(L_35);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_36;
		L_36 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(L_34, 8)), 0, _stringLiteralDE9AA762B72BCD6BE256CC115B658BDBC21C36EA, L_37, NULL);
		goto IL_0107;
	}

IL_00c8:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_38 = ___elementDecl1;
		NullCheck(L_38);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_39;
		L_39 = SchemaElementDecl_get_ContentValidator_m687E7878F142CFC03B5D7B4FFD6FE1F4AE6526E1_inline(L_38, NULL);
		if (!L_39)
		{
			goto IL_0100;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_40 = ___elementDecl1;
		NullCheck(L_40);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_41;
		L_41 = SchemaElementDecl_get_ContentValidator_m687E7878F142CFC03B5D7B4FFD6FE1F4AE6526E1_inline(L_40, NULL);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = ContentValidator_get_ContentType_m2E9C64DB3522E5A29BE6CAA4A929CBABAD1CEF23_inline(L_41, NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)1))))
		{
			goto IL_0100;
		}
	}
	{
		bool L_43 = ___ignoreErrors2;
		if (L_43)
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_44 = __this->___curPos_13;
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_45 = ___elementDecl1;
		NullCheck(L_45);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_46;
		L_46 = SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline(L_45, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(L_44, 8)), 0, _stringLiteral265063C5E5B7055CDC527A6D234A14747DC2D71E, L_47, NULL);
	}

IL_0100:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_48 = ___elementDecl1;
		NullCheck(L_48);
		SchemaElementDecl_set_IsNotationDeclared_m33DFE77CEA01A59316738F4BC49110A7C98A2365_inline(L_48, (bool)1, NULL);
	}

IL_0107:
	{
		int32_t L_49;
		L_49 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_50;
		L_50 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0280;
		}
	}

IL_0123:
	{
		String_t* L_51;
		L_51 = DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB(__this, NULL);
		V_2 = L_51;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_52 = __this->___schemaInfo_3;
		NullCheck(L_52);
		Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* L_53;
		L_53 = SchemaInfo_get_Notations_m922CD199C8750B3D6F5662DB0EA272805A7EA3A1(L_52, NULL);
		String_t* L_54 = V_2;
		NullCheck(L_53);
		bool L_55;
		L_55 = Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206(L_53, L_54, Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		if (L_55)
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_56 = V_2;
		DtdParser_AddUndeclaredNotation_mF35809833D2C33608CD892441E552FAEA80F4A70(__this, L_56, NULL);
	}

IL_0144:
	{
		bool L_57 = __this->___validate_8;
		if (!L_57)
		{
			goto IL_0191;
		}
	}
	{
		bool L_58 = __this->___v1Compat_10;
		if (L_58)
		{
			goto IL_0191;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_59 = ___attrDef0;
		NullCheck(L_59);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_60;
		L_60 = SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline(L_59, NULL);
		if (!L_60)
		{
			goto IL_0191;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_61 = ___attrDef0;
		NullCheck(L_61);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_62;
		L_62 = SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline(L_61, NULL);
		String_t* L_63 = V_2;
		NullCheck(L_62);
		bool L_64;
		L_64 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_62, L_63, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_64)
		{
			goto IL_0191;
		}
	}
	{
		bool L_65 = ___ignoreErrors2;
		if (L_65)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_66 = V_2;
		String_t* L_67;
		L_67 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
		int32_t L_68;
		L_68 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_69;
		L_69 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_70 = (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B*)il2cpp_codegen_object_new(XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB(L_70, _stringLiteralA5D214974A6E3CCDE1B595EE7A016D3FEA5FAA61, L_66, L_67, L_68, L_69, NULL);
		DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F(__this, 0, L_70, NULL);
	}

IL_0191:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_71 = ___attrDef0;
		String_t* L_72 = V_2;
		NullCheck(L_71);
		SchemaDeclBase_AddValue_m9C70610A093F7CD2287EB47D9FA619E1D29A1958(L_71, L_72, NULL);
		int32_t L_73;
		L_73 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_3 = L_73;
		int32_t L_74 = V_3;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)28))))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_75 = V_3;
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_76;
		L_76 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((((int32_t)L_76) == ((int32_t)((int32_t)24))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_0280;
	}

IL_01c0:
	{
		return;
	}

IL_01c1:
	{
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_0280;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_78 = ___attrDef0;
		NullCheck(L_78);
		SchemaAttDef_set_TokenizedType_m66E5B35A86397A9C6E7B97C3DE2A47FC49B5D1FA(L_78, ((int32_t)9), NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_79 = ___attrDef0;
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_80 = ___attrDef0;
		NullCheck(L_80);
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_81;
		L_81 = SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline(L_80, NULL);
		NullCheck(L_81);
		int32_t L_82;
		L_82 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode() */, L_81);
		XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8* L_83;
		L_83 = XmlSchemaType_GetBuiltInSimpleType_mCB3679D57A227BD055F702CBE00D47AFAF730B79(L_82, NULL);
		NullCheck(L_79);
		SchemaDeclBase_set_SchemaType_m4A34BA7ABAAD6A60F7AE3A2572EDD3E86893A21F_inline(L_79, L_83, NULL);
		int32_t L_84;
		L_84 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0280;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_85 = ___attrDef0;
		String_t* L_86;
		L_86 = DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB(__this, NULL);
		NullCheck(L_85);
		SchemaDeclBase_AddValue_m9C70610A093F7CD2287EB47D9FA619E1D29A1958(L_85, L_86, NULL);
	}

IL_0201:
	{
		int32_t L_87;
		L_87 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_3 = L_87;
		int32_t L_88 = V_3;
		if ((((int32_t)L_88) == ((int32_t)((int32_t)28))))
		{
			goto IL_027f;
		}
	}
	{
		int32_t L_89 = V_3;
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_90;
		L_90 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0280;
		}
	}
	{
		String_t* L_91;
		L_91 = DtdParser_GetNmtokenString_m2FBC77BC5054E435A4F99466E1E21D664260D1EB(__this, NULL);
		V_4 = L_91;
		bool L_92 = __this->___validate_8;
		if (!L_92)
		{
			goto IL_0275;
		}
	}
	{
		bool L_93 = __this->___v1Compat_10;
		if (L_93)
		{
			goto IL_0275;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_94 = ___attrDef0;
		NullCheck(L_94);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_95;
		L_95 = SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline(L_94, NULL);
		if (!L_95)
		{
			goto IL_0275;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_96 = ___attrDef0;
		NullCheck(L_96);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_97;
		L_97 = SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline(L_96, NULL);
		String_t* L_98 = V_4;
		NullCheck(L_97);
		bool L_99;
		L_99 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_97, L_98, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_99)
		{
			goto IL_0275;
		}
	}
	{
		bool L_100 = ___ignoreErrors2;
		if (L_100)
		{
			goto IL_0275;
		}
	}
	{
		String_t* L_101 = V_4;
		String_t* L_102;
		L_102 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
		int32_t L_103;
		L_103 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_104;
		L_104 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_105 = (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B*)il2cpp_codegen_object_new(XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		NullCheck(L_105);
		XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB(L_105, _stringLiteral501B98A6E74F1C51225E59A5DAE2EE433B125499, L_101, L_102, L_103, L_104, NULL);
		DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F(__this, 0, L_105, NULL);
	}

IL_0275:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_106 = ___attrDef0;
		String_t* L_107 = V_4;
		NullCheck(L_106);
		SchemaDeclBase_AddValue_m9C70610A093F7CD2287EB47D9FA619E1D29A1958(L_106, L_107, NULL);
		goto IL_0201;
	}

IL_027f:
	{
		return;
	}

IL_0280:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseAttlistDefault(System.Xml.Schema.SchemaAttDef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseAttlistDefault_m2E49FD966B82593A64DFCB15F7D49C30183D859A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* ___attrDef0, bool ___ignoreErrors1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DtdValidator_tF916F1805E2290242B688583602409378173CF17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CF85EA4A9725419E00C90B0EC2DCE10FD2E8CE7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)20))))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)35))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_00cf;
	}

IL_0027:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_3 = ___attrDef0;
		NullCheck(L_3);
		SchemaDeclBase_set_Presence_mB1FAF4B21DA1F38F9A40D57E54260010E54C1B91_inline(L_3, 1, NULL);
		return;
	}

IL_002f:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_4 = ___attrDef0;
		NullCheck(L_4);
		SchemaDeclBase_set_Presence_mB1FAF4B21DA1F38F9A40D57E54260010E54C1B91_inline(L_4, 2, NULL);
		return;
	}

IL_0037:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_5 = ___attrDef0;
		NullCheck(L_5);
		SchemaDeclBase_set_Presence_mB1FAF4B21DA1F38F9A40D57E54260010E54C1B91_inline(L_5, 3, NULL);
		int32_t L_6;
		L_6 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00cf;
		}
	}

IL_004c:
	{
		bool L_7 = __this->___validate_8;
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_8 = ___attrDef0;
		NullCheck(L_8);
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_9;
		L_9 = SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		bool L_11 = ___ignoreErrors1;
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_12 = __this->___curPos_13;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_12, 0, _stringLiteral6CF85EA4A9725419E00C90B0EC2DCE10FD2E8CE7, L_13, NULL);
	}

IL_007c:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_14 = ___attrDef0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = SchemaAttDef_get_TokenizedType_m57FC667A4FC7D2904B78B639A39E872595F7EF86(L_14, NULL);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_16 = ___attrDef0;
		String_t* L_17;
		L_17 = DtdParser_GetValueWithStrippedSpaces_mA7A8B5EF2DDCC7C0C1AE9845AF9EF4D149094FEA(__this, NULL);
		NullCheck(L_16);
		SchemaAttDef_set_DefaultValueExpanded_mE4A42E55D630D5C41EAF3480F721749DBB59B801_inline(L_16, L_17, NULL);
		goto IL_009e;
	}

IL_0092:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_18 = ___attrDef0;
		String_t* L_19;
		L_19 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		NullCheck(L_18);
		SchemaAttDef_set_DefaultValueExpanded_mE4A42E55D630D5C41EAF3480F721749DBB59B801_inline(L_18, L_19, NULL);
	}

IL_009e:
	{
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_20 = ___attrDef0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_21 = (&__this->___literalLineInfo_27);
		int32_t L_22 = L_21->___lineNo_0;
		NullCheck(L_20);
		SchemaAttDef_set_ValueLineNumber_mD19157EDC780F89AA9FD6C07FEE28363DB7BDC91_inline(L_20, L_22, NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_23 = ___attrDef0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_24 = (&__this->___literalLineInfo_27);
		int32_t L_25 = L_24->___linePos_1;
		NullCheck(L_23);
		SchemaAttDef_set_ValueLinePosition_m8AEAB2128F36C4F66C16E9CB778C94402E15D387_inline(L_23, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* L_26 = ___attrDef0;
		RuntimeObject* L_27 = __this->___readerAdapter_0;
		il2cpp_codegen_runtime_class_init_inline(DtdValidator_tF916F1805E2290242B688583602409378173CF17_il2cpp_TypeInfo_var);
		DtdValidator_SetDefaultTypedValue_m01168D78BF4E99F4682A6281ACE4CC6A018F4E25(L_26, L_27, NULL);
		return;
	}

IL_00cf:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseElementDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementDecl_m04A22275D2342422E13554DD1FEA56FEDF7F7CA1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1E37C29A7B6036E5D212EDE08E94808C0020EE55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AB660E1248762B48B0356F19FC1CB2FC99F1ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* V_0 = NULL;
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* V_5 = NULL;
	ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* V_6 = NULL;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0181;
		}
	}
	{
		V_0 = (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD*)NULL;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_1;
		L_1 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		V_1 = L_1;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2 = __this->___schemaInfo_3;
		NullCheck(L_2);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_3;
		L_3 = SchemaInfo_get_ElementDecls_m238E5681BECA397E7010F7BEFBAC2D0FBEC43BD7_inline(L_2, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = __this->___validate_8;
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_7 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		String_t* L_11;
		L_11 = DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB(__this, NULL);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(L_7, L_10)), 0, _stringLiteral6AB660E1248762B48B0356F19FC1CB2FC99F1ABF, L_11, NULL);
		goto IL_00a3;
	}

IL_005b:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_12 = __this->___schemaInfo_3;
		NullCheck(L_12);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_13;
		L_13 = SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline(L_12, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A(L_13, L_14, (&V_0), Dictionary_2_TryGetValue_m15B366BD9B5A92299439677E2C60B2B46E07157A_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0084;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_16 = __this->___schemaInfo_3;
		NullCheck(L_16);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_17;
		L_17 = SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline(L_16, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_Remove_m1E37C29A7B6036E5D212EDE08E94808C0020EE55(L_17, L_18, Dictionary_2_Remove_m1E37C29A7B6036E5D212EDE08E94808C0020EE55_RuntimeMethod_var);
		goto IL_0091;
	}

IL_0084:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_20 = V_1;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = XmlQualifiedName_get_Namespace_m0CAE4A651EF1CA6F0EB657C83608A796038A2615_inline(L_21, NULL);
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_23 = (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD*)il2cpp_codegen_object_new(SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		SchemaElementDecl__ctor_m37D4F8688A2FCD66D64D442660B6E6BB0F30E70C(L_23, L_20, L_22, NULL);
		V_0 = L_23;
	}

IL_0091:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_24 = __this->___schemaInfo_3;
		NullCheck(L_24);
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_25;
		L_25 = SchemaInfo_get_ElementDecls_m238E5681BECA397E7010F7BEFBAC2D0FBEC43BD7_inline(L_24, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_26 = V_1;
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_27 = V_0;
		NullCheck(L_25);
		Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3(L_25, L_26, L_27, Dictionary_2_Add_m889D62A946A279647B91BF4A4D8B1B2C4DBBCDF3_RuntimeMethod_var);
	}

IL_00a3:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_28 = V_0;
		bool L_29;
		L_29 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		NullCheck(L_28);
		SchemaDeclBase_set_IsDeclaredInExternal_m3F57DA2AD9DBAC1C431293C53E4E052A8E915D96_inline(L_28, (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_30;
		L_30 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_3 = L_30;
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)27))))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)44))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_33 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0181;
		}
	}
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_35 = ((ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_StaticFields*)il2cpp_codegen_static_fields_for(ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var))->___Empty_3;
		NullCheck(L_34);
		SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline(L_34, L_35, NULL);
		goto IL_0164;
	}

IL_00dc:
	{
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_37 = ((ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_StaticFields*)il2cpp_codegen_static_fields_for(ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE_il2cpp_TypeInfo_var))->___Any_6;
		NullCheck(L_36);
		SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline(L_36, L_37, NULL);
		goto IL_0164;
	}

IL_00e9:
	{
		int32_t L_38 = __this->___currentEntityId_22;
		V_2 = L_38;
		int32_t L_39;
		L_39 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_4 = L_39;
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)9))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_41 = V_4;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0181;
		}
	}
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_42 = (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF*)il2cpp_codegen_object_new(ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		ParticleContentValidator__ctor_m3B7E26A1371336703F3B8B1A1A721C139E1E8078(L_42, 3, NULL);
		V_5 = L_42;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_43 = V_5;
		NullCheck(L_43);
		ParticleContentValidator_Start_mA9E5F5D3C90F19E23A9C60551E105DAE86DF45AC(L_43, NULL);
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_44 = V_5;
		NullCheck(L_44);
		ParticleContentValidator_OpenGroup_mB1BC05C6D2410C538451E560BBB054D89259FD38(L_44, NULL);
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_45 = V_5;
		int32_t L_46 = V_2;
		DtdParser_ParseElementMixedContent_mF075DA5FDA964DB2A05D84C79204A37A2F4453D6(__this, L_45, L_46, NULL);
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_47 = V_0;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_48 = V_5;
		NullCheck(L_48);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_49;
		L_49 = ParticleContentValidator_Finish_mB1589F15458B320D1A6DC7179BB70F5C616ED192(L_48, (bool)1, NULL);
		NullCheck(L_47);
		SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline(L_47, L_49, NULL);
		goto IL_0164;
	}

IL_0134:
	{
		V_6 = (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF*)NULL;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_50 = (ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF*)il2cpp_codegen_object_new(ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		ParticleContentValidator__ctor_m3B7E26A1371336703F3B8B1A1A721C139E1E8078(L_50, 2, NULL);
		V_6 = L_50;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_51 = V_6;
		NullCheck(L_51);
		ParticleContentValidator_Start_mA9E5F5D3C90F19E23A9C60551E105DAE86DF45AC(L_51, NULL);
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_52 = V_6;
		NullCheck(L_52);
		ParticleContentValidator_OpenGroup_mB1BC05C6D2410C538451E560BBB054D89259FD38(L_52, NULL);
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_53 = V_6;
		int32_t L_54 = V_2;
		DtdParser_ParseElementOnlyContent_m8227BEF84B1E93AE070877C03E77C9BA204F5F35(__this, L_53, L_54, NULL);
		SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* L_55 = V_0;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_56 = V_6;
		NullCheck(L_56);
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_57;
		L_57 = ParticleContentValidator_Finish_mB1589F15458B320D1A6DC7179BB70F5C616ED192(L_56, (bool)1, NULL);
		NullCheck(L_55);
		SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline(L_55, L_57, NULL);
	}

IL_0164:
	{
		int32_t L_58;
		L_58 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((((int32_t)L_58) == ((int32_t)((int32_t)29))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_59 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_59, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
	}

IL_0180:
	{
		return;
	}

IL_0181:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseElementOnlyContent(System.Xml.Schema.ParticleContentValidator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementOnlyContent_m8227BEF84B1E93AE070877C03E77C9BA204F5F35 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, int32_t ___startParenEntityId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m0C074AC550A3838F3407E0C3699055604445DB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mB31BECBC0F3FF13AE5D0EC3C5F3738DBCA64F93D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m859E9CA447DBF5EE9DD9D0ECDBDA9D98D49CD0CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mF5D38961851C67F431DDC6AA9FA9BC2BE63DBE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD259EE6AB580E33090940BF472020FA738C8617A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* V_0 = NULL;
	ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_0 = (Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8*)il2cpp_codegen_object_new(Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m859E9CA447DBF5EE9DD9D0ECDBDA9D98D49CD0CA(L_0, Stack_1__ctor_m859E9CA447DBF5EE9DD9D0ECDBDA9D98D49CD0CA_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = ___startParenEntityId1;
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_2 = (ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8*)il2cpp_codegen_object_new(ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ParseElementOnlyContent_LocalFrame__ctor_m7E1F8F1E449038C870E9A418F8597ECFE5E6FDD1(L_2, L_1, NULL);
		V_1 = L_2;
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_3 = V_0;
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_4 = V_1;
		NullCheck(L_3);
		Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70(L_3, L_4, Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_5;
		L_5 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)23))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)27))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)29))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0148;
	}

IL_0030:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_9 = ___pcv0;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_10;
		L_10 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		NullCheck(L_9);
		ParticleContentValidator_AddName_m664A347C22696BE8E7587622B923EEF8DBAD2025(L_9, L_10, NULL, NULL);
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_11 = ___pcv0;
		DtdParser_ParseHowMany_mEA47F6A972504F1CE7D55AFACC025D61A0ED3126(__this, L_11, NULL);
		goto IL_0078;
	}

IL_0047:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_12 = ___pcv0;
		NullCheck(L_12);
		ParticleContentValidator_OpenGroup_mB1BC05C6D2410C538451E560BBB054D89259FD38(L_12, NULL);
		int32_t L_13 = __this->___currentEntityId_22;
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_14 = (ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8*)il2cpp_codegen_object_new(ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ParseElementOnlyContent_LocalFrame__ctor_m7E1F8F1E449038C870E9A418F8597ECFE5E6FDD1(L_14, L_13, NULL);
		V_1 = L_14;
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_15 = V_0;
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_16 = V_1;
		NullCheck(L_15);
		Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70(L_15, L_16, Stack_1_Push_m5E3D559C3BC63ADA67D5F6B8574A292AA3703C70_RuntimeMethod_var);
		goto IL_0014;
	}

IL_0062:
	{
		int32_t L_17 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_17, _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9, NULL);
		goto IL_014e;
	}

IL_0078:
	{
		int32_t L_18;
		L_18 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_2 = L_18;
		int32_t L_19 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)28))))
		{
			case 0:
			{
				goto IL_00f9;
			}
			case 1:
			{
				goto IL_0135;
			}
			case 2:
			{
				goto IL_00cb;
			}
		}
	}
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0148;
		}
	}
	{
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___parsingSchema_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_23 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_23, _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9, NULL);
	}

IL_00b8:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_24 = ___pcv0;
		NullCheck(L_24);
		ParticleContentValidator_AddSequence_m4E844C5C7E35EB35FD72B4A18F0FB55198EBA7DA(L_24, NULL);
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_25 = V_1;
		NullCheck(L_25);
		L_25->___parsingSchema_1 = ((int32_t)43);
		goto IL_0014;
	}

IL_00cb:
	{
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___parsingSchema_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_28 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_28, _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9, NULL);
	}

IL_00e6:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_29 = ___pcv0;
		NullCheck(L_29);
		ParticleContentValidator_AddChoice_mC56136642F8957A5E0450EBFECD4DC45CC5E0A60(L_29, NULL);
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_30 = V_1;
		NullCheck(L_30);
		L_30->___parsingSchema_1 = ((int32_t)30);
		goto IL_0014;
	}

IL_00f9:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_31 = ___pcv0;
		NullCheck(L_31);
		ParticleContentValidator_CloseGroup_mA124590CE4ABB10E0E03B9EF146A249731616B30(L_31, NULL);
		bool L_32 = __this->___validate_8;
		if (!L_32)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_33 = __this->___currentEntityId_22;
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = L_34->___startParenEntityId_0;
		if ((((int32_t)L_33) == ((int32_t)L_35)))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_36 = __this->___curPos_13;
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_36, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_37, NULL);
	}

IL_012c:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_38 = ___pcv0;
		DtdParser_ParseHowMany_mEA47F6A972504F1CE7D55AFACC025D61A0ED3126(__this, L_38, NULL);
		goto IL_014e;
	}

IL_0135:
	{
		int32_t L_39 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_39, _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9, NULL);
		goto IL_014e;
	}

IL_0148:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_014e:
	{
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_40 = V_0;
		NullCheck(L_40);
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_41;
		L_41 = Stack_1_Pop_mB31BECBC0F3FF13AE5D0EC3C5F3738DBCA64F93D(L_40, Stack_1_Pop_mB31BECBC0F3FF13AE5D0EC3C5F3738DBCA64F93D_RuntimeMethod_var);
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Stack_1_get_Count_mF5D38961851C67F431DDC6AA9FA9BC2BE63DBE2A_inline(L_42, Stack_1_get_Count_mF5D38961851C67F431DDC6AA9FA9BC2BE63DBE2A_RuntimeMethod_var);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_016a;
		}
	}
	{
		Stack_1_t6854CCAF9B3A062A15E0A1550AF2BC6A0615C9E8* L_44 = V_0;
		NullCheck(L_44);
		ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* L_45;
		L_45 = Stack_1_Peek_m0C074AC550A3838F3407E0C3699055604445DB7A(L_44, Stack_1_Peek_m0C074AC550A3838F3407E0C3699055604445DB7A_RuntimeMethod_var);
		V_1 = L_45;
		goto IL_0078;
	}

IL_016a:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseHowMany(System.Xml.Schema.ParticleContentValidator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseHowMany_mEA47F6A972504F1CE7D55AFACC025D61A0ED3126 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)39))))
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		return;
	}

IL_001e:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_2 = ___pcv0;
		NullCheck(L_2);
		ParticleContentValidator_AddStar_mEE53402121A554278856D01DD84040B0DAF06017(L_2, NULL);
		return;
	}

IL_0025:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_3 = ___pcv0;
		NullCheck(L_3);
		ParticleContentValidator_AddQMark_m55D3B074D8781502F6A5093A434D1950C804A155(L_3, NULL);
		return;
	}

IL_002c:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_4 = ___pcv0;
		NullCheck(L_4);
		ParticleContentValidator_AddPlus_mA6877E25D2F1BBC78C9A16AE29B12F9CE955C7C5(L_4, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseElementMixedContent(System.Xml.Schema.ParticleContentValidator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseElementMixedContent_mF075DA5FDA964DB2A05D84C79204A37A2F4453D6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* ___pcv0, int32_t ___startParenEntityId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412CDD51CEFF0076D98025A6A06AA2AF9F83EF80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD259EE6AB580E33090940BF472020FA738C8617A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = (bool)0;
		V_1 = (-1);
		int32_t L_0 = __this->___currentEntityId_22;
		V_2 = L_0;
	}

IL_000b:
	{
		int32_t L_1;
		L_1 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_4 = L_1;
		int32_t L_2 = V_4;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)28))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_4;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)30))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0128;
	}

IL_0025:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_4 = ___pcv0;
		NullCheck(L_4);
		ParticleContentValidator_CloseGroup_mA124590CE4ABB10E0E03B9EF146A249731616B30(L_4, NULL);
		bool L_5 = __this->___validate_8;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_6 = __this->___currentEntityId_22;
		int32_t L_7 = ___startParenEntityId1;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->___curPos_13;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_8, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_9, NULL);
	}

IL_0053:
	{
		int32_t L_10;
		L_10 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		bool L_11 = V_0;
		if (!((int32_t)(((((int32_t)L_10) == ((int32_t)((int32_t)39)))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_12 = ___pcv0;
		NullCheck(L_12);
		ParticleContentValidator_AddStar_mEE53402121A554278856D01DD84040B0DAF06017(L_12, NULL);
		return;
	}

IL_0069:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_14 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_14, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
	}

IL_007d:
	{
		return;
	}

IL_007e:
	{
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_0085;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_008b;
	}

IL_0085:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_16 = ___pcv0;
		NullCheck(L_16);
		ParticleContentValidator_AddChoice_mC56136642F8957A5E0450EBFECD4DC45CC5E0A60(L_16, NULL);
	}

IL_008b:
	{
		bool L_17 = __this->___validate_8;
		if (!L_17)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_18 = __this->___currentEntityId_22;
		V_1 = L_18;
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_21 = __this->___curPos_13;
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_21, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_22, NULL);
	}

IL_00b5:
	{
		int32_t L_23;
		L_23 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0128;
		}
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_24;
		L_24 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)1, NULL);
		V_3 = L_24;
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_25 = ___pcv0;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_26 = V_3;
		NullCheck(L_25);
		bool L_27;
		L_27 = ParticleContentValidator_Exists_mBCB763C6C4DA1D4732D98E21ECECFA2987132B9E(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		bool L_28 = __this->___validate_8;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		DtdParser_SendValidationEvent_m79ECFFB3D03874AE9095BA539FC8B7191018E58B(__this, 0, _stringLiteral412CDD51CEFF0076D98025A6A06AA2AF9F83EF80, L_30, NULL);
	}

IL_00eb:
	{
		ParticleContentValidator_tF4F0D4B27A8136F6A679933713C879BFBD60D1AF* L_31 = ___pcv0;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_32 = V_3;
		NullCheck(L_31);
		ParticleContentValidator_AddName_m664A347C22696BE8E7587622B923EEF8DBAD2025(L_31, L_32, NULL, NULL);
		bool L_33 = __this->___validate_8;
		if (!L_33)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_34 = __this->___currentEntityId_22;
		V_2 = L_34;
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_37 = __this->___curPos_13;
		String_t* L_38 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_37, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_38, NULL);
		goto IL_000b;
	}

IL_0128:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		goto IL_000b;
	}
}
// System.Void System.Xml.DtdParser::ParseEntityDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseEntityDecl_mDDF946172429F7DBFB301FE5F113084713B48B57 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744DBAE461E32AD381B1A38CE73D4E473E600816);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* V_1 = NULL;
	int32_t V_2 = 0;
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* G_B5_0 = NULL;
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* G_B6_1 = NULL;
	{
		V_0 = (bool)0;
		V_1 = (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7*)NULL;
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_4 = L_0;
		int32_t L_1 = V_4;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)24))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = V_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_01d6;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_3;
		L_3 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_01d6;
		}
	}

IL_002c:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_4;
		L_4 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)0, NULL);
		V_3 = L_4;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_5 = V_3;
		bool L_6 = V_0;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_7 = (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7*)il2cpp_codegen_object_new(SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SchemaEntity__ctor_m7444C0D862E0CC6A87EE2B39B4D058F657AA299C(L_7, L_5, L_6, NULL);
		V_1 = L_7;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_8 = V_1;
		String_t* L_9;
		L_9 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
		NullCheck(L_8);
		SchemaEntity_set_BaseURI_mFC468DD1928AD24B87E405653FBB189A67042C61_inline(L_8, L_9, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_10 = V_1;
		String_t* L_11 = __this->___externalDtdBaseUri_30;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B4_0 = L_10;
		if (!L_12)
		{
			G_B5_0 = L_10;
			goto IL_005e;
		}
	}
	{
		String_t* L_13 = __this->___externalDtdBaseUri_30;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0064;
	}

IL_005e:
	{
		String_t* L_14 = __this->___documentBaseUri_29;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0064:
	{
		NullCheck(G_B6_1);
		SchemaEntity_set_DeclaredURI_m0411EACB64E056C515ADBBD2118036872D76AC96_inline(G_B6_1, G_B6_0, NULL);
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_16 = __this->___schemaInfo_3;
		NullCheck(L_16);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_17;
		L_17 = SchemaInfo_get_ParameterEntities_m54F4C298FA2B2AAE10FAA43965E9DD2C84E76FBB(L_16, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_18 = V_3;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA(L_17, L_18, Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00b8;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_20 = __this->___schemaInfo_3;
		NullCheck(L_20);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_21;
		L_21 = SchemaInfo_get_ParameterEntities_m54F4C298FA2B2AAE10FAA43965E9DD2C84E76FBB(L_20, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_22 = V_3;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_23 = V_1;
		NullCheck(L_21);
		Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B(L_21, L_22, L_23, Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B_RuntimeMethod_var);
		goto IL_00b8;
	}

IL_0093:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_24 = __this->___schemaInfo_3;
		NullCheck(L_24);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_25;
		L_25 = SchemaInfo_get_GeneralEntities_mB8E4E7E02EB79C03BDEEB06638EBFA631DE9C9D2(L_24, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_26 = V_3;
		NullCheck(L_25);
		bool L_27;
		L_27 = Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA(L_25, L_26, Dictionary_2_ContainsKey_mA166669C5531C48393C18457E76480F075E923CA_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00b8;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_28 = __this->___schemaInfo_3;
		NullCheck(L_28);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_29;
		L_29 = SchemaInfo_get_GeneralEntities_mB8E4E7E02EB79C03BDEEB06638EBFA631DE9C9D2(L_28, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_30 = V_3;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_31 = V_1;
		NullCheck(L_29);
		Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B(L_29, L_30, L_31, Dictionary_2_Add_m0BD19F784F1A789C4FE92B64782BE1667D25902B_RuntimeMethod_var);
	}

IL_00b8:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_32 = V_1;
		bool L_33;
		L_33 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		NullCheck(L_32);
		SchemaEntity_set_DeclaredInExternal_mE6A46D7897D9CDBF7400135BF42A153AB313D66F_inline(L_32, (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0), NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_34 = V_1;
		NullCheck(L_34);
		SchemaEntity_set_ParsingInProgress_m6DA2762E08D1C44455A0E1CF86B7B208A6BD1480_inline(L_34, (bool)1, NULL);
		int32_t L_35;
		L_35 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, ((int32_t)33)))) > ((uint32_t)1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)35))))
		{
			goto IL_0195;
		}
	}
	{
		goto IL_01d6;
	}

IL_00ea:
	{
		int32_t L_38 = V_2;
		DtdParser_ParseExternalId_m2B6C7C539D6B9BAA81D2D39DD40915B0F8EE1680(__this, L_38, ((int32_t)13), (&V_6), (&V_5), NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_39 = V_1;
		NullCheck(L_39);
		SchemaEntity_set_IsExternal_mEA049015A7FB2840CFC3870A2F41FAC927612D12_inline(L_39, (bool)1, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_40 = V_1;
		String_t* L_41 = V_5;
		NullCheck(L_40);
		SchemaEntity_set_Url_m39051E42954FC32EF9283C192653BA148CB41249(L_40, L_41, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_42 = V_1;
		String_t* L_43 = V_6;
		NullCheck(L_42);
		SchemaEntity_set_Pubid_m38932D2D6C40B066741B4F3C85478DA7A49F1FC2_inline(L_42, L_43, NULL);
		int32_t L_44;
		L_44 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01c3;
		}
	}
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_46 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, ((int32_t)il2cpp_codegen_subtract(L_46, 5)), _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
	}

IL_0132:
	{
		bool L_47 = __this->___whitespaceSeen_17;
		if (L_47)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_48 = __this->___curPos_13;
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, ((int32_t)il2cpp_codegen_subtract(L_48, 5)), _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36, _stringLiteral744DBAE461E32AD381B1A38CE73D4E473E600816, NULL);
	}

IL_0152:
	{
		int32_t L_49;
		L_49 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_01d6;
		}
	}
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_50 = V_1;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_51;
		L_51 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)0, NULL);
		NullCheck(L_50);
		SchemaEntity_set_NData_mB7C417287EC6223758560683CFEF6961CCA9DD4F_inline(L_50, L_51, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_52 = V_1;
		NullCheck(L_52);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_53;
		L_53 = SchemaEntity_get_NData_m7B05467BF6357AB27C1DAFBFE27F9720C79CEC3C_inline(L_52, NULL);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_53, NULL);
		V_7 = L_54;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_55 = __this->___schemaInfo_3;
		NullCheck(L_55);
		Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* L_56;
		L_56 = SchemaInfo_get_Notations_m922CD199C8750B3D6F5662DB0EA272805A7EA3A1(L_55, NULL);
		String_t* L_57 = V_7;
		NullCheck(L_56);
		bool L_58;
		L_58 = Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206(L_56, L_57, Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_01c3;
		}
	}
	{
		String_t* L_59 = V_7;
		DtdParser_AddUndeclaredNotation_mF35809833D2C33608CD892441E552FAEA80F4A70(__this, L_59, NULL);
		goto IL_01c3;
	}

IL_0195:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_60 = V_1;
		String_t* L_61;
		L_61 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		NullCheck(L_60);
		SchemaEntity_set_Text_m62FCB261049A0B400D7C27470AFC73EA227861AF(L_60, L_61, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_62 = V_1;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_63 = (&__this->___literalLineInfo_27);
		int32_t L_64 = L_63->___lineNo_0;
		NullCheck(L_62);
		SchemaEntity_set_Line_m3F4EBBBF917403C4F93292B873B64063DD3850F3_inline(L_62, L_64, NULL);
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_65 = V_1;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_66 = (&__this->___literalLineInfo_27);
		int32_t L_67 = L_66->___linePos_1;
		NullCheck(L_65);
		SchemaEntity_set_Pos_mD4124AF35C72621D401E02AED280FF8A8934FABB_inline(L_65, L_67, NULL);
	}

IL_01c3:
	{
		int32_t L_68;
		L_68 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)29)))))
		{
			goto IL_01d6;
		}
	}
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_69 = V_1;
		NullCheck(L_69);
		SchemaEntity_set_ParsingInProgress_m6DA2762E08D1C44455A0E1CF86B7B208A6BD1480_inline(L_69, (bool)0, NULL);
		return;
	}

IL_01d6:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseNotationDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseNotationDecl_mBCCE845466278E35DDADC504075E85C358FA9EC1 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1BD6D03E43DE090315E2B473EC6665083565F73E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m620783E54E80B6F38403C978D1134BC1613768B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34202956739DA5FD8C25F589724F7651D367199C);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_0 = NULL;
	SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24))))
		{
			goto IL_0011;
		}
	}
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_0011:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_1;
		L_1 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)0, NULL);
		V_0 = L_1;
		V_1 = (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269*)NULL;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_2 = __this->___schemaInfo_3;
		NullCheck(L_2);
		Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* L_3;
		L_3 = SchemaInfo_get_Notations_m922CD199C8750B3D6F5662DB0EA272805A7EA3A1(L_2, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206(L_3, L_5, Dictionary_2_ContainsKey_mE95F6F2001E3CA07C37D145E3D22F9A261874206_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_7 = __this->___undeclaredNotations_31;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_8 = __this->___undeclaredNotations_31;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_m620783E54E80B6F38403C978D1134BC1613768B2(L_8, L_10, Dictionary_2_Remove_m620783E54E80B6F38403C978D1134BC1613768B2_RuntimeMethod_var);
	}

IL_004d:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_12 = V_0;
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_13 = (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269*)il2cpp_codegen_object_new(SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		SchemaNotation__ctor_m2C7E7540A7A33F4B18E31AEB896806C301466457(L_13, L_12, NULL);
		V_1 = L_13;
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_14 = __this->___schemaInfo_3;
		NullCheck(L_14);
		Dictionary_2_t27DD7BC6C615A002762F178DF4446D10EF4486A1* L_15;
		L_15 = SchemaInfo_get_Notations_m922CD199C8750B3D6F5662DB0EA272805A7EA3A1(L_14, NULL);
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_16 = V_1;
		NullCheck(L_16);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_17;
		L_17 = SchemaNotation_get_Name_mF5CA9EBBD17ADAB3A31FC36FDB03B236C4847FCD_inline(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_17, NULL);
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_19 = V_1;
		NullCheck(L_15);
		Dictionary_2_Add_m1BD6D03E43DE090315E2B473EC6665083565F73E(L_15, L_18, L_19, Dictionary_2_Add_m1BD6D03E43DE090315E2B473EC6665083565F73E_RuntimeMethod_var);
		goto IL_009e;
	}

IL_0072:
	{
		bool L_20 = __this->___validate_8;
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_21 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_25, NULL);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(L_21, L_24)), 0, _stringLiteral34202956739DA5FD8C25F589724F7651D367199C, L_26, NULL);
	}

IL_009e:
	{
		int32_t L_27;
		L_27 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_00d0;
		}
	}

IL_00b0:
	{
		int32_t L_30 = V_2;
		DtdParser_ParseExternalId_m2B6C7C539D6B9BAA81D2D39DD40915B0F8EE1680(__this, L_30, 8, (&V_3), (&V_4), NULL);
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_31 = V_1;
		if (!L_31)
		{
			goto IL_00d6;
		}
	}
	{
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_32 = V_1;
		String_t* L_33 = V_4;
		NullCheck(L_32);
		SchemaNotation_set_SystemLiteral_mE508FA22D4C2368801F3A5AA2B5797F1221234CD_inline(L_32, L_33, NULL);
		SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* L_34 = V_1;
		String_t* L_35 = V_3;
		NullCheck(L_34);
		SchemaNotation_set_Pubid_m3829B9FB66E7CB42DBAE04A487127361BFF4357B_inline(L_34, L_35, NULL);
		goto IL_00d6;
	}

IL_00d0:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_00d6:
	{
		int32_t L_36;
		L_36 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)29))))
		{
			goto IL_00e7;
		}
	}
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_00e7:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::AddUndeclaredNotation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_AddUndeclaredNotation_mF35809833D2C33608CD892441E552FAEA80F4A70 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___notationName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF9A60D8A0C976AFEE10941219915771AE92C4AA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF8AA7901FEFABA7D6FCE95EB586FD42E58B1F0A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE03838E6B9827A6EFC4AF300FBEFAEFECFC20210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* V_0 = NULL;
	UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* V_1 = NULL;
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_0 = __this->___undeclaredNotations_31;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_1 = (Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698*)il2cpp_codegen_object_new(Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mE03838E6B9827A6EFC4AF300FBEFAEFECFC20210(L_1, Dictionary_2__ctor_mE03838E6B9827A6EFC4AF300FBEFAEFECFC20210_RuntimeMethod_var);
		__this->___undeclaredNotations_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___undeclaredNotations_31), (void*)L_1);
	}

IL_0013:
	{
		String_t* L_2 = ___notationName0;
		int32_t L_3;
		L_3 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_4;
		L_4 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		String_t* L_5 = ___notationName0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_7 = (UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E*)il2cpp_codegen_object_new(UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UndeclaredNotation__ctor_m6237B782B12B39FB8BF173A6ABA4C298D685F300(L_7, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_6)), NULL);
		V_0 = L_7;
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_8 = __this->___undeclaredNotations_31;
		String_t* L_9 = ___notationName0;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_mF8AA7901FEFABA7D6FCE95EB586FD42E58B1F0A7(L_8, L_9, (&V_1), Dictionary_2_TryGetValue_mF8AA7901FEFABA7D6FCE95EB586FD42E58B1F0A7_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_11 = V_0;
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_12 = V_1;
		NullCheck(L_12);
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_13 = L_12->___next_3;
		NullCheck(L_11);
		L_11->___next_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___next_3), (void*)L_13);
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_14 = V_1;
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_15 = V_0;
		NullCheck(L_14);
		L_14->___next_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___next_3), (void*)L_15);
		return;
	}

IL_0051:
	{
		Dictionary_2_t5B9132F36AB4802E2DCBBC379E9A521504442698* L_16 = __this->___undeclaredNotations_31;
		String_t* L_17 = ___notationName0;
		UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* L_18 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_mF9A60D8A0C976AFEE10941219915771AE92C4AA2(L_16, L_17, L_18, Dictionary_2_Add_mF9A60D8A0C976AFEE10941219915771AE92C4AA2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseComment_mAAB19E9100AB4E6929F69BF9895CFE5430B39E96 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			bool L_0;
			L_0 = DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66(__this, NULL);
			if (!L_0)
			{
				goto IL_0032_1;
			}
		}
		{
			RuntimeObject* L_1 = __this->___readerAdapter_0;
			StringBuilder_t* L_2 = __this->___internalSubsetValueSb_20;
			NullCheck(L_1);
			InterfaceActionInvoker1< StringBuilder_t* >::Invoke(17 /* System.Void System.Xml.IDtdParserAdapter::ParseComment(System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1, L_2);
			StringBuilder_t* L_3 = __this->___internalSubsetValueSb_20;
			NullCheck(L_3);
			StringBuilder_t* L_4;
			L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA, NULL);
			goto IL_003e_1;
		}

IL_0032_1:
		{
			RuntimeObject* L_5 = __this->___readerAdapter_0;
			NullCheck(L_5);
			InterfaceActionInvoker1< StringBuilder_t* >::Invoke(17 /* System.Void System.Xml.IDtdParserAdapter::ParseComment(System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_5, (StringBuilder_t*)NULL);
		}

IL_003e_1:
		{
			goto IL_006c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.Xml.XmlException)
		{
			NullCheck(((XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)IL2CPP_GET_ACTIVE_EXCEPTION(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)));
			String_t* L_6;
			L_6 = XmlException_get_ResString_m977084C1A1F883C2BED73B1F956D980E62649C7A_inline(((XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)IL2CPP_GET_ACTIVE_EXCEPTION(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)), NULL);
			bool L_7;
			L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC)), NULL);
			if (!L_7)
			{
				goto IL_0068;
			}
		}
		{
			int32_t L_8 = __this->___currentEntityId_22;
			if (!L_8)
			{
				goto IL_0068;
			}
		}
		{
			DtdParser_SendValidationEvent_m79ECFFB3D03874AE9095BA539FC8B7191018E58B(__this, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD259EE6AB580E33090940BF472020FA738C8617A)), (String_t*)NULL, NULL);
			goto IL_006a;
		}

IL_0068:
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_006a:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_006c;
		}
	}// end catch (depth: 1)

IL_006c:
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParsePI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParsePI_m78FD95C2338F0BCF9535C89A24CEFB6F0802E4C9 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		bool L_0;
		L_0 = DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66(__this, NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_1 = __this->___readerAdapter_0;
		StringBuilder_t* L_2 = __this->___internalSubsetValueSb_20;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringBuilder_t* >::Invoke(16 /* System.Void System.Xml.IDtdParserAdapter::ParsePI(System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1, L_2);
		StringBuilder_t* L_3 = __this->___internalSubsetValueSb_20;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB, NULL);
		goto IL_003e;
	}

IL_0032:
	{
		RuntimeObject* L_5 = __this->___readerAdapter_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< StringBuilder_t* >::Invoke(16 /* System.Void System.Xml.IDtdParserAdapter::ParsePI(System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_5, (StringBuilder_t*)NULL);
	}

IL_003e:
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseCondSection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseCondSection_m6DF82F4650A08BC0E920DEA62D346383C57C677D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD259EE6AB580E33090940BF472020FA738C8617A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0 = __this->___currentEntityId_22;
		V_0 = L_0;
		int32_t L_1;
		L_1 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)46))))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_4;
		L_4 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0134;
		}
	}
	{
		bool L_5 = __this->___validate_8;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___currentEntityId_22;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = __this->___curPos_13;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_8, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_9, NULL);
	}

IL_0055:
	{
		bool L_10 = __this->___validate_8;
		if (!L_10)
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___condSectionEntityIds_32;
		if (L_11)
		{
			goto IL_0073;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___condSectionEntityIds_32 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condSectionEntityIds_32), (void*)L_12);
		goto IL_00b0;
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___condSectionEntityIds_32;
		NullCheck(L_13);
		int32_t L_14 = __this->___condSectionDepth_26;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((uint32_t)L_14))))
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___condSectionEntityIds_32;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_15)->max_length)), 2)));
		V_2 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___condSectionEntityIds_32;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___condSectionEntityIds_32;
		NullCheck(L_19);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		__this->___condSectionEntityIds_32 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condSectionEntityIds_32), (void*)L_20);
	}

IL_00b0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___condSectionEntityIds_32;
		int32_t L_22 = __this->___condSectionDepth_26;
		int32_t L_23 = V_0;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)L_23);
	}

IL_00be:
	{
		int32_t L_24 = __this->___condSectionDepth_26;
		__this->___condSectionDepth_26 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}

IL_00cd:
	{
		int32_t L_25;
		L_25 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0134;
		}
	}
	{
		bool L_26 = __this->___validate_8;
		if (!L_26)
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___currentEntityId_22;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_29 = __this->___curPos_13;
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_29, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_30, NULL);
	}

IL_0100:
	{
		int32_t L_31;
		L_31 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0134;
		}
	}
	{
		bool L_32 = __this->___validate_8;
		if (!L_32)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = __this->___currentEntityId_22;
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_35 = __this->___curPos_13;
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, L_35, 0, _stringLiteralD259EE6AB580E33090940BF472020FA738C8617A, L_36, NULL);
		return;
	}

IL_0134:
	{
		DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6(__this, NULL);
	}

IL_013a:
	{
		return;
	}
}
// System.Void System.Xml.DtdParser::ParseExternalId(System.Xml.DtdParser/Token,System.Xml.DtdParser/Token,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ParseExternalId_m2B6C7C539D6B9BAA81D2D39DD40915B0F8EE1680 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___idTokenType0, int32_t ___declType1, String_t** ___publicId2, String_t** ___systemId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427B5CD0C06701810B3C126A307EAE3A6260A3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_1;
		L_1 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		LineInfo__ctor_mFF99DC657778EB3519A941F3CB7E7C33710B0EE0((&V_0), L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 6)), NULL);
		String_t** L_2 = ___publicId2;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		String_t** L_3 = ___systemId3;
		*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		int32_t L_4;
		L_4 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)1, NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)35))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
	}

IL_003d:
	{
		int32_t L_6 = ___idTokenType0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00d1;
		}
	}
	{
		String_t** L_7 = ___systemId3;
		String_t* L_8;
		L_8 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_8);
		String_t** L_9 = ___systemId3;
		String_t* L_10 = *((String_t**)L_9);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_10, ((int32_t)35), NULL);
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_12 = __this->___curPos_13;
		String_t** L_13 = ___systemId3;
		String_t* L_14 = *((String_t**)L_13);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t** L_18 = ___systemId3;
		String_t* L_19 = *((String_t**)L_18);
		String_t** L_20 = ___systemId3;
		String_t* L_21 = *((String_t**)L_20);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_21, ((int32_t)35), NULL);
		NullCheck(L_19);
		String_t* L_23;
		L_23 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_19, L_22, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_17;
		String_t** L_25 = ___systemId3;
		String_t* L_26 = *((String_t**)L_25);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_26);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_15)), 1)), _stringLiteral427B5CD0C06701810B3C126A307EAE3A6260A3C9, L_24, NULL);
	}

IL_0098:
	{
		int32_t L_27 = ___declType1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0227;
		}
	}
	{
		bool L_28 = __this->___freeFloatingDtd_23;
		if (L_28)
		{
			goto IL_0227;
		}
	}
	{
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_29 = (&__this->___literalLineInfo_27);
		int32_t* L_30 = (&L_29->___linePos_1);
		int32_t* L_31 = L_30;
		int32_t L_32 = *((int32_t*)L_31);
		*((int32_t*)L_31) = (int32_t)((int32_t)il2cpp_codegen_add(L_32, 1));
		RuntimeObject* L_33 = __this->___readerAdapter_0;
		String_t** L_34 = ___systemId3;
		String_t* L_35 = *((String_t**)L_34);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_36 = V_0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_37 = __this->___literalLineInfo_27;
		NullCheck(L_33);
		InterfaceActionInvoker3< String_t*, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 >::Invoke(22 /* System.Void System.Xml.IDtdParserAdapter::OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_33, L_35, L_36, L_37);
		return;
	}

IL_00d1:
	{
		String_t** L_38 = ___publicId2;
		String_t* L_39;
		L_39 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		*((RuntimeObject**)L_38) = (RuntimeObject*)L_39;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)(RuntimeObject*)L_39);
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_40 = (&__this->___xmlCharType_4);
		String_t** L_41 = ___publicId2;
		String_t* L_42 = *((String_t**)L_41);
		int32_t L_43;
		L_43 = XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE(L_40, L_42, NULL);
		int32_t L_44 = L_43;
		V_1 = L_44;
		if ((((int32_t)L_44) < ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_45 = __this->___curPos_13;
		String_t** L_46 = ___publicId2;
		String_t* L_47 = *((String_t**)L_46);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		int32_t L_49 = V_1;
		String_t** L_50 = ___publicId2;
		String_t* L_51 = *((String_t**)L_50);
		int32_t L_52 = V_1;
		DtdParser_ThrowInvalidChar_mD2161D4741D7A76279757B830E981723BEB64CA3(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, 1)), L_48)), L_49)), L_51, L_52, NULL);
	}

IL_0106:
	{
		int32_t L_53 = ___declType1;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_01c3;
		}
	}
	{
		bool L_54 = __this->___freeFloatingDtd_23;
		if (L_54)
		{
			goto IL_01c3;
		}
	}
	{
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_55 = (&__this->___literalLineInfo_27);
		int32_t* L_56 = (&L_55->___linePos_1);
		int32_t* L_57 = L_56;
		int32_t L_58 = *((int32_t*)L_57);
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add(L_58, 1));
		RuntimeObject* L_59 = __this->___readerAdapter_0;
		String_t** L_60 = ___publicId2;
		String_t* L_61 = *((String_t**)L_60);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_62 = V_0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_63 = __this->___literalLineInfo_27;
		NullCheck(L_59);
		InterfaceActionInvoker3< String_t*, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 >::Invoke(23 /* System.Void System.Xml.IDtdParserAdapter::OnPublicId(System.String,System.Xml.LineInfo,System.Xml.LineInfo) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_59, L_61, L_62, L_63);
		int32_t L_64;
		L_64 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_01ac;
		}
	}
	{
		bool L_65 = __this->___whitespaceSeen_17;
		if (L_65)
		{
			goto IL_017d;
		}
	}
	{
		Il2CppChar L_66 = __this->___literalQuoteChar_28;
		String_t* L_67;
		L_67 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, L_66, 1, NULL);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_68 = (&__this->___literalLineInfo_27);
		int32_t L_69 = L_68->___lineNo_0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_70 = (&__this->___literalLineInfo_27);
		int32_t L_71 = L_70->___linePos_1;
		DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95(__this, _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36, L_67, L_69, L_71, NULL);
	}

IL_017d:
	{
		String_t** L_72 = ___systemId3;
		String_t* L_73;
		L_73 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		*((RuntimeObject**)L_72) = (RuntimeObject*)L_73;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_72, (void*)(RuntimeObject*)L_73);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_74 = (&__this->___literalLineInfo_27);
		int32_t* L_75 = (&L_74->___linePos_1);
		int32_t* L_76 = L_75;
		int32_t L_77 = *((int32_t*)L_76);
		*((int32_t*)L_76) = (int32_t)((int32_t)il2cpp_codegen_add(L_77, 1));
		RuntimeObject* L_78 = __this->___readerAdapter_0;
		String_t** L_79 = ___systemId3;
		String_t* L_80 = *((String_t**)L_79);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_81 = V_0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 L_82 = __this->___literalLineInfo_27;
		NullCheck(L_78);
		InterfaceActionInvoker3< String_t*, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24, LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 >::Invoke(22 /* System.Void System.Xml.IDtdParserAdapter::OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_78, L_80, L_81, L_82);
		return;
	}

IL_01ac:
	{
		int32_t L_83 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_83, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		return;
	}

IL_01c3:
	{
		int32_t L_84;
		L_84 = DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A(__this, (bool)0, NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_020d;
		}
	}
	{
		bool L_85 = __this->___whitespaceSeen_17;
		if (L_85)
		{
			goto IL_0203;
		}
	}
	{
		Il2CppChar L_86 = __this->___literalQuoteChar_28;
		String_t* L_87;
		L_87 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, L_86, 1, NULL);
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_88 = (&__this->___literalLineInfo_27);
		int32_t L_89 = L_88->___lineNo_0;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_90 = (&__this->___literalLineInfo_27);
		int32_t L_91 = L_90->___linePos_1;
		DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95(__this, _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36, L_87, L_89, L_91, NULL);
	}

IL_0203:
	{
		String_t** L_92 = ___systemId3;
		String_t* L_93;
		L_93 = DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622(__this, NULL);
		*((RuntimeObject**)L_92) = (RuntimeObject*)L_93;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_92, (void*)(RuntimeObject*)L_93);
		return;
	}

IL_020d:
	{
		int32_t L_94 = ___declType1;
		if ((((int32_t)L_94) == ((int32_t)8)))
		{
			goto IL_0227;
		}
	}
	{
		int32_t L_95 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_95, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
	}

IL_0227:
	{
		return;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::GetToken(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_GetToken_m314D3A1BA5596BD50E08F67B39CBFBE2AF04FE8A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___needWhiteSpace0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->___whitespaceSeen_17 = (bool)0;
	}

IL_0007:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)13)))))
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_014d;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_01c0;
			}
			case 3:
			{
				goto IL_01c0;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}
	{
		goto IL_01c0;
	}

IL_003f:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_014d;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)37))))
		{
			goto IL_0167;
		}
	}
	{
		goto IL_01c0;
	}

IL_0054:
	{
		int32_t L_9 = __this->___curPos_13;
		int32_t L_10 = __this->___charsUsed_12;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0388;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___chars_11;
		int32_t L_12 = __this->___charsUsed_12;
		int32_t L_13 = __this->___curPos_13;
		DtdParser_ThrowInvalidChar_m67D089CB4F65FC2275C1FE545C178FF42CB61944(__this, L_11, L_12, L_13, NULL);
		goto IL_0388;
	}

IL_0082:
	{
		__this->___whitespaceSeen_17 = (bool)1;
		int32_t L_14 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		RuntimeObject* L_15 = __this->___readerAdapter_0;
		int32_t L_16 = __this->___curPos_13;
		NullCheck(L_15);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_15, L_16);
		goto IL_0007;
	}

IL_00ad:
	{
		__this->___whitespaceSeen_17 = (bool)1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->___chars_11;
		int32_t L_18 = __this->___curPos_13;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00fa;
		}
	}
	{
		bool L_21;
		L_21 = DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline(__this, NULL);
		if (!L_21)
		{
			goto IL_00ea;
		}
	}
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		RuntimeObject* L_22 = __this->___readerAdapter_0;
		RuntimeObject* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.IDtdParserAdapter::get_CurrentPosition() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void System.Xml.IDtdParserAdapter::set_CurrentPosition(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_23, ((int32_t)il2cpp_codegen_add(L_25, 1)));
	}

IL_00ea:
	{
		int32_t L_26 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		goto IL_0137;
	}

IL_00fa:
	{
		int32_t L_27 = __this->___curPos_13;
		int32_t L_28 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_27, 1))) < ((int32_t)L_28)))
		{
			goto IL_011a;
		}
	}
	{
		RuntimeObject* L_29 = __this->___readerAdapter_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_29);
		if (!L_30)
		{
			goto IL_0388;
		}
	}

IL_011a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->___chars_11;
		int32_t L_32 = __this->___curPos_13;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)10));
		int32_t L_33 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0137:
	{
		RuntimeObject* L_34 = __this->___readerAdapter_0;
		int32_t L_35 = __this->___curPos_13;
		NullCheck(L_34);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_34, L_35);
		goto IL_0007;
	}

IL_014d:
	{
		__this->___whitespaceSeen_17 = (bool)1;
		int32_t L_36 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		goto IL_0007;
	}

IL_0167:
	{
		int32_t L_37 = __this->___charsUsed_12;
		int32_t L_38 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_37, L_38))) < ((int32_t)2)))
		{
			goto IL_0388;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_39 = (&__this->___xmlCharType_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = __this->___chars_11;
		int32_t L_41 = __this->___curPos_13;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		uint16_t L_43 = (uint16_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		bool L_44;
		L_44 = XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387(L_39, L_43, NULL);
		if (L_44)
		{
			goto IL_01c0;
		}
	}
	{
		bool L_45;
		L_45 = DtdParser_get_IgnoreEntityReferences_m2DC8E61DFCB1C09453864CAC4031C467FB7340D8(__this, NULL);
		if (!L_45)
		{
			goto IL_01b1;
		}
	}
	{
		int32_t L_46 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0007;
	}

IL_01b1:
	{
		bool L_47;
		L_47 = DtdParser_HandleEntityReference_mEE956B6F9F4B05B092B23769C7446B988111557C(__this, (bool)1, (bool)0, (bool)0, NULL);
		goto IL_0007;
	}

IL_01c0:
	{
		bool L_48 = ___needWhiteSpace0;
		if (!L_48)
		{
			goto IL_01f2;
		}
	}
	{
		bool L_49 = __this->___whitespaceSeen_17;
		if (L_49)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_50 = __this->___scanningFunction_14;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)32))))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_51 = __this->___curPos_13;
		int32_t L_52 = __this->___curPos_13;
		String_t* L_53;
		L_53 = DtdParser_ParseUnexpectedToken_m207C66A0CCCD7B01EC54A015C8F1CB228665119C(__this, L_52, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_51, _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36, L_53, NULL);
	}

IL_01f2:
	{
		int32_t L_54 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_54;
	}

IL_01fe:
	{
		int32_t L_55 = __this->___scanningFunction_14;
		V_2 = L_55;
		int32_t L_56 = V_2;
		switch (L_56)
		{
			case 0:
			{
				goto IL_02a9;
			}
			case 1:
			{
				goto IL_0294;
			}
			case 2:
			{
				goto IL_029b;
			}
			case 3:
			{
				goto IL_02a2;
			}
			case 4:
			{
				goto IL_02b0;
			}
			case 5:
			{
				goto IL_02b7;
			}
			case 6:
			{
				goto IL_02be;
			}
			case 7:
			{
				goto IL_02c5;
			}
			case 8:
			{
				goto IL_02cc;
			}
			case 9:
			{
				goto IL_02d3;
			}
			case 10:
			{
				goto IL_02da;
			}
			case 11:
			{
				goto IL_02e1;
			}
			case 12:
			{
				goto IL_02e8;
			}
			case 13:
			{
				goto IL_02ef;
			}
			case 14:
			{
				goto IL_02f6;
			}
			case 15:
			{
				goto IL_02fd;
			}
			case 16:
			{
				goto IL_0304;
			}
			case 17:
			{
				goto IL_030b;
			}
			case 18:
			{
				goto IL_0312;
			}
			case 19:
			{
				goto IL_0319;
			}
			case 20:
			{
				goto IL_033c;
			}
			case 21:
			{
				goto IL_0343;
			}
			case 22:
			{
				goto IL_034a;
			}
			case 23:
			{
				goto IL_0320;
			}
			case 24:
			{
				goto IL_0351;
			}
			case 25:
			{
				goto IL_0358;
			}
			case 26:
			{
				goto IL_035f;
			}
			case 27:
			{
				goto IL_0385;
			}
			case 28:
			{
				goto IL_0327;
			}
			case 29:
			{
				goto IL_032e;
			}
			case 30:
			{
				goto IL_0335;
			}
			case 31:
			{
				goto IL_0366;
			}
			case 32:
			{
				goto IL_036d;
			}
		}
	}
	{
		goto IL_0385;
	}

IL_0294:
	{
		int32_t L_57;
		L_57 = DtdParser_ScanNameExpected_mE86BA18BAC4E482467ACBF7324AC50A7A036612C(__this, NULL);
		return L_57;
	}

IL_029b:
	{
		int32_t L_58;
		L_58 = DtdParser_ScanQNameExpected_mA3CEF7926D1ADB4516533C14CA5AC11B577780DD(__this, NULL);
		return L_58;
	}

IL_02a2:
	{
		int32_t L_59;
		L_59 = DtdParser_ScanNmtokenExpected_mA1C480DC3339EDB16295740B126CD6E065C1A9EB(__this, NULL);
		return L_59;
	}

IL_02a9:
	{
		int32_t L_60;
		L_60 = DtdParser_ScanSubsetContent_m3DDC1C5F54961537AD8EFC21533E8B079CD3CFE4(__this, NULL);
		return L_60;
	}

IL_02b0:
	{
		int32_t L_61;
		L_61 = DtdParser_ScanDoctype1_m8CC5B6D8A23BC79BC7D24753A9283D4B7678BBD9(__this, NULL);
		return L_61;
	}

IL_02b7:
	{
		int32_t L_62;
		L_62 = DtdParser_ScanDoctype2_m49CE285688D0AF32C97161251B5BAED8DC35CAC6(__this, NULL);
		return L_62;
	}

IL_02be:
	{
		int32_t L_63;
		L_63 = DtdParser_ScanElement1_m72C790C87EF7495318BB9181081FFB608299E94D(__this, NULL);
		return L_63;
	}

IL_02c5:
	{
		int32_t L_64;
		L_64 = DtdParser_ScanElement2_m8B93B60343DFF685D0BD5A6769BD73FB39E39F45(__this, NULL);
		return L_64;
	}

IL_02cc:
	{
		int32_t L_65;
		L_65 = DtdParser_ScanElement3_m28CF7EC133A70479C5F5740091A0F58D03E70EA6(__this, NULL);
		return L_65;
	}

IL_02d3:
	{
		int32_t L_66;
		L_66 = DtdParser_ScanElement4_m6F360CB881C17BFFB2C688BBF7FA4C9751AB284E(__this, NULL);
		return L_66;
	}

IL_02da:
	{
		int32_t L_67;
		L_67 = DtdParser_ScanElement5_m88E34616D6F10E1061C7B3CADEF68E1FF1DF7126(__this, NULL);
		return L_67;
	}

IL_02e1:
	{
		int32_t L_68;
		L_68 = DtdParser_ScanElement6_m5B40A19C9CD3EAED210B4829382140426A14E936(__this, NULL);
		return L_68;
	}

IL_02e8:
	{
		int32_t L_69;
		L_69 = DtdParser_ScanElement7_m3F94F17E421650A3A8D8BDEC02F8201CD2AB1BC7(__this, NULL);
		return L_69;
	}

IL_02ef:
	{
		int32_t L_70;
		L_70 = DtdParser_ScanAttlist1_m83EEEF8CFE21CC81A36DA270900584135021C828(__this, NULL);
		return L_70;
	}

IL_02f6:
	{
		int32_t L_71;
		L_71 = DtdParser_ScanAttlist2_m7E560A6A423783BEB4E7F99C9B4FF69C833D061D(__this, NULL);
		return L_71;
	}

IL_02fd:
	{
		int32_t L_72;
		L_72 = DtdParser_ScanAttlist3_mF035EBFC23BF70F98B6DFD34112D12607DC8E74D(__this, NULL);
		return L_72;
	}

IL_0304:
	{
		int32_t L_73;
		L_73 = DtdParser_ScanAttlist4_mCD308E6A3D25EB060DBC8C35FADB8F6A67991587(__this, NULL);
		return L_73;
	}

IL_030b:
	{
		int32_t L_74;
		L_74 = DtdParser_ScanAttlist5_m35AA80B4939B569B63EACFBD15C3A7A279E08C82(__this, NULL);
		return L_74;
	}

IL_0312:
	{
		int32_t L_75;
		L_75 = DtdParser_ScanAttlist6_mF627B2ACA8D7005BF6E61B406E7D9016E817B0AE(__this, NULL);
		return L_75;
	}

IL_0319:
	{
		int32_t L_76;
		L_76 = DtdParser_ScanAttlist7_m180D2F146EE05F9ED0732FDA13ADF88F8A0AB239(__this, NULL);
		return L_76;
	}

IL_0320:
	{
		int32_t L_77;
		L_77 = DtdParser_ScanNotation1_m4C4E5782C3B83C24E6F9F08D87B22C4B82E780FB(__this, NULL);
		return L_77;
	}

IL_0327:
	{
		int32_t L_78;
		L_78 = DtdParser_ScanSystemId_m4BFDE8AB3CAEF9D217E5FDEBEA038712AC85F601(__this, NULL);
		return L_78;
	}

IL_032e:
	{
		int32_t L_79;
		L_79 = DtdParser_ScanPublicId1_m1095E6AE70E11A9B956708FFBE530301689F82A5(__this, NULL);
		return L_79;
	}

IL_0335:
	{
		int32_t L_80;
		L_80 = DtdParser_ScanPublicId2_mFDAA7AB884FAFD43C7864DA3C22C00BD0024B9DD(__this, NULL);
		return L_80;
	}

IL_033c:
	{
		int32_t L_81;
		L_81 = DtdParser_ScanEntity1_mE0247D128601F57689966E73F7F89597F017AC53(__this, NULL);
		return L_81;
	}

IL_0343:
	{
		int32_t L_82;
		L_82 = DtdParser_ScanEntity2_m2C5A6BB88090ADF0B9649F21210AAD33A4FB7115(__this, NULL);
		return L_82;
	}

IL_034a:
	{
		int32_t L_83;
		L_83 = DtdParser_ScanEntity3_m83E67C0E0412FC7E29A40113DFBD9663F1832487(__this, NULL);
		return L_83;
	}

IL_0351:
	{
		int32_t L_84;
		L_84 = DtdParser_ScanCondSection1_mC6FDCA0100720F5289856689A51097AA12C05FDC(__this, NULL);
		return L_84;
	}

IL_0358:
	{
		int32_t L_85;
		L_85 = DtdParser_ScanCondSection2_m4F6CA7E86BF773FA2EAA8ACA577C4F96A1DC7A9A(__this, NULL);
		return L_85;
	}

IL_035f:
	{
		int32_t L_86;
		L_86 = DtdParser_ScanCondSection3_m1A14F74065167EFD8938C66911DA82D34F5B1429(__this, NULL);
		return L_86;
	}

IL_0366:
	{
		int32_t L_87;
		L_87 = DtdParser_ScanClosingTag_m5AB673393CE16B30CE50A23B70DE0B8EC66E23B5(__this, NULL);
		return L_87;
	}

IL_036d:
	{
		__this->___whitespaceSeen_17 = (bool)1;
		int32_t L_88 = __this->___savedScanningFunction_16;
		__this->___scanningFunction_14 = L_88;
		goto IL_01fe;
	}

IL_0385:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0388:
	{
		RuntimeObject* L_89 = __this->___readerAdapter_0;
		NullCheck(L_89);
		bool L_90;
		L_90 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_89);
		if (L_90)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_91;
		L_91 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_91)
		{
			goto IL_0007;
		}
	}

IL_03a0:
	{
		bool L_92;
		L_92 = DtdParser_HandleEntityEnd_m741F32D866045C1FEBD97EE495E22BECA25B453D(__this, (bool)0, NULL);
		if (L_92)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_93 = __this->___scanningFunction_14;
		if (L_93)
		{
			goto IL_03b7;
		}
	}
	{
		return (int32_t)(((int32_t)19));
	}

IL_03b7:
	{
		int32_t L_94 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_94, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0007;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanSubsetContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanSubsetContent_m3DDC1C5F54961537AD8EFC21533E8B079CD3CFE4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;

IL_0000:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0453;
		}
	}
	{
		goto IL_04f3;
	}

IL_0020:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___chars_11;
		int32_t L_7 = __this->___curPos_13;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)33))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)63))))
		{
			goto IL_041b;
		}
	}
	{
		goto IL_042c;
	}

IL_0042:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->___chars_11;
		int32_t L_13 = __this->___curPos_13;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		Il2CppChar L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)65)))))
		{
			goto IL_006c;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_03a3;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)65))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_03f0;
	}

IL_006c:
	{
		Il2CppChar L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)69))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)78))))
		{
			goto IL_02be;
		}
	}
	{
		Il2CppChar L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)91))))
		{
			goto IL_038a;
		}
	}
	{
		goto IL_03f0;
	}

IL_0086:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = __this->___chars_11;
		int32_t L_23 = __this->___curPos_13;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 3));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_26 = __this->___charsUsed_12;
		int32_t L_27 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_26, L_27))) < ((int32_t)((int32_t)9))))
		{
			goto IL_0513;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = __this->___chars_11;
		int32_t L_29 = __this->___curPos_13;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 4));
		uint16_t L_31 = (uint16_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_010f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = __this->___chars_11;
		int32_t L_33 = __this->___curPos_13;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		uint16_t L_35 = (uint16_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_010f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = __this->___chars_11;
		int32_t L_37 = __this->___curPos_13;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 6));
		uint16_t L_39 = (uint16_t)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_010f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = __this->___chars_11;
		int32_t L_41 = __this->___curPos_13;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 7));
		uint16_t L_43 = (uint16_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_010f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->___chars_11;
		int32_t L_45 = __this->___curPos_13;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 8));
		uint16_t L_47 = (uint16_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((((int32_t)L_47) == ((int32_t)((int32_t)84))))
		{
			goto IL_0120;
		}
	}

IL_010f:
	{
		int32_t L_48 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_48, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_0120:
	{
		int32_t L_49 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)9)));
		__this->___scanningFunction_14 = 2;
		__this->___nextScaningFunction_15 = 6;
		return (int32_t)(((int32_t)12));
	}

IL_0140:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = __this->___chars_11;
		int32_t L_51 = __this->___curPos_13;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 3));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_54 = __this->___charsUsed_12;
		int32_t L_55 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_54, L_55))) < ((int32_t)8)))
		{
			goto IL_0513;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = __this->___chars_11;
		int32_t L_57 = __this->___curPos_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		uint16_t L_59 = (uint16_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_01b5;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = __this->___chars_11;
		int32_t L_61 = __this->___curPos_13;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 5));
		uint16_t L_63 = (uint16_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_01b5;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_64 = __this->___chars_11;
		int32_t L_65 = __this->___curPos_13;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 6));
		uint16_t L_67 = (uint16_t)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_01b5;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_68 = __this->___chars_11;
		int32_t L_69 = __this->___curPos_13;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 7));
		uint16_t L_71 = (uint16_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((((int32_t)L_71) == ((int32_t)((int32_t)89))))
		{
			goto IL_01c6;
		}
	}

IL_01b5:
	{
		int32_t L_72 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_72, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_01c6:
	{
		int32_t L_73 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_73, 8));
		__this->___scanningFunction_14 = ((int32_t)20);
		return (int32_t)(((int32_t)13));
	}

IL_01df:
	{
		int32_t L_74 = __this->___charsUsed_12;
		int32_t L_75 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_74, L_75))) < ((int32_t)4)))
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_76 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_76, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
		return (int32_t)(((int32_t)9));
	}

IL_0206:
	{
		int32_t L_77 = __this->___charsUsed_12;
		int32_t L_78 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_77, L_78))) < ((int32_t)((int32_t)9))))
		{
			goto IL_0513;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_79 = __this->___chars_11;
		int32_t L_80 = __this->___curPos_13;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint16_t L_82 = (uint16_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_028c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_83 = __this->___chars_11;
		int32_t L_84 = __this->___curPos_13;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 4));
		uint16_t L_86 = (uint16_t)(L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_028c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_87 = __this->___chars_11;
		int32_t L_88 = __this->___curPos_13;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 5));
		uint16_t L_90 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_028c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_91 = __this->___chars_11;
		int32_t L_92 = __this->___curPos_13;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 6));
		uint16_t L_94 = (uint16_t)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_028c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_95 = __this->___chars_11;
		int32_t L_96 = __this->___curPos_13;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		uint16_t L_98 = (uint16_t)(L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((uint32_t)L_98) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_028c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_99 = __this->___chars_11;
		int32_t L_100 = __this->___curPos_13;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 8));
		uint16_t L_102 = (uint16_t)(L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		if ((((int32_t)L_102) == ((int32_t)((int32_t)84))))
		{
			goto IL_029d;
		}
	}

IL_028c:
	{
		int32_t L_103 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_103, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_029d:
	{
		int32_t L_104 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_104, ((int32_t)9)));
		__this->___scanningFunction_14 = 2;
		__this->___nextScaningFunction_15 = ((int32_t)13);
		return (int32_t)(((int32_t)11));
	}

IL_02be:
	{
		int32_t L_105 = __this->___charsUsed_12;
		int32_t L_106 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_105, L_106))) < ((int32_t)((int32_t)10))))
		{
			goto IL_0513;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_107 = __this->___chars_11;
		int32_t L_108 = __this->___curPos_13;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 3));
		uint16_t L_110 = (uint16_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111 = __this->___chars_11;
		int32_t L_112 = __this->___curPos_13;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 4));
		uint16_t L_114 = (uint16_t)(L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		if ((!(((uint32_t)L_114) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_115 = __this->___chars_11;
		int32_t L_116 = __this->___curPos_13;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 5));
		uint16_t L_118 = (uint16_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_119 = __this->___chars_11;
		int32_t L_120 = __this->___curPos_13;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 6));
		uint16_t L_122 = (uint16_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		if ((!(((uint32_t)L_122) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_123 = __this->___chars_11;
		int32_t L_124 = __this->___curPos_13;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_add(L_124, 7));
		uint16_t L_126 = (uint16_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_127 = __this->___chars_11;
		int32_t L_128 = __this->___curPos_13;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 8));
		uint16_t L_130 = (uint16_t)(L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		if ((!(((uint32_t)L_130) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_0358;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_131 = __this->___chars_11;
		int32_t L_132 = __this->___curPos_13;
		NullCheck(L_131);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add(L_132, ((int32_t)9)));
		uint16_t L_134 = (uint16_t)(L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_134) == ((int32_t)((int32_t)78))))
		{
			goto IL_0369;
		}
	}

IL_0358:
	{
		int32_t L_135 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_135, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_0369:
	{
		int32_t L_136 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_136, ((int32_t)10)));
		__this->___scanningFunction_14 = 1;
		__this->___nextScaningFunction_15 = ((int32_t)23);
		return (int32_t)(((int32_t)14));
	}

IL_038a:
	{
		int32_t L_137 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_137, 3));
		__this->___scanningFunction_14 = ((int32_t)24);
		return (int32_t)(((int32_t)17));
	}

IL_03a3:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = __this->___chars_11;
		int32_t L_139 = __this->___curPos_13;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 3));
		uint16_t L_141 = (uint16_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_142 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_142, 4));
		return (int32_t)(((int32_t)15));
	}

IL_03c7:
	{
		int32_t L_143 = __this->___charsUsed_12;
		int32_t L_144 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_143, L_144))) < ((int32_t)4)))
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_145 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_145, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
		goto IL_0513;
	}

IL_03f0:
	{
		int32_t L_146 = __this->___charsUsed_12;
		int32_t L_147 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_146, L_147))) < ((int32_t)3)))
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_148 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_add(L_148, 2)), _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
		goto IL_0513;
	}

IL_041b:
	{
		int32_t L_149 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_149, 2));
		return (int32_t)(((int32_t)16));
	}

IL_042c:
	{
		int32_t L_150 = __this->___charsUsed_12;
		int32_t L_151 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_150, L_151))) < ((int32_t)2)))
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_152 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_152, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
		return (int32_t)(((int32_t)9));
	}

IL_0453:
	{
		int32_t L_153 = __this->___charsUsed_12;
		int32_t L_154 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_153, L_154))) >= ((int32_t)2)))
		{
			goto IL_0473;
		}
	}
	{
		RuntimeObject* L_155 = __this->___readerAdapter_0;
		NullCheck(L_155);
		bool L_156;
		L_156 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_155);
		if (!L_156)
		{
			goto IL_0513;
		}
	}

IL_0473:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_157 = __this->___chars_11;
		int32_t L_158 = __this->___curPos_13;
		NullCheck(L_157);
		int32_t L_159 = ((int32_t)il2cpp_codegen_add(L_158, 1));
		uint16_t L_160 = (uint16_t)(L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		if ((((int32_t)L_160) == ((int32_t)((int32_t)93))))
		{
			goto IL_049f;
		}
	}
	{
		int32_t L_161 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		__this->___scanningFunction_14 = ((int32_t)31);
		return (int32_t)(((int32_t)32));
	}

IL_049f:
	{
		int32_t L_162 = __this->___charsUsed_12;
		int32_t L_163 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_162, L_163))) >= ((int32_t)3)))
		{
			goto IL_04bc;
		}
	}
	{
		RuntimeObject* L_164 = __this->___readerAdapter_0;
		NullCheck(L_164);
		bool L_165;
		L_165 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_164);
		if (!L_165)
		{
			goto IL_0513;
		}
	}

IL_04bc:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_166 = __this->___chars_11;
		int32_t L_167 = __this->___curPos_13;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)il2cpp_codegen_add(L_167, 1));
		uint16_t L_169 = (uint16_t)(L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		if ((!(((uint32_t)L_169) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_04f3;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_170 = __this->___chars_11;
		int32_t L_171 = __this->___curPos_13;
		NullCheck(L_170);
		int32_t L_172 = ((int32_t)il2cpp_codegen_add(L_171, 2));
		uint16_t L_173 = (uint16_t)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		if ((!(((uint32_t)L_173) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_04f3;
		}
	}
	{
		int32_t L_174 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_174, 3));
		return (int32_t)(((int32_t)18));
	}

IL_04f3:
	{
		int32_t L_175 = __this->___charsUsed_12;
		int32_t L_176 = __this->___curPos_13;
		if (!((int32_t)il2cpp_codegen_subtract(L_175, L_176)))
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_177 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_177, _stringLiteral324ECCE6E181944A23FC9126AE81680CA09C93D4, NULL);
	}

IL_0513:
	{
		int32_t L_178;
		L_178 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_178)
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_179 = __this->___charsUsed_12;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_179, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0000;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNameExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNameExpected_mE86BA18BAC4E482467ACBF7324AC50A7A036612C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		DtdParser_ScanName_mC452081ACDFAE2FB825E73D7F7F506FD967F3DB0(__this, NULL);
		int32_t L_0 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_0;
		return (int32_t)(((int32_t)24));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanQNameExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanQNameExpected_mA3CEF7926D1ADB4516533C14CA5AC11B577780DD (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		DtdParser_ScanQName_mAD528C25DE449B69809006B17DF6015439150DE3(__this, NULL);
		int32_t L_0 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_0;
		return (int32_t)(((int32_t)23));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNmtokenExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNmtokenExpected_mA1C480DC3339EDB16295740B126CD6E065C1A9EB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		DtdParser_ScanNmtoken_mD2A9057AA5C523117A422FBB2B5119B915133919(__this, NULL);
		int32_t L_0 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_0;
		return (int32_t)(((int32_t)25));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanDoctype1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanDoctype1_m8CC5B6D8A23BC79BC7D24753A9283D4B7678BBD9 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)80)))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)62))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)80))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_00ba;
	}

IL_0025:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)83))))
		{
			goto IL_005f;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_00ba;
	}

IL_0034:
	{
		bool L_9;
		L_9 = DtdParser_EatPublicKeyword_m36E41ED431E35D882457C69703585B584F86D47E(__this, NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_10, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_004d:
	{
		__this->___nextScaningFunction_15 = 5;
		__this->___scanningFunction_14 = ((int32_t)29);
		return (int32_t)(((int32_t)33));
	}

IL_005f:
	{
		bool L_11;
		L_11 = DtdParser_EatSystemKeyword_mA6344D8F8E24209177DE25810ECC484A5202D452(__this, NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_12, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_0078:
	{
		__this->___nextScaningFunction_15 = 5;
		__this->___scanningFunction_14 = ((int32_t)28);
		return (int32_t)(((int32_t)34));
	}

IL_008a:
	{
		int32_t L_13 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)31));
	}

IL_00a2:
	{
		int32_t L_14 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}

IL_00ba:
	{
		int32_t L_15 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_15, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanDoctype2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanDoctype2_m49CE285688D0AF32C97161251B5BAED8DC35CAC6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41EF1659C5E772235CFEA4B5A94D5DF6799C5608);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)62))))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_6 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)31));
	}

IL_0030:
	{
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}

IL_0048:
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_8, _stringLiteral41EF1659C5E772235CFEA4B5A94D5DF6799C5608, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanClosingTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanClosingTag_m5AB673393CE16B30CE50A23B70DE0B8EC66E23B5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)62))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_4, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
	}

IL_0022:
	{
		int32_t L_5 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement1_m72C790C87EF7495318BB9181081FFB608299E94D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;

IL_0000:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)40))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)65))))
		{
			goto IL_00bb;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)69))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010a;
	}

IL_0025:
	{
		__this->___scanningFunction_14 = 7;
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return (int32_t)(((int32_t)27));
	}

IL_003d:
	{
		int32_t L_8 = __this->___charsUsed_12;
		int32_t L_9 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) < ((int32_t)5)))
		{
			goto IL_011b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->___chars_11;
		int32_t L_11 = __this->___curPos_13;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_010a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->___chars_11;
		int32_t L_15 = __this->___curPos_13;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint16_t L_17 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_010a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->___chars_11;
		int32_t L_19 = __this->___curPos_13;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 3));
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_010a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = __this->___chars_11;
		int32_t L_23 = __this->___curPos_13;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 4));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)89)))))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_26 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_26, 5));
		__this->___scanningFunction_14 = ((int32_t)31);
		return (int32_t)(((int32_t)45));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___charsUsed_12;
		int32_t L_28 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28))) < ((int32_t)3)))
		{
			goto IL_011b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->___chars_11;
		int32_t L_30 = __this->___curPos_13;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_010a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___chars_11;
		int32_t L_34 = __this->___curPos_13;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)89)))))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_37 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_37, 3));
		__this->___scanningFunction_14 = ((int32_t)31);
		return (int32_t)(((int32_t)44));
	}

IL_010a:
	{
		int32_t L_38 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_38, _stringLiteralF2F28D0DCD35D90C0A1A591C99FD816AC6E36CB9, NULL);
	}

IL_011b:
	{
		int32_t L_39;
		L_39 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_39)
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_40 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_40, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0000;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement2_m8B93B60343DFF685D0BD5A6769BD73FB39E39F45 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE37FDA7277F15534CECEDAEFDA7350672DC07A1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_002f;
	}

IL_0016:
	{
		int32_t L_4;
		L_4 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_5, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
	}

IL_002f:
	{
		int32_t L_6 = __this->___charsUsed_12;
		int32_t L_7 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) < ((int32_t)7)))
		{
			goto IL_0016;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->___chars_11;
		int32_t L_9 = __this->___curPos_13;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_00ca;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->___chars_11;
		int32_t L_13 = __this->___curPos_13;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00ca;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___chars_11;
		int32_t L_17 = __this->___curPos_13;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_00ca;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->___chars_11;
		int32_t L_21 = __this->___curPos_13;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 4));
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_00ca;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->___chars_11;
		int32_t L_25 = __this->___curPos_13;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 5));
		uint16_t L_27 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00ca;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = __this->___chars_11;
		int32_t L_29 = __this->___curPos_13;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 6));
		uint16_t L_31 = (uint16_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_32 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_32, 7));
		__this->___scanningFunction_14 = ((int32_t)11);
		return (int32_t)(((int32_t)42));
	}

IL_00ca:
	{
		int32_t L_33 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_add(L_33, 1)), _stringLiteralE37FDA7277F15534CECEDAEFDA7350672DC07A1D, NULL);
	}

IL_00dd:
	{
		__this->___scanningFunction_14 = 8;
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement3_m28CF7EC133A70479C5F5740091A0F58D03E70EA6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)40))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)62))))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0043;
	}

IL_001a:
	{
		int32_t L_6 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return (int32_t)(((int32_t)27));
	}

IL_002b:
	{
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}

IL_0043:
	{
		DtdParser_ScanQName_mAD528C25DE449B69809006B17DF6015439150DE3(__this, NULL);
		__this->___scanningFunction_14 = ((int32_t)9);
		return (int32_t)(((int32_t)23));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement4_m6F360CB881C17BFFB2C688BBF7FA4C9751AB284E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465E30F3D21D06E0DA20D8DA61A1DEC0DAB8C6A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		__this->___scanningFunction_14 = ((int32_t)10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)42))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)43))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)63))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0036;
	}

IL_0027:
	{
		V_0 = ((int32_t)39);
		goto IL_0039;
	}

IL_002c:
	{
		V_0 = ((int32_t)40);
		goto IL_0039;
	}

IL_0031:
	{
		V_0 = ((int32_t)41);
		goto IL_0039;
	}

IL_0036:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0039:
	{
		bool L_7 = __this->___whitespaceSeen_17;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_8, _stringLiteral465E30F3D21D06E0DA20D8DA61A1DEC0DAB8C6A5, NULL);
	}

IL_0052:
	{
		int32_t L_9 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement5_m88E34616D6F10E1061C7B3CADEF68E1FF1DF7126 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E813A351BDAF588C5F27BAF94CA6FA9357A2BD3);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)41))))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)44))))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_008c;
	}

IL_001f:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)62))))
		{
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)124))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_008c;
	}

IL_002b:
	{
		int32_t L_9 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		__this->___scanningFunction_14 = 8;
		return (int32_t)(((int32_t)43));
	}

IL_0043:
	{
		int32_t L_10 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		__this->___scanningFunction_14 = 8;
		return (int32_t)(((int32_t)30));
	}

IL_005b:
	{
		int32_t L_11 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		__this->___scanningFunction_14 = ((int32_t)9);
		return (int32_t)(((int32_t)28));
	}

IL_0074:
	{
		int32_t L_12 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}

IL_008c:
	{
		int32_t L_13 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_13, _stringLiteral7E813A351BDAF588C5F27BAF94CA6FA9357A2BD3, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement6_m5B40A19C9CD3EAED210B4829382140426A14E936 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)41))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)124))))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0053;
	}

IL_001a:
	{
		int32_t L_6 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___scanningFunction_14 = ((int32_t)12);
		return (int32_t)(((int32_t)28));
	}

IL_0033:
	{
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___nextScaningFunction_15 = ((int32_t)11);
		__this->___scanningFunction_14 = 2;
		return (int32_t)(((int32_t)30));
	}

IL_0053:
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_8, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanElement7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanElement7_m3F94F17E421650A3A8D8BDEC02F8201CD2AB1BC7 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		__this->___scanningFunction_14 = ((int32_t)31);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0032;
		}
	}
	{
		bool L_4 = __this->___whitespaceSeen_17;
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return (int32_t)(((int32_t)39));
	}

IL_0032:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist1_m83EEEF8CFE21CC81A36DA270900584135021C828 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)29));
	}

IL_0029:
	{
		bool L_5 = __this->___whitespaceSeen_17;
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_6 = __this->___curPos_13;
		int32_t L_7 = __this->___curPos_13;
		String_t* L_8;
		L_8 = DtdParser_ParseUnexpectedToken_m207C66A0CCCD7B01EC54A015C8F1CB228665119C(__this, L_7, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_6, _stringLiteralA02A8489B78BE60779EEA12413113D4FBC8C5E36, L_8, NULL);
	}

IL_004e:
	{
		DtdParser_ScanQName_mAD528C25DE449B69809006B17DF6015439150DE3(__this, NULL);
		__this->___scanningFunction_14 = ((int32_t)14);
		return (int32_t)(((int32_t)23));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist2_m7E560A6A423783BEB4E7F99C9B4FF69C833D061D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA907DF837264718D0DC8D41DDEAFB889AC5C57);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;

IL_0000:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)67)))))
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)40))))
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)67))))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_044e;
	}

IL_0022:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)73))))
		{
			goto IL_01e9;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)78))))
		{
			goto IL_02b5;
		}
	}
	{
		goto IL_044e;
	}

IL_003f:
	{
		int32_t L_10 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		__this->___scanningFunction_14 = 3;
		__this->___nextScaningFunction_15 = ((int32_t)17);
		return (int32_t)(((int32_t)27));
	}

IL_005f:
	{
		int32_t L_11 = __this->___charsUsed_12;
		int32_t L_12 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, L_12))) < ((int32_t)5)))
		{
			goto IL_045f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->___chars_11;
		int32_t L_14 = __this->___curPos_13;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_00be;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->___chars_11;
		int32_t L_18 = __this->___curPos_13;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 2));
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_00be;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->___chars_11;
		int32_t L_22 = __this->___curPos_13;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 3));
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00be;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->___chars_11;
		int32_t L_26 = __this->___curPos_13;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 4));
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)65))))
		{
			goto IL_00cf;
		}
	}

IL_00be:
	{
		int32_t L_29 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_29, _stringLiteral5EA907DF837264718D0DC8D41DDEAFB889AC5C57, NULL);
	}

IL_00cf:
	{
		int32_t L_30 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_30, 5));
		__this->___scanningFunction_14 = ((int32_t)18);
		return (int32_t)(0);
	}

IL_00e7:
	{
		int32_t L_31 = __this->___charsUsed_12;
		int32_t L_32 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_31, L_32))) < ((int32_t)((int32_t)9))))
		{
			goto IL_045f;
		}
	}
	{
		__this->___scanningFunction_14 = ((int32_t)18);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___chars_11;
		int32_t L_34 = __this->___curPos_13;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_014f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->___chars_11;
		int32_t L_38 = __this->___curPos_13;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_014f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->___chars_11;
		int32_t L_42 = __this->___curPos_13;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint16_t L_44 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_014f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = __this->___chars_11;
		int32_t L_46 = __this->___curPos_13;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 4));
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((((int32_t)L_48) == ((int32_t)((int32_t)84))))
		{
			goto IL_0160;
		}
	}

IL_014f:
	{
		int32_t L_49 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_49, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_0160:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = __this->___chars_11;
		int32_t L_51 = __this->___curPos_13;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 5));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_1 = L_53;
		Il2CppChar L_54 = V_1;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)73))))
		{
			goto IL_017c;
		}
	}
	{
		Il2CppChar L_55 = V_1;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)89))))
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_01d3;
	}

IL_017c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = __this->___chars_11;
		int32_t L_57 = __this->___curPos_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 6));
		uint16_t L_59 = (uint16_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_01a2;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = __this->___chars_11;
		int32_t L_61 = __this->___curPos_13;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 7));
		uint16_t L_63 = (uint16_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		if ((((int32_t)L_63) == ((int32_t)((int32_t)83))))
		{
			goto IL_01b3;
		}
	}

IL_01a2:
	{
		int32_t L_64 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_64, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_01b3:
	{
		int32_t L_65 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_65, 8));
		return (int32_t)(5);
	}

IL_01c3:
	{
		int32_t L_66 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_66, 6));
		return (int32_t)(4);
	}

IL_01d3:
	{
		int32_t L_67 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_67, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
		goto IL_045f;
	}

IL_01e9:
	{
		int32_t L_68 = __this->___charsUsed_12;
		int32_t L_69 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_68, L_69))) < ((int32_t)6)))
		{
			goto IL_045f;
		}
	}
	{
		__this->___scanningFunction_14 = ((int32_t)18);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = __this->___chars_11;
		int32_t L_71 = __this->___curPos_13;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((((int32_t)L_73) == ((int32_t)((int32_t)68))))
		{
			goto IL_0228;
		}
	}
	{
		int32_t L_74 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_74, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_0228:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75 = __this->___chars_11;
		int32_t L_76 = __this->___curPos_13;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 2));
		uint16_t L_78 = (uint16_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		if ((((int32_t)L_78) == ((int32_t)((int32_t)82))))
		{
			goto IL_024b;
		}
	}
	{
		int32_t L_79 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_79, 2));
		return (int32_t)(1);
	}

IL_024b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_80 = __this->___chars_11;
		int32_t L_81 = __this->___curPos_13;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 3));
		uint16_t L_83 = (uint16_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0271;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_84 = __this->___chars_11;
		int32_t L_85 = __this->___curPos_13;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 4));
		uint16_t L_87 = (uint16_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		if ((((int32_t)L_87) == ((int32_t)((int32_t)70))))
		{
			goto IL_0282;
		}
	}

IL_0271:
	{
		int32_t L_88 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_88, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_0282:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_89 = __this->___chars_11;
		int32_t L_90 = __this->___curPos_13;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 5));
		uint16_t L_92 = (uint16_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		if ((((int32_t)L_92) == ((int32_t)((int32_t)83))))
		{
			goto IL_02a5;
		}
	}
	{
		int32_t L_93 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_93, 5));
		return (int32_t)(2);
	}

IL_02a5:
	{
		int32_t L_94 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_94, 6));
		return (int32_t)(3);
	}

IL_02b5:
	{
		int32_t L_95 = __this->___charsUsed_12;
		int32_t L_96 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_95, L_96))) >= ((int32_t)8)))
		{
			goto IL_02d5;
		}
	}
	{
		RuntimeObject* L_97 = __this->___readerAdapter_0;
		NullCheck(L_97);
		bool L_98;
		L_98 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_97);
		if (!L_98)
		{
			goto IL_045f;
		}
	}

IL_02d5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_99 = __this->___chars_11;
		int32_t L_100 = __this->___curPos_13;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		uint16_t L_102 = (uint16_t)(L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_1 = L_102;
		Il2CppChar L_103 = V_1;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)77))))
		{
			goto IL_0390;
		}
	}
	{
		Il2CppChar L_104 = V_1;
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_043b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_105 = __this->___chars_11;
		int32_t L_106 = __this->___curPos_13;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 2));
		uint16_t L_108 = (uint16_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((uint32_t)L_108) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0367;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_109 = __this->___chars_11;
		int32_t L_110 = __this->___curPos_13;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 3));
		uint16_t L_112 = (uint16_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		if ((!(((uint32_t)L_112) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0367;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_113 = __this->___chars_11;
		int32_t L_114 = __this->___curPos_13;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 4));
		uint16_t L_116 = (uint16_t)(L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		if ((!(((uint32_t)L_116) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0367;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_117 = __this->___chars_11;
		int32_t L_118 = __this->___curPos_13;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 5));
		uint16_t L_120 = (uint16_t)(L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_120) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_0367;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_121 = __this->___chars_11;
		int32_t L_122 = __this->___curPos_13;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 6));
		uint16_t L_124 = (uint16_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		if ((!(((uint32_t)L_124) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_0367;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = __this->___chars_11;
		int32_t L_126 = __this->___curPos_13;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 7));
		uint16_t L_128 = (uint16_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if ((((int32_t)L_128) == ((int32_t)((int32_t)78))))
		{
			goto IL_0378;
		}
	}

IL_0367:
	{
		int32_t L_129 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_129, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_0378:
	{
		int32_t L_130 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_130, 8));
		__this->___scanningFunction_14 = ((int32_t)15);
		return (int32_t)(8);
	}

IL_0390:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_131 = __this->___chars_11;
		int32_t L_132 = __this->___curPos_13;
		NullCheck(L_131);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add(L_132, 2));
		uint16_t L_134 = (uint16_t)(L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_03ef;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_135 = __this->___chars_11;
		int32_t L_136 = __this->___curPos_13;
		NullCheck(L_135);
		int32_t L_137 = ((int32_t)il2cpp_codegen_add(L_136, 3));
		uint16_t L_138 = (uint16_t)(L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		if ((!(((uint32_t)L_138) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_03ef;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_139 = __this->___chars_11;
		int32_t L_140 = __this->___curPos_13;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 4));
		uint16_t L_142 = (uint16_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		if ((!(((uint32_t)L_142) == ((uint32_t)((int32_t)75)))))
		{
			goto IL_03ef;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_143 = __this->___chars_11;
		int32_t L_144 = __this->___curPos_13;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 5));
		uint16_t L_146 = (uint16_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_03ef;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_147 = __this->___chars_11;
		int32_t L_148 = __this->___curPos_13;
		NullCheck(L_147);
		int32_t L_149 = ((int32_t)il2cpp_codegen_add(L_148, 6));
		uint16_t L_150 = (uint16_t)(L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		if ((((int32_t)L_150) == ((int32_t)((int32_t)78))))
		{
			goto IL_0400;
		}
	}

IL_03ef:
	{
		int32_t L_151 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_151, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_0400:
	{
		__this->___scanningFunction_14 = ((int32_t)18);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_152 = __this->___chars_11;
		int32_t L_153 = __this->___curPos_13;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_153, 7));
		uint16_t L_155 = (uint16_t)(L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		if ((!(((uint32_t)L_155) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_042b;
		}
	}
	{
		int32_t L_156 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_156, 8));
		return (int32_t)(7);
	}

IL_042b:
	{
		int32_t L_157 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_157, 7));
		return (int32_t)(6);
	}

IL_043b:
	{
		int32_t L_158 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_158, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
		goto IL_045f;
	}

IL_044e:
	{
		int32_t L_159 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_159, _stringLiteral26FEE84CC21450278EF3064F22658C1FBAD97632, NULL);
	}

IL_045f:
	{
		int32_t L_160;
		L_160 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_160)
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_161 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_161, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0000;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist3_mF035EBFC23BF70F98B6DFD34112D12607DC8E74D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		__this->___scanningFunction_14 = 1;
		__this->___nextScaningFunction_15 = ((int32_t)16);
		return (int32_t)(((int32_t)27));
	}

IL_0031:
	{
		int32_t L_5 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist4_mCD308E6A3D25EB060DBC8C35FADB8F6A67991587 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)41))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)124))))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0053;
	}

IL_001a:
	{
		int32_t L_6 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___scanningFunction_14 = ((int32_t)18);
		return (int32_t)(((int32_t)28));
	}

IL_0033:
	{
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___scanningFunction_14 = 1;
		__this->___nextScaningFunction_15 = ((int32_t)16);
		return (int32_t)(((int32_t)30));
	}

IL_0053:
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_8, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist5_m35AA80B4939B569B63EACFBD15C3A7A279E08C82 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)41))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)124))))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0053;
	}

IL_001a:
	{
		int32_t L_6 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___scanningFunction_14 = ((int32_t)18);
		return (int32_t)(((int32_t)28));
	}

IL_0033:
	{
		int32_t L_7 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		__this->___scanningFunction_14 = 3;
		__this->___nextScaningFunction_15 = ((int32_t)17);
		return (int32_t)(((int32_t)30));
	}

IL_0053:
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_8, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist6_mF627B2ACA8D7005BF6E61B406E7D9016E817B0AE (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;

IL_0000:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)35))))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_026a;
		}
	}

IL_0020:
	{
		int32_t L_7;
		L_7 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 0, NULL);
		__this->___scanningFunction_14 = ((int32_t)13);
		return (int32_t)(((int32_t)35));
	}

IL_0033:
	{
		int32_t L_8 = __this->___charsUsed_12;
		int32_t L_9 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) < ((int32_t)6)))
		{
			goto IL_027b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->___chars_11;
		int32_t L_11 = __this->___curPos_13;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)70))))
		{
			goto IL_01e1;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)73))))
		{
			goto IL_0132;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_17 = __this->___charsUsed_12;
		int32_t L_18 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) < ((int32_t)((int32_t)9))))
		{
			goto IL_027b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___curPos_13;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		uint16_t L_22 = (uint16_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = __this->___chars_11;
		int32_t L_24 = __this->___curPos_13;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 3));
		uint16_t L_26 = (uint16_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)81)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->___chars_11;
		int32_t L_28 = __this->___curPos_13;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 4));
		uint16_t L_30 = (uint16_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->___chars_11;
		int32_t L_32 = __this->___curPos_13;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 5));
		uint16_t L_34 = (uint16_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = __this->___chars_11;
		int32_t L_36 = __this->___curPos_13;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 6));
		uint16_t L_38 = (uint16_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = __this->___chars_11;
		int32_t L_40 = __this->___curPos_13;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 7));
		uint16_t L_42 = (uint16_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = __this->___chars_11;
		int32_t L_44 = __this->___curPos_13;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 8));
		uint16_t L_46 = (uint16_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((((int32_t)L_46) == ((int32_t)((int32_t)68))))
		{
			goto IL_0118;
		}
	}

IL_0107:
	{
		int32_t L_47 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_47, _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4, NULL);
	}

IL_0118:
	{
		int32_t L_48 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_48, ((int32_t)9)));
		__this->___scanningFunction_14 = ((int32_t)13);
		return (int32_t)(((int32_t)20));
	}

IL_0132:
	{
		int32_t L_49 = __this->___charsUsed_12;
		int32_t L_50 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_49, L_50))) < ((int32_t)8)))
		{
			goto IL_027b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = __this->___chars_11;
		int32_t L_52 = __this->___curPos_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint16_t L_54 = (uint16_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = __this->___chars_11;
		int32_t L_56 = __this->___curPos_13;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint16_t L_58 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = __this->___chars_11;
		int32_t L_60 = __this->___curPos_13;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint16_t L_62 = (uint16_t)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_63 = __this->___chars_11;
		int32_t L_64 = __this->___curPos_13;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 5));
		uint16_t L_66 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = __this->___chars_11;
		int32_t L_68 = __this->___curPos_13;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 6));
		uint16_t L_70 = (uint16_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = __this->___chars_11;
		int32_t L_72 = __this->___curPos_13;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 7));
		uint16_t L_74 = (uint16_t)(L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((((int32_t)L_74) == ((int32_t)((int32_t)68))))
		{
			goto IL_01c8;
		}
	}

IL_01b7:
	{
		int32_t L_75 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_75, _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4, NULL);
	}

IL_01c8:
	{
		int32_t L_76 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_76, 8));
		__this->___scanningFunction_14 = ((int32_t)13);
		return (int32_t)(((int32_t)21));
	}

IL_01e1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = __this->___chars_11;
		int32_t L_78 = __this->___curPos_13;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 2));
		uint16_t L_80 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_022d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_81 = __this->___chars_11;
		int32_t L_82 = __this->___curPos_13;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 3));
		uint16_t L_84 = (uint16_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_022d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_85 = __this->___chars_11;
		int32_t L_86 = __this->___curPos_13;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 4));
		uint16_t L_88 = (uint16_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_022d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_89 = __this->___chars_11;
		int32_t L_90 = __this->___curPos_13;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 5));
		uint16_t L_92 = (uint16_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		if ((((int32_t)L_92) == ((int32_t)((int32_t)68))))
		{
			goto IL_023e;
		}
	}

IL_022d:
	{
		int32_t L_93 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_93, _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4, NULL);
	}

IL_023e:
	{
		int32_t L_94 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_94, 6));
		__this->___scanningFunction_14 = ((int32_t)19);
		return (int32_t)(((int32_t)22));
	}

IL_0257:
	{
		int32_t L_95 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_95, _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4, NULL);
		goto IL_027b;
	}

IL_026a:
	{
		int32_t L_96 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_96, _stringLiteral601E51A43FF6581ACBC417FEE88AE4098CBBB1A4, NULL);
	}

IL_027b:
	{
		int32_t L_97;
		L_97 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_97)
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_98 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_98, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0000;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanAttlist7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanAttlist7_m180D2F146EE05F9ED0732FDA13ADF88F8A0AB239 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_002b;
		}
	}

IL_0018:
	{
		int32_t L_6;
		L_6 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 0, NULL);
		__this->___scanningFunction_14 = ((int32_t)13);
		return (int32_t)(((int32_t)35));
	}

IL_002b:
	{
		int32_t L_7 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanLiteral(System.Xml.DtdParser/LiteralType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___literalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292FFF1AFC6A39FAE710753C820C4EC3DD0D4613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DF28038BAE3947FE2A10B2562359E7D3A2BF989);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* V_9 = NULL;
	int32_t G_B3_0 = 0;
	StringBuilder_t* G_B29_0 = NULL;
	StringBuilder_t* G_B28_0 = NULL;
	String_t* G_B30_0 = NULL;
	StringBuilder_t* G_B30_1 = NULL;
	StringBuilder_t* G_B33_0 = NULL;
	StringBuilder_t* G_B32_0 = NULL;
	String_t* G_B34_0 = NULL;
	StringBuilder_t* G_B34_1 = NULL;
	RuntimeObject* G_B57_0 = NULL;
	RuntimeObject* G_B56_0 = NULL;
	StringBuilder_t* G_B58_0 = NULL;
	RuntimeObject* G_B58_1 = NULL;
	int32_t G_B62_0 = 0;
	RuntimeObject* G_B62_1 = NULL;
	int32_t G_B61_0 = 0;
	RuntimeObject* G_B61_1 = NULL;
	StringBuilder_t* G_B63_0 = NULL;
	int32_t G_B63_1 = 0;
	RuntimeObject* G_B63_2 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___literalType0;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((int32_t)10);
		goto IL_0017;
	}

IL_0015:
	{
		G_B3_0 = ((int32_t)32);
	}

IL_0017:
	{
		V_1 = G_B3_0;
		int32_t L_5 = __this->___currentEntityId_22;
		V_2 = L_5;
		LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24* L_6 = (&__this->___literalLineInfo_27);
		int32_t L_7;
		L_7 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_8;
		L_8 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		LineInfo_Set_m5D59B42332EDBA296FA9AED5CF63D8BECC18214E(L_6, L_7, L_8, NULL);
		int32_t L_9 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_10;
		StringBuilder_t* L_11 = __this->___stringBuilder_25;
		NullCheck(L_11);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_11, 0, NULL);
		goto IL_006c;
	}

IL_005e:
	{
		int32_t L_12 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006c:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_13 = (&__this->___xmlCharType_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->___charProperties_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->___chars_11;
		int32_t L_16 = __this->___curPos_13;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		uint16_t L_19 = L_18;
		uint8_t L_20 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if (!((int32_t)((int32_t)L_20&((int32_t)128))))
		{
			goto IL_009e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->___chars_11;
		int32_t L_22 = __this->___curPos_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_005e;
		}
	}

IL_009e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->___chars_11;
		int32_t L_26 = __this->___curPos_13;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Il2CppChar L_29 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_30 = __this->___currentEntityId_22;
		int32_t L_31 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0102;
		}
	}
	{
		StringBuilder_t* L_32 = __this->___stringBuilder_25;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_32, NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t* L_34 = __this->___stringBuilder_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = __this->___chars_11;
		int32_t L_36 = __this->___tokenStartPos_18;
		int32_t L_37 = __this->___curPos_13;
		int32_t L_38 = __this->___tokenStartPos_18;
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_34, L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
	}

IL_00ea:
	{
		int32_t L_40 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		Il2CppChar L_41 = V_0;
		__this->___literalQuoteChar_28 = L_41;
		return (int32_t)(((int32_t)35));
	}

IL_0102:
	{
		int32_t L_42 = __this->___curPos_13;
		int32_t L_43 = __this->___tokenStartPos_18;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
		int32_t L_44 = V_3;
		if ((((int32_t)L_44) <= ((int32_t)0)))
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t* L_45 = __this->___stringBuilder_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = __this->___chars_11;
		int32_t L_47 = __this->___tokenStartPos_18;
		int32_t L_48 = V_3;
		NullCheck(L_45);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_45, L_46, L_47, L_48, NULL);
		int32_t L_50 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_50;
	}

IL_0139:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = __this->___chars_11;
		int32_t L_52 = __this->___curPos_13;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint16_t L_54 = (uint16_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_4 = L_54;
		Il2CppChar L_55 = V_4;
		if ((!(((uint32_t)L_55) <= ((uint32_t)((int32_t)39)))))
		{
			goto IL_0193;
		}
	}
	{
		Il2CppChar L_56 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_56, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_02fd;
			}
			case 1:
			{
				goto IL_01b8;
			}
			case 2:
			{
				goto IL_054d;
			}
			case 3:
			{
				goto IL_054d;
			}
			case 4:
			{
				goto IL_01fd;
			}
		}
	}
	{
		Il2CppChar L_57 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_57, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_01a5;
			}
			case 1:
			{
				goto IL_054d;
			}
			case 2:
			{
				goto IL_054d;
			}
			case 3:
			{
				goto IL_0366;
			}
			case 4:
			{
				goto IL_039b;
			}
			case 5:
			{
				goto IL_01a5;
			}
		}
	}
	{
		goto IL_054d;
	}

IL_0193:
	{
		Il2CppChar L_58 = V_4;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)60))))
		{
			goto IL_0337;
		}
	}
	{
		Il2CppChar L_59 = V_4;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_054d;
		}
	}

IL_01a5:
	{
		int32_t L_60 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		goto IL_006c;
	}

IL_01b8:
	{
		int32_t L_61 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		bool L_62;
		L_62 = DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline(__this, NULL);
		if (!L_62)
		{
			goto IL_01e7;
		}
	}
	{
		StringBuilder_t* L_63 = __this->___stringBuilder_25;
		Il2CppChar L_64 = V_1;
		NullCheck(L_63);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, L_64, NULL);
		int32_t L_66 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_66;
	}

IL_01e7:
	{
		RuntimeObject* L_67 = __this->___readerAdapter_0;
		int32_t L_68 = __this->___curPos_13;
		NullCheck(L_67);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_67, L_68);
		goto IL_006c;
	}

IL_01fd:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_69 = __this->___chars_11;
		int32_t L_70 = __this->___curPos_13;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		uint16_t L_72 = (uint16_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_02a5;
		}
	}
	{
		bool L_73;
		L_73 = DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline(__this, NULL);
		if (!L_73)
		{
			goto IL_0295;
		}
	}
	{
		int32_t L_74 = ___literalType0;
		if (L_74)
		{
			goto IL_0245;
		}
	}
	{
		StringBuilder_t* L_75 = __this->___stringBuilder_25;
		RuntimeObject* L_76 = __this->___readerAdapter_0;
		NullCheck(L_76);
		bool L_77;
		L_77 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEntityEolNormalized() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_76);
		G_B28_0 = L_75;
		if (L_77)
		{
			G_B29_0 = L_75;
			goto IL_0238;
		}
	}
	{
		G_B30_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B30_1 = G_B28_0;
		goto IL_023d;
	}

IL_0238:
	{
		G_B30_0 = _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
		G_B30_1 = G_B29_0;
	}

IL_023d:
	{
		NullCheck(G_B30_1);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B30_1, G_B30_0, NULL);
		goto IL_026a;
	}

IL_0245:
	{
		StringBuilder_t* L_79 = __this->___stringBuilder_25;
		RuntimeObject* L_80 = __this->___readerAdapter_0;
		NullCheck(L_80);
		bool L_81;
		L_81 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEntityEolNormalized() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_80);
		G_B32_0 = L_79;
		if (L_81)
		{
			G_B33_0 = L_79;
			goto IL_025f;
		}
	}
	{
		G_B34_0 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
		G_B34_1 = G_B32_0;
		goto IL_0264;
	}

IL_025f:
	{
		G_B34_0 = _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
		G_B34_1 = G_B33_0;
	}

IL_0264:
	{
		NullCheck(G_B34_1);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B34_1, G_B34_0, NULL);
	}

IL_026a:
	{
		int32_t L_83 = __this->___curPos_13;
		__this->___tokenStartPos_18 = ((int32_t)il2cpp_codegen_add(L_83, 2));
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		RuntimeObject* L_84 = __this->___readerAdapter_0;
		RuntimeObject* L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.IDtdParserAdapter::get_CurrentPosition() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_85);
		V_5 = L_86;
		int32_t L_87 = V_5;
		NullCheck(L_85);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void System.Xml.IDtdParserAdapter::set_CurrentPosition(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_85, ((int32_t)il2cpp_codegen_add(L_87, 1)));
	}

IL_0295:
	{
		int32_t L_88 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_88, 2));
		goto IL_02e7;
	}

IL_02a5:
	{
		int32_t L_89 = __this->___curPos_13;
		int32_t L_90 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_89, 1))) == ((int32_t)L_90)))
		{
			goto IL_05cf;
		}
	}
	{
		int32_t L_91 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		bool L_92;
		L_92 = DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline(__this, NULL);
		if (!L_92)
		{
			goto IL_02e7;
		}
	}
	{
		StringBuilder_t* L_93 = __this->___stringBuilder_25;
		Il2CppChar L_94 = V_1;
		NullCheck(L_93);
		StringBuilder_t* L_95;
		L_95 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_93, L_94, NULL);
		int32_t L_96 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_96;
	}

IL_02e7:
	{
		RuntimeObject* L_97 = __this->___readerAdapter_0;
		int32_t L_98 = __this->___curPos_13;
		NullCheck(L_97);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_97, L_98);
		goto IL_006c;
	}

IL_02fd:
	{
		int32_t L_99 = ___literalType0;
		if (L_99)
		{
			goto IL_0324;
		}
	}
	{
		bool L_100;
		L_100 = DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline(__this, NULL);
		if (!L_100)
		{
			goto IL_0324;
		}
	}
	{
		StringBuilder_t* L_101 = __this->___stringBuilder_25;
		NullCheck(L_101);
		StringBuilder_t* L_102;
		L_102 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_101, ((int32_t)32), NULL);
		int32_t L_103 = __this->___tokenStartPos_18;
		__this->___tokenStartPos_18 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0324:
	{
		int32_t L_104 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		goto IL_006c;
	}

IL_0337:
	{
		int32_t L_105 = ___literalType0;
		if (L_105)
		{
			goto IL_0353;
		}
	}
	{
		int32_t L_106 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107;
		L_107 = XmlException_BuildCharExceptionArgs_m85E22B1AE112B5BB1253D33A24F137F73240C556(((int32_t)60), 0, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_106, _stringLiteral292FFF1AFC6A39FAE710753C820C4EC3DD0D4613, L_107, NULL);
	}

IL_0353:
	{
		int32_t L_108 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		goto IL_006c;
	}

IL_0366:
	{
		int32_t L_109 = ___literalType0;
		if ((((int32_t)L_109) == ((int32_t)1)))
		{
			goto IL_037d;
		}
	}
	{
		int32_t L_110 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		goto IL_006c;
	}

IL_037d:
	{
		int32_t L_111 = ___literalType0;
		bool L_112;
		L_112 = DtdParser_HandleEntityReference_mEE956B6F9F4B05B092B23769C7446B988111557C(__this, (bool)1, (bool)1, (bool)((((int32_t)L_111) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_113 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_113;
		goto IL_006c;
	}

IL_039b:
	{
		int32_t L_114 = ___literalType0;
		if ((!(((uint32_t)L_114) == ((uint32_t)2))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_115 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		goto IL_006c;
	}

IL_03b2:
	{
		int32_t L_116 = __this->___curPos_13;
		int32_t L_117 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_116, 1))) == ((int32_t)L_117)))
		{
			goto IL_05cf;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = __this->___chars_11;
		int32_t L_119 = __this->___curPos_13;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		uint16_t L_121 = (uint16_t)(L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		if ((!(((uint32_t)L_121) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0445;
		}
	}
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		RuntimeObject* L_122 = __this->___readerAdapter_0;
		bool L_123;
		L_123 = DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66(__this, NULL);
		G_B56_0 = L_122;
		if (L_123)
		{
			G_B57_0 = L_122;
			goto IL_03ef;
		}
	}
	{
		G_B58_0 = ((StringBuilder_t*)(NULL));
		G_B58_1 = G_B56_0;
		goto IL_03f5;
	}

IL_03ef:
	{
		StringBuilder_t* L_124 = __this->___internalSubsetValueSb_20;
		G_B58_0 = L_124;
		G_B58_1 = G_B57_0;
	}

IL_03f5:
	{
		NullCheck(G_B58_1);
		int32_t L_125;
		L_125 = InterfaceFuncInvoker1< int32_t, StringBuilder_t* >::Invoke(14 /* System.Int32 System.Xml.IDtdParserAdapter::ParseNumericCharRef(System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, G_B58_1, G_B58_0);
		V_6 = L_125;
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		StringBuilder_t* L_126 = __this->___stringBuilder_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_127 = __this->___chars_11;
		int32_t L_128 = __this->___curPos_13;
		int32_t L_129 = V_6;
		int32_t L_130 = __this->___curPos_13;
		NullCheck(L_126);
		StringBuilder_t* L_131;
		L_131 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_126, L_127, L_128, ((int32_t)il2cpp_codegen_subtract(L_129, L_130)), NULL);
		RuntimeObject* L_132 = __this->___readerAdapter_0;
		int32_t L_133 = V_6;
		NullCheck(L_132);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void System.Xml.IDtdParserAdapter::set_CurrentPosition(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_132, L_133);
		int32_t L_134 = V_6;
		__this->___tokenStartPos_18 = L_134;
		int32_t L_135 = V_6;
		__this->___curPos_13 = L_135;
		goto IL_006c;
	}

IL_0445:
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		int32_t L_136 = ___literalType0;
		if (L_136)
		{
			goto IL_04d9;
		}
	}
	{
		RuntimeObject* L_137 = __this->___readerAdapter_0;
		bool L_138;
		L_138 = DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66(__this, NULL);
		G_B61_0 = 1;
		G_B61_1 = L_137;
		if (L_138)
		{
			G_B62_0 = 1;
			G_B62_1 = L_137;
			goto IL_0463;
		}
	}
	{
		G_B63_0 = ((StringBuilder_t*)(NULL));
		G_B63_1 = G_B61_0;
		G_B63_2 = G_B61_1;
		goto IL_0469;
	}

IL_0463:
	{
		StringBuilder_t* L_139 = __this->___internalSubsetValueSb_20;
		G_B63_0 = L_139;
		G_B63_1 = G_B62_0;
		G_B63_2 = G_B62_1;
	}

IL_0469:
	{
		NullCheck(G_B63_2);
		int32_t L_140;
		L_140 = InterfaceFuncInvoker2< int32_t, bool, StringBuilder_t* >::Invoke(15 /* System.Int32 System.Xml.IDtdParserAdapter::ParseNamedCharRef(System.Boolean,System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, G_B63_2, (bool)G_B63_1, G_B63_0);
		V_7 = L_140;
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		int32_t L_141 = V_7;
		if ((((int32_t)L_141) < ((int32_t)0)))
		{
			goto IL_04be;
		}
	}
	{
		StringBuilder_t* L_142 = __this->___stringBuilder_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_143 = __this->___chars_11;
		int32_t L_144 = __this->___curPos_13;
		int32_t L_145 = V_7;
		int32_t L_146 = __this->___curPos_13;
		NullCheck(L_142);
		StringBuilder_t* L_147;
		L_147 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_142, L_143, L_144, ((int32_t)il2cpp_codegen_subtract(L_145, L_146)), NULL);
		RuntimeObject* L_148 = __this->___readerAdapter_0;
		int32_t L_149 = V_7;
		NullCheck(L_148);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void System.Xml.IDtdParserAdapter::set_CurrentPosition(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_148, L_149);
		int32_t L_150 = V_7;
		__this->___tokenStartPos_18 = L_150;
		int32_t L_151 = V_7;
		__this->___curPos_13 = L_151;
		goto IL_006c;
	}

IL_04be:
	{
		bool L_152;
		L_152 = DtdParser_HandleEntityReference_mEE956B6F9F4B05B092B23769C7446B988111557C(__this, (bool)0, (bool)1, (bool)1, NULL);
		int32_t L_153 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_153;
		goto IL_006c;
	}

IL_04d9:
	{
		RuntimeObject* L_154 = __this->___readerAdapter_0;
		NullCheck(L_154);
		int32_t L_155;
		L_155 = InterfaceFuncInvoker2< int32_t, bool, StringBuilder_t* >::Invoke(15 /* System.Int32 System.Xml.IDtdParserAdapter::ParseNamedCharRef(System.Boolean,System.Text.StringBuilder) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_154, (bool)0, (StringBuilder_t*)NULL);
		V_8 = L_155;
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		int32_t L_156 = V_8;
		if ((((int32_t)L_156) < ((int32_t)0)))
		{
			goto IL_050c;
		}
	}
	{
		int32_t L_157 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_157;
		int32_t L_158 = V_8;
		__this->___curPos_13 = L_158;
		goto IL_006c;
	}

IL_050c:
	{
		StringBuilder_t* L_159 = __this->___stringBuilder_25;
		NullCheck(L_159);
		StringBuilder_t* L_160;
		L_160 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_159, ((int32_t)38), NULL);
		int32_t L_161 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		int32_t L_162 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_162;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_163;
		L_163 = DtdParser_ScanEntityName_m88D8D0B3BD33BEB5120E1AA008E13FEBC4B03482(__this, NULL);
		V_9 = L_163;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_164 = V_9;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_165;
		L_165 = DtdParser_VerifyEntityReference_m84A330F3B961DFFD33E4BFA07F60013BCF96665E(__this, L_164, (bool)0, (bool)0, (bool)0, NULL);
		goto IL_006c;
	}

IL_054d:
	{
		int32_t L_166 = __this->___curPos_13;
		int32_t L_167 = __this->___charsUsed_12;
		if ((((int32_t)L_166) == ((int32_t)L_167)))
		{
			goto IL_05cf;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_168 = __this->___chars_11;
		int32_t L_169 = __this->___curPos_13;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		uint16_t L_171 = (uint16_t)(L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		bool L_172;
		L_172 = XmlCharType_IsHighSurrogate_m9DE9C8AE82BE2FB2A8EA00142D2E5A7DFE6CC303(L_171, NULL);
		if (!L_172)
		{
			goto IL_05b4;
		}
	}
	{
		int32_t L_173 = __this->___curPos_13;
		int32_t L_174 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_173, 1))) == ((int32_t)L_174)))
		{
			goto IL_05cf;
		}
	}
	{
		int32_t L_175 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_175, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_176 = __this->___chars_11;
		int32_t L_177 = __this->___curPos_13;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		uint16_t L_179 = (uint16_t)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		bool L_180;
		L_180 = XmlCharType_IsLowSurrogate_m062769B4A4869E4EDAC2EC6D0169BADCC2AC6C56(L_179, NULL);
		if (!L_180)
		{
			goto IL_05b4;
		}
	}
	{
		int32_t L_181 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_181, 1));
		goto IL_006c;
	}

IL_05b4:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_182 = __this->___chars_11;
		int32_t L_183 = __this->___charsUsed_12;
		int32_t L_184 = __this->___curPos_13;
		DtdParser_ThrowInvalidChar_m67D089CB4F65FC2275C1FE545C178FF42CB61944(__this, L_182, L_183, L_184, NULL);
		return (int32_t)(((int32_t)9));
	}

IL_05cf:
	{
		RuntimeObject* L_185 = __this->___readerAdapter_0;
		NullCheck(L_185);
		bool L_186;
		L_186 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_185);
		if (L_186)
		{
			goto IL_05e4;
		}
	}
	{
		int32_t L_187;
		L_187 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_187)
		{
			goto IL_0602;
		}
	}

IL_05e4:
	{
		int32_t L_188 = ___literalType0;
		if ((((int32_t)L_188) == ((int32_t)2)))
		{
			goto IL_05f1;
		}
	}
	{
		bool L_189;
		L_189 = DtdParser_HandleEntityEnd_m741F32D866045C1FEBD97EE495E22BECA25B453D(__this, (bool)1, NULL);
		if (L_189)
		{
			goto IL_0602;
		}
	}

IL_05f1:
	{
		int32_t L_190 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_190, _stringLiteral8DF28038BAE3947FE2A10B2562359E7D3A2BF989, NULL);
	}

IL_0602:
	{
		int32_t L_191 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_191;
		goto IL_006c;
	}
}
// System.Xml.XmlQualifiedName System.Xml.DtdParser::ScanEntityName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* DtdParser_ScanEntityName_m88D8D0B3BD33BEB5120E1AA008E13FEBC4B03482 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		DtdParser_ScanName_mC452081ACDFAE2FB825E73D7F7F506FD967F3DB0(__this, NULL);
		goto IL_0027;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0008;
		}
		throw e;
	}

CATCH_0008:
	{// begin catch(System.Xml.XmlException)
		V_0 = ((XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)IL2CPP_GET_ACTIVE_EXCEPTION(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = XmlException_get_LineNumber_m4DBE53D0E13988CF2A5055C4B853F1399DE1A926_inline(L_1, NULL);
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XmlException_get_LinePosition_m8045E03E183F6B07D6394A1B1FBD55E2CBE2DCB4_inline(L_3, NULL);
		DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF270172D9DCB1A35388598EC124CE3AE08AC3E54)), L_0, L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->___chars_11;
		int32_t L_6 = __this->___curPos_13;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)59))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_9 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_9, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
	}

IL_0049:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_10;
		L_10 = DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979(__this, (bool)0, NULL);
		int32_t L_11 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return L_10;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanNotation1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanNotation1_m4C4E5782C3B83C24E6F9F08D87B22C4B82E780FB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59EB542A9E6EFCBFACCAE7DFE982B1F399E566DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)80))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)83))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0072;
	}

IL_001a:
	{
		bool L_6;
		L_6 = DtdParser_EatPublicKeyword_m36E41ED431E35D882457C69703585B584F86D47E(__this, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_7, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_0033:
	{
		__this->___nextScaningFunction_15 = ((int32_t)31);
		__this->___scanningFunction_14 = ((int32_t)29);
		return (int32_t)(((int32_t)33));
	}

IL_0046:
	{
		bool L_8;
		L_8 = DtdParser_EatSystemKeyword_mA6344D8F8E24209177DE25810ECC484A5202D452(__this, NULL);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_9, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_005f:
	{
		__this->___nextScaningFunction_15 = ((int32_t)31);
		__this->___scanningFunction_14 = ((int32_t)28);
		return (int32_t)(((int32_t)34));
	}

IL_0072:
	{
		int32_t L_10 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_10, _stringLiteral59EB542A9E6EFCBFACCAE7DFE982B1F399E566DA, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanSystemId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanSystemId_m4BFDE8AB3CAEF9D217E5FDEBEA038712AC85F601 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->___chars_11;
		int32_t L_5 = __this->___curPos_13;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
	}

IL_0038:
	{
		int32_t L_9;
		L_9 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 2, NULL);
		int32_t L_10 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_10;
		return (int32_t)(((int32_t)35));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity1_mE0247D128601F57689966E73F7F89597F017AC53 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		__this->___nextScaningFunction_15 = ((int32_t)21);
		__this->___scanningFunction_14 = 1;
		return (int32_t)(((int32_t)38));
	}

IL_0031:
	{
		DtdParser_ScanName_mC452081ACDFAE2FB825E73D7F7F506FD967F3DB0(__this, NULL);
		__this->___scanningFunction_14 = ((int32_t)21);
		return (int32_t)(((int32_t)24));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity2_m2C5A6BB88090ADF0B9649F21210AAD33A4FB7115 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E08A69B160B273B33CB600405C55F98F76617CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)39)))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_0096;
	}

IL_001f:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)80))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)83))))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0096;
	}

IL_002b:
	{
		bool L_9;
		L_9 = DtdParser_EatPublicKeyword_m36E41ED431E35D882457C69703585B584F86D47E(__this, NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_10 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_10, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_0044:
	{
		__this->___nextScaningFunction_15 = ((int32_t)22);
		__this->___scanningFunction_14 = ((int32_t)29);
		return (int32_t)(((int32_t)33));
	}

IL_0057:
	{
		bool L_11;
		L_11 = DtdParser_EatSystemKeyword_mA6344D8F8E24209177DE25810ECC484A5202D452(__this, NULL);
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_12, _stringLiteral9581D9240473127371BCEE2DE4DB4A276F510956, NULL);
	}

IL_0070:
	{
		__this->___nextScaningFunction_15 = ((int32_t)22);
		__this->___scanningFunction_14 = ((int32_t)28);
		return (int32_t)(((int32_t)34));
	}

IL_0083:
	{
		int32_t L_13;
		L_13 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 1, NULL);
		__this->___scanningFunction_14 = ((int32_t)31);
		return (int32_t)(((int32_t)35));
	}

IL_0096:
	{
		int32_t L_14 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_14, _stringLiteral2E08A69B160B273B33CB600405C55F98F76617CC, NULL);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanEntity3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanEntity3_m83E67C0E0412FC7E29A40113DFBD9663F1832487 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_001e;
	}

IL_0016:
	{
		int32_t L_4;
		L_4 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (!L_4)
		{
			goto IL_009a;
		}
	}

IL_001e:
	{
		int32_t L_5 = __this->___charsUsed_12;
		int32_t L_6 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) < ((int32_t)5)))
		{
			goto IL_0016;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->___chars_11;
		int32_t L_8 = __this->___curPos_13;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___chars_11;
		int32_t L_12 = __this->___curPos_13;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->___chars_11;
		int32_t L_16 = __this->___curPos_13;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 3));
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___curPos_13;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 4));
		uint16_t L_22 = (uint16_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_23 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_23, 5));
		__this->___scanningFunction_14 = 1;
		__this->___nextScaningFunction_15 = ((int32_t)31);
		return (int32_t)(((int32_t)37));
	}

IL_009a:
	{
		__this->___scanningFunction_14 = ((int32_t)31);
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanPublicId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanPublicId1_m1095E6AE70E11A9B956708FFBE530301689F82A5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->___chars_11;
		int32_t L_5 = __this->___curPos_13;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
	}

IL_0038:
	{
		int32_t L_9;
		L_9 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 2, NULL);
		__this->___scanningFunction_14 = ((int32_t)30);
		return (int32_t)(((int32_t)35));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanPublicId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanPublicId2_mFDAA7AB884FAFD43C7864DA3C22C00BD0024B9DD (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0031;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->___chars_11;
		int32_t L_5 = __this->___curPos_13;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_8;
		return (int32_t)(((int32_t)9));
	}

IL_0031:
	{
		int32_t L_9;
		L_9 = DtdParser_ScanLiteral_m04C307F1A42A05A09ED322C754538E90C2ED0026(__this, 2, NULL);
		int32_t L_10 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_10;
		return (int32_t)(((int32_t)35));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection1_mC6FDCA0100720F5289856689A51097AA12C05FDC (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72AA82468046288272E323F13B397B70AFA72BDD);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)73))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_4, _stringLiteral72AA82468046288272E323F13B397B70AFA72BDD, NULL);
	}

IL_0022:
	{
		int32_t L_5 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0030:
	{
		int32_t L_6 = __this->___charsUsed_12;
		int32_t L_7 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) < ((int32_t)5)))
		{
			goto IL_01c0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->___chars_11;
		int32_t L_9 = __this->___curPos_13;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		Il2CppChar L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)71))))
		{
			goto IL_0121;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_14 = __this->___charsUsed_12;
		int32_t L_15 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) < ((int32_t)6)))
		{
			goto IL_01c0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___chars_11;
		int32_t L_17 = __this->___curPos_13;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->___chars_11;
		int32_t L_21 = __this->___curPos_13;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 2));
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->___chars_11;
		int32_t L_25 = __this->___curPos_13;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 3));
		uint16_t L_27 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = __this->___chars_11;
		int32_t L_29 = __this->___curPos_13;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 4));
		uint16_t L_31 = (uint16_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = __this->___chars_11;
		int32_t L_33 = __this->___curPos_13;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		uint16_t L_35 = (uint16_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_01aa;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_36 = (&__this->___xmlCharType_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->___chars_11;
		int32_t L_38 = __this->___curPos_13;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 6));
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		bool L_41;
		L_41 = XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A(L_36, L_40, NULL);
		if (L_41)
		{
			goto IL_01aa;
		}
	}
	{
		__this->___nextScaningFunction_15 = 0;
		__this->___scanningFunction_14 = ((int32_t)25);
		int32_t L_42 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_42, 6));
		return (int32_t)(((int32_t)47));
	}

IL_0121:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = __this->___chars_11;
		int32_t L_44 = __this->___curPos_13;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		uint16_t L_46 = (uint16_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = __this->___chars_11;
		int32_t L_48 = __this->___curPos_13;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		uint16_t L_50 = (uint16_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)79)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = __this->___chars_11;
		int32_t L_52 = __this->___curPos_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		uint16_t L_54 = (uint16_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = __this->___chars_11;
		int32_t L_56 = __this->___curPos_13;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 4));
		uint16_t L_58 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_01aa;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_59 = (&__this->___xmlCharType_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = __this->___chars_11;
		int32_t L_61 = __this->___curPos_13;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 5));
		uint16_t L_63 = (uint16_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		bool L_64;
		L_64 = XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A(L_59, L_63, NULL);
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		__this->___nextScaningFunction_15 = ((int32_t)26);
		__this->___scanningFunction_14 = ((int32_t)25);
		int32_t L_65 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_65, 5));
		return (int32_t)(((int32_t)46));
	}

IL_01aa:
	{
		int32_t L_66 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_subtract(L_66, 1)), _stringLiteral72AA82468046288272E323F13B397B70AFA72BDD, NULL);
		return (int32_t)(((int32_t)9));
	}

IL_01c0:
	{
		int32_t L_67;
		L_67 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_67)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_68 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_68, _stringLiteral2EEF1C33FFEE9D9CFE23A3918F92A99600508AA7, NULL);
		goto IL_0030;
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection2_m4F6CA7E86BF773FA2EAA8ACA577C4F96A1DC7A9A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___curPos_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) == ((int32_t)((int32_t)91))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = __this->___curPos_13;
		DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982(__this, L_4, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
	}

IL_0022:
	{
		int32_t L_5 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = __this->___nextScaningFunction_15;
		__this->___scanningFunction_14 = L_6;
		return (int32_t)(((int32_t)31));
	}
}
// System.Xml.DtdParser/Token System.Xml.DtdParser::ScanCondSection3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ScanCondSection3_m1A14F74065167EFD8938C66911DA82D34F5B1429 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		int32_t L_0 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_0012:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_1 = (&__this->___xmlCharType_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___charProperties_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___chars_11;
		int32_t L_4 = __this->___curPos_13;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		uint16_t L_7 = L_6;
		uint8_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!((int32_t)((int32_t)L_8&((int32_t)64))))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->___chars_11;
		int32_t L_10 = __this->___curPos_13;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0004;
		}
	}

IL_0041:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->___chars_11;
		int32_t L_14 = __this->___curPos_13;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		Il2CppChar L_17 = V_1;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)38)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_021a;
			}
			case 3:
			{
				goto IL_021a;
			}
			case 4:
			{
				goto IL_00d1;
			}
		}
	}
	{
		Il2CppChar L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)34))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)38))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_021a;
	}

IL_0080:
	{
		Il2CppChar L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)39))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)60))))
		{
			goto IL_0138;
		}
	}
	{
		Il2CppChar L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)93))))
		{
			goto IL_019b;
		}
	}
	{
		goto IL_021a;
	}

IL_009a:
	{
		int32_t L_24 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_0012;
	}

IL_00ad:
	{
		int32_t L_25 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		RuntimeObject* L_26 = __this->___readerAdapter_0;
		int32_t L_27 = __this->___curPos_13;
		NullCheck(L_26);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_26, L_27);
		goto IL_0012;
	}

IL_00d1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = __this->___chars_11;
		int32_t L_29 = __this->___curPos_13;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint16_t L_31 = (uint16_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_32 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		goto IL_0122;
	}

IL_00f4:
	{
		int32_t L_33 = __this->___curPos_13;
		int32_t L_34 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_33, 1))) < ((int32_t)L_34)))
		{
			goto IL_0114;
		}
	}
	{
		RuntimeObject* L_35 = __this->___readerAdapter_0;
		NullCheck(L_35);
		bool L_36;
		L_36 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_35);
		if (!L_36)
		{
			goto IL_029c;
		}
	}

IL_0114:
	{
		int32_t L_37 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0122:
	{
		RuntimeObject* L_38 = __this->___readerAdapter_0;
		int32_t L_39 = __this->___curPos_13;
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Xml.IDtdParserAdapter::OnNewLine(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_38, L_39);
		goto IL_0012;
	}

IL_0138:
	{
		int32_t L_40 = __this->___charsUsed_12;
		int32_t L_41 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_40, L_41))) < ((int32_t)3)))
		{
			goto IL_029c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = __this->___chars_11;
		int32_t L_43 = __this->___curPos_13;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint16_t L_45 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0171;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = __this->___chars_11;
		int32_t L_47 = __this->___curPos_13;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		uint16_t L_49 = (uint16_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((((int32_t)L_49) == ((int32_t)((int32_t)91))))
		{
			goto IL_0184;
		}
	}

IL_0171:
	{
		int32_t L_50 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_0012;
	}

IL_0184:
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		goto IL_0012;
	}

IL_019b:
	{
		int32_t L_53 = __this->___charsUsed_12;
		int32_t L_54 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_53, L_54))) < ((int32_t)3)))
		{
			goto IL_029c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = __this->___chars_11;
		int32_t L_56 = __this->___curPos_13;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		uint16_t L_58 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_01d4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = __this->___chars_11;
		int32_t L_60 = __this->___curPos_13;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 2));
		uint16_t L_62 = (uint16_t)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((((int32_t)L_62) == ((int32_t)((int32_t)62))))
		{
			goto IL_01e7;
		}
	}

IL_01d4:
	{
		int32_t L_63 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_0012;
	}

IL_01e7:
	{
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_0202;
		}
	}
	{
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		int32_t L_66 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_66, 3));
		goto IL_0012;
	}

IL_0202:
	{
		int32_t L_67 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_67, 3));
		__this->___scanningFunction_14 = 0;
		return (int32_t)(((int32_t)18));
	}

IL_021a:
	{
		int32_t L_68 = __this->___curPos_13;
		int32_t L_69 = __this->___charsUsed_12;
		if ((((int32_t)L_68) == ((int32_t)L_69)))
		{
			goto IL_029c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = __this->___chars_11;
		int32_t L_71 = __this->___curPos_13;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		bool L_74;
		L_74 = XmlCharType_IsHighSurrogate_m9DE9C8AE82BE2FB2A8EA00142D2E5A7DFE6CC303(L_73, NULL);
		if (!L_74)
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_75 = __this->___curPos_13;
		int32_t L_76 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_75, 1))) == ((int32_t)L_76)))
		{
			goto IL_029c;
		}
	}
	{
		int32_t L_77 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = __this->___chars_11;
		int32_t L_79 = __this->___curPos_13;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		bool L_82;
		L_82 = XmlCharType_IsLowSurrogate_m062769B4A4869E4EDAC2EC6D0169BADCC2AC6C56(L_81, NULL);
		if (!L_82)
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_83 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_0012;
	}

IL_0281:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_84 = __this->___chars_11;
		int32_t L_85 = __this->___charsUsed_12;
		int32_t L_86 = __this->___curPos_13;
		DtdParser_ThrowInvalidChar_m67D089CB4F65FC2275C1FE545C178FF42CB61944(__this, L_84, L_85, L_86, NULL);
		return (int32_t)(((int32_t)9));
	}

IL_029c:
	{
		RuntimeObject* L_87 = __this->___readerAdapter_0;
		NullCheck(L_87);
		bool L_88;
		L_88 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.IDtdParserAdapter::get_IsEof() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_87);
		if (L_88)
		{
			goto IL_02b1;
		}
	}
	{
		int32_t L_89;
		L_89 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_89)
		{
			goto IL_02ce;
		}
	}

IL_02b1:
	{
		bool L_90;
		L_90 = DtdParser_HandleEntityEnd_m741F32D866045C1FEBD97EE495E22BECA25B453D(__this, (bool)0, NULL);
		if (L_90)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_91 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_91, _stringLiteral3A0F3831F5DAFB45C7CF0BE8E3E631BFEE684F0D, NULL);
	}

IL_02ce:
	{
		int32_t L_92 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_92;
		goto IL_0012;
	}
}
// System.Void System.Xml.DtdParser::ScanName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanName_mC452081ACDFAE2FB825E73D7F7F506FD967F3DB0 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		DtdParser_ScanQName_mA660766FD83DC7827E0C5B52412321F8E9A0EDC4(__this, (bool)0, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ScanQName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanQName_mAD528C25DE449B69809006B17DF6015439150DE3 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = DtdParser_get_SupportNamespaces_m868EACB0340AAB10A0A36D3E54391F6B721A7791_inline(__this, NULL);
		DtdParser_ScanQName_mA660766FD83DC7827E0C5B52412321F8E9A0EDC4(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ScanQName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanQName_mA660766FD83DC7827E0C5B52412321F8E9A0EDC4 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___isQName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B22_0 = NULL;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B23_1 = NULL;
	{
		int32_t L_0 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_0;
		V_0 = (-1);
	}

IL_000e:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_1 = (&__this->___xmlCharType_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___charProperties_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___chars_11;
		int32_t L_4 = __this->___curPos_13;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		uint16_t L_7 = L_6;
		uint8_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (((int32_t)((int32_t)L_8&4)))
		{
			goto IL_003c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->___chars_11;
		int32_t L_10 = __this->___curPos_13;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		int32_t L_13 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_00a4;
	}

IL_004c:
	{
		int32_t L_14 = __this->___curPos_13;
		int32_t L_15 = __this->___charsUsed_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1))) < ((int32_t)L_15)))
		{
			goto IL_007c;
		}
	}
	{
		bool L_16;
		L_16 = DtdParser_ReadDataInName_mD211C27DF640D9443E3258AE20A48F095699717B(__this, NULL);
		if (L_16)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_17 = __this->___curPos_13;
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_17, _stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
		goto IL_00a4;
	}

IL_007c:
	{
		int32_t L_18 = __this->___curPos_13;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___charsUsed_12;
		int32_t L_21 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = XmlException_BuildCharExceptionArgs_mC868154C32A2950D756F3E42B40D79DC4B7BBA33(L_19, L_20, L_21, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_18, _stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D, L_22, NULL);
	}

IL_00a4:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_23 = (&__this->___xmlCharType_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = L_23->___charProperties_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->___chars_11;
		int32_t L_26 = __this->___curPos_13;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		uint16_t L_29 = L_28;
		uint8_t L_30 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if (!((int32_t)((int32_t)L_30&8)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_31 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_00a4;
	}

IL_00d1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = __this->___chars_11;
		int32_t L_33 = __this->___curPos_13;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint16_t L_35 = (uint16_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0136;
		}
	}
	{
		bool L_36 = ___isQName0;
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)(-1))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_38 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = XmlException_BuildCharExceptionArgs_m85E22B1AE112B5BB1253D33A24F137F73240C556(((int32_t)58), 0, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_38, _stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05, L_39, NULL);
	}

IL_0102:
	{
		int32_t L_40 = __this->___curPos_13;
		int32_t L_41 = __this->___tokenStartPos_18;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_40, L_41));
		int32_t L_42 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_000e;
	}

IL_0123:
	{
		int32_t L_43 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_00a4;
	}

IL_0136:
	{
		int32_t L_44 = __this->___curPos_13;
		int32_t L_45 = __this->___charsUsed_12;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0173;
		}
	}
	{
		bool L_46;
		L_46 = DtdParser_ReadDataInName_mD211C27DF640D9443E3258AE20A48F095699717B(__this, NULL);
		if (L_46)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_47 = __this->___tokenStartPos_18;
		int32_t L_48 = __this->___curPos_13;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_49 = __this->___curPos_13;
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_49, _stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
	}

IL_0173:
	{
		int32_t L_50 = V_0;
		G_B21_0 = __this;
		if ((((int32_t)L_50) == ((int32_t)(-1))))
		{
			G_B22_0 = __this;
			goto IL_0182;
		}
	}
	{
		int32_t L_51 = __this->___tokenStartPos_18;
		int32_t L_52 = V_0;
		G_B23_0 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		G_B23_1 = G_B21_0;
		goto IL_0183;
	}

IL_0182:
	{
		G_B23_0 = (-1);
		G_B23_1 = G_B22_0;
	}

IL_0183:
	{
		NullCheck(G_B23_1);
		G_B23_1->___colonPos_19 = G_B23_0;
		return;
	}
}
// System.Boolean System.Xml.DtdParser::ReadDataInName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_ReadDataInName_mD211C27DF640D9443E3258AE20A48F095699717B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___curPos_13;
		int32_t L_1 = __this->___tokenStartPos_18;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = __this->___tokenStartPos_18;
		__this->___curPos_13 = L_2;
		int32_t L_3;
		L_3 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		int32_t L_4 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_4;
		int32_t L_5 = __this->___curPos_13;
		int32_t L_6 = V_0;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void System.Xml.DtdParser::ScanNmtoken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ScanNmtoken_mD2A9057AA5C523117A422FBB2B5119B915133919 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF61ABC5F7B64F3477624AFB1B9EBB636A0543B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_0;
	}

IL_000c:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_1 = (&__this->___xmlCharType_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___charProperties_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___chars_11;
		int32_t L_4 = __this->___curPos_13;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		uint16_t L_7 = L_6;
		uint8_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (((int32_t)((int32_t)L_8&8)))
		{
			goto IL_003a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->___chars_11;
		int32_t L_10 = __this->___curPos_13;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_004a;
		}
	}

IL_003a:
	{
		int32_t L_13 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_000c;
	}

IL_004a:
	{
		int32_t L_14 = __this->___curPos_13;
		int32_t L_15 = __this->___charsUsed_12;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_16 = __this->___curPos_13;
		int32_t L_17 = __this->___tokenStartPos_18;
		if (((int32_t)il2cpp_codegen_subtract(L_16, L_17)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_18 = __this->___curPos_13;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___charsUsed_12;
		int32_t L_21 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = XmlException_BuildCharExceptionArgs_mC868154C32A2950D756F3E42B40D79DC4B7BBA33(L_19, L_20, L_21, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_18, _stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05, L_22, NULL);
	}

IL_008f:
	{
		return;
	}

IL_0090:
	{
		int32_t L_23 = __this->___curPos_13;
		int32_t L_24 = __this->___tokenStartPos_18;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		int32_t L_25 = __this->___tokenStartPos_18;
		__this->___curPos_13 = L_25;
		int32_t L_26;
		L_26 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_26)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_28 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_28;
		int32_t L_29 = __this->___curPos_13;
		int32_t L_30 = V_0;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		return;
	}

IL_00d1:
	{
		int32_t L_31 = __this->___curPos_13;
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_31, _stringLiteralC3DB0D079E5BFE18627887A05D78AFD607BC0AAC, _stringLiteral6BF61ABC5F7B64F3477624AFB1B9EBB636A0543B, NULL);
	}

IL_00e7:
	{
		int32_t L_32 = __this->___curPos_13;
		__this->___tokenStartPos_18 = L_32;
		int32_t L_33 = __this->___curPos_13;
		int32_t L_34 = V_0;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		goto IL_000c;
	}
}
// System.Boolean System.Xml.DtdParser::EatPublicKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_EatPublicKeyword_m36E41ED431E35D882457C69703585B584F86D47E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		goto IL_000c;
	}

IL_0002:
	{
		int32_t L_0;
		L_0 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_1 = __this->___charsUsed_12;
		int32_t L_2 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) < ((int32_t)6)))
		{
			goto IL_0002;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___chars_11;
		int32_t L_4 = __this->___curPos_13;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->___chars_11;
		int32_t L_8 = __this->___curPos_13;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 2));
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)66)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___chars_11;
		int32_t L_12 = __this->___curPos_13;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 3));
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->___chars_11;
		int32_t L_16 = __this->___curPos_13;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 4));
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___curPos_13;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 5));
		uint16_t L_22 = (uint16_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((((int32_t)L_22) == ((int32_t)((int32_t)67))))
		{
			goto IL_007d;
		}
	}

IL_007b:
	{
		return (bool)0;
	}

IL_007d:
	{
		int32_t L_23 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_23, 6));
		return (bool)1;
	}
}
// System.Boolean System.Xml.DtdParser::EatSystemKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_EatSystemKeyword_mA6344D8F8E24209177DE25810ECC484A5202D452 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		goto IL_000c;
	}

IL_0002:
	{
		int32_t L_0;
		L_0 = DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109(__this, NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_1 = __this->___charsUsed_12;
		int32_t L_2 = __this->___curPos_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) < ((int32_t)6)))
		{
			goto IL_0002;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___chars_11;
		int32_t L_4 = __this->___curPos_13;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)89)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->___chars_11;
		int32_t L_8 = __this->___curPos_13;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 2));
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___chars_11;
		int32_t L_12 = __this->___curPos_13;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 3));
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->___chars_11;
		int32_t L_16 = __this->___curPos_13;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 4));
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = __this->___chars_11;
		int32_t L_20 = __this->___curPos_13;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 5));
		uint16_t L_22 = (uint16_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((((int32_t)L_22) == ((int32_t)((int32_t)77))))
		{
			goto IL_007d;
		}
	}

IL_007b:
	{
		return (bool)0;
	}

IL_007d:
	{
		int32_t L_23 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_23, 6));
		return (bool)1;
	}
}
// System.Xml.XmlQualifiedName System.Xml.DtdParser::GetNameQualified(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* DtdParser_GetNameQualified_m90D851C0C284B3597B168491C6824733D42E1979 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___canHavePrefix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9895E6DD32A29F645457E316DC78EBC804C2C86);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___colonPos_19;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_1 = __this->___nameTable_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->___chars_11;
		int32_t L_3 = __this->___tokenStartPos_18;
		int32_t L_4 = __this->___curPos_13;
		int32_t L_5 = __this->___tokenStartPos_18;
		NullCheck(L_1);
		String_t* L_6;
		L_6 = VirtualFuncInvoker3< String_t*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)));
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_7 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		XmlQualifiedName__ctor_m2DD62019A76524587CC7204E1AB903CDAADA6545(L_7, L_6, NULL);
		return L_7;
	}

IL_0033:
	{
		bool L_8 = ___canHavePrefix0;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_9 = __this->___nameTable_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->___chars_11;
		int32_t L_11 = __this->___colonPos_19;
		int32_t L_12 = __this->___curPos_13;
		int32_t L_13 = __this->___colonPos_19;
		NullCheck(L_9);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 1)));
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_15 = __this->___nameTable_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___chars_11;
		int32_t L_17 = __this->___tokenStartPos_18;
		int32_t L_18 = __this->___colonPos_19;
		int32_t L_19 = __this->___tokenStartPos_18;
		NullCheck(L_15);
		String_t* L_20;
		L_20 = VirtualFuncInvoker3< String_t*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_15, L_16, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)));
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_21 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B(L_21, L_14, L_20, NULL);
		return L_21;
	}

IL_0088:
	{
		int32_t L_22 = __this->___tokenStartPos_18;
		String_t* L_23;
		L_23 = DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB(__this, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_22, _stringLiteralB9895E6DD32A29F645457E316DC78EBC804C2C86, L_23, NULL);
		return (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)NULL;
	}
}
// System.String System.Xml.DtdParser::GetNameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___chars_11;
		int32_t L_1 = __this->___tokenStartPos_18;
		int32_t L_2 = __this->___curPos_13;
		int32_t L_3 = __this->___tokenStartPos_18;
		String_t* L_4;
		L_4 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		return L_4;
	}
}
// System.String System.Xml.DtdParser::GetNmtokenString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetNmtokenString_m2FBC77BC5054E435A4F99466E1E21D664260D1EB (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DtdParser_GetNameString_mA1D54806181E8700FF13260A88E2077F603C39FB(__this, NULL);
		return L_0;
	}
}
// System.String System.Xml.DtdParser::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetValue_m3A56A10A245D1CDB50CCBFE897A8BA1AB3F5F622 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___stringBuilder_25;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->___chars_11;
		int32_t L_3 = __this->___tokenStartPos_18;
		int32_t L_4 = __this->___curPos_13;
		int32_t L_5 = __this->___tokenStartPos_18;
		String_t* L_6;
		L_6 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), 1)), NULL);
		return L_6;
	}

IL_002e:
	{
		StringBuilder_t* L_7 = __this->___stringBuilder_25;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// System.String System.Xml.DtdParser::GetValueWithStrippedSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_GetValueWithStrippedSpaces_mA7A8B5EF2DDCC7C0C1AE9845AF9EF4D149094FEA (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t* L_0 = __this->___stringBuilder_25;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___stringBuilder_25;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		G_B3_0 = L_3;
		goto IL_003a;
	}

IL_001a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->___chars_11;
		int32_t L_5 = __this->___tokenStartPos_18;
		int32_t L_6 = __this->___curPos_13;
		int32_t L_7 = __this->___tokenStartPos_18;
		String_t* L_8;
		L_8 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_4, L_5, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), 1)), NULL);
		G_B3_0 = L_8;
	}

IL_003a:
	{
		String_t* L_9;
		L_9 = DtdParser_StripSpaces_mA480984B85C66613574E2190887F68CF8DD94125(G_B3_0, NULL);
		return L_9;
	}
}
// System.Int32 System.Xml.DtdParser::ReadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_ReadData_m02D6859FB085D58E010B7F25EF813156B8CC3109 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.IDtdParserAdapter::ReadData() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		return L_1;
	}
}
// System.Void System.Xml.DtdParser::LoadParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = InterfaceFuncInvoker0< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(3 /* System.Char[] System.Xml.IDtdParserAdapter::get_ParsingBuffer() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		__this->___chars_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chars_11), (void*)L_1);
		RuntimeObject* L_2 = __this->___readerAdapter_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Xml.IDtdParserAdapter::get_ParsingBufferLength() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_2);
		__this->___charsUsed_12 = L_3;
		RuntimeObject* L_4 = __this->___readerAdapter_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.IDtdParserAdapter::get_CurrentPosition() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_4);
		__this->___curPos_13 = L_5;
		return;
	}
}
// System.Void System.Xml.DtdParser::SaveParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___curPos_13;
		DtdParser_SaveParsingBuffer_m002F46CF1017FA4228DEAE75ABD891C78F2505AF(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::SaveParsingBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SaveParsingBuffer_m002F46CF1017FA4228DEAE75ABD891C78F2505AF (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___internalSubsetValueEndPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = DtdParser_get_SaveInternalSubsetValue_m85DB5C7308BF525EE652E944E696CD7A3505DF66(__this, NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_1 = __this->___readerAdapter_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.IDtdParserAdapter::get_CurrentPosition() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		int32_t L_3 = ___internalSubsetValueEndPos0;
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t* L_5 = __this->___internalSubsetValueSb_20;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___chars_11;
		int32_t L_7 = V_0;
		int32_t L_8 = ___internalSubsetValueEndPos0;
		int32_t L_9 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_5, L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), NULL);
	}

IL_0030:
	{
		RuntimeObject* L_11 = __this->___readerAdapter_0;
		int32_t L_12 = __this->___curPos_13;
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void System.Xml.IDtdParserAdapter::set_CurrentPosition(System.Int32) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_11, L_12);
		return;
	}
}
// System.Boolean System.Xml.DtdParser::HandleEntityReference(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityReference_mEE956B6F9F4B05B092B23769C7446B988111557C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___paramEntity0, bool ___inLiteral1, bool ___inAttribute2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___curPos_13;
		__this->___curPos_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_1;
		L_1 = DtdParser_ScanEntityName_m88D8D0B3BD33BEB5120E1AA008E13FEBC4B03482(__this, NULL);
		bool L_2 = ___paramEntity0;
		bool L_3 = ___inLiteral1;
		bool L_4 = ___inAttribute2;
		bool L_5;
		L_5 = DtdParser_HandleEntityReference_m372D3BB5C39D1333272D001572C4337128FD411B(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean System.Xml.DtdParser::HandleEntityReference(System.Xml.XmlQualifiedName,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityReference_m372D3BB5C39D1333272D001572C4337128FD411B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___entityName0, bool ___paramEntity1, bool ___inLiteral2, bool ___inAttribute3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral798FAE79042022F0E20CDBB3AD4A4E26A3AA7677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD27E638C5F6B34DE55DDC1E7B33B6C164CB88CAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BAFB0222941360F2752ADB95BF13DFDF07C373);
		s_Il2CppMethodInitialized = true;
	}
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B9_0 = 0;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* G_B10_2 = NULL;
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		bool L_0 = ___paramEntity1;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1;
		L_1 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2;
		L_2 = DtdParser_get_ParsingTopLevelMarkup_m4836E76B7F5C3C3CA7D8574377C0F00BA2BB0BCF(__this, NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_3 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_4 = ___entityName0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_3, L_6)), 1)), _stringLiteral798FAE79042022F0E20CDBB3AD4A4E26A3AA7677, NULL);
	}

IL_0038:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_7 = ___entityName0;
		bool L_8 = ___paramEntity1;
		bool L_9 = ___inAttribute3;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_10;
		L_10 = DtdParser_VerifyEntityReference_m84A330F3B961DFFD33E4BFA07F60013BCF96665E(__this, L_7, L_8, (bool)1, L_9, NULL);
		V_0 = L_10;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_11 = V_0;
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = SchemaEntity_get_ParsingInProgress_m1A11FBE9700163EB33B81751FB96EA42F99F90EC_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_14 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_15 = ___entityName0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		bool L_18 = ___paramEntity1;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_14, L_17)), 1));
		G_B8_1 = __this;
		if (L_18)
		{
			G_B9_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_14, L_17)), 1));
			G_B9_1 = __this;
			goto IL_0070;
		}
	}
	{
		G_B10_0 = _stringLiteralD27E638C5F6B34DE55DDC1E7B33B6C164CB88CAC;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0075;
	}

IL_0070:
	{
		G_B10_0 = _stringLiteralE9BAFB0222941360F2752ADB95BF13DFDF07C373;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0075:
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_19 = ___entityName0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_19, NULL);
		NullCheck(G_B10_2);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(G_B10_2, G_B10_1, G_B10_0, L_20, NULL);
	}

IL_0080:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_21 = V_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = SchemaEntity_get_IsExternal_mBFBDEF21B96AE11DAF242E5B7E2C3B63693FC8CE_inline(L_21, NULL);
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_23 = __this->___readerAdapter_0;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_24 = V_0;
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, RuntimeObject*, int32_t* >::Invoke(18 /* System.Boolean System.Xml.IDtdParserAdapter::PushEntity(System.Xml.IDtdEntityInfo,System.Int32&) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_23, L_24, (&V_1));
		if (L_25)
		{
			goto IL_009a;
		}
	}
	{
		return (bool)0;
	}

IL_009a:
	{
		int32_t L_26 = __this->___externalEntitiesDepth_21;
		__this->___externalEntitiesDepth_21 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_00cb;
	}

IL_00aa:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = SchemaEntity_get_Text_mDCF201E623D7A98F87E859ACDEE9B5B6B4E953AE_inline(L_27, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if (L_29)
		{
			goto IL_00b9;
		}
	}
	{
		return (bool)0;
	}

IL_00b9:
	{
		RuntimeObject* L_30 = __this->___readerAdapter_0;
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_31 = V_0;
		NullCheck(L_30);
		bool L_32;
		L_32 = InterfaceFuncInvoker2< bool, RuntimeObject*, int32_t* >::Invoke(18 /* System.Boolean System.Xml.IDtdParserAdapter::PushEntity(System.Xml.IDtdEntityInfo,System.Int32&) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_30, L_31, (&V_1));
		if (L_32)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)0;
	}

IL_00cb:
	{
		int32_t L_33 = V_1;
		__this->___currentEntityId_22 = L_33;
		bool L_34 = ___paramEntity1;
		if (!L_34)
		{
			goto IL_00f6;
		}
	}
	{
		bool L_35 = ___inLiteral2;
		if (L_35)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_36 = __this->___scanningFunction_14;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)32))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_37 = __this->___scanningFunction_14;
		__this->___savedScanningFunction_16 = L_37;
		__this->___scanningFunction_14 = ((int32_t)32);
	}

IL_00f6:
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		return (bool)1;
	}
}
// System.Boolean System.Xml.DtdParser::HandleEntityEnd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_HandleEntityEnd_m741F32D866045C1FEBD97EE495E22BECA25B453D (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, bool ___inLiteral0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		DtdParser_SaveParsingBuffer_mA50879908E86FF9D354642A7BF0CDF85ACE35D8A(__this, NULL);
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		int32_t* L_1 = (&__this->___currentEntityId_22);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject**, int32_t* >::Invoke(19 /* System.Boolean System.Xml.IDtdParserAdapter::PopEntity(System.Xml.IDtdEntityInfo&,System.Int32&) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0, (&V_0), L_1);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		DtdParser_LoadParsingBuffer_mF05F85D2FBE70046CCFD312890F918B9D0961C14(__this, NULL);
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = __this->___scanningFunction_14;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = __this->___savedScanningFunction_16;
		__this->___scanningFunction_14 = L_5;
	}

IL_003c:
	{
		return (bool)0;
	}

IL_003e:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Xml.IDtdEntityInfo::get_IsExternal() */, IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = __this->___externalEntitiesDepth_21;
		__this->___externalEntitiesDepth_21 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0054:
	{
		bool L_9 = ___inLiteral0;
		if (L_9)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10 = __this->___scanningFunction_14;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)32))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = __this->___scanningFunction_14;
		__this->___savedScanningFunction_16 = L_11;
		__this->___scanningFunction_14 = ((int32_t)32);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// System.Xml.Schema.SchemaEntity System.Xml.DtdParser::VerifyEntityReference(System.Xml.XmlQualifiedName,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* DtdParser_VerifyEntityReference_m84A330F3B961DFFD33E4BFA07F60013BCF96665E (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___entityName0, bool ___paramEntity1, bool ___mustBeDeclared2, bool ___inAttribute3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17372CA6EE06884491DF8D3AEFE02DC203DF0717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CA3591A74B899B2FB7AAADBB9C6AA9722CD2C06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04A560846A93D4D813C44EFBD0968D2875C5049);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFFBF7695883D821E64C727304FFE2682330A22);
		s_Il2CppMethodInitialized = true;
	}
	SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* V_0 = NULL;
	{
		bool L_0 = ___paramEntity1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_1 = __this->___schemaInfo_3;
		NullCheck(L_1);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_2;
		L_2 = SchemaInfo_get_ParameterEntities_m54F4C298FA2B2AAE10FAA43965E9DD2C84E76FBB(L_1, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_3 = ___entityName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01_RuntimeMethod_var);
		goto IL_002d;
	}

IL_0019:
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_5 = __this->___schemaInfo_3;
		NullCheck(L_5);
		Dictionary_2_t129029582481E96143BD747690E92DB7E444261E* L_6;
		L_6 = SchemaInfo_get_GeneralEntities_mB8E4E7E02EB79C03BDEEB06638EBFA631DE9C9D2(L_5, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_7 = ___entityName0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01(L_6, L_7, (&V_0), Dictionary_2_TryGetValue_m0691587A5208D87AFCC3DD80D1AF2FC784239F01_RuntimeMethod_var);
	}

IL_002d:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_9 = V_0;
		if (L_9)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_10 = ___paramEntity1;
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		bool L_11 = __this->___validate_8;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_13 = ___entityName0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_16 = ___entityName0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_16, NULL);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_15)), 1)), 0, _stringLiteralCDFFBF7695883D821E64C727304FFE2682330A22, L_17, NULL);
		goto IL_00c9;
	}

IL_0069:
	{
		bool L_18 = ___mustBeDeclared2;
		if (!L_18)
		{
			goto IL_00c9;
		}
	}
	{
		bool L_19;
		L_19 = DtdParser_get_ParsingInternalSubset_mF2EDC8896A9EF87EFC4BFB9DC631B3079DF05399(__this, NULL);
		if (L_19)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_20 = __this->___validate_8;
		if (!L_20)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_21 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_22 = ___entityName0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_25 = ___entityName0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_25, NULL);
		DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_21, L_24)), 1)), 0, _stringLiteral7CA3591A74B899B2FB7AAADBB9C6AA9722CD2C06, L_26, NULL);
		goto IL_00c9;
	}

IL_00a4:
	{
		int32_t L_27 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_28 = ___entityName0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_31 = ___entityName0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_31, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, L_30)), 1)), _stringLiteral7CA3591A74B899B2FB7AAADBB9C6AA9722CD2C06, L_32, NULL);
	}

IL_00c9:
	{
		return (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7*)NULL;
	}

IL_00cb:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_33 = V_0;
		NullCheck(L_33);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_34;
		L_34 = SchemaEntity_get_NData_m7B05467BF6357AB27C1DAFBFE27F9720C79CEC3C_inline(L_33, NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = XmlQualifiedName_get_IsEmpty_m37942163D9A870E85BE8762845953C6A6579A400(L_34, NULL);
		if (L_35)
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_36 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_37 = ___entityName0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_37, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_40 = ___entityName0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_40, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_36, L_39)), 1)), _stringLiteral17372CA6EE06884491DF8D3AEFE02DC203DF0717, L_41, NULL);
	}

IL_00fd:
	{
		bool L_42 = ___inAttribute3;
		if (!L_42)
		{
			goto IL_012e;
		}
	}
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_43 = V_0;
		NullCheck(L_43);
		bool L_44;
		L_44 = SchemaEntity_get_IsExternal_mBFBDEF21B96AE11DAF242E5B7E2C3B63693FC8CE_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_45 = __this->___curPos_13;
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_46 = ___entityName0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_46, NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_49 = ___entityName0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline(L_49, NULL);
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, L_48)), 1)), _stringLiteralB04A560846A93D4D813C44EFBD0968D2875C5049, L_50, NULL);
	}

IL_012e:
	{
		SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* L_51 = V_0;
		return L_51;
	}
}
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Int32,System.Xml.Schema.XmlSeverityType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m235191F9EC6673C3DB193451B67E6B89CB1E5A2F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, int32_t ___severity1, String_t* ___code2, String_t* ___arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___severity1;
		String_t* L_1 = ___code2;
		String_t* L_2 = ___arg3;
		String_t* L_3;
		L_3 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
		int32_t L_4;
		L_4 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_5;
		L_5 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		int32_t L_6 = ___pos0;
		int32_t L_7 = __this->___curPos_13;
		XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_8 = (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B*)il2cpp_codegen_object_new(XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB(L_8, L_1, L_2, L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)))), NULL);
		DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F(__this, L_0, L_8, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Xml.Schema.XmlSeverityType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m79ECFFB3D03874AE9095BA539FC8B7191018E58B (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___severity0, String_t* ___code1, String_t* ___arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___severity0;
		String_t* L_1 = ___code1;
		String_t* L_2 = ___arg2;
		String_t* L_3;
		L_3 = DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE(__this, NULL);
		int32_t L_4;
		L_4 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_5;
		L_5 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_6 = (XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B*)il2cpp_codegen_object_new(XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlSchemaException__ctor_m5EB9F0E36520DCB3AD78B355F5F120E1D7FF5EEB(L_6, L_1, L_2, L_3, L_4, L_5, NULL);
		DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F(__this, L_0, L_6, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::SendValidationEvent(System.Xml.Schema.XmlSeverityType,System.Xml.Schema.XmlSchemaException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_SendValidationEvent_m874AFDBD3F0EEC5D3AE8A195B98AE90DC472438F (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___severity0, XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValidationEventHandling_t5929D7539D965D446556F7740F36A2BF7C6CC57E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___readerAdapterWithValidation_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Xml.IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation::get_ValidationEventHandling() */, IDtdParserAdapterWithValidation_tC370E742FC1C08EECE2E2741D97D6985EF1ED347_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		XmlSchemaException_tC4D30BFEFBB18F850A9BD416C523818FDC02833B* L_4 = ___e1;
		int32_t L_5 = ___severity0;
		NullCheck(L_3);
		InterfaceActionInvoker2< Exception_t*, int32_t >::Invoke(1 /* System.Void System.Xml.IValidationEventHandling::SendEvent(System.Exception,System.Xml.Schema.XmlSeverityType) */, IValidationEventHandling_t5929D7539D965D446556F7740F36A2BF7C6CC57E_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Xml.DtdParser::IsAttributeValueType(System.Xml.DtdParser/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParser_IsAttributeValueType_m973F7C314B5AC9D43A0AE8BAE06F879DE66F9115 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___token0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___token0;
		return (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Xml.DtdParser::get_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.IDtdParserAdapter::get_LineNo() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.DtdParser::get_LinePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___curPos_13;
		RuntimeObject* L_1 = __this->___readerAdapter_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.IDtdParserAdapter::get_LineStartPosition() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
	}
}
// System.String System.Xml.DtdParser::get_BaseUriStr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_get_BaseUriStr_m1A09B1A26119F87C048748007B59685399A1A0AE (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E(L_2, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Void System.Xml.DtdParser::OnUnexpectedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_OnUnexpectedError_m48B2712A07C18494946123F9947ED17F270DC4B6 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB080109AD5D6C864D18C1BFD1A3B9116504CCC72);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___curPos_13;
		DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77(__this, L_0, _stringLiteralB080109AD5D6C864D18C1BFD1A3B9116504CCC72, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_m227864B3930C74094485358ABBE02CE11F3E9E77 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___curPos0;
		String_t* L_1 = ___res1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mA82BAD834C0CCDE0E9325996E4560953761B62D0 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, String_t* ___arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	String_t* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	{
		int32_t L_0 = ___curPos0;
		__this->___curPos_13 = L_0;
		RuntimeObject* L_1 = __this->___readerAdapter_0;
		NullCheck(L_1);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2;
		L_2 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___readerAdapter_0;
		String_t* L_4 = ___res1;
		String_t* L_5 = ___arg2;
		int32_t L_6;
		L_6 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_7;
		L_7 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_8, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		G_B1_2 = L_5;
		G_B1_3 = L_4;
		G_B1_4 = L_3;
		if (L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			G_B2_2 = L_5;
			G_B2_3 = L_4;
			G_B2_4 = L_3;
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0039;
	}

IL_0038:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0039:
	{
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_12 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlException__ctor_m93B63C9E4FE7C5B4DAE86D7F5B9FA23451CC7077(L_12, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_5);
		InterfaceActionInvoker1< Exception_t* >::Invoke(24 /* System.Void System.Xml.IDtdParserAdapter::Throw(System.Exception) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, G_B3_5, L_12);
		return;
	}
}
// System.Void System.Xml.DtdParser::Throw(System.Int32,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___curPos0, String_t* ___res1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	{
		int32_t L_0 = ___curPos0;
		__this->___curPos_13 = L_0;
		RuntimeObject* L_1 = __this->___readerAdapter_0;
		NullCheck(L_1);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2;
		L_2 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___readerAdapter_0;
		String_t* L_4 = ___res1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___args2;
		int32_t L_6;
		L_6 = DtdParser_get_LineNo_m4D78AF8EFE8D05D61D89C0CC1C3CB46D0263E246(__this, NULL);
		int32_t L_7;
		L_7 = DtdParser_get_LinePos_m2FDB78628E84297247B78BA60AF304C084790005(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_8, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		G_B1_2 = L_5;
		G_B1_3 = L_4;
		G_B1_4 = L_3;
		if (L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			G_B2_2 = L_5;
			G_B2_3 = L_4;
			G_B2_4 = L_3;
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0039;
	}

IL_0038:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0039:
	{
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_12 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlException__ctor_m9BF115E3E8CAC81B474E36A76805DC4F2E856879(L_12, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_5);
		InterfaceActionInvoker1< Exception_t* >::Invoke(24 /* System.Void System.Xml.IDtdParserAdapter::Throw(System.Exception) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, G_B3_5, L_12);
		return;
	}
}
// System.Void System.Xml.DtdParser::Throw(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_Throw_mB4CABDC7A50D3C7F339CC18B8F500A9DCD78CA95 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, String_t* ___res0, String_t* ___arg1, int32_t ___lineNo2, int32_t ___linePos3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	String_t* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	{
		RuntimeObject* L_0 = __this->___readerAdapter_0;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri System.Xml.IDtdParserAdapter::get_BaseUri() */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___readerAdapter_0;
		String_t* L_3 = ___res0;
		String_t* L_4 = ___arg1;
		int32_t L_5 = ___lineNo2;
		int32_t L_6 = ___linePos3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_7, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		G_B1_0 = L_6;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		G_B1_3 = L_3;
		G_B1_4 = L_2;
		if (L_8)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			G_B2_3 = L_3;
			G_B2_4 = L_2;
			goto IL_0028;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0029:
	{
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_11 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XmlException__ctor_m93B63C9E4FE7C5B4DAE86D7F5B9FA23451CC7077(L_11, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_5);
		InterfaceActionInvoker1< Exception_t* >::Invoke(24 /* System.Void System.Xml.IDtdParserAdapter::Throw(System.Exception) */, IDtdParserAdapter_t3BCF4AF35AE181234EB048BE11244FF2D622A311_il2cpp_TypeInfo_var, G_B3_5, L_11);
		return;
	}
}
// System.Void System.Xml.DtdParser::ThrowInvalidChar(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowInvalidChar_mD2161D4741D7A76279757B830E981723BEB64CA3 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___data1, int32_t ___invCharPos2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___pos0;
		String_t* L_1 = ___data1;
		int32_t L_2 = ___invCharPos2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46(L_1, L_2, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_0, _stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0, L_3, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ThrowInvalidChar(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowInvalidChar_m67D089CB4F65FC2275C1FE545C178FF42CB61944 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___data0, int32_t ___length1, int32_t ___invCharPos2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___invCharPos2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___data0;
		int32_t L_2 = ___length1;
		int32_t L_3 = ___invCharPos2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = XmlException_BuildCharExceptionArgs_mC868154C32A2950D756F3E42B40D79DC4B7BBA33(L_1, L_2, L_3, NULL);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_0, _stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0, L_4, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ThrowUnexpectedToken(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowUnexpectedToken_mBCA8EBEE9CF9EC08AEEB6CA14BF75492689BF982 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___expectedToken1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___pos0;
		String_t* L_1 = ___expectedToken1;
		DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570(__this, L_0, L_1, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.DtdParser::ThrowUnexpectedToken(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParser_ThrowUnexpectedToken_mE75F8A57E36D0ED9A0E029E79C5D0F5E71B82570 (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___pos0, String_t* ___expectedToken11, String_t* ___expectedToken22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168C49673280639EC773D92BF193FBACAED8BF52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A4DCEE2BCE29D8E3625DA7D1C87881873A907C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___pos0;
		String_t* L_1;
		L_1 = DtdParser_ParseUnexpectedToken_m207C66A0CCCD7B01EC54A015C8F1CB228665119C(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___expectedToken22;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		String_t* L_8 = ___expectedToken11;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10 = ___expectedToken22;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_3, _stringLiteral168C49673280639EC773D92BF193FBACAED8BF52, L_9, NULL);
		return;
	}

IL_002f:
	{
		int32_t L_11 = __this->___curPos_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		String_t* L_16 = ___expectedToken11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		DtdParser_Throw_mEE35AE1DA02A2343A42F062D85BA7D04AA9666C5(__this, L_11, _stringLiteralC7A4DCEE2BCE29D8E3625DA7D1C87881873A907C, L_15, NULL);
		return;
	}
}
// System.String System.Xml.DtdParser::ParseUnexpectedToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_ParseUnexpectedToken_m207C66A0CCCD7B01EC54A015C8F1CB228665119C (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, int32_t ___startPos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B7_2 = NULL;
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_0 = (&__this->___xmlCharType_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->___chars_11;
		int32_t L_2 = ___startPos0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54(L_0, L_4, NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_6 = ___startPos0;
		V_0 = L_6;
	}

IL_0017:
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_7 = (&__this->___xmlCharType_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->___chars_11;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54(L_7, L_11, NULL);
		if (!L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_0017;
	}

IL_0032:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___startPos0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___chars_11;
		int32_t L_17 = ___startPos0;
		int32_t L_18 = V_1;
		G_B5_0 = L_17;
		G_B5_1 = L_16;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			G_B6_0 = L_17;
			G_B6_1 = L_16;
			goto IL_0044;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_19 = V_1;
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0045:
	{
		String_t* L_20;
		L_20 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, G_B7_2, G_B7_1, G_B7_0, NULL);
		return L_20;
	}

IL_004b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->___chars_11;
		int32_t L_22 = ___startPos0;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, L_22, 1, NULL);
		return L_23;
	}
}
// System.String System.Xml.DtdParser::StripSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DtdParser_StripSpaces_mA480984B85C66613574E2190887F68CF8DD94125 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0011:
	{
		V_1 = 0;
		V_2 = (StringBuilder_t*)NULL;
		goto IL_0025;
	}

IL_0017:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		return _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
	}

IL_0025:
	{
		String_t* L_7 = ___value0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_1;
		V_3 = L_10;
		goto IL_00ae;
	}

IL_0034:
	{
		String_t* L_11 = ___value0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_14 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004c:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_18 = ___value0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_19, NULL);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)32))))
		{
			goto IL_0046;
		}
	}

IL_005d:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0083;
		}
	}
	{
		StringBuilder_t* L_23 = V_2;
		if (L_23)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_24 = ___value0;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		int32_t L_27 = V_1;
		NullCheck(L_24);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, L_25, ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), NULL);
		return L_28;
	}

IL_0070:
	{
		StringBuilder_t* L_29 = V_2;
		String_t* L_30 = ___value0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_3;
		int32_t L_33 = V_1;
		NullCheck(L_29);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_29, L_30, L_31, ((int32_t)il2cpp_codegen_subtract(L_32, L_33)), NULL);
		StringBuilder_t* L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		return L_36;
	}

IL_0083:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = V_3;
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)))))
		{
			goto IL_00aa;
		}
	}
	{
		StringBuilder_t* L_39 = V_2;
		if (L_39)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_40 = V_0;
		StringBuilder_t* L_41 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_41, L_40, NULL);
		V_2 = L_41;
	}

IL_0094:
	{
		StringBuilder_t* L_42 = V_2;
		String_t* L_43 = ___value0;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		NullCheck(L_42);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_42, L_43, L_44, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), 1)), NULL);
		int32_t L_48 = V_4;
		V_1 = L_48;
		int32_t L_49 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00aa:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ae:
	{
		int32_t L_51 = V_3;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t* L_53 = V_2;
		if (L_53)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_54 = V_1;
		if (!L_54)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_55 = ___value0;
		int32_t L_56 = V_1;
		int32_t L_57 = V_0;
		int32_t L_58 = V_1;
		NullCheck(L_55);
		String_t* L_59;
		L_59 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_55, L_56, ((int32_t)il2cpp_codegen_subtract(L_57, L_58)), NULL);
		return L_59;
	}

IL_00c3:
	{
		String_t* L_60 = ___value0;
		return L_60;
	}

IL_00c5:
	{
		int32_t L_61 = V_3;
		int32_t L_62 = V_1;
		if ((((int32_t)L_61) <= ((int32_t)L_62)))
		{
			goto IL_00d5;
		}
	}
	{
		StringBuilder_t* L_63 = V_2;
		String_t* L_64 = ___value0;
		int32_t L_65 = V_1;
		int32_t L_66 = V_3;
		int32_t L_67 = V_1;
		NullCheck(L_63);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_63, L_64, L_65, ((int32_t)il2cpp_codegen_subtract(L_66, L_67)), NULL);
	}

IL_00d5:
	{
		StringBuilder_t* L_69 = V_2;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_69);
		return L_70;
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
// System.Void System.Xml.DtdParser/UndeclaredNotation::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UndeclaredNotation__ctor_m6237B782B12B39FB8BF173A6ABA4C298D685F300 (UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E* __this, String_t* ___name0, int32_t ___lineNo1, int32_t ___linePos2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		int32_t L_1 = ___lineNo1;
		__this->___lineNo_1 = L_1;
		int32_t L_2 = ___linePos2;
		__this->___linePos_2 = L_2;
		__this->___next_3 = (UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___next_3), (void*)(UndeclaredNotation_t82679CBF782A166873D4AA6AE22DFBF9FA2FDC1E*)NULL);
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
// System.Void System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseElementOnlyContent_LocalFrame__ctor_m7E1F8F1E449038C870E9A418F8597ECFE5E6FDD1 (ParseElementOnlyContent_LocalFrame_t2E1C7AB8128FBBEE579A2DFCC72CC17268194CA8* __this, int32_t ___startParentEntityIdParam0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___startParentEntityIdParam0;
		__this->___startParenEntityId_0 = L_0;
		__this->___parsingSchema_1 = ((int32_t)9);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Xml.ValidateNames::ParseNmtoken(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNmtoken_m7C6554EAA0D5D41D6DDE5FA5669F1D54DE46B374 (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		goto IL_001e;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_2 = ___s0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		NullCheck(L_1);
		Il2CppChar L_5 = L_4;
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!((int32_t)((int32_t)L_6&8)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		int32_t L_8 = V_0;
		String_t* L_9 = ___s0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___offset1;
		return ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}
}
// System.Int32 System.Xml.ValidateNames::ParseNmtokenNoNamespaces(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNmtokenNoNamespaces_m0192343C1A9B5580256C28CF29ADD86E2862F5E2 (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		goto IL_0029;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_2 = ___s0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		NullCheck(L_1);
		Il2CppChar L_5 = L_4;
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (((int32_t)((int32_t)L_6&8)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_7 = ___s0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0032;
		}
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0029:
	{
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}

IL_0032:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___offset1;
		return ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}
}
// System.Int32 System.Xml.ValidateNames::ParseNameNoNamespaces(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNameNoNamespaces_mDB34F558B88D0F0CBCED466D0FF9B6B32EC6BDDF (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_5 = ___s0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		NullCheck(L_4);
		Il2CppChar L_8 = L_7;
		uint8_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (((int32_t)((int32_t)L_9&4)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_10 = ___s0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0032;
		}
	}

IL_002c:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_0059;
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_15 = ___s0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		NullCheck(L_14);
		Il2CppChar L_18 = L_17;
		uint8_t L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (((int32_t)((int32_t)L_19&8)))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_20 = ___s0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0062;
		}
	}

IL_0055:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0059:
	{
		int32_t L_24 = V_0;
		String_t* L_25 = ___s0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0034;
		}
	}

IL_0062:
	{
		int32_t L_27 = V_0;
		int32_t L_28 = ___offset1;
		return ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
	}
}
// System.Boolean System.Xml.ValidateNames::IsNameNoNamespaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateNames_IsNameNoNamespaces_m41D3FD9FB53B3949C7E01A74C20C96B0B15DAC2B (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ValidateNames_ParseNameNoNamespaces_mDB34F558B88D0F0CBCED466D0FF9B6B32EC6BDDF(L_0, 0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Int32 System.Xml.ValidateNames::ParseNCName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNCName_m29804E5FFF402FED8323F5A19784053A4DB9559F (String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_5 = ___s0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		NullCheck(L_4);
		Il2CppChar L_8 = L_7;
		uint8_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!((int32_t)((int32_t)L_9&4)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0043;
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0)->___charProperties_2;
		String_t* L_12 = ___s0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		NullCheck(L_11);
		Il2CppChar L_15 = L_14;
		uint8_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if (!((int32_t)((int32_t)L_16&8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0043:
	{
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0029;
		}
	}

IL_004c:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = ___offset1;
		return ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}
}
// System.Int32 System.Xml.ValidateNames::ParseNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNCName_mDF0240AB0FDDB3416896DED9C9B78E75BDA8CFEF (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ValidateNames_ParseNCName_m29804E5FFF402FED8323F5A19784053A4DB9559F(L_0, 0, NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.ValidateNames::ParseQName(System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseQName_mE71B5B34A2D2D773E4D3FF94EA866BBDBEC21095 (String_t* ___s0, int32_t ___offset1, int32_t* ___colonOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___colonOffset2;
		*((int32_t*)L_0) = (int32_t)0;
		String_t* L_1 = ___s0;
		int32_t L_2 = ___offset1;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ValidateNames_ParseNCName_m29804E5FFF402FED8323F5A19784053A4DB9559F(L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___offset1;
		int32_t L_6 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = ___offset1;
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___s0;
		int32_t L_11 = ___offset1;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_13 = ___s0;
		int32_t L_14 = ___offset1;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = ValidateNames_ParseNCName_m29804E5FFF402FED8323F5A19784053A4DB9559F(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_17 = ___colonOffset2;
		int32_t L_18 = ___offset1;
		*((int32_t*)L_17) = (int32_t)L_18;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1))));
	}

IL_003d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Xml.ValidateNames::ParseQNameThrow(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames_ParseQNameThrow_m5D12697A2B0A9B1134C5DCF60555736DCF274AA5 (String_t* ___s0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ValidateNames_ParseQName_mE71B5B34A2D2D773E4D3FF94EA866BBDBEC21095(L_0, 0, (&V_0), NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_1;
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_001e;
		}
	}

IL_0016:
	{
		String_t* L_6 = ___s0;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D(L_6, 0, L_7, NULL);
	}

IL_001e:
	{
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		String_t** L_9 = ___prefix1;
		String_t* L_10 = ___s0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_12);
		String_t** L_13 = ___localName2;
		String_t* L_14 = ___s0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_16);
		return;
	}

IL_0037:
	{
		String_t** L_17 = ___prefix1;
		*((RuntimeObject**)L_17) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t** L_18 = ___localName2;
		String_t* L_19 = ___s0;
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
		return;
	}
}
// System.Void System.Xml.ValidateNames::ThrowInvalidName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D (String_t* ___s0, int32_t ___offsetStartChar1, int32_t ___offsetBadChar2, const RuntimeMethod* method) 
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___offsetStartChar1;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_4 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		XmlException__ctor_mD7C8E5B35C43BCEDBB41ADC035A38088DFE88A87(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F463628A5B55C40369849BC669644FDA7E2FD4E)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D_RuntimeMethod_var)));
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var)));
		String_t* L_5 = ___s0;
		int32_t L_6 = ___offsetBadChar2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		bool L_8;
		L_8 = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54((&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))))->___xmlCharType_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_9;
		L_9 = XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD(NULL);
		V_0 = L_9;
		String_t* L_10 = ___s0;
		int32_t L_11 = ___offsetBadChar2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		bool L_13;
		L_13 = XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08((&V_0), L_12, NULL);
		if (L_13)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_14 = ___s0;
		int32_t L_15 = ___offsetBadChar2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46(L_14, L_15, NULL);
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_17 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		XmlException__ctor_mAAF5616098D1552646D4C4FDF1B381CB63822A21(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D)), L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D_RuntimeMethod_var)));
	}

IL_0054:
	{
		String_t* L_18 = ___s0;
		int32_t L_19 = ___offsetBadChar2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46(L_18, L_19, NULL);
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_21 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		XmlException__ctor_mAAF5616098D1552646D4C4FDF1B381CB63822A21(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05)), L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_ThrowInvalidName_m2CDE4C66404B237566E34B65CEECD1795C6FA56D_RuntimeMethod_var)));
	}
}
// System.Exception System.Xml.ValidateNames::GetInvalidNameException(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ValidateNames_GetInvalidNameException_m9F77FC77EE9AAC6D08916BC24D1A753F7795CFB7 (String_t* ___s0, int32_t ___offsetStartChar1, int32_t ___offsetBadChar2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F463628A5B55C40369849BC669644FDA7E2FD4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___offsetStartChar1;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_4 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlException__ctor_mD7C8E5B35C43BCEDBB41ADC035A38088DFE88A87(L_4, _stringLiteral4F463628A5B55C40369849BC669644FDA7E2FD4E, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		String_t* L_5 = ___s0;
		int32_t L_6 = ___offsetBadChar2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		bool L_8;
		L_8 = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54((&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		String_t* L_9 = ___s0;
		int32_t L_10 = ___offsetBadChar2;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		bool L_12;
		L_12 = XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08((&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0), L_11, NULL);
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_13 = ___s0;
		int32_t L_14 = ___offsetBadChar2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46(L_13, L_14, NULL);
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_16 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		XmlException__ctor_mAAF5616098D1552646D4C4FDF1B381CB63822A21(L_16, _stringLiteralECBDA2D88A8582D98728DD584F3E41B98CC4893D, L_15, NULL);
		return L_16;
	}

IL_0051:
	{
		String_t* L_17 = ___s0;
		int32_t L_18 = ___offsetBadChar2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
		L_19 = XmlException_BuildCharExceptionArgs_m392B50DC9155D9243FD05EF0287B06FCB408EA46(L_17, L_18, NULL);
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_20 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		XmlException__ctor_mAAF5616098D1552646D4C4FDF1B381CB63822A21(L_20, _stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05, L_19, NULL);
		return L_20;
	}
}
// System.Void System.Xml.ValidateNames::SplitQName(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames_SplitQName_m808CCD9614317080CFDC44BB0DE78CA077847498 (String_t* ___name0, String_t** ___prefix1, String_t** ___lname2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)58), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)(-1)) == ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}
	{
		String_t** L_3 = ___prefix1;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_4);
		String_t** L_5 = ___lname2;
		String_t* L_6 = ___name0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		return;
	}

IL_0018:
	{
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_8 = ___name0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1))) == ((uint32_t)L_10))))
		{
			goto IL_0045;
		}
	}

IL_0026:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = XmlException_BuildCharExceptionArgs_m85E22B1AE112B5BB1253D33A24F137F73240C556(((int32_t)58), 0, NULL);
		V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_1;
		String_t* L_13;
		L_13 = Res_GetString_mB929E696BF2E2F27CD03C0B61301A9DFE2FDEEF9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB66EDA098CD2E33A3EA4EAA0192B7D288FB4BE05)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidateNames_SplitQName_m808CCD9614317080CFDC44BB0DE78CA077847498_RuntimeMethod_var)));
	}

IL_0045:
	{
		String_t** L_15 = ___prefix1;
		String_t* L_16 = ___name0;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, 0, L_17, NULL);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		String_t** L_20 = ___lname2;
		String_t* L_21 = ___name0;
		int32_t L_22 = V_0;
		String_t* L_23 = ___name0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		int32_t L_25 = V_0;
		NullCheck(L_21);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_26);
		return;
	}
}
// System.Void System.Xml.ValidateNames::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateNames__cctor_m494F388F05F41E158DB8AA28D6BBF1D539B15CAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_0;
		L_0 = XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD(NULL);
		((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_StaticFields*)il2cpp_codegen_static_fields_for(ValidateNames_tC1994E2C538F499DFEBBA2705010DC4C770E7598_il2cpp_TypeInfo_var))->___xmlCharType_0))->___charProperties_2), (void*)NULL);
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
// Conversion methods for marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	marshaled.___charProperties_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties_2);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties_2);
	marshaled.___charProperties_2 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	marshaled.___charProperties_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties_2);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties_2);
	marshaled.___charProperties_2 = NULL;
}
// System.Object System.Xml.XmlCharType::get_StaticLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_mC311794269D2A2500ECD686E106C0C00C45114E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>((&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0), L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0;
		return L_4;
	}
}
// System.Void System.Xml.XmlCharType::InitInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m187F4E551A38D61E4124ADB4E711D3FB2C2FCCE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = XmlCharType_get_StaticLock_mC311794269D2A2500ECD686E106C0C00C45114E1(NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a6;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
				il2cpp_codegen_memory_barrier();
				if (!L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_00a7;
			}

IL_001e_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65536));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_6, _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532, (uint8_t)1, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_7, _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3, (uint8_t)2, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_8, _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC, (uint8_t)4, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_9, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)8, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_10, _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C, (uint8_t)((int32_t)16), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_11, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)((int32_t)32), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_12, _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4, (uint8_t)((int32_t)64), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
				XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A(L_13, _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221, (uint8_t)((int32_t)128), NULL);
				Thread_MemoryBarrier_m72A9AE2E6E8B4EDFC952B7D56E5BCEFA813A48BC(NULL);
				il2cpp_codegen_memory_barrier();
				((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1), (void*)L_13);
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Void System.Xml.XmlCharType::SetProperties(System.Byte[],System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m00D46212FCBB36D702B49AF605BBD5AC12F5D37A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chProps0, String_t* ___ranges1, uint8_t ___value2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		String_t* L_0 = ___ranges1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___ranges1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		V_2 = L_5;
		goto IL_0029;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___chProps0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((uint8_t*)L_8);
		uint8_t L_10 = ___value2;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_9|(int32_t)L_10)));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0029:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 2));
	}

IL_0031:
	{
		int32_t L_15 = V_0;
		String_t* L_16 = ___ranges1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlCharType::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___charProperties0;
		__this->___charProperties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline(_thisAdjusted, ___charProperties0, method);
}
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlCharType_InitInstance_m187F4E551A38D61E4124ADB4E711D3FB2C2FCCE6(NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
		il2cpp_codegen_memory_barrier();
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlCharType::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsNCNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsStartNCNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsStartNCNameSingleChar_m471CCC08015F68609798979A3C5AA7C20533AA08(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsNameSingleChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_IsNCNameSingleChar_mAE9940C767975DB6F8EA438AAE5F7DFC7666DB54(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)58)))? 1 : 0);
	}

IL_000f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsNameSingleChar_mA5C27AEE5BABB098031EA8BE197F9E2E63F0478A(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsCharData(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsCharData_m39C87F830CD89F4F0029AA0338BB9AB5EFCC1AF5 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsCharData_m39C87F830CD89F4F0029AA0338BB9AB5EFCC1AF5_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsCharData_m39C87F830CD89F4F0029AA0338BB9AB5EFCC1AF5(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsPubidChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsPubidChar_m1B6AF6006A2514C09A7AE467296FAA1C3372F520 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9D11CBA54D41168E05EDD70A039AE4D55FEEE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		NullCheck(_stringLiteral9B9D11CBA54D41168E05EDD70A039AE4D55FEEE7);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral9B9D11CBA54D41168E05EDD70A039AE4D55FEEE7, ((int32_t)((int32_t)L_1>>4)), NULL);
		Il2CppChar L_3 = ___ch0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_3&((int32_t)15)))&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsPubidChar_m1B6AF6006A2514C09A7AE467296FAA1C3372F520_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsPubidChar_m1B6AF6006A2514C09A7AE467296FAA1C3372F520(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsTextChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsTextChar_mD4DD7B3C0E63D031A4EFFDD6635F68DDE166A4AB (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsTextChar_mD4DD7B3C0E63D031A4EFFDD6635F68DDE166A4AB_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsTextChar_mD4DD7B3C0E63D031A4EFFDD6635F68DDE166A4AB(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLetter_m96DACE1E8C6E2FA82D842A40E6700F7383D119B5 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsLetter_m96DACE1E8C6E2FA82D842A40E6700F7383D119B5_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsLetter_m96DACE1E8C6E2FA82D842A40E6700F7383D119B5(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsNCNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNCNameCharXml4e_mD329203E44D17286699892D4E080A92F8AF9D56E (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___charProperties_2;
		Il2CppChar L_1 = ___ch0;
		NullCheck(L_0);
		Il2CppChar L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsNCNameCharXml4e_mD329203E44D17286699892D4E080A92F8AF9D56E_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsNCNameCharXml4e_mD329203E44D17286699892D4E080A92F8AF9D56E(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsStartNCNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsStartNCNameCharXml4e_mB1A1B245AB61132E3C6F1CB221D3FE5330F9FD2A (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_IsLetter_m96DACE1E8C6E2FA82D842A40E6700F7383D119B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)95)))? 1 : 0);
	}

IL_000f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsStartNCNameCharXml4e_mB1A1B245AB61132E3C6F1CB221D3FE5330F9FD2A_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsStartNCNameCharXml4e_mB1A1B245AB61132E3C6F1CB221D3FE5330F9FD2A(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsNameCharXml4e(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsNameCharXml4e_mEA49083CCCCAAA61588D16FC58ED3655B0C3B0A8 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_IsNCNameCharXml4e_mD329203E44D17286699892D4E080A92F8AF9D56E(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)58)))? 1 : 0);
	}

IL_000f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsNameCharXml4e_mEA49083CCCCAAA61588D16FC58ED3655B0C3B0A8_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsNameCharXml4e_mEA49083CCCCAAA61588D16FC58ED3655B0C3B0A8(_thisAdjusted, ___ch0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsDigit_m35A52077DD1B23150913BDAE7C1F5EEEF792DFD7 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD(L_0, ((int32_t)48), ((int32_t)57), NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlCharType::IsHighSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_m9DE9C8AE82BE2FB2A8EA00142D2E5A7DFE6CC303 (int32_t ___ch0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD(L_0, ((int32_t)55296), ((int32_t)56319), NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlCharType::IsLowSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m062769B4A4869E4EDAC2EC6D0169BADCC2AC6C56 (int32_t ___ch0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD(L_0, ((int32_t)56320), ((int32_t)57343), NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlCharType::IsSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsSurrogate_m29FE0DF5EE1BEA1C1695EAD497896D2FD94173C0 (int32_t ___ch0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ch0;
		bool L_1;
		L_1 = XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlCharType::CombineSurrogateChar(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_CombineSurrogateChar_mCCBF257D9AE510DB9D3AA852848DCEB8AE0B9512 (int32_t ___lowChar0, int32_t ___highChar1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lowChar0;
		int32_t L_1 = ___highChar1;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)56320)))|((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)55296)))<<((int32_t)10))), ((int32_t)65536)))));
	}
}
// System.Void System.Xml.XmlCharType::SplitSurrogateChar(System.Int32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SplitSurrogateChar_m8D1F247D73F0298B1E45C124BE6FA2A797ABAE56 (int32_t ___combinedChar0, Il2CppChar* ___lowChar1, Il2CppChar* ___highChar2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___combinedChar0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65536)));
		Il2CppChar* L_1 = ___lowChar1;
		int32_t L_2 = V_0;
		*((int16_t*)L_1) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)56320), ((int32_t)(L_2%((int32_t)1024))))));
		Il2CppChar* L_3 = ___highChar2;
		int32_t L_4 = V_0;
		*((int16_t*)L_3) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)55296), ((int32_t)(L_4/((int32_t)1024))))));
		return;
	}
}
// System.Boolean System.Xml.XmlCharType::IsOnlyWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsOnlyWhitespace_m6A7AD69BFF7BE6878F6984C952284C0755601490 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		int32_t L_1;
		L_1 = XmlCharType_IsOnlyWhitespaceWithPos_mED48C365F707662F8D0AD0113155B24CAD53800C(__this, L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XmlCharType_IsOnlyWhitespace_m6A7AD69BFF7BE6878F6984C952284C0755601490_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = XmlCharType_IsOnlyWhitespace_m6A7AD69BFF7BE6878F6984C952284C0755601490(_thisAdjusted, ___str0, method);
	return _returnValue;
}
// System.Int32 System.Xml.XmlCharType::IsOnlyWhitespaceWithPos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsOnlyWhitespaceWithPos_mED48C365F707662F8D0AD0113155B24CAD53800C (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___charProperties_2;
		String_t* L_2 = ___str0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		NullCheck(L_1);
		Il2CppChar L_5 = L_4;
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (((int32_t)((int32_t)L_6&1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		String_t* L_10 = ___str0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}

IL_0028:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t XmlCharType_IsOnlyWhitespaceWithPos_mED48C365F707662F8D0AD0113155B24CAD53800C_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XmlCharType_IsOnlyWhitespaceWithPos_mED48C365F707662F8D0AD0113155B24CAD53800C(_thisAdjusted, ___str0, method);
	return _returnValue;
}
// System.Int32 System.Xml.XmlCharType::IsOnlyCharData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsOnlyCharData_m5BFEFD55C4578A0117D1ED3305ACF4C062DCE9D3 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = 0;
		goto IL_004d;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___charProperties_2;
		String_t* L_2 = ___str0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		NullCheck(L_1);
		Il2CppChar L_5 = L_4;
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (((int32_t)((int32_t)L_6&((int32_t)16))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, 1))) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_10 = ___str0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		bool L_13;
		L_13 = XmlCharType_IsHighSurrogate_m9DE9C8AE82BE2FB2A8EA00142D2E5A7DFE6CC303(L_12, NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_14 = ___str0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		bool L_17;
		L_17 = XmlCharType_IsLowSurrogate_m062769B4A4869E4EDAC2EC6D0169BADCC2AC6C56(L_16, NULL);
		if (L_17)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		int32_t L_18 = V_0;
		return L_18;
	}

IL_0045:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0049:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004d:
	{
		int32_t L_21 = V_0;
		String_t* L_22 = ___str0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0007;
		}
	}

IL_0056:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t XmlCharType_IsOnlyCharData_m5BFEFD55C4578A0117D1ED3305ACF4C062DCE9D3_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XmlCharType_IsOnlyCharData_m5BFEFD55C4578A0117D1ED3305ACF4C062DCE9D3(_thisAdjusted, ___str0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::IsOnlyDigits(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsOnlyDigits_m65AE71D9278E3F04A6625595F8DC3D0749D79DCC (String_t* ___str0, int32_t ___startPos1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___startPos1;
		V_0 = L_0;
		goto IL_0018;
	}

IL_0004:
	{
		String_t* L_1 = ___str0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		bool L_4;
		L_4 = XmlCharType_IsDigit_m35A52077DD1B23150913BDAE7C1F5EEEF792DFD7(L_3, NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___startPos1;
		int32_t L_8 = ___len2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlCharType::IsPublicId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		String_t* L_1 = ___str0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		bool L_4;
		L_4 = XmlCharType_IsPubidChar_m1B6AF6006A2514C09A7AE467296FAA1C3372F520(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}

IL_0025:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XmlCharType_IsPublicId_m1119A6921A99A357141333030F425EDD2AAFE2AE(_thisAdjusted, ___str0, method);
	return _returnValue;
}
// System.Boolean System.Xml.XmlCharType::InRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mBF4F5A0A28C7F7A5B87E49F68865D273809D8FDD (int32_t ___value0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___end2;
		int32_t L_3 = ___start1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.String System.Xml.XmlComplianceUtil::NonCDataNormalize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlComplianceUtil_NonCDataNormalize_mD4049AAACE029BD906CA8B8B347D57B68EB0713C (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t* V_2 = NULL;
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0011:
	{
		V_1 = 0;
		V_2 = (StringBuilder_t*)NULL;
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_4;
		L_4 = XmlCharType_get_Instance_m2D4006A9AE9EB033F6A176E31CAFAC7EF30350AD(NULL);
		V_3 = L_4;
		goto IL_0038;
	}

IL_001d:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_8;
		L_8 = XmlReaderSection_get_CollapseWhiteSpaceIntoEmptyString_mC778252E583E70FED611312296F0FBF1831E0063(NULL);
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
	}

IL_0032:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0038:
	{
		String_t* L_9 = ___value0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		bool L_12;
		L_12 = XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387((&V_3), L_11, NULL);
		if (L_12)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_13 = V_1;
		V_4 = L_13;
		goto IL_00fb;
	}

IL_0050:
	{
		String_t* L_14 = ___value0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		bool L_17;
		L_17 = XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387((&V_3), L_16, NULL);
		if (L_17)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_00fb;
	}

IL_006c:
	{
		int32_t L_19 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_007a;
	}

IL_0074:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007a:
	{
		int32_t L_21 = V_5;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_23 = ___value0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		bool L_26;
		L_26 = XmlCharType_IsWhiteSpace_m6F9F3A19B8A95FF5CBF1B197E400A0F194AC9387((&V_3), L_25, NULL);
		if (L_26)
		{
			goto IL_0074;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_5;
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t* L_29 = V_2;
		if (L_29)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_30 = ___value0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_4;
		int32_t L_33 = V_1;
		NullCheck(L_30);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_30, L_31, ((int32_t)il2cpp_codegen_subtract(L_32, L_33)), NULL);
		return L_34;
	}

IL_00a4:
	{
		StringBuilder_t* L_35 = V_2;
		String_t* L_36 = ___value0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_4;
		int32_t L_39 = V_1;
		NullCheck(L_35);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_35, L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, L_39)), NULL);
		StringBuilder_t* L_41 = V_2;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		return L_42;
	}

IL_00b8:
	{
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) > ((int32_t)((int32_t)il2cpp_codegen_add(L_44, 1)))))
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_45 = ___value0;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		Il2CppChar L_47;
		L_47 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_45, L_46, NULL);
		if ((((int32_t)L_47) == ((int32_t)((int32_t)32))))
		{
			goto IL_00f5;
		}
	}

IL_00cc:
	{
		StringBuilder_t* L_48 = V_2;
		if (L_48)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_49 = V_0;
		StringBuilder_t* L_50 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_50, L_49, NULL);
		V_2 = L_50;
	}

IL_00d6:
	{
		StringBuilder_t* L_51 = V_2;
		String_t* L_52 = ___value0;
		int32_t L_53 = V_1;
		int32_t L_54 = V_4;
		int32_t L_55 = V_1;
		NullCheck(L_51);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_51, L_52, L_53, ((int32_t)il2cpp_codegen_subtract(L_54, L_55)), NULL);
		StringBuilder_t* L_57 = V_2;
		NullCheck(L_57);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_57, ((int32_t)32), NULL);
		int32_t L_59 = V_5;
		V_1 = L_59;
		int32_t L_60 = V_5;
		V_4 = L_60;
		goto IL_00fb;
	}

IL_00f5:
	{
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_00fb:
	{
		int32_t L_62 = V_4;
		int32_t L_63 = V_0;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t* L_64 = V_2;
		if (!L_64)
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_65 = V_1;
		int32_t L_66 = V_4;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t* L_67 = V_2;
		String_t* L_68 = ___value0;
		int32_t L_69 = V_1;
		int32_t L_70 = V_4;
		int32_t L_71 = V_1;
		NullCheck(L_67);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_67, L_68, L_69, ((int32_t)il2cpp_codegen_subtract(L_70, L_71)), NULL);
	}

IL_0118:
	{
		StringBuilder_t* L_73 = V_2;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
		return L_74;
	}

IL_011f:
	{
		int32_t L_75 = V_1;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		String_t* L_76 = ___value0;
		int32_t L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = V_1;
		NullCheck(L_76);
		String_t* L_80;
		L_80 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_76, L_77, ((int32_t)il2cpp_codegen_subtract(L_78, L_79)), NULL);
		return L_80;
	}

IL_012e:
	{
		String_t* L_81 = ___value0;
		return L_81;
	}
}
// System.String System.Xml.XmlComplianceUtil::CDataNormalize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlComplianceUtil_CDataNormalize_m28F7DA8AAD0404D820BE0A2BC46F53758827C982 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0011:
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (StringBuilder_t*)NULL;
		goto IL_0088;
	}

IL_0019:
	{
		String_t* L_4 = ___value0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)32))))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)13))))
		{
			goto IL_0040;
		}
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0088;
	}

IL_0040:
	{
		StringBuilder_t* L_12 = V_3;
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_0;
		StringBuilder_t* L_14 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_14, L_13, NULL);
		V_3 = L_14;
	}

IL_004a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_005a;
		}
	}
	{
		StringBuilder_t* L_17 = V_3;
		String_t* L_18 = ___value0;
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_17);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_17, L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_005a:
	{
		StringBuilder_t* L_23 = V_3;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)32), NULL);
		Il2CppChar L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1))) >= ((int32_t)L_27)))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_28 = ___value0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 2));
		goto IL_0086;
	}

IL_0082:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0086:
	{
		int32_t L_33 = V_1;
		V_2 = L_33;
	}

IL_0088:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t* L_36 = V_3;
		if (L_36)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_37 = ___value0;
		return L_37;
	}

IL_0091:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00a1;
		}
	}
	{
		StringBuilder_t* L_40 = V_3;
		String_t* L_41 = ___value0;
		int32_t L_42 = V_2;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		NullCheck(L_40);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_40, L_41, L_42, ((int32_t)il2cpp_codegen_subtract(L_43, L_44)), NULL);
	}

IL_00a1:
	{
		StringBuilder_t* L_46 = V_3;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		return L_47;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeReaderNavigator_get_CreatedOnAttribute_m0CC89DD9AB3B1EBB471932E038EA6ECDC09BC12B_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___bCreatedOnAttribute_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlNodeReaderNavigator_get_NameTable_m4C906E955567E27602C24A7ECEB72818E97D7626_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) 
{
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_0 = __this->___nameTable_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* XmlNodeReaderNavigator_get_Document_mF1C26CBEAA6E73F0CD108F8BB23ACEB63AB6D28D_inline (XmlNodeReaderNavigator_t73FA263C780B3005828544BCC70EA38D7A036825* __this, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->___doc_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* XmlDocument_get_DtdSchemaInfo_mF52E9F32AB9D1914DBC6D91A8277AE843B6E1E6E_inline (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* L_0 = __this->___schemaInfo_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlDocument_get_IsLoading_mD97F2D54DE1BD3B4F8B496F4D8D31C061FA8A52D_inline (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoading_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_SetSpecified_m1CF67FF3E90E62DC5B0983B8DE91B6E95228509B_inline (XmlUnspecifiedAttribute_tE47F7C121F619F5C6D79E61829694B516B6C4CDC* __this, bool ___f0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___f0;
		__this->___fSpecified_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_SchemaType_m00F5B5934AC3BDDD71AAEB8CA3E307451FA51229_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___schemaType_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_DocTypeName_mB87F85301E58DCCDD63697CE790A4417A07A54B0_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___value0, const RuntimeMethod* method) 
{
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = ___value0;
		__this->___docTypeName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___docTypeName_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaInfo_set_InternalDtdSubset_m8352C52C8065FDD87C562CC9AC5CC098B7697CD5_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___internalDtdSubset_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalDtdSubset_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* SchemaInfo_get_ElementDecls_m238E5681BECA397E7010F7BEFBAC2D0FBEC43BD7_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_0 = __this->___elementDecls_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* SchemaInfo_get_UndeclaredElementDecls_m0A88B7833EFC3AAFB9DC374257DB131D1902EF1D_inline (SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t798E72FD52A5F6525F4F83621BBE86BBAB28533A* L_0 = __this->___undeclaredElementDecls_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Namespace_m0CAE4A651EF1CA6F0EB657C83608A796038A2615_inline (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___ns_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_IsDeclaredInExternal_m3F57DA2AD9DBAC1C431293C53E4E052A8E915D96_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isDeclaredInExternal_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_LineNumber_mA7F00D8F6FAB9626DBF9444371C2D5B0EF99E07E_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___lineNum_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_LinePosition_mC3B43012E31CCE6784CCFE1B9FE8CC15B0C7E584_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___linePos_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaDeclBase_get_Name_m013DF0DD721FE902399C2DF4D2E6F8DAD50ECFAE_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) 
{
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Name_mC9D21D5BADE11AEAC7ED5886B39E1A774C63B830_inline (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_Reserved_mA68CCD19A9DFB1D612973314A38245DCA338BDC4_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___reserved_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* SchemaDeclBase_get_Datatype_mE6DE13C3518B65A1CF6E464F12D7D7653247AF90_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) 
{
	{
		XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* L_0 = __this->___datatype_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SchemaAttDef_get_LineNumber_m8A9494C90F0B132F2A84AF7203FE074046529A1C_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lineNum_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SchemaAttDef_get_LinePosition_m192E37BC23204F940B4BC5BBBCC248EEAE4481D1_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___linePos_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_HasNonCDataAttribute_m66C35DA3287AD11A2D0DD2E47FE3B8198851F01E_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___hasNonCDataAttribute_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_SchemaType_m4A34BA7ABAAD6A60F7AE3A2572EDD3E86893A21F_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___value0, const RuntimeMethod* method) 
{
	{
		XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* L_0 = ___value0;
		__this->___schemaType_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___schemaType_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaElementDecl_get_IsIdDeclared_m44ADA012ED628AF85A038CF178E9CA86806077B3_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isIdDeclared_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_IsIdDeclared_m88620A2DF06335275FD59A77CB5073E5707BA5AD_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isIdDeclared_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaElementDecl_get_IsNotationDeclared_m56FEF2BE202BF5AC41DDFB7BCA33983F71A0FB0B_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isNotationDeclared_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* SchemaElementDecl_get_ContentValidator_m687E7878F142CFC03B5D7B4FFD6FE1F4AE6526E1_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, const RuntimeMethod* method) 
{
	{
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_0 = __this->___contentValidator_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ContentValidator_get_ContentType_m2E9C64DB3522E5A29BE6CAA4A929CBABAD1CEF23_inline (ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___contentType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_IsNotationDeclared_m33DFE77CEA01A59316738F4BC49110A7C98A2365_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isNotationDeclared_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SchemaDeclBase_get_Values_m5CBE6E5DB4DE93179FEB87F1BBC0EAF43FAF0E06_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___values_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaDeclBase_set_Presence_mB1FAF4B21DA1F38F9A40D57E54260010E54C1B91_inline (SchemaDeclBase_t04E301687597D1FA19FFC9A6A2D08746D3EF169B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___presence_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_DefaultValueExpanded_mE4A42E55D630D5C41EAF3480F721749DBB59B801_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___defExpanded_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defExpanded_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_ValueLineNumber_mD19157EDC780F89AA9FD6C07FEE28363DB7BDC91_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___valueLineNum_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaAttDef_set_ValueLinePosition_m8AEAB2128F36C4F66C16E9CB778C94402E15D387_inline (SchemaAttDef_tC497C6246FCEF4C205C09DC0A9D186A4C2E81553* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___valueLinePos_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaElementDecl_set_ContentValidator_m9670779D24E74D3F1272FB1C378371719F9DFB0E_inline (SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* __this, ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* ___value0, const RuntimeMethod* method) 
{
	{
		ContentValidator_t42EB1802005FF0D871EE98A34ADB69091CCE48FE* L_0 = ___value0;
		__this->___contentValidator_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentValidator_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_BaseURI_mFC468DD1928AD24B87E405653FBB189A67042C61_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___baseURI_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseURI_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_DeclaredURI_m0411EACB64E056C515ADBBD2118036872D76AC96_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___declaredURI_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaredURI_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_DeclaredInExternal_mE6A46D7897D9CDBF7400135BF42A153AB313D66F_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isDeclaredInExternal_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_ParsingInProgress_m6DA2762E08D1C44455A0E1CF86B7B208A6BD1480_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___parsingInProgress_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_IsExternal_mEA049015A7FB2840CFC3870A2F41FAC927612D12_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isExternal_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Pubid_m38932D2D6C40B066741B4F3C85478DA7A49F1FC2_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___pubid_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pubid_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_NData_mB7C417287EC6223758560683CFEF6961CCA9DD4F_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___value0, const RuntimeMethod* method) 
{
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = ___value0;
		__this->___ndata_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ndata_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaEntity_get_NData_m7B05467BF6357AB27C1DAFBFE27F9720C79CEC3C_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) 
{
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = __this->___ndata_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Line_m3F4EBBBF917403C4F93292B873B64063DD3850F3_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___lineNumber_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaEntity_set_Pos_mD4124AF35C72621D401E02AED280FF8A8934FABB_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___linePosition_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SchemaNotation_get_Name_mF5CA9EBBD17ADAB3A31FC36FDB03B236C4847FCD_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, const RuntimeMethod* method) 
{
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaNotation_set_SystemLiteral_mE508FA22D4C2368801F3A5AA2B5797F1221234CD_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___systemLiteral_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemLiteral_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchemaNotation_set_Pubid_m3829B9FB66E7CB42DBAE04A487127361BFF4357B_inline (SchemaNotation_tDA4063F0DD51070BAD94B42C2F44BD1055372269* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___pubid_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pubid_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlException_get_ResString_m977084C1A1F883C2BED73B1F956D980E62649C7A_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___res_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DtdParser_get_Normalize_mA95ED98D422B35FDBDAE26FA37F593B389FD122C_inline (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___normalize_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlException_get_LineNumber_m4DBE53D0E13988CF2A5055C4B853F1399DE1A926_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___lineNumber_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlException_get_LinePosition_m8045E03E183F6B07D6394A1B1FBD55E2CBE2DCB4_inline (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___linePosition_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DtdParser_get_SupportNamespaces_m868EACB0340AAB10A0A36D3E54391F6B721A7791_inline (DtdParser_t31747CA45152BB55FE1F36C68444606A21100C53* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___supportNamespaces_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaEntity_get_ParsingInProgress_m1A11FBE9700163EB33B81751FB96EA42F99F90EC_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___parsingInProgress_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SchemaEntity_get_IsExternal_mBFBDEF21B96AE11DAF242E5B7E2C3B63693FC8CE_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isExternal_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SchemaEntity_get_Text_mDCF201E623D7A98F87E859ACDEE9B5B6B4E953AE_inline (SchemaEntity_t9ED2BB66C74E37F782F6002ED5BED20306D103E7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___text_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___charProperties0;
		__this->___charProperties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
