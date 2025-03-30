#include <Spidex.h>


class Sandbox : public Spidex::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{

	}
};
Spidex::Application* Spidex::CreateApplication()
{
	return new Sandbox();
}