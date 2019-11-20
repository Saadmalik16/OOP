#include <iostream>
using namespace std;
int main() 
{
  int radius, diameter;
  double constantValue, circumference, area;

  cout << "Radius of the circle: ";
  cin >>radius ;

  diameter = radius * 2;
  cout << "The diameter is: "<< diameter << "\n";

  constantValue = 3.14159;
  circumference = constantValue * diameter;
  cout<< "The circumference is: "<< circumference<< "\n";

  area = constantValue * radius * radius;
  cout <<"The area of the circle is: " <<area ;

  return 0;
}
