#pragma once

// This is the start of my game engine watching the Cherno 30/03/25
// trying to do it better this time

#ifdef SPX_PLATFORM_WINDOWS

extern Spidex::Application* Spidex::CreateApplication();

int main(int argc, char** argv)
{
	Spidex::Log::Init();
	SPX_CORE_WARN("Initialize Log!");
	SPX_CORE_INFO("Engine Start!");
	int a = 5;
	SPX_CRITICAL("Spidex Engine Working Yes Var {0}", a);


	auto app = Spidex::CreateApplication();
	app->Run();
	delete app;
}

#endif 

