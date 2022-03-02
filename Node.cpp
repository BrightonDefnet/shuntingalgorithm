#include "Node.h"

Node::Node(char c) {
    value = c;
    left = NULL;
    right = NULL;
    next = NULL;
}

Node::~Node() {
    left = NULL;
    right = NULL;
    next = NULL;
}

char Node::getValue() {
    return value;
}

Node* Node::getLeft() {
    return left;
}

Node* Node::getRight() {
    return right;
}

Node* Node::getNext() {
    return next;
}

void Node::setLeft(Node* n) {
    left = n;
}

void Node::setRight(Node* n) {
    right = n;
}

void Node::setNext(Node* n) {
    next = n;
}
