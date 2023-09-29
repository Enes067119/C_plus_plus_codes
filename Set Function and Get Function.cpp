#include <iostream>
#include <string>
using namespace std;

class Course{
	public:
		void setCourseName( string name){
			courseName = name;
		}
		
		string getCourseName(){
			return courseName;
		}
		
		void displayMessage(){
			cout << "Welcome to the course for\n" << getCourseName() << "!" << endl;
		}
		
	
	private:
		string courseName;
};

    
    int main(){
    	string nameOfCourse;
    	Course myCourse;
    	
    	cout << "Initial course name is: " << myCourse.getCourseName() << endl;
    	cout << "\nPlease enter the course name:" << endl;
    	getline( cin, nameOfCourse );
    	myCourse.setCourseName( nameOfCourse );
    	
    	cout << endl;
    	myCourse.displayMessage();
	}
