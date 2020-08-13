// Lesson4.2-FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Welcome to FizzBuzz! Fizz on the 3s, Buzz on the 5s!\n------\n";
	for (int i = 1; i <= 100; i++)
	{
		std::cout << i << ": ";
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}