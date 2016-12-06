/*
 * Person.h
 *
 *  Created on: 5 Dec 2016
 *      Author: Aditya Krishnan
 */

#ifndef PERSON_H_
#define PERSON_H_

class Person {
public:
	Person();
	virtual ~Person(); //the destructor is overridable since when calling the delete function,
	//we would like to call the destructor of the class of the object being deleted
};

#endif /* PERSON_H_ */
