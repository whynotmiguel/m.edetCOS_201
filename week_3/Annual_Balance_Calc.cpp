#include<iostream>
using namespace std;
int main()
{
cout<<"This programme will calculate your annual balance after a year, given your initial balance and annual interest rate."<<endl;
    double initial_balance, annual_interest_rate, annual_balance, annual_balance_2;
    cout<<"Enter your initial balance: ";
    cin>>initial_balance;
    cout<<"Enter your annual interest rate (in percentage): ";
    cin>>annual_interest_rate;
    annual_balance = initial_balance * (1 + annual_interest_rate / 100);
    annual_balance_2 = annual_balance * (1 + annual_interest_rate / 100);
    cout<<"Your annual balance after one year will be: "<<annual_balance<<endl;
    cout<<"Your annual balance after two years will be: "<<annual_balance_2<<endl;
    return 0;
}