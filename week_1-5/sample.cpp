#include<iostream>
#include <ctime>
using namespace std;

int main() {
    int number1, number2, temp, studentanswer;
    srand (time(0));
    number1 = rand() % 10;
    number2 = rand() % 10;
    if (number1 > number2) {
        temp = number1;
        number1= number2;
        number2= temp;
    }
    cout<< "After first number ===>"<< number1 << endl;
    cout<< "After second number ===>"<< number2 << endl;

    cout << "What is the value of " << number2 << " - " << number1 << "? ";
    cin >> studentanswer;
    if (studentanswer == (number2 - number1)) {
        cout << "Congratulations! Your answer is correct." << endl;
    } else {
        cout << "Sorry, the correct answer is " << (number2 - number1) << "." << endl;
    }
}