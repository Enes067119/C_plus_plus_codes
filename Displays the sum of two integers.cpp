#include <iostream>

int main(){
	int number1, number2, sum;
	
	std::cout << "Enter first integer: ";
	std::cin >> number1;
	
	std::cout << "Enter second integer: ";
	std::cin >> number2;
	
	sum = number1 + number2;
	
	std::cout << "Sum is " << sum << std::endl;
}
