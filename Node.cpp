#include "Node.h"

Node::Node(tNode* i) {
    val = i;
    next = NULL;
}

Node::~Node() {
    delete &val;
    next = NULL;
}

tNode* Node::getVal() {
    return val;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}

Node* Node::getNext() {
    return next;
}
