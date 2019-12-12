#include <iostream>
using namespace std;
class B5{
	private:
	string name;
	int pass;
	int bal = 15000;
	public:
	B5(string a, int b){
		name=a;
		pass=b;
		cout << "Constructor \n"; //agr ap object ka name class ka name sa likho ga tw wo constructor bn jata hay
	}
	getbal(){
		cout << "Your Current Balance is: "<< bal << "\n";
	}
	setbal(int a){
		if (a>100000)
		{
			cout << "You cannot add more then 1Lakh Rupees \n Please Enter Less then 100000 ";
		}else
		{
			bal = bal + a;
			cout << "You added " << a << " to your Account. \n"; 
		}
	}
	widraw(int a){
		if(a>5000)
		{
			cout << "You Cannot Widraw more then 5000 \n Please Enter less then 5000";
		}else
		{
			bal = bal - a;
			cout << "You widraw " << a << " to your Account. \n"; 	
		}
	}
	
};
