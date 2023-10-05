#include <iostream>

void test1_5() 
{
	std::cout << "请输入两个数字：" << std::endl;
	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;
	std::cout << "这两个数的乘积是：";
	std::cout << v1;
	std::cout << " 和 ";
	std::cout << v2;
	std::cout << "乘积是 ";
	std::cout << v1 * v2;
	std::cout << std::endl;

}