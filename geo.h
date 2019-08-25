

#include <iostream>
#include <cmath>
using namespace std;

class Square {
private:
	int side;
public:
	Square(int s) {
		side = s;
	}

	int Area() {
		int area = side * side;
		return area;
	}

	int Perimeter() {
		return (4 * side);
	}
};

class Circle {
private:
	double pi = 3.14159265358979323846;
	int radius;
	int diameter;
public:
	Circle(int d) {
		diameter = d;
		radius = d / 2;
	}

	double Circumference() {
		return (2 * pi * radius);
	}

	double Area() {
		return (pi * (radius * radius));
	}
};