#include "Tree.h"

///create a tree from a given queue
Tree::Tree(Queue q) {
    bool running = true;
    Stack stk;
    while(running) {
        if(q.head->getNext() == NULL) {
            running = false;
        }
        Node* temp = q.dequeue();
        if(isdigit(temp->getValue())) {
            Node* n = new Node(temp->getValue());
            stk.push(n);
        } else {
            Node* n = new Node(temp->getValue());
            n->setLeft(stk.pop());
            n->setRight(stk.pop());
            stk.push(n);
            root = n;
        }
    }
}

void Tree::infix(Node* r, string str, int i) {
    if(r->getLeft()->getLeft() != NULL) {
        str.push_back(r->getRight()->getValue());
        str.push_back(r->getValue());
        str.push_back('(');
        i++;
        infix(r->getLeft(), str, i);
    } else {
        str.push_back(r->getRight()->getValue());
        str.push_back(r->getValue());
        str.push_back(r->getLeft()->getValue());
        for(int j = 0; j < i; j++) {
            str.push_back(')');
        }
        cout << "infix notation: " << str << "\n" << endl;
    }
}

void Tree::prefix(Node* r, string str) {
    if(r->getLeft() != NULL) {
        str.push_back(r->getValue());
        str.push_back(r->getRight()->getValue());
        prefix(r->getLeft(), str);
    } else {
        str.push_back(r->getValue());
        cout << "prefix notation: " << str << "\n" << endl;
    }
}
