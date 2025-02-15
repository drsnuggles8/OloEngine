#pragma once

#include "OloEngine/Scene/Entity.h"

namespace OloEngine
{
	class LuaScriptEngine
	{
	public:
		static void Init();
		static void Shutdown();

		static void ExecuteScript(const std::string& file);
		static void LoadScript(const std::string& file);
		static void LoadEntityScript(const std::string& file);

		// Lua functions to call from C++
		static void OnCreate(const Entity* entity);
		static void OnDestroyed(const Entity* entity);
		static void OnUpdate(const Entity* entity, f32 ts);
	};
}
