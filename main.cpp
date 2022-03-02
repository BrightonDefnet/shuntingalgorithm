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
    cout << stk.peek()->getValue() << endl;
    for(int i = 0; i < 4; i++) {
        cout << stk.pop()->getValue() << endl;
    }
}
