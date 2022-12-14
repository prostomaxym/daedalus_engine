#pragma once

#include "EventTable.h"

#include <string>
#include <ostream>

namespace Daedalus {

class EventDispatcher;

#define EVENT_CLASS_TYPE(type)	static EventType GetStaticType() { return EventType::type; }\
								virtual EventType GetEventType() const override { return GetStaticType(); }\
								virtual const char* GetNameC() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int GetCategoryFlags() const override { return category; }

class DAEDALUS_API Event
{
public:
	virtual EventType GetEventType() const = 0;
	virtual std::string GetInfo() const = 0;
	virtual const char* GetNameC() const = 0;
	virtual int GetCategoryFlags() const = 0;

	inline void AddHandle(bool handle) { m_handled |= handle; }
	inline void SetHandle(bool handle) { m_handled = handle; }
	inline bool IsInCategory(EventCategory category) { return GetCategoryFlags() & category; }
	inline bool IsHandled() { return m_handled; }

protected:
	bool m_handled = false;
	
};

inline std::ostream& operator<<(std::ostream& os, const Event& e)
{
	return os << e.GetInfo();
}

}