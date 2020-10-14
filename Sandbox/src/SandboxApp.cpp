#include <PowEngine.h>

class Sandbox : public PowEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

PowEngine::Application* PowEngine::CreateApplication()
{
	return new Sandbox();
}