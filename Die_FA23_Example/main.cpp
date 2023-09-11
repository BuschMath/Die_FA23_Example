#include "Die.h"
#include <iostream>

int main()
{
	Die die1;
	Die die2(20);

	std::cout << "Die 1: " << die1.roll() << std::endl;
	std::cout << "Die 2: " << die2.roll() << std::endl;

	return 0;
}