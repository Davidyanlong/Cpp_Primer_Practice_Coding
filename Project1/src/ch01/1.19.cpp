#include <iostream>
void  test1_19()
{
	std::cout << "������������������ӡ֮�������������" << std::endl;

	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 <= v2) 
	{
		for (int i = v1 + 1; i < v2; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else {
		std::cout << "����ĵ�һ����Ӧ��С�ڵڶ�������" << std::endl;
	}
	
}