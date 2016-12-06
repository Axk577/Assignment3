#include <iostream>
using namespace	std;
void sum_even(int	n) {
				int	sum	= 0;
				for(int i= 1;i<=n; ++i) {
								sum	+= (i*2);
				}
				cout	<< "sum	even:	N=" <<	n	<< "	is	" <<	sum	<<	endl;
}
int main() {
				int	n;
				cout	<< "Enter	n:	";

				cin	>>	n; //getting the input from the user

				cout	<<	endl;

				sum_even(n);//puts the number into the sum_even function
				return 0;
}
