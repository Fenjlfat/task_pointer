#include <iostream>

int main()
{
	int a = 7;
	std::cout << a << '\n'; //output value of variable a 
	std::cout << &a << '\n'; //output adress of value a
	std::cout << *&a << '\n'; //output value of cell of memory variable a
	
	return 0;
}
