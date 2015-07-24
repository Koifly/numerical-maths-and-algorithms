#include <iostream>
#include <cmath>
using namespace std;


struct Point{
  int x,y;
};

bool evenFlag (int n){
  return (n%2 == 0);
}

int russian (int a, int b){
     if (evenFlag (a/2)){
      a = a/2;
      b = b*2;
      russian (a,b);
  }
  else{
      cout << b*2 << endl;
  }
}

int main (){
  Point numbers = {4,8};
  russian (numbers.x, numbers.y);
}
