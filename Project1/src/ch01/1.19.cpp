#include <iostream>
void  test1_19()
{
	std::cout << "请输入两个整数，打印之间的所有整数：" << std::endl;

	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 <= v2) 
	{
		for (int i = v1 + 1; i < v2; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else {
		std::cout << "输入的第一个数应该小于第二个数！" << std::endl;
	}
	
}