#include <iostream>

using namespace std;

class Lesson{
	public:
		void displayMessage(){
			cout << "Welcome to the Lesson!" << endl;
		}
};

int main(){
	Lesson myLesson;
	myLesson.displayMessage();
}
