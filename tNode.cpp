#include "tNode.h"

tNode::tNode(int i) {
    val = i;
    left = NULL;
    right = NULL;
}

tNode::~tNode() {
    delete &val;
    left = NULL;
    right = NULL;
}

int tNode::getVal() {
    return val;
}

void tNode::setLeft(tNode* newLeft) {
    left = newLeft;
}

void tNode::setRight(tNode* newRight) {
    right = newRight;
}

tNode* tNode::getLeft() {
    return left;
}

tNode* tNode::getRight() {
    return right;
}
