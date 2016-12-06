#ifndef SRC_DNODE_H_
#define SRC_DNODE_H_


#include <iostream>

using namespace std;

class DNode {
public:

	//user defined constructor with container element and previous and next pointers
    DNode(const string& elem, DNode *p = nullptr, DNode *n = nullptr) :
    	data(elem), prev(p), next(n) {

    }


    DNode(DNode *p = nullptr, DNode *n = nullptr) : prev(p), next(n) {

    }

    ~DNode(){

    	delete this;
    }

    const string& get_data() const {
    	return this->data;

    }

    void set_data(const string& s) { this->data = s; }

    void set_next(DNode *n) {

    	this->next = n;
    }

    void set_prev(DNode *p){

    	this->prev = p;

    }

    DNode* get_next() const { return next; }

    DNode* get_prev() const { return prev; }

    friend inline ostream& operator<<(ostream& os, const DNode& n) {
        return os << "\"" << n.get_data() << "\"";
    }

private:

    string data;
    DNode *next;
    DNode *prev;
};

#endif /* SRC_DNODE_H_ */
