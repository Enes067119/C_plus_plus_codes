#include <iostream>
#include <string>
using namespace std;

class Course
{
	public:
		
		Course(string name)
		{
			setCourseName(name);
		}
		
		void setCourseName(string name)
		{
			courseName = name;
		}
		
		string getCourseName()
		{
			return courseName;
		}
		
		void displayMessage()
		{
			cout << "Welcome to the course for\n" << getCourseName() << "!" << endl;
		}
		
	private:
		
		string courseName;
};

	int main()
	{
		Course course1("CS101 Introduction to C++ Programming");
		Course course2("CS102 Data Structures in C++");
		
		cout << "course1 created for course: " << course1.getCourseName()
		<< "\ncourse2 created for course: " << course2.getCourseName()
		<< endl;
		
	}
