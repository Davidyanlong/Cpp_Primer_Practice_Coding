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

		std::cout << "50 �� 100 ������ǣ�" << sum << std::endl;
}