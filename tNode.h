#ifndef TNODE_H
#define TNODE_H
#include <iostream>
using namespace std;

class tNode {
    public:
        tNode(char c); //create a new tNode
        ~tNode(); //delete a tNode
        char getVal(); //get the value of a tNode
        void setVal(char c); //set the value
        void setLeft(tNode* newLeft); //set the left pointer
        void setRight(tNode* newRight); //set the right pointer
        tNode* getLeft(); //get the left pointer
        tNode* getRight(); //get the right pointer

    private:
        char val; //stored value
        tNode* left; //right pointer
        tNode* right; //left pointer
};

#endif
