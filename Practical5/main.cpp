#include <iostream>
#include "LinkedList.h"

using namespace std;

void q() {
	LinkedList ll;

	ll.push_front("one");
	cout << ll.front() << endl;
	ll.push_front("two");
	cout << ll.front() << endl;
	ll.push_front("three");
	cout << ll.front() << endl;
	ll.push_front("four");
	cout << ll.front() << endl;
	ll.push_front("five");
	cout << ll.front() << endl;
	ll.push_front("six");
	cout << ll.front() << endl;
	ll.push_back("ten");
	cout << ll.front() << endl;
	ll.push_back("eleven");
	cout << ll.front() << endl;
	ll.push_back("twelve");
	cout << ll.front() << endl;
	ll.push_back("thirteen");
	cout << ll.front() << endl;

	//cout << "size: " << ll.size() << endl;

	cout << "front: " << ll.front() << endl;
	cout << "back: " << ll.back() << endl;
	ll.pop_front();
	ll.pop_front();
	ll.push_back("twenty");
	//cout << "size: " << ll.size() << endl;

	cout << ll << endl;
}

int main() {
	q();
	return 0;
}
