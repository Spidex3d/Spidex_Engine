#pragma once
#include "Core.h"

namespace Spidex {

	class SPIDEX_API Application
	{
	public:
		Application();
		virtual	~Application();

		void Run();

	};
	// To be defined in Client
	Application* CreateApplication();
}