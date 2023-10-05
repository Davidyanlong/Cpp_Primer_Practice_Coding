#include <iostream>

// 编写程序，从cin读取一组数，输出其和。
void  test1_16()
{
	std::cout << "请输入一组数据，回车后求和"  << std::endl;
	int sum = 0;
	for (int v = 0; std::cin >> v;)
	{
		sum += v;
	}

	std::cout << "求和是：" << sum << std::endl;
}