#include <iostream>
#include "geo.h"
using namespace std;

int main() {

	Square test(5);

	cout << "Square" << endl;
	cout << "=========================" << endl;
	cout << "Area: " << test.Area() << endl;
	cout << "Perimeter: " << test.Perimeter() << endl << endl;

	Circle test2(10);

	cout << "Circle" << endl;
	cout << "=========================" << endl;
	cout << "Area: " << test2.Area() << endl;
	cout << "Circumference: " << test2.Circumference() << endl;


	return 0;
}