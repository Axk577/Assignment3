
#ifndef PERSON_H_
#define PERSON_H_

class Person {
public:

	//user defined constructor
	Person(const int& ID);
	virtual ~Person();

	virtual void print();

	protected:
		int ID;
};

#endif /* PERSON_H_ */


