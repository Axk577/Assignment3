#ifndef SRC_CLINKEDLIST_H_
#define SRC_CLINKEDLIST_H_

#include <iostream>
#include "Node.h"

using namespace std;

class CLinkedList {

public:

	CLinkedList(): cursor(NULL){

	}

	bool empty() const{

		return cursor == NULL;
	}

	int size() const ;

	// advance the cursor
	void advance(){

		cursor = cursor->get_next();
	}

	// element at the cursor
	Node* front() const {

		return cursor;
	}

	// element following cursor
	Node* back() const {

		return cursor->get_next();
	}

	void push_front(const string& n) {

		//if the list is empty
		if(cursor==NULL){

			Node *a = new Node();   // create new Node
					    a->data(n);
					    a->set_next(a);

		}
		else{
		Node *a = new Node();   // create new Node


		    a->data(n);             // set value
		    a->set_next(cursor->get_next());// make the node point to the next node.

			cursor->set_next(a);
		}

	}

	void push_back(const std::string& data) ;

	void pop_front() ;
	void pop_back();

	friend ostream& operator<<(ostream& os, const LinkedList& ll) {

		return os << "\"" << ll << "\"";
	}

private:

	// we have to have a print function which starts the link hopping at head
	void print(std::ostream& os) const {

		 Node* back = cursor;

				 os << back->data ;
				 //until the list comes into 1 full circular loop
						 while(back->next==back) {
							 back=back->next;

							 os << back->data;
						 }

	}

	// this is the recursive print which is called with a Node*
	void print(Node *n, std::ostream& os) const ;

protected:
	//int size;
	Node *cursor;

};
#endif /* SRC_CLINKEDLIST_H_ */
