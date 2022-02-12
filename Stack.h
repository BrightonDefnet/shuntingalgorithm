#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <bits/stdc++.h>
#include "Node.h"
#include "tNode.h"
using namespace std;

class Stack {
    public:
        Stack(); //create a new stack
        void push(tNode* i); //add a node to the top of the stack
        void pop(); //remove a node from the top of the stack
        tNode* peek(); //view the top of the stack
        Node* top; //top node

    private:
};

#endif
