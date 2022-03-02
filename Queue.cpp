#include "Queue.h"

Queue::Queue() {
    head = tail = NULL;
}

void Queue::enqueue(Node* n) {
    Node* temp = n;
    if(tail == NULL) { //if empty, set head and tail to the given node
        head = tail = temp;
        return;
    }
    tail->setNext(temp); //add the temp node to the end
    tail = temp; //set the tail to temp
}

Node* Queue::dequeue() {
    if(head == NULL) {
        cout << "\nerror: attempted to dequeue an empty queue" << endl;
        exit(1);
    }
    Node* temp = head;
    head = head->getNext();
    if(head == NULL) tail = NULL; //set the tail to null if the head is null
    return temp;
}
