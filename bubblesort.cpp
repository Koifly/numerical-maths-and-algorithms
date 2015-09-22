#include <iostream>
#include <cmath>
using namespace std;



struct Sequence {
    int a, b, c, d, e;
};


int compare (int& x, int& y) {        //this compares and swaps
    if (x > y) {
        int perm = x;
        x = y;
        y = perm;
    }else {
        return 0;
    }
return 0;
}


void express (Sequence input) {       //this outputs the new sequence
    cout << input.a << ", ";
    cout << input.b << ", ";
    cout << input.c << ", ";
    cout << input.d << ", ";
    cout << input.e << endl;
}


//now for the iterative swaps
Sequence pass (Sequence& input){
   if (input.a <= input.b && input.b <= input.c && input.c <= input.d && input.d <= input.e) {
       return input;
   }else {
       compare (input.a , input.b);
       compare (input.b , input.c);
       compare (input.c , input.d);
       compare (input.d , input.e);

       express(input);
       pass (input);
   }
   return input;
}


int main() {
    Sequence numbers;

    cout << "Give me five integers, hitting enter after each one." << flush;
    cin >> numbers.a;
    cin >> numbers.b;
    cin >> numbers.c;
    cin >> numbers.d;
    cin >> numbers.e;

    pass (numbers);

    express(numbers);
}
