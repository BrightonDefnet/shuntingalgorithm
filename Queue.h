#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue {
    public:
        Queue(); //create a new queue
        void enqueue(int i); //add something to the queue
        void dequeue(); //remove something from the queue
        Node* head;
        Node* tail;

    private:
};

#endif
