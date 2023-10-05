#include <iostream>
#include "ch02.h"

void test2_3()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}

void test2_8() {
	// std::cout << "2M\n2\tM" << std::endl;

	std::cout << 2 << "\115\012";
	std::cout << 2 << "\t\115\012";
}


std::string global_str;
int globel_int;
void test2_10(){
	// int local_int;				   // error C4700: uninitialized local variable 'local_int' used
	std::string local_str;

	std::cout << "全局string的默认值：" << global_str << std::endl;
	std::cout << "全局 int 的默认值：" << globel_int << std::endl;
	std::cout << "局部变量 string 的默认值：" << local_str << std::endl;
	// std::cout << "局部变量 int 的默认值：" << local_int << std::endl;

}

void test2_17() {
	int i, & ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
}

void test2_18() {
	int a = 0, b = 1;
	int* p1 = &a, * p2 = p1;
	p1 = &b;
	*p2 = b;
	
	std::cout << "p1:" << *p1 << std::endl;
	std::cout << "p2: "  << *p2 << std::endl;
}

struct Sale_data
{
	std::string booNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

void test2_41_1() {
	Sale_data book;
	double price;
	std::cin >> book.booNo >> book.units_sold >> price;
	book.revenue = book.units_sold * price;
	std::cout << book.booNo << "  " << book.units_sold << "  " << book.revenue << "  " << price;
}

int test2_41_2() {
	Sale_data book1, book2;
	double price1, price2;
	std::cin >> book1.booNo >> book1.units_sold >> price1;
	std::cin >> book2.booNo >> book2.units_sold >> price2;

	book1.revenue = book1.units_sold * price1;
	book2.revenue = book2.units_sold * price2;

	if (book1.booNo == book2.booNo)
	{
		unsigned totalCnt = book1.units_sold + book2.units_sold;
		double totalRevenue = book1.revenue + book2.revenue;
		std::cout << book1.booNo << "  " << totalCnt << "  " << totalRevenue << "  ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}


}

