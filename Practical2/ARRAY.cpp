#include <iostream>


using namespace std;


void initialiseArray(int N, int M){


	double Max = numeric_limits<double>::max();

	double Min = -Max;

	double** array = new double*[N]; //make an array of pointers which each point to an array of M elements

		for(int i = 0; i < N; ++i)

		    array[i] = new double[M];//each row contains an array with M elements(rows)

		for(int i = 0; i < N; ++i) {
				for(int j = 0; j < M; ++j) {

							array[i][j] = (i+j) % 2 == 0 ? Min:Max; //assigning each position with either the MAX or the MIN value

					}
		}
}







int main(){


	int Rowcount;

	int Columncount;

	//getting the rows and columns from the user
	cout << "Please enter the number of rows " << endl;

	cin >> Rowcount;

	cout << "Please enter the number of columns " << endl;

	cin >> Columncount;
	initialiseArray(Rowcount, Columncount);

}
