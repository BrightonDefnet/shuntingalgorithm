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
        void setChar(char c); //set the internal character
        char getChar(); //get the internal character
        void setNext(Node* newNext); //set the next node
        Node* getNext(); //get the next node

    private:
        tNode* val; //value
        char character;
        Node* next; //next node
};

#endif
