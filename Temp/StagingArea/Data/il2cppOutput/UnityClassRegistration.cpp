template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_Wind();
	RegisterModule_Wind();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
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
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; template <> void RegisterClass<AudioMixer>();
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>();
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>();
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterClass<ComputeShader>();
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. ComputeShader
	RegisterClass<ComputeShader>();
	//5. NamedObject
	RegisterClass<NamedObject>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. RenderSettings
	RegisterClass<RenderSettings>();
	//8. LevelGameManager
	RegisterClass<LevelGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. QualitySettings
	RegisterClass<QualitySettings>();
	//11. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//12. Renderer
	RegisterClass<Renderer>();
	//13. GUIElement
	RegisterClass<GUIElement>();
	//14. GUILayer
	RegisterClass<GUILayer>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. Shader
	RegisterClass<Shader>();
	//17. Material
	RegisterClass<Material>();
	//18. Sprite
	RegisterClass<Sprite>();
	//19. Texture
	RegisterClass<Texture>();
	//20. Texture2D
	RegisterClass<Texture2D>();
	//21. RenderTexture
	RegisterClass<RenderTexture>();
	//22. Transform
	RegisterClass<Transform>();
	//23. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//24. Mesh
	RegisterClass<Mesh>();
	//25. ParticleSystem
	RegisterClass<ParticleSystem>();
	//26. Rigidbody
	RegisterClass<Rigidbody>();
	//27. Collider
	RegisterClass<Collider>();
	//28. Animator
	RegisterClass<Animator>();
	//29. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//30. UI::Canvas
	RegisterClass<UI::Canvas>();
	//31. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//32. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//33. AudioClip
	RegisterClass<AudioClip>();
	//34. SampleClip
	RegisterClass<SampleClip>();
	//35. AudioListener
	RegisterClass<AudioListener>();
	//36. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//37. AudioSource
	RegisterClass<AudioSource>();
	//38. MeshRenderer
	RegisterClass<MeshRenderer>();
	//39. PreloadData
	RegisterClass<PreloadData>();
	//40. Cubemap
	RegisterClass<Cubemap>();
	//41. Texture3D
	RegisterClass<Texture3D>();
	//42. Texture2DArray
	RegisterClass<Texture2DArray>();
	//43. MeshFilter
	RegisterClass<MeshFilter>();
	//44. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//45. BuildSettings
	RegisterClass<BuildSettings>();
	//46. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//47. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//48. InputManager
	RegisterClass<InputManager>();
	//49. PlayerSettings
	RegisterClass<PlayerSettings>();
	//50. ResourceManager
	RegisterClass<ResourceManager>();
	//51. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//52. ScriptMapper
	RegisterClass<ScriptMapper>();
	//53. TagManager
	RegisterClass<TagManager>();
	//54. TimeManager
	RegisterClass<TimeManager>();
	//55. MonoManager
	RegisterClass<MonoManager>();
	//56. MonoScript
	RegisterClass<MonoScript>();
	//57. TextAsset
	RegisterClass<TextAsset>();
	//58. PhysicsManager
	RegisterClass<PhysicsManager>();
	//59. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//60. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//61. AudioManager
	RegisterClass<AudioManager>();
	//62. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//63. AnimatorController
	RegisterClass<AnimatorController>();
	//64. FlareLayer
	RegisterClass<FlareLayer>();
	//65. LightProbes
	RegisterClass<LightProbes>();
	//66. BoxCollider
	RegisterClass<BoxCollider>();
	//67. LightmapSettings
	RegisterClass<LightmapSettings>();
	//68. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//69. MeshCollider
	RegisterClass<MeshCollider>();
	//70. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//71. AnimationClip
	RegisterClass<AnimationClip>();
	//72. Motion
	RegisterClass<Motion>();
	//73. AudioMixer
	RegisterClass<AudioMixer>();
	//74. AudioMixerGroup
	RegisterClass<AudioMixerGroup>();
	//75. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>();
	//76. Light
	RegisterClass<Light>();
	//77. CGProgram
	RegisterClass<CGProgram>();
	//78. Avatar
	RegisterClass<Avatar>();
	//79. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();

}
