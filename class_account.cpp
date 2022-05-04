//class_account.cpp (lab-5);
//Class Account: Program to create a class ACCOUNT to represent your bank account;

#include<iostream>
using namespace std;
class Account                                   // Creating a class name ACCOUNT;
{
	private:
		string acc_no;                          // String to store account no.;

	public:
		int intr,balance,w_money,d_money;
		Account( )
		{
			acc_no="APGV123009N98";
			balance=0;
		}
		void diposit(int d_money)                // Function to deposit money;
		{
			balance+=d_money;                    // Updating balence;
			cout<<"Present balance in your account  "<<acc_no<<" is: "<<balance<<endl;
		}
		void withdraw(int w_money)               // Function to withdraw money;
		{
			if(w_money >=balance)                // Conditional statement to show insufficient balence;
			{
				cout<<"Insufficient balance"<<endl;
			}
			else{
				balance -=w_money;                // Updating balence after withdrawal;
				cout<<"The amount debited is: "<<w_money<<endl;
				cout<<"Current balance in your account  "<<acc_no<<" is: "<<balance<<endl;
			}
		}
		void interest(int t,int r)                 // Function to calculate interest;
		{
			intr=(balance*t*r)/100;                // simple interest formula;
			cout<<"The intrest to your balance is: "<<intr<<endl;
		}
};
int main()                                         // Main code;
{
	Account account;
	int n,money,time,rate=2;

	cout<<"Enter your options \n 1.Deposit \n 2.Withdraw \n 3.Total Interest"<<endl;
	cin>>n;
	while(n>=0)
	{
	   switch (n)                                        // Taking switch case;
	   {
		   case 1:
				cout<<"Enter money to deposit : ";
				cin>>money;
				account.diposit(money);                  // deposite function being called;
				break;
			case 2:
				cout<<"Enter money to withdraw : ";
				cin>>money;
				account.withdraw(money);                 // withdraw function being called;
					break;
			case 3:
				cout<<"Enter time to calculate total interest : ";
				cin>>time;
				account.interest(time,rate);              // intreast function being called;
					break;
			case -1:
				cout<<"Exit\n ";
					break;
				
		}
		  cout<<"Enter your options \n 1.Diposit \n 2.Withdraw \n 3.Interest"<<endl;
		  cin>>n;
	}
	return 0;
}