#include <iostream>
#include <string>
using namespace std;

class Course{
	public:
		void displayMessage( string courseName )
		{
			cout << "Welcome to the course for " << courseName << "!" << endl;
		}
};

int main (){
	string nameOfCourse;
	Course myCourse;
	
	cout << "Please enter the course name:" << endl;
	getline( cin, nameOfCourse );
	cout << endl;
	
	myCourse.displayMessage( nameOfCourse );
}
