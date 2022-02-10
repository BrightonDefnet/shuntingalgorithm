#include "Node.h"

Node::Node(int* i) {
    val = i;
    next = NULL;
}

Node::~Node() {
    delete &val;
    next = NULL;
}

int* Node::getVal() {
    return val;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}

Node* Node::getNext() {
    return next;
}
