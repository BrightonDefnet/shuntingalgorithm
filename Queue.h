#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include "tNode.h"

class Queue {
    public:
        Node* head;
        Node* tail;
        Queue(); //create a new queue
        void enqueue(tNode* i); //add something to the queue
        void dequeue(); //remove something from the queue

    private:
};

#endif
