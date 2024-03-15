#include <String>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

class Template
{
	private:
		fs::path getConfigDir();
		void createConfigDir();
	public:
		fs::path configDir;
		Template();
		~Template();
};
