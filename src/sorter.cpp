#include "sorter.h"
#include <bits/stdc++.h>
using namespace std ;
sorter1::sorter1()
{
    arr=NULL;
    Size=0;
}

sorter1::sorter1(int *a, int Size )
{
    this -> Size = Size;
    arr=new int [Size];
    for(int i=0; i<Size;i++){
        arr[i]=a[i];
    }
}
void sorter1::Sort(int* arr, int right, int Size)
{
    return ;
}
sorter1::~sorter1()
{
    //dtor
}
