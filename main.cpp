#include <iostream>
using namespace std;

#include "Stack.h"
#include "Queue.h"

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(10);

    cout << q.head->getVal() << endl;
    q.dequeue();
    cout << q.head->getVal() << endl;
    q.dequeue();
    cout << q.head->getVal() << endl;
    q.dequeue();
}
