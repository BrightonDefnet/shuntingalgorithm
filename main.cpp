#include <iostream>
#include<ctype.h>
#include "Stack.h"
#include "Queue.h"
#include "tNode.h"
using namespace std;

Queue toChars(string entry); //convert a given string to postfix notation
tuple<Stack, Stack> sort(Queue chars, int len); //sort

///main function
int main() {
    bool running = true;
    string str = "(2(1+4)^2)/3";
    int len = str.length();
    Queue chars = toChars(str);
    tuple<Stack, Stack> sorted = sort(chars, len);
    Stack nums = get<0>(sorted);
    Stack ops = get<1>(sorted);
    cout << "nums: " << nums.peek()->getVal() << endl;
    cout << "ops: " << ops.peek()->getVal() << endl;
}

///convert a given string to postfix notation
Queue toChars(string entry) {
    Queue chars;
    int len = entry.length();
    for(int i = 0; i < len; i++) { //store entry in a queue
        tNode* t = new tNode(entry.at(i));
        chars.enqueue(t);
    }
    return chars;
}

///sort into two stacks
tuple<Stack, Stack> sort(Queue chars, int len) {
    Stack nums;
    Stack ops;
    for(int i = 0; i < len; i++) {
        char c = chars.head->getVal()->getVal();
        if(isdigit(c)) {
            tNode* t = new tNode(c);
            nums.push(t);
            chars.dequeue();
        } else if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^'||c=='('||c==')') {
            tNode* t = new tNode(c);
            ops.push(t);
            chars.dequeue();
        } else {
            cout << "not a valid equation" << endl;
            exit(1);
        }
    }
    return make_tuple(nums, ops);
}
