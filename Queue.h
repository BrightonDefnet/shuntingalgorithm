#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue {
    public:
        Queue(); //create a new queue
        void enqueue(Node* n); //add something to the queue
        Node* dequeue(); //remove something from the queue

    private:
        Node* head;
        Node* tail;
};

#endif
