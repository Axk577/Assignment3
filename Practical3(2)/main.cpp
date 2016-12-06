#include <iostream>

#include "PostGrad.h"
#include "Masters.h"

using namespace std;

void q2() {
	int N = 20;

	int year;

	//array of person objects
	Person** arr = new Person*[N];

	//initialising the array of students
	for (int i = 0; i < N; ++i) {
		switch (i % 2) {
		case 0:

			cout << "enter GradYear";

			cin	>> year;
			arr[i] = new PostGrad(i, year);
			break;
		case 1:

			cout << "enter GradYear";

			cin	>> year;
			arr[i] = new Masters(i, year);
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < N; ++i) {
		arr[i]->print();
	}
}

int main() {
	q2();
	return 0;
}
