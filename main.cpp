#include <iostream>
using namespace std;

#include "Stack.h"

int main() {
    Stack stk;
 
    stk.push(1);
    stk.peek();

    stk.push(2);
    stk.peek();

    stk.push(3);
    stk.peek();

    stk.pop();
    stk.peek();

    stk.pop();
    stk.peek();

    stk.pop();
    stk.peek();
}
