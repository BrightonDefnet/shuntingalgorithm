#include "Queue.h"

Queue::Queue() {
    head = tail = NULL;
}

void Queue::enqueue(int i) {
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
        cout << "queue is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->getNext(); //set the head to the next node
    delete temp; //delete the old head
    if(head == NULL) { //if the head is null, set the tail to null
        tail = NULL;
    }
}
