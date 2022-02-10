#include <iostream>
using namespace std;

#include "Stack.h"

int main() {
    Stack stk;

    int a = 1;
    int b = 2;
    int c = 3;

    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    stk.push(p1);
    stk.peek();

    stk.pop();
    stk.peek();

    stk.push(p2);
    stk.peek();

    stk.push(p3);
    stk.peek();
}
