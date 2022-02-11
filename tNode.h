#ifndef TNODE_H
#define TNODE_H
#include <iostream>
using namespace std;

class tNode {
    public:
        tNode(int i); //create a new tNode
        ~tNode(); //delete a tNode
        int getVal(); //get the value of a tNode
        void setLeft(tNode* newLeft); //set the left pointer
        void setRight(tNode* newRight); //set the right pointer
        tNode* getLeft(); //get the left pointer
        tNode* getRight(); //get the right pointer

    private:
        int val; //stored value
        tNode* left; //right pointer
        tNode* right; //left pointer
};

#endif
