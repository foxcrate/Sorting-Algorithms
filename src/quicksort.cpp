#include "quicksort.h"
#include <iostream>
#include"sorter.h"
using namespace std;

quicksort::quicksort()
{
    //ctor
}
void quicksort:: Sort(int* arr, int right, int left)
{
    int pivot = arr[(right+left)/2];
    int i = right;
    int j = left;
    while(i < j){
        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if(i <= j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if(i<left)
        Sort(arr,i,left);
    if(j>right)
        Sort(arr,right,j);
}
quicksort::~quicksort()
{
    //dtor
}
