#include <iostream>
using namespace std;
class table {
	public:
		int display(int a){
		for (int i=0; i<=10; i++)
		{
			cout << a << " * " << i << " = " << a*i << "\n";
		}

		}
};
int main ()
{
	int a;
	cout << "Enter any Number: ";
	cin >> a;
	table t;
	cout<<t.display(a);
}
