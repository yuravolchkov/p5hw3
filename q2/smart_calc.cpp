#pragma once
#include <iostream>
#include <exception>
#include "smart_calc.h"

	void smart_array::add_element(int input_number)
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
	int smart_array::get_element(int index)
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
	smart_array::smart_array(const smart_array& other)
	{
		this->size = other.size;
		this->smart_arr = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->smart_arr[i] = other.smart_arr[i];
		}
	}

	smart_array& smart_array::operator = (const smart_array& other)
	{
		delete[] this->smart_arr;
		this->size = other.size;
		this->smart_arr = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->smart_arr[i] = other.smart_arr[i];
		}

		return *this;
	}