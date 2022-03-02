//#include <iostream>
#include<ctype.h>
#include "Stack.h"
#include "Queue.h"
#include "tNode.h"
#include "Tree.h"
using namespace std;

Queue shunt(string entry); //convert to postfix notation using a shunting algorithm

///main function
int main() {
    bool running = true;
    cout << "original equation: 2+(3*(8-4))" << endl;
    Queue postfix = shunt("2+(3*(8-4))");
    Tree* tr = new Tree(postfix);
}

///convert to postfix notation using a shunting algorithm
Queue shunt(string entry) {
    Queue chars;
    Queue out;
    Stack ops;
    int ol = 0;
    int len = entry.length();
    int l = len;
    string postfix;
    for(int i = 0; i < len; i++) { //store entry in a queue
        tNode* t = new tNode(entry.at(i));
        chars.enqueue(t);
    }
    for(int i = 0; i < l; i++) {
        char c = chars.head->getVal()->getVal();
        if(isdigit(c)) { //move digits to the left
            tNode* t = new tNode(c);
            out.enqueue(t);
            postfix.push_back(c);
            chars.dequeue();
            ol++;
        } else if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^') { //move ops to the bottom
            tNode* t = new tNode(c);
            ops.push(t);
            chars.dequeue();
            ol++;
        } else if(c=='(') { //move ops to the bottom
            tNode* t = new tNode(c);
            ops.push(t);
            chars.dequeue();
        } else if(c==')') { //remove parenthesis
            c = ops.peek()->getVal();
            while(c!='(') {
                tNode* t = new tNode(c);
                out.enqueue(t);
                postfix.push_back(c);
                ops.pop();
                c = ops.peek()->getVal();
            }
            ops.pop();
            chars.dequeue();
            len-=2;
        } else {
            cout << "not a valid equation" << endl;
            exit(1);
        }
    }
    for(int i = 0; i <= len-ol; i++) { //move the rest to the left
        out.enqueue(ops.peek());
        postfix.push_back(ops.peek()->getVal());
        ops.pop();
    }
    cout << "postfix notation: " << postfix << endl;
    return out;
}
