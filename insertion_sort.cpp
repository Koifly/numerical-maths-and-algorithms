// 27-06-2015
//Insertion sort

#include <iostream>
#include <vector>

using namespace std;


int swap (int& n, int& m) {
  if (n > m) {
    int temp = n;
    n = m;
    m = temp;
  }else {
    
    return 0;
  }
  
  return 0;
}


//compares and swaps any element with all the ones before it
vector <int> dotheThing (int a, vector <int>& v) {
  for (a; a >= 1; a--) {
    int i = a - 1;
    swap (v[i], v[a]);
  }
  
  return v;
}


vector <int> insertionSort(vector <int>& v) {
  for (int i = 1; i < v.size(); i++){
    dotheThing (i, v);
  }
  
  return v;
}


int main() {
  int a;

  cout << "Tell me how many numbers you intend to give me." << endl;
  cin >> a;

  vector <int> numbers (a);

  cout << "Good, now give me the numbers that you want me to sort. They have to be integers." << endl;

  for (int i = 0; i < a; i++) {
    cin >> numbers[i];
  }

  insertionSort (numbers);

  for (int j = 0; j < numbers.size(); j++) {
    cout << numbers[j] << ", ";
  }

  return 0;
}
