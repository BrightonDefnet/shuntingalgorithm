//#include <iostream>
#include<ctype.h>
#include "Stack.h"
#include "Queue.h"
#include "Tree.h"
using namespace std;

int main() {
    Node* one = new Node('a');
    Node* two = new Node('b');
    Node* three = new Node('c');
    Node* four = new Node('d');
    Node* five = new Node('e');

    //test the stack
    Stack stk;
    stk.push(one);
    stk.push(two);
    stk.push(three);
    stk.push(four);
    stk.push(five);
    for(int i = 0; i < 5; i++) {
        cout << stk.pop()->getValue() << endl;
    }

    //test the queue
    Queue q;
    q.enqueue(one);
    q.enqueue(two);
    q.enqueue(three);
    q.enqueue(four);
    q.enqueue(five);
    for(int i = 0; i < 5; i++) {
        cout << q.dequeue()->getValue() << endl;
    }
}
