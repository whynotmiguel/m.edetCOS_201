#include<iostream>
using namespace std;
int main()
{
 cout<<"This program will calculate your total purchase amount with sales tax included."<<endl;
 double TPA;
 cout<< "Please put in the total purcahase amount for your goods."<<endl;
 cin>> TPA;
 double total =TPA + (TPA *0.06);
 cout<<"Your total is: " << total <<endl;
    return 0;
}