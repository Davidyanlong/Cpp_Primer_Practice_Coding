#include <iostream>

void test1_8()
{
	std::cout << "/*" << std::endl;
	std::cout << "*/" << std::endl;
	std::cout << /* "*/" */" << std::endl;
	std::cout << /* "*/" /* "/*" */ << std::endl;
}