#include<iostream>
using namespace std;
class Account
{  
private:
    int x,y,z;
public:   
    void Input_Amount()
	{
    	cout<<"Enter the Deposite Amount:";
    	cin>>x;
    }
    void Output_Amount()
	{
    	cout<<"Enter the Withdraw Account:";
        cin>>y;
    }
   void condition()
   {
    if(y>x)
     {
        cout<<"====>Error<===="<<"\n \n";
        cout<<"Withdraw amount exceeded: "<<"\n";
        cout<<"You Enter the Correct Amount......!"<<<<"\n"<<"\n";
        cout<<"Your Remaining Amount is: "<<x<<"\n"<<"\n"<<"\n";
    }
    else
        z=x-y;
        cout<<"\n Your Remaining Amount is "<<z<<endl<<endl;
        cout<<" Thanks for using  Bank "<<endl<<endl;
        }
};
int main()
{
    cout<<"Welcome to the Bank"<<"\n"<<"\n";
    Account acc;
    acc.Input_Amount();
    acc.Output_Amount();
    acc.condition();
    
    return 0;
}
