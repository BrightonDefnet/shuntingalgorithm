#include "Tree.h"

//2384-*+
Tree::Tree(Queue q) {
    Stack stk;
    while(q.head != NULL) {
        tNode* temp = q.head->getVal();
        if(isdigit(temp->getVal())) {
            stk.push(temp);
        } else {
            temp->setRight(stk.peek());
            stk.pop();
            temp->setLeft(stk.peek());
            stk.pop();
            stk.push(temp);
            root = temp;
        }
        q.dequeue();
    }
}
