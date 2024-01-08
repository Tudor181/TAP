#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h" 

template <typename U>
class LinkedList {
private:
    Node<U> *first;
    int count;

public:
    LinkedList() {
        this->first = nullptr;
        this->count = 0;
    }

    bool isEmpty();

    bool add(U data);

    bool remove(U data);

    bool contains(U data);

    void print();
};

#endif
