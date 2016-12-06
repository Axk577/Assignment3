
#include <iostream>
#include "Person.h"

using namespace std;

//user defined constructor
Person::Person(const int& num) :
	ID(num){

}


Person::~Person() {

}

//virtual function since the print function should be unique for each object type
void Person::print() {
	cout << "Person ID: " << ID << endl;

}
