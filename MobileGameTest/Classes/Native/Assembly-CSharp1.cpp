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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// LevelManager
struct LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// ResetOnRespawn[]
struct ResetOnRespawnU5BU5D_tC006A55BEA005429D6B8CB8326C11F03DEC8408F;
// RightJoystick
struct RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7;
// RightJoystickPlayerController
struct RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795;
// RightJoystickTouchContoller
struct RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA;
// SetCharacter
struct SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979;
// SimpleLoading
struct SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03;
// SimpleLoading/<LoadNewScene>d__5
struct U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602;
// SingleJoystick
struct SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134;
// SingleJoystickPlayerController
struct SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09;
// SingleJoystickTouchController
struct SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF;
// SpawnPlayer
struct SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56;
// Star
struct Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431;
// StompEnemy
struct StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// dragoncontroller
struct dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5;
// fallingplatform
struct fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42;
// fallingplatform/<Fall>d__5
struct U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C;
// frogcontroller
struct frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151;
// killplayer
struct killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0513C189DD571EE0E8DBA6B35B53F2335861290E;
IL2CPP_EXTERN_C String_t* _stringLiteral0896EE4F51E0F1898880069A1E95A0452DFE8C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCF6249BD4C7A4BA31AA27DCD6E95E313D6A0C9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4A2EC7FEDC2FBD1E92EB1A38C410A5D3BCBE16;
IL2CPP_EXTERN_C String_t* _stringLiteral3280F17B78A8B414C2FA22A1088EE1D9BF68F754;
IL2CPP_EXTERN_C String_t* _stringLiteral505A44FACAA3E758845F6E101F4E21F9D99ACF63;
IL2CPP_EXTERN_C String_t* _stringLiteral5C1AE82C29543AC887703776BF3DA2C7DCCE683D;
IL2CPP_EXTERN_C String_t* _stringLiteral6A155005F05C821D01E9E46CF14FDAE773BF665E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D76133CFA34B7E2D45C4E214E7B373095564C78;
IL2CPP_EXTERN_C String_t* _stringLiteral7F04F2484D275B8AF1CC8D93C27E53B2965C58ED;
IL2CPP_EXTERN_C String_t* _stringLiteralA21327300E88EBC6B816F5AA112B05B27AC75005;
IL2CPP_EXTERN_C String_t* _stringLiteralA25632F8F4FF9659997A848C2EBEEF27D0974164;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8D44116DF9A20BE647E9D47217510DD2A8204E;
IL2CPP_EXTERN_C String_t* _stringLiteralAD93CE2D750F8C4B15140064922E5E25151B087D;
IL2CPP_EXTERN_C String_t* _stringLiteralB04BA49F848624BB97AB094A2631D2AD74913498;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F936CB193E9D04DB41AAFF3A13E00500C7903B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA239BBD2992A7BD75A32D31CCBB3510E30A731C;
IL2CPP_EXTERN_C String_t* _stringLiteralE45668AFC6C88CF28921EAD7D245BBE809540508;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFallU3Ed__5_System_Collections_IEnumerator_Reset_m4193A216AE70A77BCEA8DBE833580FBD0DF3610E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_Reset_m3E6136E3CD7BD7D0D06ED5402175F79AA1A054D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RightJoystickPlayerController_FixedUpdate_m7F909B7B8DCC582D4362FF56B5ED5EBE957D9BB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightJoystickPlayerController_Start_mC10DF838AF188A1F7E2C90B50C0F665D3BFF7B71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightJoystickTouchContoller_FixedUpdate_m2F20FD70FAB2045132F3614C0C4DAB59C0FE1D69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightJoystickTouchContoller_Start_m5B1C9DDF81DDAFB86298DD7255FA07A721CAD26F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SetCharacter_Start_m8FCFC10D35B2DD37E228E48916557FC5B6B90CBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SetCharacter_green_m1B75A0C66AE9CE61011EAD7F9F7F9A24038C9E62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SetCharacter_red_m530A883E08D1FC22157014E0A7C3C132457D941B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SetCharacter_yellow_m6937D513AA729E122032ED7C15BAC28E04BFF7F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleLoading_LoadNewScene_m493B484685DD3371DD2D500F06CF4D9D6048A63A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleLoading_Update_mEEC7BD790569A927E7771E2D37E0099D4CC56018_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystickPlayerController_FixedUpdate_mA026AF0BFC571AF839F39CBB5ADF5D1ECAC70EA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystickPlayerController_Start_m1891006C102A20A443B4D801C00D5CB95785005D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystickTouchController_FixedUpdate_m7EC522D44AF678ACB5969B4B499EC1479E9E7A01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystickTouchController_Start_m3365F9A32BBB41A4F072FC521DBCC02272AB3B2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystick_OnDrag_m2627EE8AA670246379BAA7BC7FAEB9918221E980_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystick_OnPointerUp_m2558A2069C7E23E3455F5C637AE80DEC5E9E329B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystick_Start_m142BD1F23F82A2F511E0DE05A7174B27BC88DFD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleJoystick__ctor_mFF3C923EC8C9EB0705D97CA21A19A9193E0B3C17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnPlayer_Start_m7EF1DD4B932B81294D6294E9E8D36BBA410512EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Star_OnTriggerEnter2D_m18CD1EF3DA7717ADEBD032650142C107D83E1E1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Star_Start_mCCEB2062ABDD12F2914B2CBB6B6A5D6C41D55E70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StompEnemy_OnTriggerEnter2D_mC630A4851D3D992AD65E307EEC3B74F273CA63A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StompEnemy_Start_m774943B657D7FFFBC23D19B5F96EF2A36251FACA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFallU3Ed__5_MoveNext_m1FF299DEBB730EC8D00A285FB6B308CE9E1EBD0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFallU3Ed__5_System_Collections_IEnumerator_Reset_m4193A216AE70A77BCEA8DBE833580FBD0DF3610E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_Reset_m3E6136E3CD7BD7D0D06ED5402175F79AA1A054D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t dragoncontroller_Start_mD2DB2FD97775370EBD7AC5DA55305BD803DB5B64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t dragoncontroller_Update_m299AA1796C38B396C02CD82433C1E9867628B68B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t fallingplatform_Fall_m984CD93D97772CA0B0A8ACE72FFF4835AD84EF6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t fallingplatform_OnTriggerEnter2D_m97FB49468DA39C0C641223979DC72604FABB683F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t frogcontroller_OnTriggerEnter2D_m8E60EF3E93CCBE23CE2D2F93464D0CDDE307D3C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t frogcontroller_Start_mDC92A8DD5CCD17F5589A962A1A96D030AE5EF0CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t frogcontroller_Update_mB43C195D0C399B792F6C3CD81D92F10BE89FA1E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t killplayer_OnTriggerEnter2D_m5CD44480DD7448B9036F63103DE6FA82B3754358_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t killplayer_Start_mD7B77352CF6B121BAFE58475A2BB342FB1B55C68_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// SimpleLoading_<LoadNewScene>d__5
struct  U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602  : public RuntimeObject
{
public:
	// System.Int32 SimpleLoading_<LoadNewScene>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleLoading_<LoadNewScene>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SimpleLoading SimpleLoading_<LoadNewScene>d__5::<>4__this
	SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation SimpleLoading_<LoadNewScene>d__5::<async>5__2
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ___U3CasyncU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602, ___U3CU3E4__this_2)); }
	inline SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CasyncU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602, ___U3CasyncU3E5__2_3)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get_U3CasyncU3E5__2_3() const { return ___U3CasyncU3E5__2_3; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of_U3CasyncU3E5__2_3() { return &___U3CasyncU3E5__2_3; }
	inline void set_U3CasyncU3E5__2_3(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		___U3CasyncU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CasyncU3E5__2_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// fallingplatform_<Fall>d__5
struct  U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C  : public RuntimeObject
{
public:
	// System.Int32 fallingplatform_<Fall>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object fallingplatform_<Fall>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// fallingplatform fallingplatform_<Fall>d__5::<>4__this
	fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C, ___U3CU3E4__this_2)); }
	inline fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.TouchPhase
struct  TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// LevelManager
struct  LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single LevelManager::waitToRespawn
	float ___waitToRespawn_4;
	// PlayerController LevelManager::thePlayer
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___thePlayer_5;
	// UnityEngine.SpriteRenderer LevelManager::sr
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___sr_6;
	// UnityEngine.Rigidbody2D LevelManager::rb2D
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb2D_7;
	// UnityEngine.GameObject LevelManager::DieBurst
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___DieBurst_8;
	// UnityEngine.UI.Image LevelManager::heart1
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___heart1_9;
	// UnityEngine.UI.Image LevelManager::heart2
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___heart2_10;
	// UnityEngine.UI.Image LevelManager::heart3
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___heart3_11;
	// UnityEngine.Sprite LevelManager::heartFull
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___heartFull_12;
	// UnityEngine.Sprite LevelManager::heartHalf
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___heartHalf_13;
	// UnityEngine.Sprite LevelManager::heartEmpty
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___heartEmpty_14;
	// System.Int32 LevelManager::maxHealth
	int32_t ___maxHealth_15;
	// System.Int32 LevelManager::healthCount
	int32_t ___healthCount_16;
	// System.Boolean LevelManager::respawning
	bool ___respawning_17;
	// ResetOnRespawn[] LevelManager::objectsToReset
	ResetOnRespawnU5BU5D_tC006A55BEA005429D6B8CB8326C11F03DEC8408F* ___objectsToReset_18;
	// System.Boolean LevelManager::invincible
	bool ___invincible_19;
	// UnityEngine.AudioSource LevelManager::levelMusic
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___levelMusic_20;
	// UnityEngine.AudioSource LevelManager::gameOverMusic
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___gameOverMusic_21;

public:
	inline static int32_t get_offset_of_waitToRespawn_4() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___waitToRespawn_4)); }
	inline float get_waitToRespawn_4() const { return ___waitToRespawn_4; }
	inline float* get_address_of_waitToRespawn_4() { return &___waitToRespawn_4; }
	inline void set_waitToRespawn_4(float value)
	{
		___waitToRespawn_4 = value;
	}

	inline static int32_t get_offset_of_thePlayer_5() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___thePlayer_5)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_thePlayer_5() const { return ___thePlayer_5; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_thePlayer_5() { return &___thePlayer_5; }
	inline void set_thePlayer_5(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___thePlayer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thePlayer_5), (void*)value);
	}

	inline static int32_t get_offset_of_sr_6() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___sr_6)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_sr_6() const { return ___sr_6; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_sr_6() { return &___sr_6; }
	inline void set_sr_6(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___sr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___rb2D_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_DieBurst_8() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___DieBurst_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_DieBurst_8() const { return ___DieBurst_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_DieBurst_8() { return &___DieBurst_8; }
	inline void set_DieBurst_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___DieBurst_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DieBurst_8), (void*)value);
	}

	inline static int32_t get_offset_of_heart1_9() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heart1_9)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_heart1_9() const { return ___heart1_9; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_heart1_9() { return &___heart1_9; }
	inline void set_heart1_9(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___heart1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heart1_9), (void*)value);
	}

	inline static int32_t get_offset_of_heart2_10() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heart2_10)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_heart2_10() const { return ___heart2_10; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_heart2_10() { return &___heart2_10; }
	inline void set_heart2_10(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___heart2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heart2_10), (void*)value);
	}

	inline static int32_t get_offset_of_heart3_11() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heart3_11)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_heart3_11() const { return ___heart3_11; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_heart3_11() { return &___heart3_11; }
	inline void set_heart3_11(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___heart3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heart3_11), (void*)value);
	}

	inline static int32_t get_offset_of_heartFull_12() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heartFull_12)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_heartFull_12() const { return ___heartFull_12; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_heartFull_12() { return &___heartFull_12; }
	inline void set_heartFull_12(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___heartFull_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartFull_12), (void*)value);
	}

	inline static int32_t get_offset_of_heartHalf_13() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heartHalf_13)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_heartHalf_13() const { return ___heartHalf_13; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_heartHalf_13() { return &___heartHalf_13; }
	inline void set_heartHalf_13(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___heartHalf_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartHalf_13), (void*)value);
	}

	inline static int32_t get_offset_of_heartEmpty_14() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___heartEmpty_14)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_heartEmpty_14() const { return ___heartEmpty_14; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_heartEmpty_14() { return &___heartEmpty_14; }
	inline void set_heartEmpty_14(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___heartEmpty_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartEmpty_14), (void*)value);
	}

	inline static int32_t get_offset_of_maxHealth_15() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___maxHealth_15)); }
	inline int32_t get_maxHealth_15() const { return ___maxHealth_15; }
	inline int32_t* get_address_of_maxHealth_15() { return &___maxHealth_15; }
	inline void set_maxHealth_15(int32_t value)
	{
		___maxHealth_15 = value;
	}

	inline static int32_t get_offset_of_healthCount_16() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___healthCount_16)); }
	inline int32_t get_healthCount_16() const { return ___healthCount_16; }
	inline int32_t* get_address_of_healthCount_16() { return &___healthCount_16; }
	inline void set_healthCount_16(int32_t value)
	{
		___healthCount_16 = value;
	}

	inline static int32_t get_offset_of_respawning_17() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___respawning_17)); }
	inline bool get_respawning_17() const { return ___respawning_17; }
	inline bool* get_address_of_respawning_17() { return &___respawning_17; }
	inline void set_respawning_17(bool value)
	{
		___respawning_17 = value;
	}

	inline static int32_t get_offset_of_objectsToReset_18() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___objectsToReset_18)); }
	inline ResetOnRespawnU5BU5D_tC006A55BEA005429D6B8CB8326C11F03DEC8408F* get_objectsToReset_18() const { return ___objectsToReset_18; }
	inline ResetOnRespawnU5BU5D_tC006A55BEA005429D6B8CB8326C11F03DEC8408F** get_address_of_objectsToReset_18() { return &___objectsToReset_18; }
	inline void set_objectsToReset_18(ResetOnRespawnU5BU5D_tC006A55BEA005429D6B8CB8326C11F03DEC8408F* value)
	{
		___objectsToReset_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectsToReset_18), (void*)value);
	}

	inline static int32_t get_offset_of_invincible_19() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___invincible_19)); }
	inline bool get_invincible_19() const { return ___invincible_19; }
	inline bool* get_address_of_invincible_19() { return &___invincible_19; }
	inline void set_invincible_19(bool value)
	{
		___invincible_19 = value;
	}

	inline static int32_t get_offset_of_levelMusic_20() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___levelMusic_20)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_levelMusic_20() const { return ___levelMusic_20; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_levelMusic_20() { return &___levelMusic_20; }
	inline void set_levelMusic_20(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___levelMusic_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMusic_20), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverMusic_21() { return static_cast<int32_t>(offsetof(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D, ___gameOverMusic_21)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_gameOverMusic_21() const { return ___gameOverMusic_21; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_gameOverMusic_21() { return &___gameOverMusic_21; }
	inline void set_gameOverMusic_21(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___gameOverMusic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverMusic_21), (void*)value);
	}
};


// RightJoystick
struct  RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean RightJoystick::joystickStaysInFixedPosition
	bool ___joystickStaysInFixedPosition_4;
	// System.Int32 RightJoystick::joystickHandleDistance
	int32_t ___joystickHandleDistance_5;
	// UnityEngine.UI.Image RightJoystick::bgImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___bgImage_6;
	// UnityEngine.UI.Image RightJoystick::joystickKnobImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___joystickKnobImage_7;
	// UnityEngine.Vector3 RightJoystick::inputVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inputVector_8;
	// UnityEngine.Vector3 RightJoystick::unNormalizedInput
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___unNormalizedInput_9;
	// UnityEngine.Vector3[] RightJoystick::fourCornersArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___fourCornersArray_10;
	// UnityEngine.Vector2 RightJoystick::bgImageStartPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___bgImageStartPosition_11;

public:
	inline static int32_t get_offset_of_joystickStaysInFixedPosition_4() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___joystickStaysInFixedPosition_4)); }
	inline bool get_joystickStaysInFixedPosition_4() const { return ___joystickStaysInFixedPosition_4; }
	inline bool* get_address_of_joystickStaysInFixedPosition_4() { return &___joystickStaysInFixedPosition_4; }
	inline void set_joystickStaysInFixedPosition_4(bool value)
	{
		___joystickStaysInFixedPosition_4 = value;
	}

	inline static int32_t get_offset_of_joystickHandleDistance_5() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___joystickHandleDistance_5)); }
	inline int32_t get_joystickHandleDistance_5() const { return ___joystickHandleDistance_5; }
	inline int32_t* get_address_of_joystickHandleDistance_5() { return &___joystickHandleDistance_5; }
	inline void set_joystickHandleDistance_5(int32_t value)
	{
		___joystickHandleDistance_5 = value;
	}

	inline static int32_t get_offset_of_bgImage_6() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___bgImage_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_bgImage_6() const { return ___bgImage_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_bgImage_6() { return &___bgImage_6; }
	inline void set_bgImage_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___bgImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_joystickKnobImage_7() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___joystickKnobImage_7)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_joystickKnobImage_7() const { return ___joystickKnobImage_7; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_joystickKnobImage_7() { return &___joystickKnobImage_7; }
	inline void set_joystickKnobImage_7(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___joystickKnobImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickKnobImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_inputVector_8() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___inputVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_inputVector_8() const { return ___inputVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_inputVector_8() { return &___inputVector_8; }
	inline void set_inputVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___inputVector_8 = value;
	}

	inline static int32_t get_offset_of_unNormalizedInput_9() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___unNormalizedInput_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_unNormalizedInput_9() const { return ___unNormalizedInput_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_unNormalizedInput_9() { return &___unNormalizedInput_9; }
	inline void set_unNormalizedInput_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___unNormalizedInput_9 = value;
	}

	inline static int32_t get_offset_of_fourCornersArray_10() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___fourCornersArray_10)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_fourCornersArray_10() const { return ___fourCornersArray_10; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_fourCornersArray_10() { return &___fourCornersArray_10; }
	inline void set_fourCornersArray_10(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___fourCornersArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fourCornersArray_10), (void*)value);
	}

	inline static int32_t get_offset_of_bgImageStartPosition_11() { return static_cast<int32_t>(offsetof(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7, ___bgImageStartPosition_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_bgImageStartPosition_11() const { return ___bgImageStartPosition_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_bgImageStartPosition_11() { return &___bgImageStartPosition_11; }
	inline void set_bgImageStartPosition_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___bgImageStartPosition_11 = value;
	}
};


// RightJoystickPlayerController
struct  RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// RightJoystick RightJoystickPlayerController::rightJoystick
	RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * ___rightJoystick_4;
	// UnityEngine.Transform RightJoystickPlayerController::rotationTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___rotationTarget_5;
	// System.Single RightJoystickPlayerController::moveSpeed
	float ___moveSpeed_6;
	// System.Int32 RightJoystickPlayerController::rotationSpeed
	int32_t ___rotationSpeed_7;
	// UnityEngine.Animator RightJoystickPlayerController::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_8;
	// UnityEngine.Vector3 RightJoystickPlayerController::rightJoystickInput
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightJoystickInput_9;
	// UnityEngine.Rigidbody RightJoystickPlayerController::rigidBody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rigidBody_10;

public:
	inline static int32_t get_offset_of_rightJoystick_4() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___rightJoystick_4)); }
	inline RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * get_rightJoystick_4() const { return ___rightJoystick_4; }
	inline RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 ** get_address_of_rightJoystick_4() { return &___rightJoystick_4; }
	inline void set_rightJoystick_4(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * value)
	{
		___rightJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_rotationTarget_5() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___rotationTarget_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_rotationTarget_5() const { return ___rotationTarget_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_rotationTarget_5() { return &___rotationTarget_5; }
	inline void set_rotationTarget_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___rotationTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___rotationSpeed_7)); }
	inline int32_t get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline int32_t* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(int32_t value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___animator_8)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_8() const { return ___animator_8; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_rightJoystickInput_9() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___rightJoystickInput_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightJoystickInput_9() const { return ___rightJoystickInput_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightJoystickInput_9() { return &___rightJoystickInput_9; }
	inline void set_rightJoystickInput_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightJoystickInput_9 = value;
	}

	inline static int32_t get_offset_of_rigidBody_10() { return static_cast<int32_t>(offsetof(RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795, ___rigidBody_10)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rigidBody_10() const { return ___rigidBody_10; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rigidBody_10() { return &___rigidBody_10; }
	inline void set_rigidBody_10(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rigidBody_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_10), (void*)value);
	}
};


// RightJoystickTouchContoller
struct  RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image RightJoystickTouchContoller::rightJoystickBackgroundImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___rightJoystickBackgroundImage_4;
	// System.Boolean RightJoystickTouchContoller::rightJoyStickAlwaysVisible
	bool ___rightJoyStickAlwaysVisible_5;
	// UnityEngine.UI.Image RightJoystickTouchContoller::rightJoystickHandleImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___rightJoystickHandleImage_6;
	// RightJoystick RightJoystickTouchContoller::rightJoystick
	RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * ___rightJoystick_7;
	// System.Int32 RightJoystickTouchContoller::rightSideFingerID
	int32_t ___rightSideFingerID_8;

public:
	inline static int32_t get_offset_of_rightJoystickBackgroundImage_4() { return static_cast<int32_t>(offsetof(RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA, ___rightJoystickBackgroundImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_rightJoystickBackgroundImage_4() const { return ___rightJoystickBackgroundImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_rightJoystickBackgroundImage_4() { return &___rightJoystickBackgroundImage_4; }
	inline void set_rightJoystickBackgroundImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___rightJoystickBackgroundImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightJoystickBackgroundImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_rightJoyStickAlwaysVisible_5() { return static_cast<int32_t>(offsetof(RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA, ___rightJoyStickAlwaysVisible_5)); }
	inline bool get_rightJoyStickAlwaysVisible_5() const { return ___rightJoyStickAlwaysVisible_5; }
	inline bool* get_address_of_rightJoyStickAlwaysVisible_5() { return &___rightJoyStickAlwaysVisible_5; }
	inline void set_rightJoyStickAlwaysVisible_5(bool value)
	{
		___rightJoyStickAlwaysVisible_5 = value;
	}

	inline static int32_t get_offset_of_rightJoystickHandleImage_6() { return static_cast<int32_t>(offsetof(RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA, ___rightJoystickHandleImage_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_rightJoystickHandleImage_6() const { return ___rightJoystickHandleImage_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_rightJoystickHandleImage_6() { return &___rightJoystickHandleImage_6; }
	inline void set_rightJoystickHandleImage_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___rightJoystickHandleImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightJoystickHandleImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_rightJoystick_7() { return static_cast<int32_t>(offsetof(RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA, ___rightJoystick_7)); }
	inline RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * get_rightJoystick_7() const { return ___rightJoystick_7; }
	inline RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 ** get_address_of_rightJoystick_7() { return &___rightJoystick_7; }
	inline void set_rightJoystick_7(RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * value)
	{
		___rightJoystick_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightJoystick_7), (void*)value);
	}

	inline static int32_t get_offset_of_rightSideFingerID_8() { return static_cast<int32_t>(offsetof(RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA, ___rightSideFingerID_8)); }
	inline int32_t get_rightSideFingerID_8() const { return ___rightSideFingerID_8; }
	inline int32_t* get_address_of_rightSideFingerID_8() { return &___rightSideFingerID_8; }
	inline void set_rightSideFingerID_8(int32_t value)
	{
		___rightSideFingerID_8 = value;
	}
};


// SetCharacter
struct  SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button SetCharacter::greenbird
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___greenbird_4;
	// System.Int32 SetCharacter::gb
	int32_t ___gb_5;

public:
	inline static int32_t get_offset_of_greenbird_4() { return static_cast<int32_t>(offsetof(SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979, ___greenbird_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_greenbird_4() const { return ___greenbird_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_greenbird_4() { return &___greenbird_4; }
	inline void set_greenbird_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___greenbird_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greenbird_4), (void*)value);
	}

	inline static int32_t get_offset_of_gb_5() { return static_cast<int32_t>(offsetof(SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979, ___gb_5)); }
	inline int32_t get_gb_5() const { return ___gb_5; }
	inline int32_t* get_address_of_gb_5() { return &___gb_5; }
	inline void set_gb_5(int32_t value)
	{
		___gb_5 = value;
	}
};


// SimpleLoading
struct  SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean SimpleLoading::loadScene
	bool ___loadScene_4;
	// System.Int32 SimpleLoading::scene
	int32_t ___scene_5;
	// UnityEngine.UI.Text SimpleLoading::loadingText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___loadingText_6;

public:
	inline static int32_t get_offset_of_loadScene_4() { return static_cast<int32_t>(offsetof(SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03, ___loadScene_4)); }
	inline bool get_loadScene_4() const { return ___loadScene_4; }
	inline bool* get_address_of_loadScene_4() { return &___loadScene_4; }
	inline void set_loadScene_4(bool value)
	{
		___loadScene_4 = value;
	}

	inline static int32_t get_offset_of_scene_5() { return static_cast<int32_t>(offsetof(SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03, ___scene_5)); }
	inline int32_t get_scene_5() const { return ___scene_5; }
	inline int32_t* get_address_of_scene_5() { return &___scene_5; }
	inline void set_scene_5(int32_t value)
	{
		___scene_5 = value;
	}

	inline static int32_t get_offset_of_loadingText_6() { return static_cast<int32_t>(offsetof(SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03, ___loadingText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_loadingText_6() const { return ___loadingText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_loadingText_6() { return &___loadingText_6; }
	inline void set_loadingText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___loadingText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingText_6), (void*)value);
	}
};


// SingleJoystick
struct  SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean SingleJoystick::joystickStaysInFixedPosition
	bool ___joystickStaysInFixedPosition_4;
	// System.Int32 SingleJoystick::joystickHandleDistance
	int32_t ___joystickHandleDistance_5;
	// UnityEngine.UI.Image SingleJoystick::bgImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___bgImage_6;
	// UnityEngine.UI.Image SingleJoystick::joystickKnobImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___joystickKnobImage_7;
	// UnityEngine.Vector3 SingleJoystick::inputVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inputVector_8;
	// UnityEngine.Vector3 SingleJoystick::unNormalizedInput
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___unNormalizedInput_9;
	// UnityEngine.Vector3[] SingleJoystick::fourCornersArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___fourCornersArray_10;
	// UnityEngine.Vector2 SingleJoystick::bgImageStartPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___bgImageStartPosition_11;

public:
	inline static int32_t get_offset_of_joystickStaysInFixedPosition_4() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___joystickStaysInFixedPosition_4)); }
	inline bool get_joystickStaysInFixedPosition_4() const { return ___joystickStaysInFixedPosition_4; }
	inline bool* get_address_of_joystickStaysInFixedPosition_4() { return &___joystickStaysInFixedPosition_4; }
	inline void set_joystickStaysInFixedPosition_4(bool value)
	{
		___joystickStaysInFixedPosition_4 = value;
	}

	inline static int32_t get_offset_of_joystickHandleDistance_5() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___joystickHandleDistance_5)); }
	inline int32_t get_joystickHandleDistance_5() const { return ___joystickHandleDistance_5; }
	inline int32_t* get_address_of_joystickHandleDistance_5() { return &___joystickHandleDistance_5; }
	inline void set_joystickHandleDistance_5(int32_t value)
	{
		___joystickHandleDistance_5 = value;
	}

	inline static int32_t get_offset_of_bgImage_6() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___bgImage_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_bgImage_6() const { return ___bgImage_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_bgImage_6() { return &___bgImage_6; }
	inline void set_bgImage_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___bgImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_joystickKnobImage_7() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___joystickKnobImage_7)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_joystickKnobImage_7() const { return ___joystickKnobImage_7; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_joystickKnobImage_7() { return &___joystickKnobImage_7; }
	inline void set_joystickKnobImage_7(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___joystickKnobImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickKnobImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_inputVector_8() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___inputVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_inputVector_8() const { return ___inputVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_inputVector_8() { return &___inputVector_8; }
	inline void set_inputVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___inputVector_8 = value;
	}

	inline static int32_t get_offset_of_unNormalizedInput_9() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___unNormalizedInput_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_unNormalizedInput_9() const { return ___unNormalizedInput_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_unNormalizedInput_9() { return &___unNormalizedInput_9; }
	inline void set_unNormalizedInput_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___unNormalizedInput_9 = value;
	}

	inline static int32_t get_offset_of_fourCornersArray_10() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___fourCornersArray_10)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_fourCornersArray_10() const { return ___fourCornersArray_10; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_fourCornersArray_10() { return &___fourCornersArray_10; }
	inline void set_fourCornersArray_10(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___fourCornersArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fourCornersArray_10), (void*)value);
	}

	inline static int32_t get_offset_of_bgImageStartPosition_11() { return static_cast<int32_t>(offsetof(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134, ___bgImageStartPosition_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_bgImageStartPosition_11() const { return ___bgImageStartPosition_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_bgImageStartPosition_11() { return &___bgImageStartPosition_11; }
	inline void set_bgImageStartPosition_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___bgImageStartPosition_11 = value;
	}
};


// SingleJoystickPlayerController
struct  SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// SingleJoystick SingleJoystickPlayerController::singleJoystick
	SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * ___singleJoystick_4;
	// UnityEngine.Transform SingleJoystickPlayerController::myRotationObject
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___myRotationObject_5;
	// System.Single SingleJoystickPlayerController::moveSpeed
	float ___moveSpeed_6;
	// System.Int32 SingleJoystickPlayerController::rotationSpeed
	int32_t ___rotationSpeed_7;
	// UnityEngine.Vector3 SingleJoystickPlayerController::input01
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___input01_8;
	// UnityEngine.Rigidbody SingleJoystickPlayerController::rigidBody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rigidBody_9;
	// UnityEngine.Animator SingleJoystickPlayerController::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_10;

public:
	inline static int32_t get_offset_of_singleJoystick_4() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___singleJoystick_4)); }
	inline SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * get_singleJoystick_4() const { return ___singleJoystick_4; }
	inline SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 ** get_address_of_singleJoystick_4() { return &___singleJoystick_4; }
	inline void set_singleJoystick_4(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * value)
	{
		___singleJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_myRotationObject_5() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___myRotationObject_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_myRotationObject_5() const { return ___myRotationObject_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_myRotationObject_5() { return &___myRotationObject_5; }
	inline void set_myRotationObject_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___myRotationObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotationObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___rotationSpeed_7)); }
	inline int32_t get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline int32_t* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(int32_t value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_input01_8() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___input01_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_input01_8() const { return ___input01_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_input01_8() { return &___input01_8; }
	inline void set_input01_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___input01_8 = value;
	}

	inline static int32_t get_offset_of_rigidBody_9() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___rigidBody_9)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rigidBody_9() const { return ___rigidBody_9; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rigidBody_9() { return &___rigidBody_9; }
	inline void set_rigidBody_9(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rigidBody_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_9), (void*)value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09, ___animator_10)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_10() const { return ___animator_10; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}
};


// SingleJoystickTouchController
struct  SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image SingleJoystickTouchController::singleJoystickBackgroundImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___singleJoystickBackgroundImage_4;
	// System.Boolean SingleJoystickTouchController::singleJoyStickAlwaysVisible
	bool ___singleJoyStickAlwaysVisible_5;
	// UnityEngine.UI.Image SingleJoystickTouchController::singleJoystickHandleImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___singleJoystickHandleImage_6;
	// SingleJoystick SingleJoystickTouchController::singleJoystick
	SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * ___singleJoystick_7;
	// System.Int32 SingleJoystickTouchController::singleSideFingerID
	int32_t ___singleSideFingerID_8;

public:
	inline static int32_t get_offset_of_singleJoystickBackgroundImage_4() { return static_cast<int32_t>(offsetof(SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF, ___singleJoystickBackgroundImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_singleJoystickBackgroundImage_4() const { return ___singleJoystickBackgroundImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_singleJoystickBackgroundImage_4() { return &___singleJoystickBackgroundImage_4; }
	inline void set_singleJoystickBackgroundImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___singleJoystickBackgroundImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleJoystickBackgroundImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_singleJoyStickAlwaysVisible_5() { return static_cast<int32_t>(offsetof(SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF, ___singleJoyStickAlwaysVisible_5)); }
	inline bool get_singleJoyStickAlwaysVisible_5() const { return ___singleJoyStickAlwaysVisible_5; }
	inline bool* get_address_of_singleJoyStickAlwaysVisible_5() { return &___singleJoyStickAlwaysVisible_5; }
	inline void set_singleJoyStickAlwaysVisible_5(bool value)
	{
		___singleJoyStickAlwaysVisible_5 = value;
	}

	inline static int32_t get_offset_of_singleJoystickHandleImage_6() { return static_cast<int32_t>(offsetof(SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF, ___singleJoystickHandleImage_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_singleJoystickHandleImage_6() const { return ___singleJoystickHandleImage_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_singleJoystickHandleImage_6() { return &___singleJoystickHandleImage_6; }
	inline void set_singleJoystickHandleImage_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___singleJoystickHandleImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleJoystickHandleImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_singleJoystick_7() { return static_cast<int32_t>(offsetof(SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF, ___singleJoystick_7)); }
	inline SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * get_singleJoystick_7() const { return ___singleJoystick_7; }
	inline SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 ** get_address_of_singleJoystick_7() { return &___singleJoystick_7; }
	inline void set_singleJoystick_7(SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * value)
	{
		___singleJoystick_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleJoystick_7), (void*)value);
	}

	inline static int32_t get_offset_of_singleSideFingerID_8() { return static_cast<int32_t>(offsetof(SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF, ___singleSideFingerID_8)); }
	inline int32_t get_singleSideFingerID_8() const { return ___singleSideFingerID_8; }
	inline int32_t* get_address_of_singleSideFingerID_8() { return &___singleSideFingerID_8; }
	inline void set_singleSideFingerID_8(int32_t value)
	{
		___singleSideFingerID_8 = value;
	}
};


// SpawnPlayer
struct  SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 SpawnPlayer::character
	int32_t ___character_4;
	// UnityEngine.GameObject SpawnPlayer::char1
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___char1_5;
	// UnityEngine.GameObject SpawnPlayer::char2
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___char2_6;
	// UnityEngine.GameObject SpawnPlayer::char3
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___char3_7;

public:
	inline static int32_t get_offset_of_character_4() { return static_cast<int32_t>(offsetof(SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56, ___character_4)); }
	inline int32_t get_character_4() const { return ___character_4; }
	inline int32_t* get_address_of_character_4() { return &___character_4; }
	inline void set_character_4(int32_t value)
	{
		___character_4 = value;
	}

	inline static int32_t get_offset_of_char1_5() { return static_cast<int32_t>(offsetof(SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56, ___char1_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_char1_5() const { return ___char1_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_char1_5() { return &___char1_5; }
	inline void set_char1_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___char1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___char1_5), (void*)value);
	}

	inline static int32_t get_offset_of_char2_6() { return static_cast<int32_t>(offsetof(SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56, ___char2_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_char2_6() const { return ___char2_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_char2_6() { return &___char2_6; }
	inline void set_char2_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___char2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___char2_6), (void*)value);
	}

	inline static int32_t get_offset_of_char3_7() { return static_cast<int32_t>(offsetof(SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56, ___char3_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_char3_7() const { return ___char3_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_char3_7() { return &___char3_7; }
	inline void set_char3_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___char3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___char3_7), (void*)value);
	}
};


// Star
struct  Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LevelManager Star::theLevelManager
	LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * ___theLevelManager_4;
	// System.Int32 Star::coinValue
	int32_t ___coinValue_5;

public:
	inline static int32_t get_offset_of_theLevelManager_4() { return static_cast<int32_t>(offsetof(Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431, ___theLevelManager_4)); }
	inline LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * get_theLevelManager_4() const { return ___theLevelManager_4; }
	inline LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D ** get_address_of_theLevelManager_4() { return &___theLevelManager_4; }
	inline void set_theLevelManager_4(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * value)
	{
		___theLevelManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theLevelManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_coinValue_5() { return static_cast<int32_t>(offsetof(Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431, ___coinValue_5)); }
	inline int32_t get_coinValue_5() const { return ___coinValue_5; }
	inline int32_t* get_address_of_coinValue_5() { return &___coinValue_5; }
	inline void set_coinValue_5(int32_t value)
	{
		___coinValue_5 = value;
	}
};


// StompEnemy
struct  StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject StompEnemy::Dieburst
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___Dieburst_4;
	// UnityEngine.Rigidbody2D StompEnemy::playerRigidbody
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___playerRigidbody_5;
	// System.Single StompEnemy::bounceForce
	float ___bounceForce_6;

public:
	inline static int32_t get_offset_of_Dieburst_4() { return static_cast<int32_t>(offsetof(StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A, ___Dieburst_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_Dieburst_4() const { return ___Dieburst_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_Dieburst_4() { return &___Dieburst_4; }
	inline void set_Dieburst_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___Dieburst_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dieburst_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerRigidbody_5() { return static_cast<int32_t>(offsetof(StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A, ___playerRigidbody_5)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_playerRigidbody_5() const { return ___playerRigidbody_5; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_playerRigidbody_5() { return &___playerRigidbody_5; }
	inline void set_playerRigidbody_5(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___playerRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRigidbody_5), (void*)value);
	}

	inline static int32_t get_offset_of_bounceForce_6() { return static_cast<int32_t>(offsetof(StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A, ___bounceForce_6)); }
	inline float get_bounceForce_6() const { return ___bounceForce_6; }
	inline float* get_address_of_bounceForce_6() { return &___bounceForce_6; }
	inline void set_bounceForce_6(float value)
	{
		___bounceForce_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// dragoncontroller
struct  dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform dragoncontroller::leftPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___leftPoint_4;
	// UnityEngine.Transform dragoncontroller::rightPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___rightPoint_5;
	// System.Single dragoncontroller::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Rigidbody2D dragoncontroller::myRigidbody
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___myRigidbody_7;
	// System.Boolean dragoncontroller::movingRight
	bool ___movingRight_8;

public:
	inline static int32_t get_offset_of_leftPoint_4() { return static_cast<int32_t>(offsetof(dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5, ___leftPoint_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_leftPoint_4() const { return ___leftPoint_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_leftPoint_4() { return &___leftPoint_4; }
	inline void set_leftPoint_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___leftPoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftPoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_rightPoint_5() { return static_cast<int32_t>(offsetof(dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5, ___rightPoint_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_rightPoint_5() const { return ___rightPoint_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_rightPoint_5() { return &___rightPoint_5; }
	inline void set_rightPoint_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___rightPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_7() { return static_cast<int32_t>(offsetof(dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5, ___myRigidbody_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_myRigidbody_7() const { return ___myRigidbody_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_myRigidbody_7() { return &___myRigidbody_7; }
	inline void set_myRigidbody_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___myRigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_7), (void*)value);
	}

	inline static int32_t get_offset_of_movingRight_8() { return static_cast<int32_t>(offsetof(dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5, ___movingRight_8)); }
	inline bool get_movingRight_8() const { return ___movingRight_8; }
	inline bool* get_address_of_movingRight_8() { return &___movingRight_8; }
	inline void set_movingRight_8(bool value)
	{
		___movingRight_8 = value;
	}
};


// fallingplatform
struct  fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D fallingplatform::rb2D
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb2D_4;
	// System.Single fallingplatform::waittime
	float ___waittime_5;

public:
	inline static int32_t get_offset_of_rb2D_4() { return static_cast<int32_t>(offsetof(fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42, ___rb2D_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb2D_4() const { return ___rb2D_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb2D_4() { return &___rb2D_4; }
	inline void set_rb2D_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb2D_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_4), (void*)value);
	}

	inline static int32_t get_offset_of_waittime_5() { return static_cast<int32_t>(offsetof(fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42, ___waittime_5)); }
	inline float get_waittime_5() const { return ___waittime_5; }
	inline float* get_address_of_waittime_5() { return &___waittime_5; }
	inline void set_waittime_5(float value)
	{
		___waittime_5 = value;
	}
};


// frogcontroller
struct  frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single frogcontroller::moveSpeed
	float ___moveSpeed_4;
	// System.Boolean frogcontroller::canMove
	bool ___canMove_5;
	// UnityEngine.Rigidbody2D frogcontroller::myRigidbody
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___myRigidbody_6;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_6() { return static_cast<int32_t>(offsetof(frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151, ___myRigidbody_6)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_myRigidbody_6() const { return ___myRigidbody_6; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_myRigidbody_6() { return &___myRigidbody_6; }
	inline void set_myRigidbody_6(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___myRigidbody_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_6), (void*)value);
	}
};


// killplayer
struct  killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LevelManager killplayer::theLevelManager
	LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * ___theLevelManager_4;
	// System.Int32 killplayer::damageToGive
	int32_t ___damageToGive_5;

public:
	inline static int32_t get_offset_of_theLevelManager_4() { return static_cast<int32_t>(offsetof(killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10, ___theLevelManager_4)); }
	inline LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * get_theLevelManager_4() const { return ___theLevelManager_4; }
	inline LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D ** get_address_of_theLevelManager_4() { return &___theLevelManager_4; }
	inline void set_theLevelManager_4(LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * value)
	{
		___theLevelManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theLevelManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_damageToGive_5() { return static_cast<int32_t>(offsetof(killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10, ___damageToGive_5)); }
	inline int32_t get_damageToGive_5() const { return ___damageToGive_5; }
	inline int32_t* get_address_of_damageToGive_5() { return &___damageToGive_5; }
	inline void set_damageToGive_5(int32_t value)
	{
		___damageToGive_5 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_47)); }
	inline float get_m_PixelsPerUnitMultiplier_47() const { return ___m_PixelsPerUnitMultiplier_47; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_47() { return &___m_PixelsPerUnitMultiplier_47; }
	inline void set_m_PixelsPerUnitMultiplier_47(float value)
	{
		___m_PixelsPerUnitMultiplier_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  m_Items[1];

public:
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 RightJoystick::GetInputDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RightJoystick_GetInputDirection_mB49AE7D0F0BC4F4DFD3935DE42B29299F2D4FEF8 (RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<RightJoystick>()
inline RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A (const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_m2EF0EF2E6E388C8D9D38C58EF5D03EA30E568E1D (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4 (Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mF0897CD627B603DE1F3714FFD8B121AB694E0B6B (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator SimpleLoading::LoadNewScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleLoading_LoadNewScene_m493B484685DD3371DD2D500F06CF4D9D6048A63A (SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m531DFAB96635B14C932754377C4D12927EDA0ECE (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void SimpleLoading/<LoadNewScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__5__ctor_m2B3396E2AB1840959DB372DDDB9C70A336F8FD83 (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * Application_LoadLevelAsync_m07E4EE37A92453DE504030655E40222317A83424 (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54 (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_mE3DD5E6421A08BACF1E86FC0EC7EE3AFA262A990 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m073AA4D13C51C5654A5983EE3FE7E2E60F7761B6 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___fourCornersArray0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * PointerEventData_get_pressEventCamera_mC505603722C7C3CBEE8C56029C2CA6C5CC769E76 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rect0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___localPoint3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m6AD8F21FFCC7723C6F507CCF2E4E2EFFC4871584 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_delta_mC5D62E985D40A7708316C6E07B699B96D9C8184E_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 SingleJoystick::GetInputDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SingleJoystick_GetInputDirection_mE260143A9F9D8885E07DB0004724548B4B22B28E (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SingleJoystick>()
inline SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
inline LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759 (const RuntimeMethod* method)
{
	return ((  LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void LevelManager::AddCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddCoins_m2C40EB51256A513218D2CFFD1AA3D25EBC5B7FFC (LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * __this, int32_t ___coinsToAdd0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void fallingplatform/<Fall>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__5__ctor_mB263FE46009FFB17AC345ED7CB7480C42E4C3503 (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, bool ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RightJoystickPlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickPlayerController_Start_mC10DF838AF188A1F7E2C90B50C0F665D3BFF7B71 (RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightJoystickPlayerController_Start_mC10DF838AF188A1F7E2C90B50C0F665D3BFF7B71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral1F4A2EC7FEDC2FBD1E92EB1A38C410A5D3BCBE16, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_001f:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_4 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(L_3, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rigidBody_10(L_4);
	}

IL_0030:
	{
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_5 = __this->get_rightJoystick_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralAD93CE2D750F8C4B15140064922E5E25151B087D, /*hidden argument*/NULL);
	}

IL_0048:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_rotationTarget_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralAA8D44116DF9A20BE647E9D47217510DD2A8204E, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void RightJoystickPlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickPlayerController_Update_mD45A78999D66A0EDB2CEAD099A246CBFAB0AC827 (RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RightJoystickPlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickPlayerController_FixedUpdate_m7F909B7B8DCC582D4362FF56B5ED5EBE957D9BB2 (RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightJoystickPlayerController_FixedUpdate_m7F909B7B8DCC582D4362FF56B5ED5EBE957D9BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_0 = __this->get_rightJoystick_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RightJoystick_GetInputDirection_mB49AE7D0F0BC4F4DFD3935DE42B29299F2D4FEF8(L_0, /*hidden argument*/NULL);
		__this->set_rightJoystickInput_9(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_rightJoystickInput_9();
		float L_3 = L_2->get_x_2();
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_rightJoystickInput_9();
		float L_5 = L_4->get_y_3();
		V_1 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_rightJoystickInput_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_9 = __this->get_animator_8();
		NullCheck(L_9);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_9, _stringLiteralA21327300E88EBC6B816F5AA112B05B27AC75005, (bool)0, /*hidden argument*/NULL);
	}

IL_004c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_rightJoystickInput_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_12 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0123;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = atan2f(L_13, L_14);
		V_2 = L_15;
		float L_16 = V_0;
		float L_17 = V_2;
		float L_18 = cosf(L_17);
		float L_19 = fabsf(L_18);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_19));
		float L_20 = V_1;
		float L_21 = V_2;
		float L_22 = sinf(L_21);
		float L_23 = fabsf(L_22);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_23));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		float* L_26 = (&V_3)->get_address_of_x_2();
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		float L_29 = V_0;
		*((float*)L_27) = (float)((float)il2cpp_codegen_add((float)L_28, (float)L_29));
		float* L_30 = (&V_3)->get_address_of_z_4();
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		float L_33 = V_1;
		*((float*)L_31) = (float)((float)il2cpp_codegen_add((float)L_32, (float)L_33));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_34, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_40 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = __this->get_rotationTarget_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = __this->get_rotationTarget_5();
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_42, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_44, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (45.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_45, L_46, /*hidden argument*/NULL);
		int32_t L_48 = __this->get_rotationSpeed_7();
		float L_49 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_43, L_47, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_48))), (float)L_49)), /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_41, L_50, /*hidden argument*/NULL);
	}

IL_0112:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_51 = __this->get_animator_8();
		NullCheck(L_51);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_51, _stringLiteralA21327300E88EBC6B816F5AA112B05B27AC75005, (bool)1, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return;
	}
}
// System.Void RightJoystickPlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickPlayerController__ctor_m6C6EA131FD6014AD7FE3363E93F34A8D8109D1A6 (RightJoystickPlayerController_tAC8B5FECBDB02AC296CAC79A0B92C45FB2D25795 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_6((6.0f));
		__this->set_rotationSpeed_7(8);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void RightJoystickTouchContoller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickTouchContoller_Start_m5B1C9DDF81DDAFB86298DD7255FA07A721CAD26F (RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightJoystickTouchContoller_Start_m5B1C9DDF81DDAFB86298DD7255FA07A721CAD26F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_0);
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_1 = Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34(L_0, /*hidden argument*/Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralDA239BBD2992A7BD75A32D31CCBB3510E30A731C, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_001f:
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_3);
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_4 = Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34(L_3, /*hidden argument*/Component_GetComponent_TisRightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7_m3F9EA2FBA6A9AAAB093D0B5372B6E77BA8B41D34_RuntimeMethod_var);
		__this->set_rightJoystick_7(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = __this->get_rightJoystickBackgroundImage_4();
		bool L_6 = __this->get_rightJoyStickAlwaysVisible_5();
		NullCheck(L_5);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0041:
	{
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_7 = __this->get_rightJoystick_7();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_9, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralE45668AFC6C88CF28921EAD7D245BBE809540508, /*hidden argument*/NULL);
		return;
	}

IL_006a:
	{
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_12 = __this->get_rightJoystick_7();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_14, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		__this->set_rightJoystickHandleImage_6(L_15);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_16 = __this->get_rightJoystickHandleImage_6();
		bool L_17 = __this->get_rightJoyStickAlwaysVisible_5();
		NullCheck(L_16);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RightJoystickTouchContoller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickTouchContoller_Update_m424B27829432E0B50C5DC74712D98E023D0BCC53 (RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RightJoystickTouchContoller::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickTouchContoller_FixedUpdate_m2F20FD70FAB2045132F3614C0C4DAB59C0FE1D69 (RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightJoystickTouchContoller_FixedUpdate_m2F20FD70FAB2045132F3614C0C4DAB59C0FE1D69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_02d7;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_1 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_02cc;
	}

IL_0018:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0283;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		int32_t L_9 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)(((float)((float)((int32_t)((int32_t)L_9/(int32_t)2)))))))))
		{
			goto IL_0283;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = Touch_get_fingerId_m2EF0EF2E6E388C8D9D38C58EF5D03EA30E568E1D((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		__this->set_rightSideFingerID_8(L_12);
		RightJoystick_t811A34F09CBF7A65CD6E60E2D33C261AD29B38F7 * L_13 = __this->get_rightJoystick_7();
		NullCheck(L_13);
		bool L_14 = L_13->get_joystickStaysInFixedPosition_4();
		if (L_14)
		{
			goto IL_0189;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_15);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_16 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), /*hidden argument*/NULL);
		float L_21 = L_20.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_22 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_22);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_23 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		(&V_2)->set_x_2(((float)il2cpp_codegen_add((float)L_21, (float)((float)((float)L_25/(float)(2.0f))))));
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), /*hidden argument*/NULL);
		float L_29 = L_28.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_30 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_30);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_31 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_1();
		(&V_2)->set_y_3(((float)il2cpp_codegen_subtract((float)L_29, (float)((float)((float)L_33/(float)(2.0f))))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_2;
		float L_35 = L_34.get_x_2();
		int32_t L_36 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_37 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_37);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_38 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_0();
		int32_t L_41 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_42 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)((int32_t)L_36/(int32_t)2))))), (float)L_40)), (((float)((float)L_41))), /*hidden argument*/NULL);
		(&V_2)->set_x_2(L_42);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_2;
		float L_44 = L_43.get_y_3();
		int32_t L_45 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_46 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_46);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_47 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_1();
		float L_50 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_44, (0.0f), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_45))), (float)L_49)), /*hidden argument*/NULL);
		(&V_2)->set_y_3(L_50);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_51 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_51);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_52 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_2;
		NullCheck(L_52);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_52, L_53, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_54 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_54);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_54, (bool)1, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_55 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_55);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_56 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_56, 0, /*hidden argument*/NULL);
		NullCheck(L_57);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_58 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_57, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_58);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_58, (bool)1, /*hidden argument*/NULL);
		goto IL_0283;
	}

IL_0189:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_59 = V_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60))), /*hidden argument*/NULL);
		float L_62 = L_61.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_63 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_63);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_64 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_64, /*hidden argument*/NULL);
		float L_66 = L_65.get_x_2();
		if ((!(((float)L_62) <= ((float)L_66))))
		{
			goto IL_0283;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_69 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), /*hidden argument*/NULL);
		float L_70 = L_69.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_71 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_71);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_72 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_2();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_75 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_75);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_76 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_77 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_76, /*hidden argument*/NULL);
		float L_78 = L_77.get_x_0();
		if ((!(((float)L_70) >= ((float)((float)il2cpp_codegen_subtract((float)L_74, (float)L_78))))))
		{
			goto IL_0283;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_79 = V_0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_81 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), /*hidden argument*/NULL);
		float L_82 = L_81.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_83 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_83);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_84 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_84, /*hidden argument*/NULL);
		float L_86 = L_85.get_y_3();
		if ((!(((float)L_82) >= ((float)L_86))))
		{
			goto IL_0283;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_87 = V_0;
		int32_t L_88 = V_1;
		NullCheck(L_87);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_89 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88))), /*hidden argument*/NULL);
		float L_90 = L_89.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_91 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_91);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_92 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_92, /*hidden argument*/NULL);
		float L_94 = L_93.get_y_3();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_95 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_95);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_96 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_97 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_96, /*hidden argument*/NULL);
		float L_98 = L_97.get_y_1();
		if ((!(((float)L_90) <= ((float)((float)il2cpp_codegen_add((float)L_94, (float)L_98))))))
		{
			goto IL_0283;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_99 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_99);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_99, (bool)1, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_100 = __this->get_rightJoystickBackgroundImage_4();
		NullCheck(L_100);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_101 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_101, 0, /*hidden argument*/NULL);
		NullCheck(L_102);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_103 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_102, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_103);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_103, (bool)1, /*hidden argument*/NULL);
	}

IL_0283:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_104 = V_0;
		int32_t L_105 = V_1;
		NullCheck(L_104);
		int32_t L_106 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_106) == ((uint32_t)3))))
		{
			goto IL_02c8;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_107 = V_0;
		int32_t L_108 = V_1;
		NullCheck(L_107);
		int32_t L_109 = Touch_get_fingerId_m2EF0EF2E6E388C8D9D38C58EF5D03EA30E568E1D((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108))), /*hidden argument*/NULL);
		int32_t L_110 = __this->get_rightSideFingerID_8();
		if ((!(((uint32_t)L_109) == ((uint32_t)L_110))))
		{
			goto IL_02c8;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_111 = __this->get_rightJoystickBackgroundImage_4();
		bool L_112 = __this->get_rightJoyStickAlwaysVisible_5();
		NullCheck(L_111);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_111, L_112, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_113 = __this->get_rightJoystickHandleImage_6();
		bool L_114 = __this->get_rightJoyStickAlwaysVisible_5();
		NullCheck(L_113);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_113, L_114, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		int32_t L_115 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
	}

IL_02cc:
	{
		int32_t L_116 = V_1;
		int32_t L_117 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0018;
		}
	}

IL_02d7:
	{
		return;
	}
}
// System.Void RightJoystickTouchContoller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightJoystickTouchContoller__ctor_mFF44C10884E961AEE08F2BAF404B9F4287D95DC3 (RightJoystickTouchContoller_t2E805A6AAEC248F9FBC81868B642883D77B9E5CA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SetCharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_Start_m8FCFC10D35B2DD37E228E48916557FC5B6B90CBA (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetCharacter_Start_m8FCFC10D35B2DD37E228E48916557FC5B6B90CBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral505A44FACAA3E758845F6E101F4E21F9D99ACF63, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral505A44FACAA3E758845F6E101F4E21F9D99ACF63, /*hidden argument*/NULL);
		__this->set_gb_5(L_1);
	}

IL_001c:
	{
		int32_t L_2 = __this->get_gb_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = __this->get_greenbird_4();
		NullCheck(L_3);
		Selectable_set_interactable_mF0897CD627B603DE1F3714FFD8B121AB694E0B6B(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void SetCharacter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_Update_m59F2A4DAEF4CE51377E08402B378619E037B0F40 (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SetCharacter::yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_yellow_m6937D513AA729E122032ED7C15BAC28E04BFF7F9 (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetCharacter_yellow_m6937D513AA729E122032ED7C15BAC28E04BFF7F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SetCharacter::red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_red_m530A883E08D1FC22157014E0A7C3C132457D941B (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetCharacter_red_m530A883E08D1FC22157014E0A7C3C132457D941B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SetCharacter::green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_green_m1B75A0C66AE9CE61011EAD7F9F7F9A24038C9E62 (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetCharacter_green_m1B75A0C66AE9CE61011EAD7F9F7F9A24038C9E62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SetCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter__ctor_mD06678E1B2AC6E439FA92638BCF8B17AF79ABE17 (SetCharacter_tDBCBCDED32565F7BA8DA94B9647173E79A557979 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SimpleLoading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLoading_Start_mC63474A552C9CDC7E138351DA08BF5F7C5ABF612 (SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleLoading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLoading_Update_mEEC7BD790569A927E7771E2D37E0099D4CC56018 (SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleLoading_Update_mEEC7BD790569A927E7771E2D37E0099D4CC56018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_loadScene_4((bool)1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_loadingText_6();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralB04BA49F848624BB97AB094A2631D2AD74913498);
		RuntimeObject* L_1 = SimpleLoading_LoadNewScene_m493B484685DD3371DD2D500F06CF4D9D6048A63A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_loadScene_4();
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_loadingText_6();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_loadingText_6();
		NullCheck(L_4);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.get_r_0();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get_loadingText_6();
		NullCheck(L_7);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		float L_9 = L_8.get_g_1();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_10 = __this->get_loadingText_6();
		NullCheck(L_10);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		float L_12 = L_11.get_b_2();
		float L_13 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_PingPong_m531DFAB96635B14C932754377C4D12927EDA0ECE(L_13, (1.0f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_15), L_6, L_9, L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_15);
	}

IL_007b:
	{
		return;
	}
}
// System.Collections.IEnumerator SimpleLoading::LoadNewScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleLoading_LoadNewScene_m493B484685DD3371DD2D500F06CF4D9D6048A63A (SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleLoading_LoadNewScene_m493B484685DD3371DD2D500F06CF4D9D6048A63A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * L_0 = (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 *)il2cpp_codegen_object_new(U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602_il2cpp_TypeInfo_var);
		U3CLoadNewSceneU3Ed__5__ctor_m2B3396E2AB1840959DB372DDDB9C70A336F8FD83(L_0, 0, /*hidden argument*/NULL);
		U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SimpleLoading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLoading__ctor_m1E75B0F50FD76DF0C6BD998C6359F77CF32D6DD2 (SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SimpleLoading_<LoadNewScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__5__ctor_m2B3396E2AB1840959DB372DDDB9C70A336F8FD83 (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SimpleLoading_<LoadNewScene>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__5_System_IDisposable_Dispose_mEA65BB337ED2912DE205CAAA6772664BFFD0738F (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SimpleLoading_<LoadNewScene>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadNewSceneU3Ed__5_MoveNext_mB15F346C46D5F5D0CC6E77B841612358B7F15907 (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		SimpleLoading_t15B7CE527F043C423F6124BEFFB854D3F1AA2D03 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_scene_5();
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_6 = Application_LoadLevelAsync_m07E4EE37A92453DE504030655E40222317A83424(L_5, /*hidden argument*/NULL);
		__this->set_U3CasyncU3E5__2_3(L_6);
		goto IL_0048;
	}

IL_0031:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0048:
	{
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_7 = __this->get_U3CasyncU3E5__2_3();
		NullCheck(L_7);
		bool L_8 = AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object SimpleLoading_<LoadNewScene>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNewSceneU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m326B889BA02E09433C0A0DB32FE6E95B33F5C28D (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleLoading_<LoadNewScene>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_Reset_m3E6136E3CD7BD7D0D06ED5402175F79AA1A054D4 (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_Reset_m3E6136E3CD7BD7D0D06ED5402175F79AA1A054D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_Reset_m3E6136E3CD7BD7D0D06ED5402175F79AA1A054D4_RuntimeMethod_var);
	}
}
// System.Object SimpleLoading_<LoadNewScene>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNewSceneU3Ed__5_System_Collections_IEnumerator_get_Current_m1E37E4F06F11C2FF69BEF4DAEAD29A4CF67C448F (U3CLoadNewSceneU3Ed__5_tF6B06C601144C62584A500F6639B31D37A2A5602 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SingleJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystick_Start_m142BD1F23F82A2F511E0DE05A7174B27BC88DFD7 (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystick_Start_m142BD1F23F82A2F511E0DE05A7174B27BC88DFD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3280F17B78A8B414C2FA22A1088EE1D9BF68F754, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_4 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_3, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral0BCF6249BD4C7A4BA31AA27DCD6E95E313D6A0C9, /*hidden argument*/NULL);
	}

IL_003b:
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_6 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0102;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_9, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0102;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		__this->set_bgImage_6(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_14, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		__this->set_joystickKnobImage_7(L_15);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_16 = __this->get_bgImage_6();
		NullCheck(L_16);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_17 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetAsLastSibling_mE3DD5E6421A08BACF1E86FC0EC7EE3AFA262A990(L_17, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_18 = __this->get_bgImage_6();
		NullCheck(L_18);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_19 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_18, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = __this->get_fourCornersArray_10();
		NullCheck(L_19);
		RectTransform_GetWorldCorners_m073AA4D13C51C5654A5983EE3FE7E2E60F7761B6(L_19, L_20, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = __this->get_fourCornersArray_10();
		NullCheck(L_21);
		int32_t L_22 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_23, /*hidden argument*/NULL);
		__this->set_bgImageStartPosition_11(L_24);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_25 = __this->get_bgImage_6();
		NullCheck(L_25);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_26 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_25, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_27), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF(L_26, L_27, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_28 = __this->get_bgImage_6();
		NullCheck(L_28);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_29 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_28, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = __this->get_bgImageStartPosition_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_29, L_31, /*hidden argument*/NULL);
	}

IL_0102:
	{
		return;
	}
}
// System.Void SingleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystick_OnDrag_m2627EE8AA670246379BAA7BC7FAEB9918221E980 (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___ped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystick_OnDrag_m2627EE8AA670246379BAA7BC7FAEB9918221E980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * G_B3_0 = NULL;
	SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * G_B2_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * G_B4_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_0 = L_0;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = __this->get_bgImage_6();
		NullCheck(L_1);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_1, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_3 = ___ped0;
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline(L_3, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_5 = ___ped0;
		NullCheck(L_5);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = PointerEventData_get_pressEventCamera_mC505603722C7C3CBEE8C56029C2CA6C5CC769E76(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		bool L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153(L_2, L_4, L_6, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0220;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = __this->get_bgImage_6();
		NullCheck(L_10);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		(&V_0)->set_x_0(((float)((float)L_9/(float)L_13)));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_0;
		float L_15 = L_14.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_16 = __this->get_bgImage_6();
		NullCheck(L_16);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_17 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		(&V_0)->set_y_1(((float)((float)L_15/(float)L_19)));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_0;
		float L_21 = L_20.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = V_0;
		float L_23 = L_22.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_24), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_23, (float)(2.0f))), (float)(1.0f))), (0.0f), /*hidden argument*/NULL);
		__this->set_inputVector_8(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_inputVector_8();
		__this->set_unNormalizedInput_9(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_26 = __this->get_address_of_inputVector_8();
		float L_27 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_26, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((float)L_27) > ((float)(1.0f))))
		{
			G_B3_0 = __this;
			goto IL_00ca;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_inputVector_8();
		G_B4_0 = L_28;
		G_B4_1 = G_B2_0;
		goto IL_00d5;
	}

IL_00ca:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_29 = __this->get_address_of_inputVector_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_29, /*hidden argument*/NULL);
		G_B4_0 = L_30;
		G_B4_1 = G_B3_0;
	}

IL_00d5:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_inputVector_8(G_B4_0);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_31 = __this->get_joystickKnobImage_7();
		NullCheck(L_31);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_32 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_33 = __this->get_address_of_inputVector_8();
		float L_34 = L_33->get_x_2();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_35 = __this->get_bgImage_6();
		NullCheck(L_35);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_36 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_0();
		int32_t L_39 = __this->get_joystickHandleDistance_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_40 = __this->get_address_of_inputVector_8();
		float L_41 = L_40->get_y_3();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_42 = __this->get_bgImage_6();
		NullCheck(L_42);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_43 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_y_1();
		int32_t L_46 = __this->get_joystickHandleDistance_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m6AD8F21FFCC7723C6F507CCF2E4E2EFFC4871584((&L_47), ((float)il2cpp_codegen_multiply((float)L_34, (float)((float)((float)L_38/(float)(((float)((float)L_39))))))), ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)((float)L_45/(float)(((float)((float)L_46))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_47, /*hidden argument*/NULL);
		NullCheck(L_32);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_32, L_48, /*hidden argument*/NULL);
		bool L_49 = __this->get_joystickStaysInFixedPosition_4();
		if (L_49)
		{
			goto IL_0220;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_50 = __this->get_address_of_unNormalizedInput_9();
		float L_51 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_50, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_52 = __this->get_address_of_inputVector_8();
		float L_53 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_52, /*hidden argument*/NULL);
		if ((!(((float)L_51) > ((float)L_53))))
		{
			goto IL_0220;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_54 = __this->get_bgImage_6();
		NullCheck(L_54);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_55 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_55, /*hidden argument*/NULL);
		V_1 = L_56;
		float* L_57 = (&V_1)->get_address_of_x_2();
		float* L_58 = L_57;
		float L_59 = *((float*)L_58);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_60 = ___ped0;
		NullCheck(L_60);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61 = PointerEventData_get_delta_mC5D62E985D40A7708316C6E07B699B96D9C8184E_inline(L_60, /*hidden argument*/NULL);
		float L_62 = L_61.get_x_0();
		*((float*)L_58) = (float)((float)il2cpp_codegen_add((float)L_59, (float)L_62));
		float* L_63 = (&V_1)->get_address_of_y_3();
		float* L_64 = L_63;
		float L_65 = *((float*)L_64);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_66 = ___ped0;
		NullCheck(L_66);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_67 = PointerEventData_get_delta_mC5D62E985D40A7708316C6E07B699B96D9C8184E_inline(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_y_1();
		*((float*)L_64) = (float)((float)il2cpp_codegen_add((float)L_65, (float)L_68));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_1;
		float L_70 = L_69.get_x_2();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_71 = __this->get_bgImage_6();
		NullCheck(L_71);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_72 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_73 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_0();
		int32_t L_75 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_76 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_70, ((float)il2cpp_codegen_add((float)(0.0f), (float)L_74)), (((float)((float)L_75))), /*hidden argument*/NULL);
		(&V_1)->set_x_2(L_76);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77 = V_1;
		float L_78 = L_77.get_y_3();
		int32_t L_79 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_80 = __this->get_bgImage_6();
		NullCheck(L_80);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_81 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_82 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_81, /*hidden argument*/NULL);
		float L_83 = L_82.get_y_1();
		float L_84 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_78, (0.0f), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_79))), (float)L_83)), /*hidden argument*/NULL);
		(&V_1)->set_y_3(L_84);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_85 = __this->get_bgImage_6();
		NullCheck(L_85);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_86 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_85, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = V_1;
		NullCheck(L_86);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_86, L_87, /*hidden argument*/NULL);
	}

IL_0220:
	{
		return;
	}
}
// System.Void SingleJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystick_OnPointerDown_mC421BECC413ADC8E77F29B2CCAAE64C92ED1694E (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___ped0, const RuntimeMethod* method)
{
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___ped0;
		VirtActionInvoker1< PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * >::Invoke(7 /* System.Void SingleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void SingleJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystick_OnPointerUp_m2558A2069C7E23E3455F5C637AE80DEC5E9E329B (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___ped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystick_OnPointerUp_m2558A2069C7E23E3455F5C637AE80DEC5E9E329B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_inputVector_8(L_0);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = __this->get_joystickKnobImage_7();
		NullCheck(L_1);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 SingleJoystick::GetInputDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SingleJoystick_GetInputDirection_mE260143A9F9D8885E07DB0004724548B4B22B28E (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_inputVector_8();
		float L_1 = L_0->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_inputVector_8();
		float L_3 = L_2->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void SingleJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystick__ctor_mFF3C923EC8C9EB0705D97CA21A19A9193E0B3C17 (SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystick__ctor_mFF3C923EC8C9EB0705D97CA21A19A9193E0B3C17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_joystickHandleDistance_5(4);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_fourCornersArray_10(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SingleJoystickPlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickPlayerController_Start_m1891006C102A20A443B4D801C00D5CB95785005D (SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystickPlayerController_Start_m1891006C102A20A443B4D801C00D5CB95785005D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral1F4A2EC7FEDC2FBD1E92EB1A38C410A5D3BCBE16, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_001f:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_4 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(L_3, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rigidBody_9(L_4);
	}

IL_0030:
	{
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_5 = __this->get_singleJoystick_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral0513C189DD571EE0E8DBA6B35B53F2335861290E, /*hidden argument*/NULL);
	}

IL_0048:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_myRotationObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral6A155005F05C821D01E9E46CF14FDAE773BF665E, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void SingleJoystickPlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickPlayerController_Update_m1179372F0C7D56CE611560418389E77D4C1021B7 (SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SingleJoystickPlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickPlayerController_FixedUpdate_mA026AF0BFC571AF839F39CBB5ADF5D1ECAC70EA7 (SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystickPlayerController_FixedUpdate_mA026AF0BFC571AF839F39CBB5ADF5D1ECAC70EA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_0 = __this->get_singleJoystick_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SingleJoystick_GetInputDirection_mE260143A9F9D8885E07DB0004724548B4B22B28E(L_0, /*hidden argument*/NULL);
		__this->set_input01_8(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_input01_8();
		float L_3 = L_2->get_x_2();
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_input01_8();
		float L_5 = L_4->get_y_3();
		V_1 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_input01_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_9 = __this->get_animator_10();
		NullCheck(L_9);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_9, _stringLiteral0896EE4F51E0F1898880069A1E95A0452DFE8C6B, (bool)0, /*hidden argument*/NULL);
	}

IL_004c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_input01_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_12 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0178;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = atan2f(L_13, L_14);
		V_2 = L_15;
		float L_16 = V_0;
		float L_17 = V_2;
		float L_18 = cosf(L_17);
		float L_19 = fabsf(L_18);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_19));
		float L_20 = V_1;
		float L_21 = V_2;
		float L_22 = sinf(L_21);
		float L_23 = fabsf(L_22);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_23));
		float L_24 = V_0;
		float L_25 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_24, (0.0f), L_25, /*hidden argument*/NULL);
		__this->set_input01_8(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_input01_8();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_27, L_28, /*hidden argument*/NULL);
		__this->set_input01_8(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = __this->get_input01_8();
		float L_31 = __this->get_moveSpeed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, L_31, /*hidden argument*/NULL);
		__this->set_input01_8(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		float* L_35 = (&V_3)->get_address_of_x_2();
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = V_0;
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)L_38));
		float* L_39 = (&V_3)->get_address_of_z_4();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		float L_42 = V_1;
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)L_42));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_44, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_43, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_49 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0139;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = __this->get_myRotationObject_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_myRotationObject_5();
		NullCheck(L_51);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_53, /*hidden argument*/NULL);
		int32_t L_55 = __this->get_rotationSpeed_7();
		float L_56 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_57 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_52, L_54, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_55))), (float)L_56)), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_50, L_57, /*hidden argument*/NULL);
	}

IL_0139:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_58 = __this->get_animator_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_59 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_58, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0158;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_60 = __this->get_animator_10();
		NullCheck(L_60);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_60, _stringLiteral0896EE4F51E0F1898880069A1E95A0452DFE8C6B, (bool)1, /*hidden argument*/NULL);
	}

IL_0158:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_61 = __this->get_rigidBody_9();
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = __this->get_input01_8();
		float L_64 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_63, L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_62, L_65, /*hidden argument*/NULL);
	}

IL_0178:
	{
		return;
	}
}
// System.Void SingleJoystickPlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickPlayerController__ctor_m871E9D56FF07D158966760E7B8B2881A9C573EB2 (SingleJoystickPlayerController_tC161EF1760949E6871DD8528060B8D6315F0AB09 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_6((6.0f));
		__this->set_rotationSpeed_7(8);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SingleJoystickTouchController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickTouchController_Start_m3365F9A32BBB41A4F072FC521DBCC02272AB3B2A (SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystickTouchController_Start_m3365F9A32BBB41A4F072FC521DBCC02272AB3B2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_0);
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_1 = Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709(L_0, /*hidden argument*/Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral7F04F2484D275B8AF1CC8D93C27E53B2965C58ED, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_001f:
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_3);
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_4 = Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709(L_3, /*hidden argument*/Component_GetComponent_TisSingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134_mA61745E0D703B2D9CC4EB2AFA50931501C3D7709_RuntimeMethod_var);
		__this->set_singleJoystick_7(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = __this->get_singleJoystickBackgroundImage_4();
		bool L_6 = __this->get_singleJoyStickAlwaysVisible_5();
		NullCheck(L_5);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0041:
	{
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_7 = __this->get_singleJoystick_7();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_9, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralB1F936CB193E9D04DB41AAFF3A13E00500C7903B, /*hidden argument*/NULL);
		return;
	}

IL_006a:
	{
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_12 = __this->get_singleJoystick_7();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_14, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		__this->set_singleJoystickHandleImage_6(L_15);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_16 = __this->get_singleJoystickHandleImage_6();
		bool L_17 = __this->get_singleJoyStickAlwaysVisible_5();
		NullCheck(L_16);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SingleJoystickTouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickTouchController_Update_m13B0D725BABD9B581C8D54F385A60BD3DAEF4485 (SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SingleJoystickTouchController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickTouchController_FixedUpdate_m7EC522D44AF678ACB5969B4B499EC1479E9E7A01 (SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleJoystickTouchController_FixedUpdate_m7EC522D44AF678ACB5969B4B499EC1479E9E7A01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_02b6;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_1 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_02ab;
	}

IL_0018:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0262;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = Touch_get_fingerId_m2EF0EF2E6E388C8D9D38C58EF5D03EA30E568E1D((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		__this->set_singleSideFingerID_8(L_7);
		SingleJoystick_t95CF3AF8F4EECEBEF694776288D9C116E6771134 * L_8 = __this->get_singleJoystick_7();
		NullCheck(L_8);
		bool L_9 = L_8->get_joystickStaysInFixedPosition_4();
		if (L_9)
		{
			goto IL_0168;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_10);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), /*hidden argument*/NULL);
		float L_16 = L_15.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_17 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_17);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_18 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		(&V_2)->set_x_2(((float)il2cpp_codegen_add((float)L_16, (float)((float)((float)L_20/(float)(2.0f))))));
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), /*hidden argument*/NULL);
		float L_24 = L_23.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_25 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_25);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_26 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		(&V_2)->set_y_3(((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_28/(float)(2.0f))))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_2;
		float L_30 = L_29.get_x_2();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_31 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_31);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_32 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_0();
		int32_t L_35 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_36 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_30, ((float)il2cpp_codegen_add((float)(0.0f), (float)L_34)), (((float)((float)L_35))), /*hidden argument*/NULL);
		(&V_2)->set_x_2(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_2;
		float L_38 = L_37.get_y_3();
		int32_t L_39 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_40 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_40);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_41 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_1();
		float L_44 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_38, (0.0f), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_39))), (float)L_43)), /*hidden argument*/NULL);
		(&V_2)->set_y_3(L_44);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_45 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_45);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_46 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_2;
		NullCheck(L_46);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_46, L_47, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_48 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_48);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_48, (bool)1, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_49 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_49);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_50 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_50, 0, /*hidden argument*/NULL);
		NullCheck(L_51);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_52 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_51, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_52);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_52, (bool)1, /*hidden argument*/NULL);
		goto IL_0262;
	}

IL_0168:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54))), /*hidden argument*/NULL);
		float L_56 = L_55.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_57 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_57);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_58 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_x_2();
		if ((!(((float)L_56) <= ((float)L_60))))
		{
			goto IL_0262;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), /*hidden argument*/NULL);
		float L_64 = L_63.get_x_0();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_65 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_65);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_66 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_x_2();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_69 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_69);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_70 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_71 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_x_0();
		if ((!(((float)L_64) >= ((float)((float)il2cpp_codegen_subtract((float)L_68, (float)L_72))))))
		{
			goto IL_0262;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_73 = V_0;
		int32_t L_74 = V_1;
		NullCheck(L_73);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_75 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), /*hidden argument*/NULL);
		float L_76 = L_75.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_77 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_77);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_78 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_78, /*hidden argument*/NULL);
		float L_80 = L_79.get_y_3();
		if ((!(((float)L_76) >= ((float)L_80))))
		{
			goto IL_0262;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_81 = V_0;
		int32_t L_82 = V_1;
		NullCheck(L_81);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_83 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82))), /*hidden argument*/NULL);
		float L_84 = L_83.get_y_1();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_85 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_85);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_86 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_86, /*hidden argument*/NULL);
		float L_88 = L_87.get_y_3();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_89 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_89);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_90 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_91 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_90, /*hidden argument*/NULL);
		float L_92 = L_91.get_y_1();
		if ((!(((float)L_84) <= ((float)((float)il2cpp_codegen_add((float)L_88, (float)L_92))))))
		{
			goto IL_0262;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_93 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_93);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_93, (bool)1, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_94 = __this->get_singleJoystickBackgroundImage_4();
		NullCheck(L_94);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_95 = Graphic_get_rectTransform_m025371162D3A3FCD6D4692B43D0BD80602D0AFC4(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_96 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_95, 0, /*hidden argument*/NULL);
		NullCheck(L_96);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_97 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_96, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_97);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_97, (bool)1, /*hidden argument*/NULL);
	}

IL_0262:
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_98 = V_0;
		int32_t L_99 = V_1;
		NullCheck(L_98);
		int32_t L_100 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_100) == ((uint32_t)3))))
		{
			goto IL_02a7;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_101 = V_0;
		int32_t L_102 = V_1;
		NullCheck(L_101);
		int32_t L_103 = Touch_get_fingerId_m2EF0EF2E6E388C8D9D38C58EF5D03EA30E568E1D((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102))), /*hidden argument*/NULL);
		int32_t L_104 = __this->get_singleSideFingerID_8();
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_02a7;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_105 = __this->get_singleJoystickBackgroundImage_4();
		bool L_106 = __this->get_singleJoyStickAlwaysVisible_5();
		NullCheck(L_105);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_105, L_106, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_107 = __this->get_singleJoystickHandleImage_6();
		bool L_108 = __this->get_singleJoyStickAlwaysVisible_5();
		NullCheck(L_107);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_107, L_108, /*hidden argument*/NULL);
	}

IL_02a7:
	{
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_02ab:
	{
		int32_t L_110 = V_1;
		int32_t L_111 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0018;
		}
	}

IL_02b6:
	{
		return;
	}
}
// System.Void SingleJoystickTouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleJoystickTouchController__ctor_mAAA71A4646EB2C105C162C278A8C21D5846FE92E (SingleJoystickTouchController_t807A286FF2CDCF26A3DDACD4C034CDCD655181AF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SpawnPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlayer_Start_m7EF1DD4B932B81294D6294E9E8D36BBA410512EB (SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnPlayer_Start_m7EF1DD4B932B81294D6294E9E8D36BBA410512EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteralF0DB3FA401AEA04B711D6F1F3630552EAAEE8E59, /*hidden argument*/NULL);
		__this->set_character_4(L_1);
	}

IL_001c:
	{
		int32_t L_2 = __this->get_character_4();
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_char1_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_5, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_8 = __this->get_character_4();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_char2_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_9, L_11, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
	}

IL_0071:
	{
		int32_t L_14 = __this->get_character_4();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_009c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_char3_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
	}

IL_009c:
	{
		return;
	}
}
// System.Void SpawnPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlayer_Update_m93D41C2C73A231DFAFAE6B0A63FFEFE93B463802 (SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SpawnPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlayer__ctor_mC24063B47AD6F4F2D0267B1D90CF253D810E8AB1 (SpawnPlayer_t657F85F6EE990A2BBA33F2B6CCE1D5D0030F4D56 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Star::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_Start_mCCEB2062ABDD12F2914B2CBB6B6A5D6C41D55E70 (Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Star_Start_mCCEB2062ABDD12F2914B2CBB6B6A5D6C41D55E70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * L_0 = Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759(/*hidden argument*/Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759_RuntimeMethod_var);
		__this->set_theLevelManager_4(L_0);
		return;
	}
}
// System.Void Star::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_Update_mFE4DC1FB1BB91F60AA3A1A9896B69FEC23255D3F (Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Star::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star_OnTriggerEnter2D_m18CD1EF3DA7717ADEBD032650142C107D83E1E1F (Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Star_OnTriggerEnter2D_m18CD1EF3DA7717ADEBD032650142C107D83E1E1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * L_3 = __this->get_theLevelManager_4();
		int32_t L_4 = __this->get_coinValue_5();
		NullCheck(L_3);
		LevelManager_AddCoins_m2C40EB51256A513218D2CFFD1AA3D25EBC5B7FFC(L_3, L_4, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Star::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Star__ctor_m98D1B037D731F08F82C2BBAF867D05BCD1091145 (Star_t0D6FF331D8D2BCD83AFEBA2DF08B4A7246D29431 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void StompEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StompEnemy_Start_m774943B657D7FFFBC23D19B5F96EF2A36251FACA (StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StompEnemy_Start_m774943B657D7FFFBC23D19B5F96EF2A36251FACA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(L_1, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_playerRigidbody_5(L_2);
		return;
	}
}
// System.Void StompEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StompEnemy_Update_m22ACB731C0A4D898B3AAD7D12EB12170D020434A (StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void StompEnemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StompEnemy_OnTriggerEnter2D_mC630A4851D3D992AD65E307EEC3B74F273CA63A5 (StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StompEnemy_OnTriggerEnter2D_mC630A4851D3D992AD65E307EEC3B74F273CA63A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralA25632F8F4FF9659997A848C2EBEEF27D0974164, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_Dieburst_4();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = ___other0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___other0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_12 = __this->get_playerRigidbody_5();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_13 = __this->get_playerRigidbody_5();
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		float L_16 = __this->get_bounceForce_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_17), L_15, L_16, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_12, L_18, /*hidden argument*/NULL);
	}

IL_0070:
	{
		return;
	}
}
// System.Void StompEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StompEnemy__ctor_mDC136D9892FEA59F250E0920B22E00FB8F3427C2 (StompEnemy_tBEAB05634844A1EF4C84F8C8F9C8C59DD81F787A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void dragoncontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dragoncontroller_Start_mD2DB2FD97775370EBD7AC5DA55305BD803DB5B64 (dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (dragoncontroller_Start_mD2DB2FD97775370EBD7AC5DA55305BD803DB5B64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_myRigidbody_7(L_0);
		return;
	}
}
// System.Void dragoncontroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dragoncontroller_Update_m299AA1796C38B396C02CD82433C1E9867628B68B (dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (dragoncontroller_Update_m299AA1796C38B396C02CD82433C1E9867628B68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_movingRight_8();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_rightPoint_5();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		if ((!(((float)L_3) > ((float)L_6))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_movingRight_8((bool)0);
	}

IL_0031:
	{
		bool L_7 = __this->get_movingRight_8();
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_leftPoint_4();
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		if ((!(((float)L_10) < ((float)L_13))))
		{
			goto IL_0062;
		}
	}
	{
		__this->set_movingRight_8((bool)1);
	}

IL_0062:
	{
		bool L_14 = __this->get_movingRight_8();
		if (!L_14)
		{
			goto IL_00ba;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_15, L_16, /*hidden argument*/NULL);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_17 = __this->get_myRigidbody_7();
		float L_18 = __this->get_moveSpeed_6();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_19 = __this->get_myRigidbody_7();
		NullCheck(L_19);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), L_18, L_21, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_17, L_23, /*hidden argument*/NULL);
		return;
	}

IL_00ba:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_24, L_25, /*hidden argument*/NULL);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_26 = __this->get_myRigidbody_7();
		float L_27 = __this->get_moveSpeed_6();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_28 = __this->get_myRigidbody_7();
		NullCheck(L_28);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_31), ((-L_27)), L_30, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_26, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void dragoncontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dragoncontroller__ctor_mF1C22F0CE60E879545877E987DEBA7D1F983BBA4 (dragoncontroller_t75DE6374C0E5E1BB04FECB0FE75CB71AEF8E5CB5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void fallingplatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingplatform_Start_mBD6B553D31CC040011D9FFFD0492B1FEB89DBFF7 (fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void fallingplatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingplatform_Update_mF517FFD6D22B64D2B709F5DD952B4731BE899E27 (fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void fallingplatform::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingplatform_OnTriggerEnter2D_m97FB49468DA39C0C641223979DC72604FABB683F (fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fallingplatform_OnTriggerEnter2D_m97FB49468DA39C0C641223979DC72604FABB683F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(__this, _stringLiteral5C1AE82C29543AC887703776BF3DA2C7DCCE683D, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Collections.IEnumerator fallingplatform::Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fallingplatform_Fall_m984CD93D97772CA0B0A8ACE72FFF4835AD84EF6F (fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fallingplatform_Fall_m984CD93D97772CA0B0A8ACE72FFF4835AD84EF6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * L_0 = (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C *)il2cpp_codegen_object_new(U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C_il2cpp_TypeInfo_var);
		U3CFallU3Ed__5__ctor_mB263FE46009FFB17AC345ED7CB7480C42E4C3503(L_0, 0, /*hidden argument*/NULL);
		U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void fallingplatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallingplatform__ctor_m937B29D5C70A9EBA5AA2038C6E4D3D70E2F72AD0 (fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void fallingplatform_<Fall>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__5__ctor_mB263FE46009FFB17AC345ED7CB7480C42E4C3503 (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void fallingplatform_<Fall>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__5_System_IDisposable_Dispose_m18DE13A08728EBFC13845E8C18615383E14291E8 (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean fallingplatform_<Fall>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFallU3Ed__5_MoveNext_m1FF299DEBB730EC8D00A285FB6B308CE9E1EBD0F (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFallU3Ed__5_MoveNext_m1FF299DEBB730EC8D00A285FB6B308CE9E1EBD0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * L_3 = V_1;
		NullCheck(L_3);
		float L_4 = L_3->get_waittime_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * L_6 = V_1;
		NullCheck(L_6);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_7 = L_6->get_rb2D_4();
		NullCheck(L_7);
		Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE(L_7, (bool)0, /*hidden argument*/NULL);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
		fallingplatform_t1A5EC5D92CAF42099D8016FB5CC70058726BDA42 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object fallingplatform_<Fall>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFallU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E76BDADC275E226A55FD70F5013114954F0A741 (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void fallingplatform_<Fall>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__5_System_Collections_IEnumerator_Reset_m4193A216AE70A77BCEA8DBE833580FBD0DF3610E (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFallU3Ed__5_System_Collections_IEnumerator_Reset_m4193A216AE70A77BCEA8DBE833580FBD0DF3610E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CFallU3Ed__5_System_Collections_IEnumerator_Reset_m4193A216AE70A77BCEA8DBE833580FBD0DF3610E_RuntimeMethod_var);
	}
}
// System.Object fallingplatform_<Fall>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFallU3Ed__5_System_Collections_IEnumerator_get_Current_m51229F2F71027F5CDFA1B8870522F473D4D7C300 (U3CFallU3Ed__5_tD8008E8C266E232987607A31DFA15FA0D8DC125C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void frogcontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller_Start_mDC92A8DD5CCD17F5589A962A1A96D030AE5EF0CB (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (frogcontroller_Start_mDC92A8DD5CCD17F5589A962A1A96D030AE5EF0CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_myRigidbody_6(L_0);
		return;
	}
}
// System.Void frogcontroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller_Update_mB43C195D0C399B792F6C3CD81D92F10BE89FA1E5 (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (frogcontroller_Update_mB43C195D0C399B792F6C3CD81D92F10BE89FA1E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_canMove_5();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_myRigidbody_6();
		float L_2 = __this->get_moveSpeed_4();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_3 = __this->get_myRigidbody_6();
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((-L_2)), L_5, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		return;
	}
}
// System.Void frogcontroller::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller_OnEnable_m2024BC5E507D019438FB2A121A9AB70F74C2D65A (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, const RuntimeMethod* method)
{
	{
		__this->set_canMove_5((bool)0);
		return;
	}
}
// System.Void frogcontroller::OnBecameVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller_OnBecameVisible_m203EEC9D20D7ADFEF60C94C7928390F5441D6500 (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, const RuntimeMethod* method)
{
	{
		__this->set_canMove_5((bool)1);
		return;
	}
}
// System.Void frogcontroller::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller_OnTriggerEnter2D_m8E60EF3E93CCBE23CE2D2F93464D0CDDE307D3C4 (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (frogcontroller_OnTriggerEnter2D_m8E60EF3E93CCBE23CE2D2F93464D0CDDE307D3C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral7D76133CFA34B7E2D45C4E214E7B373095564C78, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void frogcontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void frogcontroller__ctor_m2DE4F1232E719D84C7C744F04431FC866AD2B39C (frogcontroller_t4916652B5FA2072E5229F2A923FA4E96D5409151 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void killplayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killplayer_Start_mD7B77352CF6B121BAFE58475A2BB342FB1B55C68 (killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (killplayer_Start_mD7B77352CF6B121BAFE58475A2BB342FB1B55C68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * L_0 = Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759(/*hidden argument*/Object_FindObjectOfType_TisLevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D_m81B5F0C514E7F5BF8773538DC382043AB8428759_RuntimeMethod_var);
		__this->set_theLevelManager_4(L_0);
		return;
	}
}
// System.Void killplayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killplayer_Update_m966C03AEAD452DB00758EE557344E5B19681FE48 (killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void killplayer::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killplayer_OnTriggerEnter2D_m5CD44480DD7448B9036F63103DE6FA82B3754358 (killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (killplayer_OnTriggerEnter2D_m5CD44480DD7448B9036F63103DE6FA82B3754358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		LevelManager_t4694E049F1814D6105F42EA77B02E163824A2B2D * L_3 = __this->get_theLevelManager_4();
		NullCheck(L_3);
		L_3->set_healthCount_16(0);
	}

IL_001e:
	{
		return;
	}
}
// System.Void killplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killplayer__ctor_m0D75F40033498D843219A1F82BFD457E4341D8F1 (killplayer_tBC5DEA6CBE49BCFD37421C6ECA6236B670D8DC10 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CpositionU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_delta_mC5D62E985D40A7708316C6E07B699B96D9C8184E_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CdeltaU3Ek__BackingField_13();
		return L_0;
	}
}
