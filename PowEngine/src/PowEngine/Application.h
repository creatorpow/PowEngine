#pragma once

#include "Core.h"

namespace PowEngine {

	class POWENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}