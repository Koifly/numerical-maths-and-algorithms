#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


void ask (double n){
    cout << "Tell me a number other than five." << endl;
    cin >> n;

    if (n != 5) {
        ask (n);
    }else {
        cout << "I told you NOT 5!" << endl;
        return;
    }
}


int main(){
    double number;
    ask (number);
    return 0;

}
