#include <iostream>
#include <cmath>

using namespace std;


void addition (double a, double b) {
    double c = a + b;

    cout << "The answer is " << c << endl;
}


void subtraction (double a, double b) {
    double c = a - b;

    cout << "The answer is " << c << endl;
}


void multiplication (double a, double b) {
    double c = a * b;

    cout << "The answer is " << c << endl;
}

void division (double a, double b) {
    double c = a / b;

    cout << "The answer is " << c << endl;
}


int main() {
    cout << "Welcome!" << endl;
    cout << "I am Computer, give me a simple calculation to do!" << endl;

    double a;
    double b;
    char symbol;

    cin >> a;
    cin >> symbol;
    cin >> b;

    switch (symbol) {
        case '+' :
        addition (a, b);
        break;

        case '-' :
        subtraction (a, b);
        break;

        case '*' :
        multiplication (a, b);
        break;

        case '/' :
        division (a, b);
        break;

        default :
        cout << "I don't know how to do that." << endl;
        break;
    }

    return 0;
}
