//
// Created by Sad on 14.03.2016.
//

#ifndef COURSE_WORK_ALGO_STORAGE_H
#define COURSE_WORK_ALGO_STORAGE_H

#include <iostream>

template <class T>
class Storage{
private:
    int front, rear, max;
    T *q;
    Section section;
public:
    Storage(int size=0);
    ~Storage();
    int enqueue(T   );
    T dequeue();
};


template<class T>
Storage<T>::Storage(int size) {

    front = rear = 0;
    max = size;
    q = new T[size];

}

template<class T>
Storage<T>::~Storage() {
    delete[]q;
}

template<class T>
int Storage<T>::enqueue(T elem) {
    if (front >= max) {
        std::cout << "[!] Could not enqueue. StorageOverflow" << "\n";
        return -2;
    }
    q[front] = elem;
    front++;
    std::cout << "[-] Enqueued " << elem << " to Storage" << "\n";
    return 1;
}

template<class T>
T Storage<T>::dequeue() {
    if (front <= 0) {
        std::cout << "[!] Could not dequeue. StorageUnderflow" << "\n";
        return -1;
    }
    T result = q[rear];
    std::cout << "[-] Dequed " << result << " from Storage\n";
    ++rear;
    return result;

}



#endif //COURSE_WORK_ALGO_STORAGE_H
