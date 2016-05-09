//
// Created by Sad on 07.05.2016.
//

#include <sub_module/include/CellCreator.h>
#include "structure_module/include/Section.h"

int main() {
    //Section *section = new Section();


    Cell *cell = CellCreator::getCell();
    std::cout << cell->getNumber();

    //section->push(cell);


}