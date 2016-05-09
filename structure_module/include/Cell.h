#ifndef COURSE_WORK_ALGO_CELL_H
#define COURSE_WORK_ALGO_CELL_H

#include <string>

class Cell {
private:
    bool available;
    std::string numberOfCell;
public:
    Cell(bool available, std::string numberOfCell);

    bool isAvailable() const;

    void setAvailable(bool available);

    std::string getNumber() const;

    void setNumber(std::string number);
};

bool Cell::isAvailable() const {
    return available;
}

void Cell::setAvailable(bool available) {
    Cell::available = available;
}

std::string Cell::getNumber() const {
    return numberOfCell;
}

void Cell::setNumber(std::string number) {
    Cell::numberOfCell = number;
}


Cell::Cell(bool available, std::string numberOfCell)
        : available(available), numberOfCell(numberOfCell) { }

#endif //COURSE_WORK_ALGO_CELL_H
