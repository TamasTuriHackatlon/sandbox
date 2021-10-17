#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	Log("Hello world, how are you?");
	std::cin.get();
}