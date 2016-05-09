#ifndef COURSE_WORK_ALGO_SECTION_H
#define COURSE_WORK_ALGO_SECTION_H


#include <iostream>
#include "string"
#include "Cell.h"
#include "SLinkedList.h"

typedef Cell Elem;
class Section {
private:
    SLinkedList<Elem> S;
    int n;
public:
    Section(); // constructor
    int size() const; // number of items in the stack
    bool empty() const; // is the stack empty?
    const Elem& top() const ; // the top element TODO throw(StackEmpty)
    void push(const Elem& e); // push element onto stack
    void pop(); // pop the stack TODO throw(StackEmpty)

};



#endif //COURSE_WORK_ALGO_SECTION_H
