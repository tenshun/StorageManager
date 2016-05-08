//
// Created by Sad on 14.03.2016.
//

#ifndef COURSE_WORK_ALGO_SECTION_H
#define COURSE_WORK_ALGO_SECTION_H


#include <iostream>
#include "string"

template <class T>
class Section {
private:
    T* st;
    int currTop, maxTop;

public:
    Section(int = 0);
    ~Section();

    int push(T);
    T pop();
    int currentStackPos(){
        return currTop;
    }
};

template<class T>
Section<T>::Section(int size) {
    maxTop = size;
    currTop = -1;
    st = new T[size];
}

template<class T>
Section<T>::~Section() {
    delete[]st;
}

template<class T>
int Section<T>::push(T a) {
    if (currTop >= maxTop) {
        std::cout << "[!] Could not push. StackOverflow" << "\n";
        return -2;
    }
    currTop++;
    st[currTop] = a;
    std::cout << "[-] Pushed " << a << " to Section" << "\n";
    return 1;
}

template<class T>
T Section<T>::pop() {
    if (currTop <= -1) {
        std::cout << "[!] Could not pop. Reached the bottom" << "\n";
        return -1;
    }
    currTop--;
    std::cout << "[-] Popped " << st[currTop + 1] << " from Section" << "\n";
    return st[currTop + 1];
}

#endif //COURSE_WORK_ALGO_SECTION_H
