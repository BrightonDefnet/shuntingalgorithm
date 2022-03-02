#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {
    public:
        Node(char c);
        ~Node();
        char getValue();
        Node* getLeft();
        Node* getRight();
        Node* getNext();
        void setLeft(Node* n);
        void setRight(Node* n);
        void setNext(Node* n);

    private:
        char value;
        Node* left;
        Node* right;
        Node* next;
};

#endif
