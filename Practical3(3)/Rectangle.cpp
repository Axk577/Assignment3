
#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const Point2D& p0, const Point2D& p1, const
		Point2D& p2, const Point2D& p3)  {

	cout << "User Defined rectangle" << endl;
	pointlist = new Point2D[4];
		pointlist[0] = p0;
		pointlist[1] = p1;
		pointlist[2] = p2;
		pointlist[3] = p3;

}

Rectangle::Rectangle() {
	cout << "Default rectangle" << endl;
	pointlist = new Point2D[4];
}

Rectangle::~Rectangle() {

	delete[] pointlist;
}

Rectangle& Rectangle::operator=(const Rectangle& rectangle) {
	cout << "Rectangle assignment " << endl;
	if (this != &rectangle) { // check if the objects are the same
		for (int i = 0; i < 4; ++i) { // copy the array values
			this->pointlist[i] = rectangle.pointlist[i];
		}
	}
	return *this;
}


Rectangle::Rectangle(const Rectangle& other) {
	cout << "Copy constructor" << endl;

	pointlist = new Point2D[4];

	//assigning values of array from the rectangle object to the new rectangle object
	for (int i = 0; i < 4; ++i) {
		this->pointlist[i] = other.pointlist[i];
	}
}

void Rectangle::print() {

	//printing out the 4 coordinates of the rectangle
	for (int i = 0; i < 4; ++i) {
		pointlist[i].print();
	}

}



