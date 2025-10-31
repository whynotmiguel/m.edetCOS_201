#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"This program helps you calculate the hypotenuse of a right triangle given the lengths of the two sides."<<endl;
    double a, b, c;
    cout << "Enter the lengths of the two legs of the right triangle: ";
    cin >> a >> b;
    c = sqrt(a * a + b * b);
    cout << "The length of the hypotenuse is: " << c << endl;
    return 0;
}