#include <iostream>



int main() {
	int a = 3;
	int b = 4;

	int* p = &a;
	int* q = &b;

	p = q;
	*q = 10;
	*p = 20;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}
