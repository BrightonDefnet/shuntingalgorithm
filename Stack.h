#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

class Stack {
    public:
        Stack();
        void push(int i); //add a node to the top of the stack
        void pop(); //remove a node from the top of the stack
        void peek(); //view the top of the stack

    private:
        Node* top;
};

#endif
