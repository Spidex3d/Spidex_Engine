#pragma once
// This is the start of my game engine watching the Cherno 30/03/25
// trying to do it better this time

#ifdef SPX_PLATFORM_WINDOWS

extern Spidex::Application* Spidex::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Spidex Engine Working Yes" << std::endl;
	auto app = Spidex::CreateApplication();
	app->Run();
	delete app;
}

#endif 

