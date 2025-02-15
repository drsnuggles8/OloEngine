﻿set(SOURCES
		"OloEngine.h"
		"OloEnginePCH.cpp"
		"OloEnginePCH.h"
		
		"OloEngine/Audio/AudioEngine.cpp"
		"OloEngine/Audio/AudioEngine.h"
		"OloEngine/Audio/AudioListener.cpp"
		"OloEngine/Audio/AudioListener.h"
		"OloEngine/Audio/AudioSource.cpp"
		"OloEngine/Audio/AudioSource.h"
		
		"OloEngine/Core/Application.cpp"
		"OloEngine/Core/Application.h"
		"OloEngine/Core/Assert.h"
		"OloEngine/Core/Base.h"
		"OloEngine/Core/Buffer.h"
		"OloEngine/Core/EntryPoint.h"
		"OloEngine/Core/FileSystem.cpp"
		"OloEngine/Core/FileSystem.h"
		"OloEngine/Core/Input.h"
		"OloEngine/Core/KeyCodes.h"
		"OloEngine/Core/Layer.cpp"
		"OloEngine/Core/Layer.h"
		"OloEngine/Core/LayerStack.cpp"
		"OloEngine/Core/LayerStack.h"
		"OloEngine/Core/Log.cpp"
		"OloEngine/Core/Log.h"
		"OloEngine/Core/MouseCodes.h"
		"OloEngine/Core/PlatformDetection.h"
		"OloEngine/Core/Timer.h"
		"OloEngine/Core/Timestep.h"
		"OloEngine/Core/UUID.cpp"
		"OloEngine/Core/UUID.h"
		"OloEngine/Core/Window.cpp"
		"OloEngine/Core/Window.h"

		"OloEngine/Debug/Instrumentor.h"

		"OloEngine/Events/ApplicationEvent.h"
		"OloEngine/Events/Event.cpp"
		"OloEngine/Events/Event.h"
		"OloEngine/Events/KeyEvent.h"
		"OloEngine/Events/MouseEvent.h"

		"OloEngine/ImGui/ImGuiBuild.cpp"
		"OloEngine/ImGui/ImGuiLayer.cpp"
		"OloEngine/ImGui/ImGuiLayer.h"

		"OloEngine/Math/Math.cpp"
		"OloEngine/Math/Math.h"
		
		"OloEngine/Project/Project.cpp"
		"OloEngine/Project/Project.h"
		"OloEngine/Project/ProjectSerializer.cpp"
		"OloEngine/Project/ProjectSerializer.h"
		
		"OloEngine/Renderer/Buffer.h"
		"OloEngine/Renderer/Camera.h"
		"OloEngine/Renderer/EditorCamera.cpp"
		"OloEngine/Renderer/EditorCamera.h"
		"OloEngine/Renderer/Font.cpp"
		"OloEngine/Renderer/Font.h"
		"OloEngine/Renderer/Framebuffer.cpp"
		"OloEngine/Renderer/Framebuffer.h"
		"OloEngine/Renderer/GraphicsContext.cpp"
		"OloEngine/Renderer/GraphicsContext.h"
		"OloEngine/Renderer/IndexBuffer.cpp"
		"OloEngine/Renderer/IndexBuffer.h"
		"OloEngine/Renderer/MSDFData.h"
		"OloEngine/Renderer/OrthographicCamera.cpp"
		"OloEngine/Renderer/OrthographicCamera.h"
		"OloEngine/Renderer/OrthographicCameraController.cpp"
		"OloEngine/Renderer/OrthographicCameraController.h"
		"OloEngine/Renderer/RenderCommand.cpp"
		"OloEngine/Renderer/RenderCommand.h"
		"OloEngine/Renderer/Renderer.cpp"
		"OloEngine/Renderer/Renderer.h"
		"OloEngine/Renderer/Renderer2D.cpp"
		"OloEngine/Renderer/Renderer2D.h"
		"OloEngine/Renderer/RendererAPI.cpp"
		"OloEngine/Renderer/RendererAPI.h"
		"OloEngine/Renderer/Shader.cpp"
		"OloEngine/Renderer/Shader.h"
		"OloEngine/Renderer/ShaderLibrary.cpp"
		"OloEngine/Renderer/ShaderLibrary.h"
		"OloEngine/Renderer/Texture.cpp"
		"OloEngine/Renderer/Texture.h"
		"OloEngine/Renderer/UniformBuffer.cpp"
		"OloEngine/Renderer/UniformBuffer.h"
		"OloEngine/Renderer/VertexBuffer.cpp"
		"OloEngine/Renderer/VertexBuffer.h"
		"OloEngine/Renderer/VertexArray.cpp"
		"OloEngine/Renderer/VertexArray.h"		
		
		"OloEngine/Scene/Components.h"
		"OloEngine/Scene/Entity.cpp"
		"OloEngine/Scene/Entity.h"
		"OloEngine/Scene/Scene.cpp"
		"OloEngine/Scene/Scene.h"
		"OloEngine/Scene/SceneCamera.cpp"
		"OloEngine/Scene/SceneCamera.h"
		"OloEngine/Scene/SceneSerializer.cpp"
		"OloEngine/Scene/SceneSerializer.h"

		"OloEngine/Scripting/C#/ScriptEngine.cpp"
		"OloEngine/Scripting/C#/ScriptEngine.h"
		"OloEngine/Scripting/C#/ScriptGlue.cpp"
		"OloEngine/Scripting/C#/ScriptGlue.h"
		"OloEngine/Scripting/C#/ScriptUtils.cpp"
		"OloEngine/Scripting/C#/ScriptUtils.h"
		"OloEngine/Scripting/Lua/LuaScriptEngine.cpp"
		"OloEngine/Scripting/Lua/LuaScriptEngine.h"
		"OloEngine/Scripting/Lua/LuaScriptGlue.cpp"
		"OloEngine/Scripting/Lua/LuaScriptGlue.h"

		"OloEngine/UI/UI.h"

		"OloEngine/Utils/PlatformUtils.h"

		"Platform/OpenGL/OpenGLContext.cpp"
		"Platform/OpenGL/OpenGLContext.h"
		"Platform/OpenGL/OpenGLDebug.cpp"
		"Platform/OpenGL/OpenGLDebug.h"
		"Platform/OpenGL/OpenGLFramebuffer.cpp"
		"Platform/OpenGL/OpenGLFramebuffer.h"
		"Platform/OpenGL/OpenGLIndexBuffer.cpp"
		"Platform/OpenGL/OpenGLIndexBuffer.h"
		"Platform/OpenGL/OpenGLRendererAPI.cpp"
		"Platform/OpenGL/OpenGLRendererAPI.h"
		"Platform/OpenGL/OpenGLShader.cpp"
		"Platform/OpenGL/OpenGLShader.h"
		"Platform/OpenGL/OpenGLTexture.cpp"
		"Platform/OpenGL/OpenGLTexture.h"
		"Platform/OpenGL/OpenGLTextureCubemap.cpp"
		"Platform/OpenGL/OpenGLTextureCubemap.h"
		"Platform/OpenGL/OpenGLUniformBuffer.cpp"
		"Platform/OpenGL/OpenGLUniformBuffer.h"
		"Platform/OpenGL/OpenGLUtilities.cpp"
		"Platform/OpenGL/OpenGLUtilities.h"
		"Platform/OpenGL/OpenGLVertexArray.cpp"
		"Platform/OpenGL/OpenGLVertexArray.h"
		"Platform/OpenGL/OpenGLVertexBuffer.cpp"
		"Platform/OpenGL/OpenGLVertexBuffer.h"
		"Platform/Windows/WindowsInput.cpp"
		"Platform/Windows/WindowsWindow.cpp"
		"Platform/Windows/WindowsWindow.h"
		"Platform/Windows/WindowsPlatformUtils.cpp"
)

add_library(OloEngine STATIC
		${SOURCES}
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}
			FILES ${SOURCES}
)
