extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UNET();
	RegisterModule_UNET();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; template <> void RegisterUnityClass<TilemapCollider2D>(const char*);
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; template <> void RegisterUnityClass<GridLayout>(const char*);
class Grid; template <> void RegisterUnityClass<Grid>(const char*);
class Tilemap; template <> void RegisterUnityClass<Tilemap>(const char*);
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; template <> void RegisterUnityClass<TilemapRenderer>(const char*);
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 95 non stripped classes
	//0. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. Collider
	RegisterUnityClass<Collider>("Physics");
	//4. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//5. Camera
	RegisterUnityClass<Camera>("Core");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//8. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//9. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//10. GameManager
	RegisterUnityClass<GameManager>("Core");
	//11. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//12. Renderer
	RegisterUnityClass<Renderer>("Core");
	//13. Shader
	RegisterUnityClass<Shader>("Core");
	//14. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//15. Material
	RegisterUnityClass<Material>("Core");
	//16. Light
	RegisterUnityClass<Light>("Core");
	//17. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//18. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//19. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//20. Mesh
	RegisterUnityClass<Mesh>("Core");
	//21. Texture
	RegisterUnityClass<Texture>("Core");
	//22. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//23. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//24. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//25. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//26. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//27. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//28. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//29. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//30. GameObject
	RegisterUnityClass<GameObject>("Core");
	//31. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//32. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//33. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//34. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//35. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//36. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//37. Transform
	RegisterUnityClass<Transform>("Core");
	//38. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//39. Sprite
	RegisterUnityClass<Sprite>("Core");
	//40. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//41. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//42. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//43. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//44. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//45. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//46. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//47. Animator
	RegisterUnityClass<Animator>("Animation");
	//48. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//49. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//50. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//51. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//52. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//53. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//54. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//55. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//56. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//57. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//58. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//59. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//60. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//61. InputManager
	RegisterUnityClass<InputManager>("Core");
	//62. TagManager
	RegisterUnityClass<TagManager>("Core");
	//63. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//64. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//65. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//66. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//67. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//68. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//69. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//70. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//71. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//72. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//73. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//74. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//75. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//76. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//77. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//78. Motion
	RegisterUnityClass<Motion>("Animation");
	//79. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//80. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//81. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//82. GridLayout
	RegisterUnityClass<GridLayout>("Grid");
	//83. Tilemap
	RegisterUnityClass<Tilemap>("Tilemap");
	//84. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//85. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//86. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//87. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//88. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//89. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//90. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//91. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//92. TilemapCollider2D
	RegisterUnityClass<TilemapCollider2D>("Tilemap");
	//93. TilemapRenderer
	RegisterUnityClass<TilemapRenderer>("Tilemap");
	//94. Grid
	RegisterUnityClass<Grid>("Grid");

}
