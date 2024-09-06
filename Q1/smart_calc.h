#pragma once
#include <iostream>
#include <exception>

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

	void add_element(int input_number);
	int get_element(int index);
};

