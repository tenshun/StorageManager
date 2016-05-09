#ifndef COURSE_WORK_ALGO_SECTION_H
#define COURSE_WORK_ALGO_SECTION_H


#include <iostream>
#include "string"
#include "Cell.h"

typedef Cell Elem;
class Section {
private:


public:
    Section(); // constructor
    int size() const; // number of items in the stack
    bool empty() const; // is the stack empty?
    const Elem& top() const throw(StackEmpty); // the top element TODO
    void push(const Elem& e); // push element onto stack
    void pop() throw(StackEmpty); // pop the stack TODO

};



#endif //COURSE_WORK_ALGO_SECTION_H
