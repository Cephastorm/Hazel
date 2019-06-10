#pragma once
#include "core.h"
namespace Hazel
{
class HAZEL_API App
{
public:
	App();
	virtual ~App();
	void Run();
};

//To be defined in client

App* CreateApplication();
} // namespace Hazel
