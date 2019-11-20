#include <iostream>
using namespace std;
int main ()
{
	float weight,height,b;
	cout << "Enter Your Weight in Kilograms: ";
	cin >> weight;
	cout << "Enter Your height in meters: ";
	cin >> height;
	b=weight/height*height;
	cout << "Your BMI(Body Mass Index) value is: " << b << "\n";
	cout << "Underweight: less then 18.5" << "\n"; 
	cout << "Normal: between 18.5 and 24.9" << "\n";
	cout << "Overweight: between 25 and 29.9" << "\n";
	cout << "Obese: 30 or Greater";
}
