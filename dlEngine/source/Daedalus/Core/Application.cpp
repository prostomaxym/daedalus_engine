#include "dlpch.h"
#include "Application.h"

#include "Core.h"
#include "Daedalus/Events/EventDispatcher.h"
#include "Platform/Platform.h"

#include <glad/glad.h>

using namespace Daedalus;

Application* Application::s_instance = nullptr;

Application* Application::GetInstance()
{
	if (!s_instance)
	{
		s_instance = new Application();
	}

	return s_instance;
}

Application::Application() :
	m_window(Platform::createWindow())
{
	s_instance = this;

	Platform::InitInputSystem();
	m_window->SetEventCallback(DL_BIND_EVENT_FN(Application::OnEvent));

	m_imgui_layer = new ImGuiLayer();
	PushOverlay(m_imgui_layer);
}

Application::~Application()
{
}

void Application::Run()
{
	while (m_running)
	{
		glClearColor(1.f, 0.f, 1.f, 1.f);
		glClear(GL_COLOR_BUFFER_BIT);

		for (auto layer : m_layer_stack)
		{
			layer->OnUpdate();
		}

		m_window->OnUpdate();

		m_imgui_layer->Begin();
		m_imgui_layer->End();
	}
}

void Application::OnEvent(Event& event)
{
	EventDispatcher dispatcher(event);
	dispatcher.Dispatch<WindowCloseEvent>(DL_BIND_EVENT_FN(Application::OnWindowClosed));

	DL_CORE_TRACE("{0}", event);
	for (auto it = m_layer_stack.end(); it != m_layer_stack.begin();)
	{
		if (event.IsHandled())
			break;

		(*--it)->OnEvent(event);
	}
}

void Application::PushLayer(Layer* layer)
{
	m_layer_stack.PushLayer(layer);
	layer->OnAttach();
}

void Application::PushOverlay(Layer* overlay)
{
	m_layer_stack.PushOverlay(overlay);
	overlay->OnAttach();
}

bool Application::OnWindowClosed(WindowCloseEvent& event)
{
	m_running = false;
	return true;
}