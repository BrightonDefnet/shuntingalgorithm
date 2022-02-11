#include "Node.h"

Node::Node(tNode* i) {
    val = i;
    next = NULL;
}

Node::~Node() {
    delete &val;
    delete &character;
    next = NULL;
}

tNode* Node::getVal() {
    return val;
}

void Node::setChar(char c) {
    character = c;
}

char Node::getChar() {
    return character;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}

Node* Node::getNext() {
    return next;
}
