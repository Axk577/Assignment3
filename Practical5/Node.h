#ifndef NODE_H_
#define NODE_H_

#include <iostream>

using namespace std;

class Node {
public:

	//user defined constructor where the element value and the pointer is set
	Node(const string& element, Node *n = nullptr):data(element), next(n) {

	}


	Node(Node *n = nullptr) :
		next(n) {
	}

	~Node(){

		delete this;
	}

	const string& get_data() const {
		return this->data;
	}

	void set_data(const string& s){
		this->data = s;
	}


	Node* get_next() const {

		return next;
	}

	void set_next(Node *n) {

		this->next = n;

	}

	friend inline ostream& operator<<(ostream& os, const Node& n) {

		return os << "\"" << n.get_data() << "\"";

	}


	public:

		string data;
		Node *next;
	};



#endif /* NODE_H_ */

