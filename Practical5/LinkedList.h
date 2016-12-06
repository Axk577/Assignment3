
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList {
public:

	LinkedList(): head(NULL) {

	}

	~LinkedList(){

		while (!empty())
			pop_front();
	}

	bool empty() const{

		return	head==NULL;
	}

	int size() const ;

	Node* front() const {

		return	head;
	}

	Node* back() const{

		 Node* back = head;
		 while(back->next) {
			 back=back->next;
		 }
		 return back;

	}

	void push_front(const string& n)   {

		Node *a = new Node();   // create new Node

		a->set_data(n);             // set value
		a->set_next(head);         // make the node point to the next node.
                            //  If the list is empty, this is NULL, so the end of the list --> OK
    head = a;

	}

	void push_back(const string& data)	{

		// create node
		    Node *a = new Node();
		    a->data = data;
		    a->set_next(NULL);

		    if(head == NULL) {
		    	// if list is empty the entry becomes the new node
		        head = a;
		        return;
		    } else {
		    	// find last and link the new node
		        Node* last = head;
		        while(last->next) {
		        	last=last->next;
		        }

		        last->next = a;

		    }
	}

	void pop_front() {

		 if(head == NULL) {

		 }
		 else{
			 Node *a = head;

			 head = a->get_next(); //make	head	point	to	next	node	or	null
			 a->~Node();
		 }

//		size		size	- 1


	}

	void pop_back();

	friend ostream& operator<<(ostream& os, const LinkedList&
				ll) {

		return os << "\"" << ll << "\"";
	}

	private:
// we have to have a print function which starts the link hopping at head

	void print(ostream& os) const {

		 Node* back = head;

		 os << back->data ;
				 while(back->next) {
					 back=back->next;

					 os << back->data;
				 }
	}

// this is the recursive print which is called with a Node*
	void print(Node *n, ostream& os) const;

	protected:
		Node *head;

		//for some reason i could not initialise the size in the user defined constructor
		//int size;
		};




#endif /* LINKEDLIST_H_ */
