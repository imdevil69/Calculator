#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class bank
{       char name[100],add[100],y;
        int balance;
       public:
	          void open_account();
			  void depositive_money();
			  void withdraw_money();
			  void display_account();
		};
	void bank :: open_account()
	{
		cout<<"enter your full name :: ";
		cin.ignore();
		cin.getline(name,100);
		cout<<"enter your addrass :: ";
		cin.ignore();
		cin.getline(add,100);
		cout<<"what type of account you want to open saving (s) or current (c)";
		cin>>y;
		cout<<"enter amount for deposite :: ";
		cin>>balance;
		cout<<"your account is created \n";
	}
int main(){
    cout<<"1) Open Account  \n";
	cout<<"2) Deposite Money  \n";
	cout<<"3) Withdraw Money  \n";
	cout<<"4) Display Account  \n";
	cout<<"5) Exit  \n";
	
	getch();	
	return 0;
}
