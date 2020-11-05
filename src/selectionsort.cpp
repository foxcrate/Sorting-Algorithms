#include "selectionsort.h"
#include"sorter.h"
#include<iostream>
using namespace std;


selectionsort::selectionsort()
{
    //ctor
}
void selectionsort:: Sort(int* arr, int Size, int left)
{
    int pos_min,temp;

    for (int i=0; i < left-1; i++)
    {
        pos_min = i;

        for (int j=i+1; j < left; j++)
        {
            if (arr[j] < arr[pos_min])
                pos_min=j;
        }
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}





selectionsort::~selectionsort()
{
    //dtor
}

void selectSort(int arr[], int n)
{
//pos_min is short for position of min

}
