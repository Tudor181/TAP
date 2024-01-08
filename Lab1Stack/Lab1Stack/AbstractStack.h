//
//  AbstractStack.h
//  Lab1Stack
//
//  Created by Tudor Alin Cofariu on 20.11.2023.
//
#include <iostream>
#ifndef AbstractStack_H
#define AbstractStack_H

class AbstractStack
{
    protected:
        int size;
        int top;
        int *array;
    public:
        AbstractStack()
        {
            this->size = 50;
            this->top = 0;
            this->array = new int[50];
        }
        ~AbstractStack()
        {
            delete [] array;
        }
    
        virtual void push(int x) = 0;
        virtual int pop()=0;
        virtual int peek()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual void display()=0;

};

#endif /* AbstractStack_h */
