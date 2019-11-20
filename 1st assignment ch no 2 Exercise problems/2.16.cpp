#include <iostream>
using namespace std;
string op;
int main ()
{
	int a,b,c;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter value of first variable: ";
	cin >> a;
	cout << "Enter value of second variable: ";
	cin >> b;
	if (op=="+")
	{
		c=a+b;
		cout<< "Sum is: "<<c;
	}
	else if (op=="-")
	{
		c=a-b;
		cout << "Subtraction is: "<< c;
	}
	else if (op=="/")
	{
		c=a/b;
		cout << "Division is: "<< c;
	}
	else if (op=="*")
	{
		c=a*b;
		cout << "Multiplication is: "<< c;
	}
	else 
	{
		cout << "This operator can't be identified";
	}
	return 0;
}
