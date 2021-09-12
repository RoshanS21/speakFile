#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
//#include <unistd.h>
#include <sstream>

int main(int argc, char* argv[])
{
	//unsigned int microsecond = 1000000;
	std::fstream fileToSpeak;
	fileToSpeak.open(argv[1], std::ios::in);
	if (fileToSpeak.is_open())
	{
		std::string line;
		std::stringstream result;
		while (std::getline(fileToSpeak, line))
		{
			std::cout<< line << std::endl;
			result << line << " ";
			//usleep(3 * microsecond);
		}
		system(("say " + result.str()).c_str());
	fileToSpeak.close();
	}
	return 0;
}
