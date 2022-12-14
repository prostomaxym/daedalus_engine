#include "SandboxApp.h"

#include "ExampleLayer.h"


Daedalus::Application* Daedalus::CreateApplication()
{
	// Entry point is defined in engine
	return Sandbox::GetInstance();
}

Sandbox::Sandbox()
{
	PushLayer(new ExampleLayer());
}