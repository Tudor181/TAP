//
//  Stack.h
//  Lab1Stack
//
//  Created by Tudor Alin Cofariu on 20.11.2023.
//

#include <iostream>
#ifndef Stack_h
#define Stack_h
#include "/Users/tudor/Documents/f/TAP/Lab1Stack/Lab1Stack/AbstractStack.h"
using namespace std;

class Stack: public AbstractStack
{
    public:
        Stack():AbstractStack(){}
        Stack(int size)
        {
            this->size = size;
            this->top = 0;
            this->array = new int[size];
        }
        ~Stack()
        {
            delete [] array;
        }
        void push(int x)
        {
            if(isFull())
            {
                cout << "Stack is full" << endl;
                return;
            }
            array[top++] = x;
        }
        int pop()
        {
            if(isEmpty())
            {
                cout << "Stack is empty" << endl;
                return -1;
            }
          
            return array[--top];
        }
        int peek()
        {
            if(isEmpty())
            {
                throw("stack is empty");
                cout << "Stack is empty" << endl;
                return -1;
            }
            return array[top-1];
        }
        bool isEmpty()
        {
            return top == 0;
        }
        bool isFull()
        {
            return top == size-1;
        }
        void display()
        {
            if(isEmpty())
            {
                throw("stack is full");
                cout << "Stack is empty" << endl;
                return;
            }
            for(int i = top-1; i >= 0; i--)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
};

#endif /* Stack_h */
