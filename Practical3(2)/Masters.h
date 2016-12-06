/*
 * Masters.h
 *
 *  Created on: 5 Dec 2016
 *      Author: Aditya Krishnan
 */

#ifndef MASTERS_H_
#define MASTERS_H_


#include "Student.h"


class Masters: public Student {
public:
	Masters(const int& ID, const int& gradYear);
	virtual ~Masters();

	void print();

	protected:
	int gradYear;

};

#endif /* MASTERS_H_ */
