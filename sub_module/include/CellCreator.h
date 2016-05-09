//
// Created by Sad on 09.05.2016.
//

#ifndef COURSE_WORK_ALGO_CELLCREATOR_H
#define COURSE_WORK_ALGO_CELLCREATOR_H


#include <algorithm>
#include <string>
#include "Creator.h"

class CellCreator: public Creator{

public:
    static std::string random_string( size_t length )
    {
        auto randchar = []() -> char
        {
            const char charset[] =
                    "0123456789"
                            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }

    static Cell* getCell() {

        std::string numberOfCell = random_string(20); // generating random string Cell object
        return new Cell(true, numberOfCell);
    }
};


#endif //COURSE_WORK_ALGO_CELLCREATOR_H
