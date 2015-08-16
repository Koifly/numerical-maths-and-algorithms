#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


//swap swaps two integers
int swap (int& n, int& m) {
    int efmrl = n;
    n = m;
    m = efmrl;
    return n, m;
}


//compare says if one integer is larger than another
bool compare (int n, int m) {
    return (n > m);
}


//creates a vector
vector <int> createVector (int n) {
    vector <int> numbers (n);
    return numbers;
}


//compares one with all the ones before and swaps if necessary
vector <int> singlePass (int n, vector <int>& efmrl) {
    for (int i = 0; i < n; i++) {

       if(compare (efmrl[i], efmrl[n])) {

           swap (efmrl[i], efmrl[n]);
       }
       for (int i = 0; i < efmrl.size(); i++) {
        cout << efmrl[i] << ", ";
    }
    cout << endl;
    }
    return efmrl;
}



vector <int> insertionSort (vector <int>& efmrl) {
    for (int i = 1; i < efmrl.size(); i++) {

        singlePass(efmrl[i], efmrl);
    }
    return efmrl;
}


int main() {
    int a;

    cout << "Tell me how many numbers you intend to give me." << endl;
    cin >> a;

    vector <int> values = createVector (a);

    cout << "Good, now give me the numbers that you want me to sort. They have to be integers." << endl;
    for (int i = 0; i < values.size(); i++) {
        cin >> values[i];
    }

    insertionSort(values);
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << ", ";
    }
    cout << endl;

}
