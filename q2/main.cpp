#include <iostream>
#include <exception>
#include "smart_calc.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����

	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	smart_array new_array(2);
	new_array.add_element(44);
	new_array.add_element(34);

	arr = new_array;
	
	return 61;
}