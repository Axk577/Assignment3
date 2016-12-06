#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <tuple>
#include <chrono>

using namespace std;
using namespace std::chrono;


 template<typename T>
 double time_elapsed(T& start) {
   auto end = high_resolution_clock::now(); // gets the clock time after the function call
   duration<double> time_span = duration_cast<duration<double>>(end - start);
   // time_span.count() is in seconds
   return time_span.count();
 }



void printVector_function(vector<int> &Z)
{

 //printing out each element of the vector
 for(int i=0; i<Z.size(); i++)
 {
  cout << Z[i]<<" | ";
 }
 cout<<endl;
}

vector<int> multiply_peasant(const vector<int> &X_vector, const vector<int> &Y_vector) {
 //getting the size of the input vectors in order to initialise the result vector
 int sizeOfVector_X = X_vector.size();
 int sizeOfVector_Y = Y_vector.size();

 vector<int> resultVector(sizeOfVector_X+sizeOfVector_Y, 0); //initialises a vector and makes all elements to be equal to zero

 //the pseudocode
 for(int i=(sizeOfVector_Y-1); i>=0; i--)
 {
  int carry = 0;
  for(int j=(sizeOfVector_X-1); j>=0; j--)
  {

   int value = carry + resultVector[i+j+1]+ Y_vector[i] * X_vector[j];
   resultVector[i+j+1] = value%10;
   carry = value/10;
  }
  resultVector[i]+=carry;

 }
// printVector_function(resultVector);

 return resultVector;
}

//checking the time taken for the algorithm
void time_peasants() {

	//the max no of digits a vector can have
	int maxDigits = 51;
	cout << "maxDigits: " << maxDigits << endl;
	double min_seconds = 10;

	//as we iterate through the for loop each time the size of the number increases by 1 digit
	for (int n = 3; n < maxDigits; ++n) {
		int n_repeats = 0;
		vector<int> v;
		for(int i = 0; i < n; ++i) {
			v.push_back(rand() % 9 + 1);
		}
		//vector v with n random digits
		//cout << v << endl;
		auto start = high_resolution_clock::now(); // gets the clock time before the function call

		while (true) {
			multiply_peasant(v, v);

			if (n_repeats > 10000 && //
					n_repeats % 10000 == 0 && //
					time_elapsed(start) > min_seconds) {
				break;
			}
			++n_repeats;
		}


		cout << n << "\t" << n_repeats << "\t" << time_elapsed(start)/n_repeats << endl;
	}
}

template <typename T>
 ostream& operator <<( ostream& os , const vector <T>& v) {
 for (auto& e : v) {
 os << "Resultant Vector is: \n" <<e;
 }
 return os;
 }
 vector <int > v = {4,2,9,4,9,6,7,2,9,4};
 vector <int > res = multiply_peasant(v, v);




 int main(int argc, char **argv)
  {
   vector <int> v{4,2,9,4,9,6,7,2,9,4};
   printVector_function(v);
   printVector_function(v);
   printVector_function(res);

   time_peasants();

   return 0;
  }
