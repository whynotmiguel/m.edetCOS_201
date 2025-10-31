#include <iostream>
using namespace std;

int main() {
    cout <<"Input your Age: "<< endl;
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are a minor." << endl;
    } 
    else {
        cout << "You are not an adult" << endl;
    }
}