#ifndef COURSE_WORK_ALGO_SELL_H
#define COURSE_WORK_ALGO_SELL_H

class Cell {
private:
    bool available;
    int numberOfCell;
public:
    bool isAvailable() const;

    void setAvailable(bool available);

    long getNumber() const;

    void setNumber(int number);
};

#endif //COURSE_WORK_ALGO_SELL_H
