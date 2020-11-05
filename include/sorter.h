#ifndef sorter_H
#define sorter_H


class sorter1
{
    public:
         int *arr;
        int Size;
        sorter1(int *arr,int Size);
        virtual void Sort(int* arr, int right, int Size);
        sorter1();
       ~sorter1();


};

#endif // sorter1_H
