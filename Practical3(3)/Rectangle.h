/*
 * Rectangle.h
 *
 *  Created on: 5 Dec 2016
 *      Author: Aditya Krishnan
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Point2D.h"

class Rectangle {
public:
	Rectangle();
	//user defined constructor
	Rectangle(const Point2D& p0, const Point2D& p1, const
			Point2D& p2, const Point2D& p3);
	virtual ~Rectangle();

	// copy constructor
	Rectangle(const Rectangle& other);

	//copying value from one object to another
	Rectangle& operator=(const Rectangle& rectangle);

	void print();

	private:
	Point2D *pointlist;
};

#endif /* RECTANGLE_H_ */

