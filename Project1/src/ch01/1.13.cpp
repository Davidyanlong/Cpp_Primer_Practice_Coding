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

	std::cout << "50 �� 100 ������ǣ�" << sum << std::endl;
}

void  test1_13_2()
{
	std::cout << "��ӡ10 �� 0 ʹ��--���ţ�" << std::endl;
	

	for (int v = 10; v >= 0; v--)
	{
		std::cout << v << std::endl;
		
	}
}

void  test1_13_3()
{
	std::cout << "������������������ӡ֮�������������" << std::endl;

	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;

	for (int i = v1+1; i < v2 ;++i)
	{
		std::cout << i << std::endl;
	}
}