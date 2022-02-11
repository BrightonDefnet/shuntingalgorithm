#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include "tNode.h"

class Queue {
    public:
        Queue(); //create a new queue
        void enqueue(tNode* i); //add something to the queue
        tNode* dequeue(); //remove something from the queue

    private:
        Node* head;
        Node* tail;
};

#endif
