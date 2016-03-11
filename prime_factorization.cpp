// 11-03-2016
//Prime factorization of any number between 1 and 1000

#include <iostream>
#include <vector>

using namespace std;


bool isPrime (int n) {
  
  int m;
  for (int b = 2; b < n; b++) {
    m = n % b;
    if (m == 0) {
      return false;
    }
  }
  return true;
}


vector <int> findNextPrime () {
  
  vector <int> p (168);
  p[0] = 2;
  int count = 1;

  for (int i = 1; i < 501; i++) {
   
    int a = 2 * i + 1;
    
    if (isPrime(a) == true) {
      p [count] = a;
      count++;
    }
  }

  return p;
}


void factorize (int n) {
  
  vector <int> p = findNextPrime();
  vector <int> factors;
  
  if (isPrime (n) == true) {
    cout << "The number entered is prime"<< endl;
    return;
  }
  
  int i = 0;
  int j = 0;

  do {
    if ((n % p[i]) == 0) {
      factors.push_back(p[i]);
      n = n / factors[j];
      j++;
    }else {
      i++;
    }
  } while (i < p.size());

  cout << "The prime factorization of " << n << " is:" << endl;
  for (int i = 0; i < factors.size() - 1; i++) {
    cout << factors[i] << "x";
  }
  cout << factors[factors.size() - 1] << endl;

  return;
}


int main () {

  int n;
  cout << "Enter a positive integer of your choice." << endl;
  cin >> n;

  factorize(n);

  return 0;
}
