#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "sorter.h"


class quicksort : public sorter1
{
public:
    quicksort();
    void Sort(int* arr, int right, int left);
    ~quicksort();

};

#endif // QUICKSORT_H
