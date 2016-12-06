#include <iostream>
#include "Point2D.h"

using namespace std;

Point2D::Point2D(int X, int Y) : x(X), y(Y) {


}

Point2D::~Point2D() {

}

//print method
void Point2D::print() {
	cout << "[" << x << ", " << y << "]" << endl;
}

