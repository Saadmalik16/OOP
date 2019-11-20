#include <iostream>
using namespace std;
int main ()
{
	int side,peri,area;
	cout << "Enter Length of a Side of a Square: ";
	cin >> side;
	area=side*side;
	peri=4*side;
	cout << "Area is: " << area << "\t Perimeter is: " << peri;	
}
