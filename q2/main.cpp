#include <iostream>
#include <exception>
#include <malloc.h>


class smart_array
{
private:
	int size, current_point = 0;
	int* smart_arr = new int[size];
public:
	smart_array(int input) : size(input)
	{
		std::cout << "smart_array_class created" << std::endl;
	}
	~smart_array()
	{
		std::cout << "smart_array_class deleted" << std::endl;
	}

	void add_element(int input_number)
	{
		if (current_point < size)
		{
			smart_arr[current_point] = input_number;
		}
		else
		{
			throw std::exception("array is full");
		}
		current_point++;
	}
	int get_element(int index)
	{
		if (index < size)
		{
			return smart_arr[index];
		}
		else
		{
			throw std::exception("wrong index");
		}
	}
};


int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	smart_array new_array(2);
	new_array.add_element(44);
	new_array.add_element(34);

	//arr = new_array;
	// Вот это надо реализовать?
	int temp;
	temp = new_array.get_element(0);
	arr.add_element(temp);
	temp = new_array.get_element(1);
	arr.add_element(temp);

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr.get_element(i) << " ";
	}

	std::cout << std::endl;

	return 61;
}