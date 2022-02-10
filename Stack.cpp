#include "Stack.h"

Stack::Stack() {
    top = NULL;
}

void Stack::push(int* i) {
    Node* current = top;
    if(current == NULL) {
        top = new Node(i);
    } else {
        while(current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(new Node(i));
    }
}

void Stack::pop() {
    Node* current = top;
    if(current == NULL) {
        cout << "stack is empty!" << endl;
        return;
    }
    if(current->getNext() == NULL) {
        delete top;
        top = NULL;
        return;
    }
    while(current->getNext() != NULL) {
        current = current->getNext();
    }
    Node* tmp = current->getNext();
    current->setNext(NULL);
    delete tmp;
}

void Stack::peek() {
    Node* current = top;
    if(top == NULL) {
        cout << "stack is empty!" << endl;
        return;
    }
    while(current->getNext() != NULL) {
        current = current->getNext();
    }
    cout << *current->getVal() << endl;
}
