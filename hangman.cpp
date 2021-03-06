// 04-10-2015 
//A simple game of Hangman using names of objects in the solar system

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


//generates a random word to use in the game
vector <char> randomPlanet () {
    
  vector<char> v [10] {
    vector <char> {'s', 'u', 'n'}, 
    vector<char> {'m', 'e', 'r', 'c', 'u', 'r', 'y'}, 
    vector<char> {'v', 'e', 'n', 'u', 's'}, 
    vector<char> {'e', 'a', 'r', 't', 'h'}, 
    vector<char> {'m', 'a', 'r', 's'},
    vector<char> {'j', 'u', 'p', 'i', 't', 'e', 'r'}, 
    vector<char> {'s', 'a', 't', 'u', 'r', 'n'}, 
    vector<char> {'u', 'r', 'a', 'n', 'u', 's'}, 
    vector<char> {'n', 'e', 'p', 't', 'u', 'n', 'e'}, 
    vector<char> {'p', 'l', 'u', 't', 'o'}
  };
  
  int n = rand() % 10;
  //int n = 8;
  
  return v[n];
}


void express (vector <char> v) {

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  cout << endl;
}

bool rightFlag (vector <char> v, vector <char>& w, char a) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == a) {
      w[i] = v[i];
      return true;
    }
  }
  return false;   
}


void hangman (vector <char>& w, vector <char> v) {

  cout << "Go on then, guess a letter. You have " << 2*v.size() << " guesses" << endl;

  for (int j = 2*v.size(); j >= 0; j--) {
    if (w == v && j != 0) {
      cout << "You did it!" << endl;
      express (w);
      
      return;
    } if (w != v && j != 0) {
      char a;
      cin >> a;
      
      if(rightFlag(v, w, a) == true){
        cout << "Well done! Guess the next letter." << endl;
        express(w);
      } else {
        cout << "Sorry, but that's wrong" << endl;
      }
    } else {
      cout << "Sorry, you lost" << endl;
    }
  }
}



int main() {

  cout << "I am thinking of a body in the solar system." << endl;
  cout << "Each line represents a letter.";
  cout << "Can you guess the word?" << endl;
  
  vector <char> answer = randomPlanet();
  vector <char> x (answer.size(),'_');
  express(x);
  hangman (x, answer);
  
  return 0;
}
