#include <iostream>

void test1_6()
{
	std::cout << "请输入两个数字：" << std::endl;
	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;
	std::cout << "这两个数的乘积是："
		<< v1
		<< " 和 "
		<< v2
	    << "乘积是 "
		 << v1 * v2
		<< std::endl;

}