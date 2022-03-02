#include "Tree.h"

///create a tree from a given queue
Tree::Tree(Queue q) {
    Stack stk;
    bool running = true;
    while(running) {
        if(q.head->getNext() == NULL) {
            running = false;
        }
        tNode* temp = q.head->getVal();
        if(isdigit(temp->getVal())) { //if the value is a digit
            stk.push(temp);
            cout << "pushed " << temp->getVal() << " to the tree" << endl;
        } else { //if the value is an operator
            temp->setRight(stk.peek());
            stk.pop();
            temp->setLeft(stk.peek());
            stk.pop();
            stk.push(temp);
            cout << "pushed " << temp->getVal() << " to the tree" << endl;
            root = temp;
        }
        q.dequeue();
    }
    cout << "NULL" << endl;
}
