#include <iostream>
#include <exception>
#include "smart_calc.h"


int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����
	
	try
		{
		smart_array arr(-5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;
		}
	catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
	}

	return 61;
}