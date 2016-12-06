#include "Person.h"

#include <iostream>

#include <ctime>

using namespace std;

//default constructor for person
Person::Person() {
	cout << "Person::Person() constructor " << clock() << endl;

}

//destructor
Person::~Person() {
	cout << "Person::~Person() destructor " << clock() << endl;
}

