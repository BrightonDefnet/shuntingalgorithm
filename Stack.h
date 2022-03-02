#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Node.h"
using namespace std;

class Stack {
    public:
        Stack(); //create a new stack
        void push(Node* i); //add a node to the top of the stack
        Node* pop(); //remove a node from the top of the stack
        Node* peek(); //return the top node without removing it

    private:
        Node* top;
};

#endif
