#include <iostream>
#include "PostGrad.h"

using namespace std;

PostGrad::PostGrad(const int& ID, const int& year) : Student(ID),  gradYear(year){

}

PostGrad::~PostGrad() {
}

//overriden print method
void PostGrad::print() {
	cout << "PostGrad ID: " << ID << ". Graduation year :" << gradYear << endl;

}
