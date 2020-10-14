#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern PowEngine::Application* PowEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = PowEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif