#pragma once
#include <iostream>
#include <exception>

class smart_array
{
private:
	int size, current_point = 0;
	int* smart_arr;
public:
	smart_array(int input)  
	{
		if (input > 0)
		{
			size = input;
			smart_arr = new int[size];
			std::cout << "smart_array_class created" << std::endl;
		}
		else
		{
			size = 10;
			smart_arr = new int[size];
			std::cout << "ATTENTION smart_array_class created WITH Default size 10" << std::endl;
		}
	}
	~smart_array()
	{
		delete [] smart_arr;
		std::cout << "smart_array_class deleted" << std::endl;
	}
	void add_element(int input_number);
	int get_element(int index);

	smart_array(const smart_array& other);
	smart_array& operator = (const smart_array& other);

};

