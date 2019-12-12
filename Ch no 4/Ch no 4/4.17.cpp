#include <iostream>
#include <string>
using namespace std;
int main()
{
	int counter = 1;
	int sell,sell2,sell3;
	int max=0;
	int max2=0;
	int max3=0;
	while ( counter <=10)
	{
		cout << "PLease Enter Sale Of Salesman # " << counter << " "; 
		cin >> sell;
		cout << "\n";
		if (max<sell)
		{
			max3= max2;
			max2=max;
			max =sell;
		}else
		if (max2<sell)
		{
			max2=max;
			max2 =sell;
		}else
		if (max3<sell)
		{
			max3 =sell;
		}
		
		counter ++;
	}
	cout << "Maximun Sell is : "<< max << "\n";
	cout << "Maximun Sell 2 is : "<< max2 << "\n";
	cout << "Maximun Sell 3 is : "<< max3;
}
