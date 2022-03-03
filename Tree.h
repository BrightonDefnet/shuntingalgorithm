#ifndef TREE_H
#define TREE_H
#include <iostream>
#include<ctype.h>
#include "Queue.h"
#include "Stack.h"
using namespace std;

class Tree {
    public:
        Tree(Queue q); //create a new tree
        void infix(Node* r, string str, int i); //parse to infix notation
        void prefix(Node* r, string str); //parse to prefix notation
        Node* root;

    private:
};

#endif
