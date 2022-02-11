#include "Stack.h"

Stack::Stack() {
    top = NULL;
}

void Stack::push(tNode* i) {
    Node* temp = new Node(i); //create a temporary node
    temp->setNext(top); //set the next node to top
    top = temp; //set the top node to the temp node
}

void Stack::pop() {
    Node* temp; //create a temporary node
    if(top == NULL) { //exit if the stack is empty
        cout << "\nerr: Stack Underflow" << endl;
        exit(1);
    } else {
        temp = top;
        top = top->getNext(); //set the top node to the next node
        free(temp); //free the temporary node from memory
    }
}

tNode* Stack::peek() {
    if(top == NULL) {
        cout << "\n err: attempted to access value that doesn't exist" << endl;
        exit(1);
    } else {
        return top->getVal();
    }
}
