#include "Stack.h"

Stack::Stack() {
    top = NULL;
}

void Stack::push(Node* n) {
    Node* temp = n;
    temp->setNext(top);
    top = temp;
}

Node* Stack::pop() {
    Node* temp;
    if(top == NULL) {
        cout << "\nerror: stack underflow" << endl;
        exit(1); //exit if the stack is already empty
    } else {
        temp = top;
        top = top->getNext();
        return temp;
    }
}

Node* Stack::peek() {
    if(top == NULL) {
        cout << "\nerror: attempted to access empty stack" << endl;
        exit(1); //exit if the stack is empty
    } else {
        return top;
    }
}
