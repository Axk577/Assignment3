#include <iostream>
#include "Student.h"


using namespace std;

int main() {

	Person *p = new Person();
	delete p;

	Student *v = new Student();
	delete v;

	return 0;
}


