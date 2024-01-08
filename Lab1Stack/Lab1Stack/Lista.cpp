//
//  Lista.cpp
//  Lab1Stack
//
//  Created by Tudor Alin Cofariu on 7.11.2023.
//
#include <iostream>
#include "List.h"
using namespace std;

template <typename U>
LinkedList<U>::LinkedList() {
    this->first = NULL;
    this->count = 0;
}

template <typename U>
bool LinkedList<U>::isEmpty() {
    return this->count == 0;
}

template <typename U>
bool LinkedList<U>::add(U data) {
    Node<U> *newNode = new Node<U>(data);
    if (isEmpty()) {
        this->first = newNode;
        this->count++;
        return true;
    }
    Node<U> *current = this->first;
    while (current->getNext() != NULL) {
        current = current->getNext();
    }
    current->setNext(newNode);
    this->count++;
    return true;
}

template <typename U>
bool LinkedList<U>::remove(U data) {
    if (isEmpty()) {
        return false;
    }
    Node<U> *current = this->first;
    Node<U> *previous = NULL;
    while (current != NULL) {
        if (current->getData() == data) {
            if (previous == NULL) {
                this->first = current->getNext();
            } else {
                previous->setNext(current->getNext());
            }
            this->count--;
            return true;
        }
        previous = current;
        current = current->getNext();
    }
    return false;
}

template <typename U>
bool LinkedList<U>::contains(U data) {
    if (isEmpty()) {
        return false;
    }
    Node<U> *current = this->first;
    while (current != NULL) {
        if (current->getData() == data) {
            return true;
        }
        current = current->getNext();
    }
    return false;
}

template <typename U>
void LinkedList<U>::print() {
    if (isEmpty()) {
        return;
    }
    Node<U> *current = this->first;
    while (current != NULL) {
        cout << current->getData() << " ";
        current = current->getNext();
    }
    cout << endl;
}
