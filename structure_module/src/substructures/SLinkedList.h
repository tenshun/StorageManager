
#ifndef COURSE_WORK_ALGO_SLINKEDLIST_H
#define COURSE_WORK_ALGO_SLINKEDLIST_H

#include "SNode.h"

template <typename E>
class SLinkedList { // a singly linked list
public:
    SLinkedList(); // empty list constructor
    ~SLinkedList(); // destructor
    bool empty() const; // is list empty?
    const E& front() const; // return front element
    void addFront(const E& e); // add to front of list
    void removeFront(); // remove front item list
private:
    SNode<E>* head; // head of the list
};


#endif //COURSE_WORK_ALGO_SLINKEDLIST_H
