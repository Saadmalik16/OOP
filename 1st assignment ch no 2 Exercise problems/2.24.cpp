#include <iostream>
using namespace std;
int main()
{
 int num;
 cout << "Enter Number: ";
 cin >> num;
 if ( num % 2 == 0 )
	cout << "The number " << num << " is even" << "\n";
 if ( num % 2 != 0 )
 cout << "The number " << num << " is odd";
 return 0;
 }
