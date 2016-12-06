#include <iostream>
#include "Point2D.h"
#include "Rectangle.h"

using namespace std;

int main() {


	Point2D p0(0, 0), p1(1, 0), p2(1, 1), p3(0, 1);

	Rectangle r1(p0, p1, p2, p3);

	r1.print();

	Rectangle r2;
	r2.print();

	r2 = r1;
	r2.print();

	return 0;
}
