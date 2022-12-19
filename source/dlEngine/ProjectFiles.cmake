set(PROJECT_FILES

    source/Daedalus.h
    source/dlpch.h
    source/dlpch.cpp
    source/DummyTest.h

    source/Daedalus/Core/Application.h
    source/Daedalus/Core/Application.cpp
    source/Daedalus/Core/Core.h
    source/Daedalus/Core/EntryPoint.h
    source/Daedalus/Core/Input.h
    source/Daedalus/Core/Layer.h
    source/Daedalus/Core/Layer.cpp
    source/Daedalus/Core/LayerStack.h
    source/Daedalus/Core/LayerStack.cpp
    source/Daedalus/Core/Window.h  
    
    source/Daedalus/Debug/Log.h
    source/Daedalus/Debug/Log.cpp

    source/Daedalus/Events/ApplicationEvent.h
    source/Daedalus/Events/Event.h
    source/Daedalus/Events/EventDispatcher.h
    source/Daedalus/Events/EventTable.h
    source/Daedalus/Events/KeyEvent.h
    source/Daedalus/Events/MouseEvent.h
    source/Daedalus/Events/GamepadEvent.h

    source/Daedalus/Renderer/BufferLayout.h
    source/Daedalus/Renderer/Camera.h
    source/Daedalus/Renderer/Camera.cpp
    source/Daedalus/Renderer/GraphicsContext.h
    source/Daedalus/Renderer/GraphicsContext.cpp
    source/Daedalus/Renderer/FrameBuffer.h
    source/Daedalus/Renderer/FrameBuffer.cpp
    source/Daedalus/Renderer/IndexBuffer.h
    source/Daedalus/Renderer/IndexBuffer.cpp
    source/Daedalus/Renderer/OrthographicCamera.h
    source/Daedalus/Renderer/OrthographicCamera.cpp
    source/Daedalus/Renderer/Mesh.h
    source/Daedalus/Renderer/Mesh.cpp
    source/Daedalus/Renderer/Model.h
    source/Daedalus/Renderer/Model.cpp
    source/Daedalus/Renderer/Shader.h
    source/Daedalus/Renderer/Shader.cpp
    source/Daedalus/Renderer/ShaderLibrary.h
    source/Daedalus/Renderer/ShaderLibrary.cpp
    source/Daedalus/Renderer/RenderCommand.h
    source/Daedalus/Renderer/RenderCommand.cpp
    source/Daedalus/Renderer/Renderer.h
    source/Daedalus/Renderer/Renderer.cpp
    source/Daedalus/Renderer/RendererAPI.h
    source/Daedalus/Renderer/RendererAPI.cpp
    source/Daedalus/Renderer/PerspectiveCamera.h
    source/Daedalus/Renderer/PerspectiveCamera.cpp
    source/Daedalus/Renderer/Texture.h
    source/Daedalus/Renderer/Texture.cpp
    source/Daedalus/Renderer/UniformBuffer.h
    source/Daedalus/Renderer/UniformBuffer.cpp
    source/Daedalus/Renderer/VertexArray.h
    source/Daedalus/Renderer/VertexArray.cpp
    source/Daedalus/Renderer/VertexBuffer.h
    source/Daedalus/Renderer/VertexBuffer.cpp
    
    source/Daedalus/UI/ImGui/ImGuiLayer.h
    source/Daedalus/UI/ImGui/ImGuiLayer.cpp

    source/Daedalus/Utils/HighPerformanceRequest.h
    source/Daedalus/Utils/KeyCodes.h
    
    source/Platform/Platform.h
    source/Platform/Platform.cpp

    source/Platform/GLFW/GLFWInput.h
    source/Platform/GLFW/GLFWInput.cpp
    source/Platform/GLFW/GLFWWindow.h
    source/Platform/GLFW/GLFWWindow.cpp

    source/Platform/OpenGL/OpenGLContext.h
    source/Platform/OpenGL/OpenGLContext.cpp
    source/Platform/OpenGL/OpenGLFramebuffer.h
    source/Platform/OpenGL/OpenGLFramebuffer.cpp
    source/Platform/OpenGL/OpenGLIndexBuffer.h
    source/Platform/OpenGL/OpenGLIndexBuffer.cpp
    source/Platform/OpenGL/OpenGLRendererAPI.h
    source/Platform/OpenGL/OpenGLRendererAPI.cpp
    source/Platform/OpenGL/OpenGLShader.h
    source/Platform/OpenGL/OpenGLShader.cpp
    source/Platform/OpenGL/OpenGLShaderLibrary.h
    source/Platform/OpenGL/OpenGLShaderLibrary.cpp
    source/Platform/OpenGL/OpenGLTexture.h
    source/Platform/OpenGL/OpenGLTexture.cpp
    source/Platform/OpenGL/OpenGLUniformBuffer.h
    source/Platform/OpenGL/OpenGLUniformBuffer.cpp
    source/Platform/OpenGL/OpenGLVertexArray.h
    source/Platform/OpenGL/OpenGLVertexArray.cpp
    source/Platform/OpenGL/OpenGLVertexBuffer.h
    source/Platform/OpenGL/OpenGLVertexBuffer.cpp

    source/Platform/Windows/WindowsInput.h
    source/Platform/Windows/WindowsWindow.h
    source/Platform/Windows/WindowsWindow.cpp

    source/Platform/Linux/LinuxInput.h
    source/Platform/Linux/LinuxWindow.h
    source/Platform/Linux/LinuxWindow.cpp
    )