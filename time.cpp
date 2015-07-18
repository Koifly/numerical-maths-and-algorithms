#include <iostream>
using namespace std;


int main ()
{
  //creating some variables
  int hour;
  int minute;
  char colon;

  //assigning values to variables
  hour = 9;      //setting the hour to 9
  minute = 41;   //minutes to 41
  colon = ':';   //and a colon

  //outputting a sentence using me variables
  cout << "The time is ";
  cout << hour;
  cout << colon;
  cout << minute << endl;

  return 0;
}
