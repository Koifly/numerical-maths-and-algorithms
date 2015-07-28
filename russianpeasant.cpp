#include <iostream>
#include <cmath>
using namespace std;


struct Point{
  int x,y;
};

bool evenFlag (int n){
  return (n%2 == 0);
}

int russian (int a, int b, int s) {

  if (a != 1) {

    bool isEven = evenFlag(a);
    int newA = a / 2;
    int newB = b * 2;

    if ( isEven ) {
      russian (newA,newB,s);
    } else {
      s = s + b;
      russian (newA,newB,s);
    }

  } else {

    cout << s + b << endl;
    return 0;
  }

}


int main (){
  Point numbers;

  cout << "Give me a positive integer :) " << flush;
  cin >> numbers.x;
  if (!cin.good() && cin <= 0) {
    cout << "Hey! That's not a valid number!" << endl;
    return 0;
  }

  cout << "Now another one! " << flush;
  cin >> numbers.y;
  if (!cin.good() && cin <= 0) {
    cout << "Hey! That's not a valid number!" << endl;
    return 0;
  }

  russian (numbers.x, numbers.y, 0);
}
