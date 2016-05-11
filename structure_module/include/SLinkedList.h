#ifndef COURSE_WORK_ALGO_SLINKEDLIST_H
#define COURSE_WORK_ALGO_SLINKEDLIST_H

#include "SNode.h"

template<typename E>
class SLinkedList { // a singly linked list
public:
    SLinkedList(); // empty list constructor
    ~SLinkedList(); // destructor
    bool empty() const; // is list empty?
    const E &front() const; // return front element
    void addFront(const E &e); // add to front of list
    void removeFront(); // remove front item list
    SNode<E> *search(const E &value);
    int remove(const E &value);
private:
    SNode<E> *head; // head of the list

};


template<typename E>
SLinkedList<E>::SLinkedList() // constructor
        : head(NULL) { }

template<typename E>
bool SLinkedList<E>::empty() const // is list empty?
{ return head == NULL; }

template<typename E>
const E &SLinkedList<E>::front() const // return front element
{ return head->elem; }

template<typename E>
SLinkedList<E>::~SLinkedList() // destructor
{ while (!empty()) removeFront(); }

template<typename E>
void SLinkedList<E>::addFront(const E &e) { // add to front of list
    SNode<E> *v = new SNode<E>; // create new node
    v->elem = e; // store data
    v->next = head; // head now follows v
    head = v; // v is now the head
}

template<typename E>
void SLinkedList<E>::removeFront() { // remove front item
    SNode<E> *old = head; // save current head
    head = old->next; // skip over old head
    delete old; // delete the old head
}

template<typename E>
SNode<E> *SLinkedList<E>::search(const E &value) {
    SNode<E> *pNode = head;

    /* traverse the list */
    while (pNode != NULL) {
        /* Target! */
        if (pNode->elem == value) {
            return pNode;
        }
        /* move to the next one */
        pNode = pNode->next;
    }
    return NULL;
}

template<typename E>
int SLinkedList<E>::remove(const E &value) {

    //SNode<E> *old = search(value); // getting node by value
    //TODO реализовать рекурсивное удаление элемента из списка
    SNode<E> *temp, *prev = nullptr;
    temp = head;
    while (temp != NULL) {
        if (temp->elem == value) {
            if (temp == head) {
                head = temp->next;
                delete (temp);
                return 1;
            }
            else {
                prev->next = temp->next;
                delete (temp);
                return 1;
            }
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }
    return 0;
}

#endif //COURSE_WORK_ALGO_SLINKEDLIST_H
