#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "tNode.h"
using namespace std;

class Node {
    public:
        Node(tNode* i); //create a new node
        ~Node(); //destroy a node
        tNode* getVal(); //get the value of the node
        void setNext(Node* newNext); //set the next node
        Node* getNext(); //get the next node

    private:
        tNode* val; //value
        Node* next; //next node
};

#endif
