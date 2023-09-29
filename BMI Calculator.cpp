#include <iostream>
using namespace std;

int main(){
	float weight, height, BMI;
	cout << "Wellcome to the calculator BMI\n\n";
	cout << "Please enter your weight(kg) and heigh(cm))\n\n";
	cin >> weight >> height;
	
	BMI = weight/(height*height);
	
	cout << "Your BMI is: " << BMI;
	
	if(BMI < 18.5)
	cout << "\n\nYou are underweight.";
	
	else if (BMI <= 24.9)
	cout << "\n\nYou are normal.";
	
	else if(BMI <= 29.9)
	cout << "\n\nYou are overweight.";
	
	else if(29.9 <= BMI )
	cout << "\n\nYou are obese.";
	
}
