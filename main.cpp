//#include <iostream>
#include<ctype.h>
#include "Stack.h"
#include "Queue.h"
#include "Tree.h"
using namespace std;

Queue shunt(string entry); //convert to postfix notation using a shunting algorithm

int main() {
    cout << "original equation: 2+(3*(8-4))" << endl;
    Queue postfix = shunt("2+(3*(8-4))");
    Tree* t = new Tree(postfix);
}

Queue shunt(string entry) {
    Queue chars;
    Queue out;
    Stack ops;
    int ol = 0;
    int len = entry.length();
    int l = len;
    string postfix;

    //store the characters in a queue
    for(int i = 0; i < len; i++) {
        Node* n = new Node(entry.at(i));
        chars.enqueue(n);
    }

    //shunting algorithm
    for(int i = 0; i < l; i++) {
        char c = chars.dequeue()->getValue();
        if(isdigit(c)) {
            Node* n = new Node(c);
            out.enqueue(n);
            postfix.push_back(c);
            ol++;
        } else if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^') { //move ops to the bottom
            Node* t = new Node(c);
            ops.push(t);
            ol++;
        } else if(c=='(') { //move ops to the bottom
            Node* t = new Node(c);
            ops.push(t);
        } else if(c==')') { //remove parenthesis
            c = ops.peek()->getValue();
            while(c!='(') {
                Node* t = new Node(c);
                out.enqueue(t);
                postfix.push_back(c);
                ops.pop();
                c = ops.peek()->getValue();
            }
            ops.pop();
            len-=2;
        } else {
            cout << "not a valid equation" << endl;
            exit(1);
        }
    }
    for(int i = 0; i <= len-ol; i++) { //move the rest to the left
        out.enqueue(ops.peek());
        postfix.push_back(ops.pop()->getValue());
    }
    cout << "postfix notation: " << postfix << endl;
    return out;
}
