//define class gradebook with a member function dispalymessage create a gradebook object and call its displaymessage function
#include <iostream>
using namespace std;
//Gradebook class defination
class GradeBook{
	public: //data ka scope incapsulation public rkhna ha ya private data ko explore kesay bnaya jata hay 
		//functionn that display a welcome message to the Grade Book user 
		void displayMessage() const
		{
			cout << "Welcome to the Grade Book / Our First Object " << endl;
		} // end function display messsage
	public:	
		int sum(int a , int b)
		{
 		 return a+b;
		}
}; //end class grade book
//functio main begain program execution
int main()
{
	GradeBook saad; //create a gradebook object named mygrade book
	saad.displayMessage(); //call object displaymessage function
	GradeBook s;
	cout<<s.sum(5,5);
	
} // end main
