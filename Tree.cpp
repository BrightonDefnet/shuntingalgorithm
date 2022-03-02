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
