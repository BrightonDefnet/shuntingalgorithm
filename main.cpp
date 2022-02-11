#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "tNode.h"
using namespace std;

Queue pfix(string entry, int len); //convert a given string to postfix notation

///main function
int main() {
    bool running = true;
    string str = "(2(1+4)^2)/3";
    int len = str.length();
    Queue q = pfix(str, len);
}

///convert a given string to postfix notation
Queue pfix(string entry, int len) {
    Queue chars;
    for(int i = 0; i < len; i++) { //store entry in a queue
        tNode* t = new tNode(entry.at(i));
        chars.enqueue(t);
    }
    for(int i = 0; i < len; i++) { //store entry in a queue
        cout << chars.head->getVal()->getVal() << endl;
        chars.dequeue();
    }
    exit(1);
}
