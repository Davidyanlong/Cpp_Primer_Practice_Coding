#include <iostream>

void  test1_9() 
{
	int v = 50;
	int sum = 0;
		while (v <= 100)
		{
			std::cout << v << std::endl;
			sum += v;
			v++;
		}

		std::cout << "50 到 100 的求和是：" << sum << std::endl;
}