#ifndef SRC_DLINKEDLIST_H_
#define SRC_DLINKEDLIST_H_

#include <iostream>
#include "DNode.h"

using namespace std;

class DLinkedList {
public:

    DLinkedList(): header(NULL), trailer(NULL){

    }

    ~DLinkedList(){

    	//while list is not empty we remove the header
    	while (!empty())
    				pop_front();
    }

    bool empty() const {

    	return header==NULL;
    }

    DNode* front() const{

    	return header;
    }

    DNode* back() const{

    	return trailer;
    }

    void push_front(const string& n){

    	//inserting at the beginning of the List
    	 DNode *a = new DNode(n, header);
    	 header->set_prev(a);
    }

    void push_back(const string& data){

    	//inserting the node to the back of the List
    	DNode *a = new DNode(data, trailer, NULL);
    	trailer->set_next(a);

    }

    void pop_front(){

    	//empty list
    	 if(header == NULL) {

    			 }
    			 else{
    				 DNode *a = header;

    				 header = a->get_next(); //make	head	point	to	next	node	or	null
    				 header->set_prev(NULL);
    				 a->~DNode();//remove the node
    			 }
    }

    void pop_back(){

    	if(trailer == NULL) {

    	    			 }
    	    			 else{

    	    				 DNode *a = trailer;
    	    				 trailer = a->get_prev(); //make the trailer point to the previous node of the current trailer
    	    				 trailer->set_next(NULL);
    	    				 delete a;


    	    			 }

    }

protected:
    DNode *header;
    DNode *trailer;

};

#endif /* SRC_DLINKEDLIST_H_ */

