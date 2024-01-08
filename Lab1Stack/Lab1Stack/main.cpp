//
//  main.cpp
//  Lab1Stack
//
//  Created by Tudor Alin Cofariu on 20.11.2023.
//

#include <iostream>
#include "/Users/tudor/Documents/f/TAP/Lab1Stack/Lab1Stack/Stack.h"
using namespace std;


int main()
{
    AbstractStack *stack = new Stack(10);
    stack->push(11);
    stack->push(22);
    stack->push(33);
    stack->push(44);
    stack->display();
    cout << stack->pop() << endl;
    delete stack;
    return 0;
}
