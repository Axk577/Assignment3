#include <iostream>

#include <ctime>

using namespace std;

#include "Student.h"

//default constructor
Student::Student() : Person() {
	cout << "Student::Student() " << clock() << endl;

}

//destructor
Student::~Student() {
	cout << "Student::~Student() " << clock() << endl;
}

