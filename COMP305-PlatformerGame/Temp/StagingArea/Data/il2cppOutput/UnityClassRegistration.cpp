struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
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

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 69 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//20. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//21. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//25. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//26. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//27. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//28. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//29. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//30. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//31. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//32. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//33. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//34. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//35. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//36. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//37. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//38. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//39. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//40. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//41. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//42. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//43. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//44. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//45. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//46. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//47. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//48. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//49. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//50. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//51. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//52. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//53. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//54. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//55. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//56. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//57. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//58. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//59. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//60. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//61. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//62. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//63. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//64. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//65. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//66. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//67. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//68. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
