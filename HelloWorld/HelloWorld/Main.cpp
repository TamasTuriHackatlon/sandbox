#include <iostream>

//Declaration of the Log function is needed. The body, or the definition of the Log function is located in Log.cpp. Linker can make find it, as it is part of the project!
void Log(const char* message);

int main()
{
	Log("Hello world, how are you?");
	std::cin.get();
}