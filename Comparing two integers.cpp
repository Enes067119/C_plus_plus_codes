#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int number1, number2;
	
	cout << "Enter two integers to compare: ";
	cin >> number1 >> number2;
	
	if (number1 == number2){
		cout << number1 << " equal " << number2 << endl;
	}
	
	if (number1 != number2){
		cout << number1 << " not equal " << number2 << endl;
	}
	
	if (number1 <= number2){
		cout << number1 << " less or equal " << number2 << endl;
	}
	
	if (number1 >= number2){
		cout << number1 << " great or equal " << number2 << endl;
	}
	
	if (number1 > number2){
		cout << number1 << " great " << number2 << endl;
	}
	
	if (number1 < number2){
		cout << number1 << " less " << number2 << endl;
	}
}
