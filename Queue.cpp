#include "Queue.h"

Queue::Queue() {
    head = tail = NULL;
}

void Queue::enqueue(tNode* i) {
    Node* temp = new Node(i);
    if(tail == NULL) { //if empty, set head and tail to a new node
        head = tail = temp;
        return;
    }
    tail->setNext(temp); //add the temp node to the end
    tail = temp; //set the end to temp
}

void Queue::dequeue() {
    if(head == NULL) { //return if queue is empty
        cout << "\nerr: attempted to dequeue and empty queue" << endl;
        exit(1);
    }
    Node* temp = head; //create a temporary node
    head = head->getNext(); //set the head to the next node
    delete temp;

    if(head == NULL) { //if the head is null, set the tail to null
        tail = NULL;
    }
}
