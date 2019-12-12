#include <iostream>
#include <string>
using namespace std;
int main()
{
	int acc,bal,tot,crd,lim;
	float new_bal;
	cout << "Enter Acoount Number (or -1 to quit): ";
	cin >> acc;
	while (acc != -1)
	{
		cout << "Enter Your Beginning Balance : ";
		cin >> bal;
		cout << "Enter Your Total Charges : ";
		cin >> tot;
		cout << "Enter Your Total Credit : ";
		cin >> crd;
		cout << "Enter Your Credit Limit : ";
		cin >> lim;
		new_bal = (bal+tot)-crd;
		cout << "New Balance is : " << new_bal << "\n";
		cout << "Account        : "<< acc << "\n";
		cout << "Credit Limit   : "<< lim << "\n";
		cout << "Balance        : "<< bal << "\n" << "\n";
		if (new_bal > lim)
		{
			cout << "!!!!!!!!........ Credit Limit Exceeded ...........!!!!!!!! ";
		}
		cout << "\n \n \n";
		cout << "Enter Acoount Number (or -1 to quit): ";
		cin >> acc;
	}
}
