#include "Tree.h"

///create a tree from a given queue
Tree::Tree(Queue q) {
    bool running = true;
    while(running) {
        if(q.head->getNext() == NULL) {
            running = false;
        }
        tNode* temp = q.head->getVal();
        if(isdigit(temp->getVal())) { //if the value is a digit
            tNode* tp = new tNode(temp->getVal());
            cout << "\nadded " << tp->getVal() << " to tree" << endl;
            stk.push(tp);
        } else { //if the value is an operator
            tNode* tp = new tNode(temp->getVal());
            char c = stk.peek()->getVal();
            tNode* l = new tNode(c);
            tp->setLeft(l);
            stk.pop();
            cout << "\nadded " << l->getVal() << " to left" << endl;
            c = stk.peek()->getVal();
            tNode* r = new tNode(c);
            tp->setRight(r);
            stk.pop();
            cout << "added " << r->getVal() << " to right" << endl;
            stk.push(tp);
            cout << "added root " << tp->getVal() << " to tree" << endl;
            root = tp;
        }
        q.dequeue();
    }

    //test
    for(int i = 0; i < 3; i++) {
        cout << "\nroot: " << root->getVal() << endl;
        cout << "right: " << root->getRight()->getVal() << endl;
        cout << "left: " << root->getLeft()->getVal() << endl;
        root = root->getLeft();
    }
}
