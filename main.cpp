//
// Created by Sad on 07.05.2016.
//

#include <sub_module/include/CellCreator.h>
#include "structure_module/include/Section.h"

int main() {
    //Section *section = new Section();


    SLinkedList<int> list;
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addFront(4);
    list.addFront(5);

    SNode<int>* node = list.search(3);
    if(node != NULL){
        std::cout << "YEAY! 1 " ;
    }

    list.remove(5);

    if(list.search(5) != NULL){
        std::cout << "YEAY! 2 " ;
    } else std::cout << "\n NOPE";




}