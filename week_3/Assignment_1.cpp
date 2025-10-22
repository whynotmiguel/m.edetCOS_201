#include<iostream>
using namespace std;
int main(){
  cout<<"This program will give you the sum, difference and product of two numbers."<<endl;
    double x,y;
    cout<<"Enter two numbers (Note for positive difference, fist value>second value): ";
    cin>>x>>y;
    cout<<"Sum: "<<x+y<<endl;
    cout<<"Difference: "<<x-y<<endl;
    cout<<"Product: "<<x*y<<endl;
    return 0;
}