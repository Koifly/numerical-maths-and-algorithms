#include <iostream>
#include <cmath>
#include <vector>

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

void recieveScalars () {
    cout << "I'm ready, give me a calculation to do." << endl;
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
        cout << "UNDEFINED" << endl;
        break;
    }
}



void vectorAddition (vector <double> a, vector  <double> b) {
    vector <double> c (a.size());
    for (int i = 0; i < a.size(); i++) {
        c[i] = a[i] + b[i];
    }
    cout << " The answer is ";
    for (int i = 0; i < c.size(); i++) {
        cout << c[i]<< ",";
    }
    cout << endl;
}

void vectorSubtraction (vector <double> a, vector  <double> b) {
    vector <double> c (a.size());
    for (int i = 0; i < a.size(); i++) {
        c[i] = a[i] - b[i];
    }
    cout << " The answer is ";
    for (int i = 0; i < c.size(); i++) {
        cout << c[i]<< ",";
    }
    cout << endl;
}

void scalarProduct (vector <double> a, vector  <double> b) {
    double c = 0;
    for (int i = 0; i < a.size(); i++) {
        c = c + (a[i] * b[i]);
    }
    cout << "The answer is " << c << endl;
}

void recieveVectors () {
     cout << "I'm ready." << endl;
    int size;
    char symbol;
    
    cout << "Tell me the size of your vectors." << endl;
    cin >> asize;
    vector <double> a (size);
    cout << "Now tell me the elements of your vector" << endl;
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    
    cout << "Tell me the size of your second vector." << endl;
    cin >> bsize;
    vector <double> b (size);
    cout << "Now tell me the elements of your vector" << endl;
    for (int i = 0; i < b.size(); i++) {
        cin >> b[i];
    }
    
    cout << "What's the operation you want me to do?" << endl;
    cin >> symbol;
    
    
    switch (symbol) {
        case '+' :
        vectorAddition (a, b);
        break;
        
        case '-' :
        vectorSubtraction (a, b);
        break;
        
        case '*' :
        scalarProduct (a, b);
        break;
        
        default :
        cout << "UNDEFINED" << endl;
        break;
    }
}


int main() {
    cout << "Welcome!" << endl;
    cout << "I am Computer, do you want to work with scalars or vectors?" << endl;
    
    string a;
    cin >> a;
    
    if (a == "scalars"){
        recieveScalars();
    } if (a == "vectors") {
        recieveVectors();
    }
    
    return 0;
}
