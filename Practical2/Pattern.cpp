//#include <iostream>
//using namespace std;
//
//void pattern1() {
//
//	int ncols = 5;
//	int nrows = 5;
//	for(int i = 0; i < nrows; ++i) {
//		for(int j = 0; j < ncols; ++j) {
//			cout << "*"; //we print out * at every iteration
//		}
//		cout << endl; // new line
//	}
//}
//
//void pattern2(){
//
//		int ncols = 13;
//			int nrows = 5;
//			for(int i = 0; i < nrows; ++i) {
//
//				for(int j = 0; j < ncols; ++j) {
//
//					if(i == 0 || i%2 == 0){
//
//					cout << ((i%4 == j%4) ? "*" : "-");//this helps to print * every 4th iteration
//
//					}else{
//
//						cout << ((j%2 == 1) ? "*" : "-");//when both
//						//the row and column are not multiples of 4 then we print the pattern * every other iteration
//					}
//				}
//				cout << endl; // new line at end of each row
//			}
//	}
//
//
//
//
//
//
//int main() {
//	pattern1();
//
//	cout << endl ;
//
//	pattern2();
//	return 0;
//}
