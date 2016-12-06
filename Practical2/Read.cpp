//
//#include <iostream>
//#include <fstream>
//#include <map>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//
//
//
//void count_words(string filename) {
//	map<string, int> word_count;
//
//	ifstream in(filename.c_str());
//
//	if(!in) {
//		cout << "OOPS" << endl;
//		return;
//	}
//
//	string word;
//	while(in >> word) {
//		++word_count[word];
//		//cout << "w: " << word << endl;
//	}
//
//	// do a simple loop through map to find the max:
//	int max_count = 0;
//	string most_common_word;
//
//	for(auto& e : word_count) {
//		if(e.second > max_count) {
//			max_count = e.second;
//			most_common_word = e.first;
//		}
//	}
//	cout << "most common word: " << most_common_word << " " << max_count << endl;
//}
//
//int main(int argc, char **argv) {
//
//	count_words("info");
//	return 0;
//}
