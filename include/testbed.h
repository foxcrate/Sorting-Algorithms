#ifndef TESTBED_H
#define TESTBED_H
#include "testbed.h"
#include "selectionsort.h"
#include "quicksort.h"
#include "sorter.h"
#include<iostream>
#include<array>
#include<ctime>
#include<algorithm>
#include<iomanip>
#include<time.h>
using namespace std;


class testbed
{
public:
    testbed();
    void generateRandomlist(int *data,int mini,int maxi,int Size);
    void generateReverseorderedlist(int *data,int mini,int maxi,int Size);
    double runOnce(sorter1 *srt,int *data ,int Size);
    double runAndAverage(sorter1 *srt, string type, int mini, int maxi,int Size,int sets_num) ;
    void runExperient (sorter1 *srt, string type,int mini,int maxi,int  min_val,int max_val,int sets_num,int step);
    ~testbed();

};

#endif // TESTBED_H
