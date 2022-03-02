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
            stk.push(tp);
            cout << "pushed " << tp->getVal() << " to the tree" << endl;
        } else { //if the value is an operator
            tNode* tp = new tNode(temp->getVal());
            tNode* r = new tNode(stk.peek()->getVal());
            tp->setRight(r);
            stk.pop();
            tNode* l = new tNode(stk.peek()->getVal());
            tp->setLeft(l);
            stk.pop();
            stk.push(tp);
            cout << "pushed " << tp->getVal() << " to the tree" << endl;
            root = tp;
        }
        q.dequeue();
    }
    cout << "NULL" << endl;
}
