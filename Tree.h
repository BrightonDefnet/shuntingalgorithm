#ifndef TREE_H
#define TREE_H
#include <iostream>
#include<ctype.h>
#include "tNode.h"
#include "Queue.h"
#include "Stack.h"
using namespace std;

class Tree {
    public:
        Tree(Queue q); //create a binary tree from a postfix stack
        void parse(); //parse to a string
        tNode* root; //root of the tree;

    private:
};

#endif
