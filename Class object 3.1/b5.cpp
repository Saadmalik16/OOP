#include <iostream>
#include <string>
#include "bank.cpp"
using namespace std;
int main ()
{
	cout << "Welcome to the Bank \n \n ";
	string n;
	int pass,add,wid;
	cout << "Enter name : ";
	cin >> n;
	cout << "Enter pass : ";
	cin >> pass;
	B5 acc(n,pass);
	acc.getbal();
	cout << "Enter Amount you want to added : ";
 	cin >> add;
 	acc.setbal(add);
	acc.getbal();
	cout << "Enter Amount you Want to Widraw : ";
	cin >> wid;
	acc.widraw(wid);
	acc.getbal();
}
