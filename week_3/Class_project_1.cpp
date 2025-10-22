#include<iostream>
using namespace std;
/*int main() {
    cout << "      *"<< endl;
    cout << "     * *"<< endl;
    cout << "    *   *"<< endl;
    cout << "   *******"<< endl;
    cout << "  *       *"<< endl;
    cout << " *         *"<< endl;
    cout << "*           *"<< endl;
    return 0;
}
*/
int main() {
    cout<< "Area of circle calculator"<< endl;
    double radius, pi = 3.14;
    cout<< "Enter the radius of the circle: ";
    cin>> radius;
    double area = pi * radius* radius;
    cout<< "The area of the circle is: "<< area << endl;
    return 0;
}