#ifndef COURSE_WORK_ALGO_SELL_H
#define COURSE_WORK_ALGO_SELL_H

class Cell {
private:
    bool available;
    long numberOfCell;
public:
    bool isAvailable() const;

    void setAvailable(bool available);

    long getNumber() const;

    void setNumber(long number);
};

#endif //COURSE_WORK_ALGO_SELL_H
