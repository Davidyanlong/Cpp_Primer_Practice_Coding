#include <iostream>


void test1_4()
{													 
	std::cout << "请输入两个数字"  <<  std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	std::cout << "这两个数字的求和是：" << v1 << " + " << v2 << "  = " << v1 + v2 << std::endl;
	std::cout << "这两个数字的乘积是：" << v1 << " * " << v2 << "  = " << v1 * v2 << std::endl;
	
}