#include <iostream>

void  test1_12()
{
	
	int sum = 0;

	for(int i = -100; i<=100; i++)
	{
		sum += i;
	}
	std::cout << "利用for 求和 -100 到 100 的结果是：" << sum << std::endl;
}