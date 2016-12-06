
#include <iostream>

#include "Masters.h"

using namespace std;

//user defined constructor
Masters::Masters(const int& ID, const int& year) : Student(ID), gradYear(year) {


}

Masters::~Masters() {

}

void Masters::print() {
	cout << "Masters ID: " << ID << ". Graduation year :" << gradYear << endl;
}

