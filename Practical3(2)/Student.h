#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student: public Person {
public:
	Student(const int& ID);
	virtual ~Student();

	virtual void print();

};

#endif /* STUDENT_H_ */
