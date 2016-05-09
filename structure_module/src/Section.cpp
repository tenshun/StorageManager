#include "../include/Section.h"


/**************************************
 * @class Section
 * @desc  Implements Stacks
 *************************************/

Section::Section()
        : S(), n(0) { } // constructor

int Section::size() const { return n; } // number of items in the stack

bool Section::empty() const { return n == 0; } // is the stack empty?

const Elem &Section::top() const { //TODO throw(StackEmpty)
    if (empty()) std::cout << "Some shit happened";
    //throw StackEmpty("Top of empty stack");
    return S.front();
}

void Section::push(const Elem &e) { // push element onto stack
    ++n;
    S.addFront(e);
}

// pop the stack
void Section::pop() { //TODO throw(StackEmpty)
    if (empty())
        std::cout << "Some Shit happened" <<
        //throw StackEmpty("Pop from empty stack");
        --n;
    S.removeFront();
}