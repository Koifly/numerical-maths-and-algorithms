#include <iostream>
#include <cmath>

using namespace std;

//the bisection algorithm
double bisect (double s) {
	double a = 0;
	double b = s;

	double mid = (a + b) / 2;
	double test = pow(mid, 2) - s;

	for (int i = 0; i < 4; i++) {

		if (test > 0){
			b = mid;
		} if (test < 0) {
			a = mid;
		} if (test == 0) {
			return mid;
		}
		mid = (a + b) / 2;
	  test = pow(mid, 2) - s;
	}
	return mid;

}


//the babylonian algorithm
double babylonian (double s) {
    double initial = (s / 3) + (17/24);
    double approx;

    for (int i = 0; i < 4; i++) {
        approx = (initial +(s / initial)) / 2;
        initial = approx;
    }

    return approx;

}



int main() {
    //root approximation takes a number
    //and carries out the babylonian method (aka Heron's method)
    //then does the bisection method
	//lastly prints the two approximations and the value calculated by the sqrt() function

    cout << "//--SQUARE ROOT APPROXIMATON--\\ " << endl;
    cout << "Tell me a number you would like me to square root." << endl;

    double s;
    cin >> s;

    double bab = babylonian (s);
    double bis = bisect (s);

    cout << "After 4 iterations the approximate square roots of " << s << " are:" << endl;
    cout << "Using the babylonian method: " << bab << endl;
    cout << "Using the bisection method: " << bis << endl;

    cout << endl;
    cout << endl;


    cout << "The actual square root is " << sqrt (s) << endl;

    return 0;
}
