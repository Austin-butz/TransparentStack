#include "TransparentStack.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    TransparentStack<int> test;
    test.push(12);
    test.push(50);
    test.push(1);
    int output;
    output = test.peek_at(0);
    cout << "Stack[0] = " << output << endl;
    assert(output == 12);
    output = test.peek_at(1);
    cout << "Stack[1] = " << output << endl;
    assert(output == 50);
    output = test.peek_at(2);
    cout << "Stack[2] = " << output << endl;
    assert(output == 1);
    return 0;
}
