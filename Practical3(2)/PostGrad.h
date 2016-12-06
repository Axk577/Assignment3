/*
 * PostGrad.h
 *
 *  Created on: 5 Dec 2016
 *      Author: Aditya Krishnan
 */

#ifndef POSTGRAD_H_
#define POSTGRAD_H_

#include "Student.h"



class PostGrad: public Student {
public:
	PostGrad(const int& ID, const int& gradYear);
	virtual ~PostGrad();

	void print();

	protected:
		int gradYear;


};

#endif /* POSTGRAD_H_ */
