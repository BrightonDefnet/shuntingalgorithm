#include "Tree.h"

///create a tree from a given queue
Tree::Tree(Queue q) {
    bool running = true;
    Stack stk;
    for(int i = 0; i < 7; i++) {
        Node* temp = q.dequeue();
        if(isdigit(temp->getValue())) {
            Node* n = new Node(temp->getValue());
            stk.push(n);
            cout << "pushed " << n->getValue() << " to stack" << endl;
        } else {
            Node* n = new Node(temp->getValue());
            n->setLeft(stk.pop());
            cout << "set " << n->getLeft()->getValue() << " to left" << endl;
            n->setRight(stk.pop());
            cout << "set " << n->getRight()->getValue() << " to right" << endl;
            stk.push(n);
            cout << "pushed " << n->getValue() << " to stack" << endl;
        }
    }
}
