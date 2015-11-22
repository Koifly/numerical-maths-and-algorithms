#include <iostream>
#include <cmath>
#include <string>

using namespace std;


double leftRectangles (double a, double b) {
	double n = 10;
	double h = (a + b) / n;
	double sum = 0;

	cout << "n" << "\t" << "f(xn)" << "\t" << "sum(f(xn))" << endl;

	for (int i = 1; i < n + 1; i++) {
		double fofi = (a + i * h);
		sum = sum + fofi;

		cout << i << "\t" << fofi << "\t" << sum << endl;
	}
	sum = sum * h;
	return sum;

}

double rightRectangles (double a, double b) {
	double n = 10;
	double h = (a + b) / n;
	double sum = 0;

	cout << "n" << "\t" << "f(xn)" << "\t" << "sum(f(xn))" << endl;

	for (int i = 0; i < n; i++) {
		double fofi = (a + i * h);
		sum = sum + fofi;

		cout << i << "\t" << fofi << "\t" << sum << endl;
	}
	sum = sum * h;
	return sum;
}


int main () {

	cout << "INTEGRAL APPROXIMATION" << endl;
	cout << "insert the range which you would like to approximate" << endl;

	double a;
	double b;

	cin >> a;
	cin >> b;

	double left = leftRectangles(a, b);
	cout << "approximation of area underneath f(x) = x is " << left << endl;

	double right = rightRectangles(a, b);
	cout << "approximation of area underneath f(x) = x is " << right << endl;

	return 0;


}
