#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {
    public:
        Node(int* i); //create a new node
        ~Node(); //destroy a node
        int* getVal(); //get the value of the node
        void setNext(Node* newNext); //set the next node
        Node* getNext(); //get the next node

    private:
        int* val; //value
        Node* next; //next node
};

#endif
