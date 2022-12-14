#pragma once

#include "dlpch.h"

#include "Core.h"
#include "Daedalus/Events/Event.h"

namespace Daedalus {

struct WindowProps
{
	std::string title;
	int width;
	int height;

	explicit WindowProps(const std::string& title_ = "Daedalus Engine",
		int width_ = 1280,
		int height_ = 720)
		: title(title_), width(width_), height(height_)
	{
	}
};

class DAEDALUS_API Window
{
public:
	using EventCallbackFn = std::function<void(Event&)>;

	virtual ~Window() = default;

	virtual void OnUpdate() = 0;

	virtual void* GetNativeWindow() const = 0;
	virtual int GetWidth() const = 0;
	virtual int GetHeight() const = 0;

	virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
	virtual void SetVSync(bool enabled) = 0;
	virtual bool IsVSync() const = 0;
};

}
