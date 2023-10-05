#include <iostream>

void  test1_13_1()
{
	int v = 50;
	int sum = 0;
	for(int v = 50; v <= 100; v++)
	{
		std::cout << v << std::endl;
		sum += v;
	}

	std::cout << "50 到 100 的求和是：" << sum << std::endl;
}

void  test1_13_2()
{
	std::cout << "打印10 到 0 使用--符号：" << std::endl;
	

	for (int v = 10; v >= 0; v--)
	{
		std::cout << v << std::endl;
		
	}
}

void  test1_13_3()
{
	std::cout << "请输入两个整数，打印之间的所有整数：" << std::endl;

	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;

	for (int i = v1+1; i < v2 ;++i)
	{
		std::cout << i << std::endl;
	}
}