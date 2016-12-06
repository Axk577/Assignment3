#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(const int& ID) : Person(ID) {

}

Student::~Student() {

}

void Student::print() {
	cout << "Student ID: " << ID << endl;

}

