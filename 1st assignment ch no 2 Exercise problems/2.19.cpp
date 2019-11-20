#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;
	cout << "Enter Third Number: ";
	cin >> c;
	d=a+b+c;
	cout << "Sum is " << d <<"\n";
	d=a+b+c/3;
	cout << "Average is " << d<< "\n";
	d=a*b*c;
	cout << "Product is " << d<< "\n"; 
	if (a<b<c)
	{
		cout << "Largest is "<< c<< "\n";
	} if (a>b<c)
	{
		cout << "Smallest is "<< a << "\n";
	}
}
