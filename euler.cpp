#include <iostream>
#include <cmath>
using namespace std;


double stepOne (double f, double i, double h)
{
  f + h*(pow(i, 2));
}

double otherSteps (double y,double i, double h)
{
  double x = i +h;
  y + h*(pow(x, 2));
  if (x<=3.0){
    otherSteps (y,x+h,h);
  }
}

int main ()
{
  double y = stepOne (1.0,1.0,0.01);
  cout << y << endl;

  double final = otherSteps (y,1.0,0.01);

  cout << "y is approximately ";
  cout << final <<endl;
  return 0;
}
