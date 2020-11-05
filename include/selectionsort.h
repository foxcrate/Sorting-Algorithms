#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include"sorter.h"


class selectionsort: public sorter1
{
    public:
        void Sort(int* arr, int right, int left);
        selectionsort();
       ~selectionsort();

};

#endif // SELECTIONSORT_H
