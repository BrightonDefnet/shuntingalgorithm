#ifndef TREE_H
#define TREE_H
#include <iostream>
#include<ctype.h>
#include "Queue.h"
#include "Stack.h"
using namespace std;

class Tree {
    public:
        Tree(Queue q);

    private:
        Node* root;
};

#endif
