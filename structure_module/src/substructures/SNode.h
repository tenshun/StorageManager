//
// Created by Sad on 09.05.2016.
//

#ifndef COURSE_WORK_ALGO_SNODE_H
#define COURSE_WORK_ALGO_SNODE_H


template <typename E>
class SNode { // singly linked list node
private:
E elem; // linked list element value
SNode<E>* next; // next item in the list
friend class SLinkedList<E>; // provide SLinkedList access
};

#endif //COURSE_WORK_ALGO_SNODE_H
