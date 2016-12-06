/*
 * Point2D.h
 *
 *  Created on: 5 Dec 2016
 *      Author: Aditya Krishnan
 */

#ifndef POINT2D_H_
#define POINT2D_H_

class Point2D {
public:
	Point2D(int x = 0, int y = 0);
	virtual ~Point2D();

	void print();

private:
int x;
int y;
};

#endif /* POINT2D_H_ */
