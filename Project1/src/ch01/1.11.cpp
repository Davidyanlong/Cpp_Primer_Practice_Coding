#include <iostream>

void  test1_11()
{
	std::cout << "������������������ӡ֮�������������" << std::endl;

	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;

	while (v1 < v2-1)
	{
		std::cout << ++v1 << std::endl;
	}
}