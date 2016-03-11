// 27-01-2016
//Gaussian elimination for nonsingular systems

#include <iostream>

using namespace std;


void gaussian () {

  //the dimension of the matrix
  int n;
    
  cout << "Please enter the dimension of your square coefficient matrix." << endl;
  cin >> n;

  double aug [n] [n + 1];
  double x [n];
    
  cout << "Please enter the augmented matrix for the system" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 1; j++) {
      cin >> aug [i] [j];
    }
  }
  
   //the augmented matrix has been entered and is now show to the user
  cout << "Your matrix:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 1; j++) {
      cout << aug [i] [j] << "\t";
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;

  //let's check if this is what the user wanted or not
  char checkAnsw;
  cout << "Is this right? (y if yes, n if no)" << endl;
  cin >> checkAnsw;
    
   //in case the user has made a mistake
  if (checkAnsw == 'n') {
    cout << "No worries." << endl;
    cout << "Please enter the dimension of your square coefficient matrix." << endl;
    cin >> n;
    
    cout << "Please enter the augmented matrix for the system" << endl;
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n + 1; j++) {
        cin >> aug [i] [j];
      }
    }
        
    //the augmented matrix has been entered and is now show to the user
    cout << "Your matrix:" << endl;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n + 1; j++) {
        cout << aug [i] [j] << "\t";
      }
      cout << endl;
    }
    
    cout << endl;
    cout << endl;
  }
    
  //the matrix is now put in upper triangular form
  for (int r = 0; r < n - 1; r++) {
    for (int k = r + 1; k < n; k++) {
      double factor = -(aug [k] [r]) / (aug [r] [r]);
      for (int c = r; c < n + 1; c++) {
        aug [k] [c] = (aug [k] [c]) + factor * (aug [r] [c]);
      }
    }
  }
    
  cout << "The matrix in upper triangular form:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 1; j++) {
      cout << aug [i] [j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
  cout << endl;
    
  //the value of the unknowns (x) is now calculated
  x [n - 1] = (aug [n - 1] [n]) / (aug [n - 1] [n - 1]);
  for (int r = n - 1;r > -1; r--) {
    for (int c = r + 1; c < n; c++) {
      aug [r] [3] = (aug [r] [n]) - (aug [r] [c]) * x [c];
    }
    x [r] = (aug [r] [n]) / (aug [r] [r]);
  }
    
  cout << "The values of the variables in order:" << endl;
  for (int r = 0; r < n; r++) {
    cout << r << "\t" << x [r] << endl;
  }
    
  return;
}


int main() {
  cout << "--GAUSSIAN ALGORITHM--" << endl;
    
  gaussian();
}
