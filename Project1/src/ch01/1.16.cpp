#include <iostream>

// ��д���򣬴�cin��ȡһ�����������͡�
void  test1_16()
{
	std::cout << "������һ�����ݣ��س������"  << std::endl;
	int sum = 0;
	for (int v = 0; std::cin >> v;)
	{
		sum += v;
	}

	std::cout << "����ǣ�" << sum << std::endl;
}