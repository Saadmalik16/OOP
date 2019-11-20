#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter First number: ";
	cin >>a;
	cout << "Enter Second number: ";
	cin >>b;
	if (a!=b)
	{
		cout << "These Numbers are not equal " << "\n";
		if (a<b)
		{
			cout << "First number is smaller ";
		} else
		{
			cout << "Second number is smaller ";
		}
	}else 
	{
	 cout << "These Numbers are Equal";	
	}
 } 
