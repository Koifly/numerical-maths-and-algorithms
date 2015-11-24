#include <iostream>
#include <cmath>
#include <string>

using namespace std;




double rectangles (double a, double b, char letter) {

	double initial;
	double n = 10;
        double h = (a + b) / n;
        double sum = 0;

	//the kind of rectangle approximation is chosen
	if (letter == 'a') {
		initial = 0.0;
	} else if (letter == 'b') {
		initial = 1.0;
	} else if (letter == 'c') {
		initial = 0.0;
		a = a + h / 2;
	} else {
		cout << "ERROR" << endl;
	}

    for (int i = initial; i < n + initial; i++) {
    	double fofi = (a + i * h);
    	sum = sum + fofi;
    }
    sum = sum * h;
    return sum;


}


double itsaTrap (double a, double b) {
	double n = 10;
	double sum = 0;
	double h = (a + b) / n;

	for (int i = 1; i < n + 1; i++) {
		double oneArea = ((a + (i - 1) * h) + (a + i * h)) / 2;
		sum = sum + oneArea;
	}
	sum = sum * h;
	return sum;

}


double simpson (double a, double b) {
	double n = 10;
	double sum = 0;
	double h = (a + b) / n;

	double sumOne = a + (a + n * h);
	double sumTwo = 0;
	double sumThree = 0;

	for (int i = 0; i < n; i++) {
		i++;
		sumTwo = sumTwo + (a + h * i);
	}

	for (int i = 1; i < n + 1; i++) {
		i++;
		sumThree = sumThree + (a + h * i);
	}

	sum = sumOne + 4 * sumTwo + 2 * sumThree;
	sum = sum * h / 3;

	return sum;
}


double integrate (double a, double b) {
	double result = -(pow(a, 2) / 2) + (pow(b, 2) / 2);

	return result;
}


//here we decide with function to carry out depending on the user's answer
double integrateMe (double a, double b, char letter) {
	double result;
	
	//this could be also done with a series of if statements
	//but I feel switch is clearer in this case
	switch (letter) {
	case 'a':
		result = rectangles (a, b, letter);
		break;
	case 'b':
		result = rectangles (a, b, letter);
		break;
	case 'c':
		result = rectangles (a, b, letter);
		break;
	case 'd':
		result = itsaTrap (a, b);
		break;
	case 'e':
		result = simpson (a, b);
		break;
	case 'f':
		result = integrate (a, b);
		break;
	default:
		cout << "ERROR" << endl;

	}

	return result;

}


int main () {

	//this program can carry out several different methods of integral approximation
	//it takes a user-defined interval
	//all methods are carried out on the function f(x) = x

	cout << "INTEGRAL APPROXIMATION" << endl;
	cout << "Which method of integration would you like to see? type the letter" << endl;

	cout << "a" << "\t" << "left rectangles" << endl;
	cout << "b" << "\t" << "right rectangles" << endl;
	cout << "c" << "\t" << "centre rectangles" << endl;
	cout << "d" << "\t" << "trapezoids" << endl;
	cout << "e" << "\t" << "simpson's" << endl;
	cout << "f" << "\t" << "just integrate!" << endl;

	char letter;

	cin >> letter;

	cout << "What interval would you like to integrate in?" << endl;

	double a;
	double b;

	cin >> a;
	cin >> b;

	double result = integrateMe (a, b, letter);

	cout << "the area under the function f(x) = x is " << result << endl;



	return 0;


}
