#include "template.h"

#if defined(_WIN32) || defined(_WIN64)
#    define OS_WINDOWS
#elif defined(__linux__)
#    define OS_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
#    define OS_MACOS
#else
#    define OS_UNKNOWN
#endif

Template::Template()
{
	configDir = getConfigDir();
	createConfigDir();
	std::cout << "Template class constructed." << std::endl;
}

fs::path Template::getConfigDir()
{
	fs::path configDir = getenv("HOME");
#if defined(OS_MACOS)
	configDir /= ".config/templates";
#elif defined(OS_LINUX)
	configDir /= ".config/template";
#elif defined(OS_WINDOWS)
# TODO find a way to get Windows config path
#endif
	return configDir;
}

void Template::createConfigDir()
{
	if(!fs::exists(configDir))
	{
		fs::create_directory(configDir);
	}
}

Template::~Template()
{
	std::cout << "Template class deconstructed." << std::endl;
}
