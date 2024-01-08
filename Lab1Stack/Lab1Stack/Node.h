//
//  Node.h
//  Lab1Stack
//
//  Created by Tudor Alin Cofariu on 7.11.2023.
//
#ifndef NODE_H
#define NODE_H

template <typename U>
class Node {
private:
    U data;
    Node<U>* next;

public:
    Node(U data) : data(data), next(nullptr) {}

    U getData() {
        return data;
    }

    Node<U>* getNext() {
        return next;
    }

    void setNext(Node<U>* next) {
        this->next = next;
    }
};

#endif
