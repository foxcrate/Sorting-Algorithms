#include "testbed.h"
#include "selectionsort.h"
#include"quicksort.h"
#include"sorter.h"
#include<iostream>
#include<array>
#include<ctime>
#include<algorithm>
#include<iomanip>
#include<time.h>
#include <bits/stdc++.h>

using namespace std;

testbed::testbed()
{
    //ctor
}
void testbed::generateRandomlist(int *data,int mini,int maxi,int Size)
{
    for(int i=0; i<Size; i++)
    {
        data[i] = (rand()%maxi) + 1 ;
    }
}
void testbed:: generateReverseorderedlist(int *data,int mini,int maxi,int Size)
{
    for(int i=0; i<Size; i++)
    {
        data[i] = (rand()%maxi) + 1 ;
    }
    sort(data,data+Size);
    reverse(data,data+Size);
}
double testbed::runOnce(sorter1 *srt,int *data ,int Size)
{
    //time_t tBefore ;
    //time(&tBefore);
    clock_t start ; //initialization
    start=clock(); //c= current time
    srt -> Sort(data,0,Size);
    clock_t End ;
    End = clock() ;

    return double(End - start)/ CLOCKS_PER_SEC*1000 ;   //********************
}
double testbed::runAndAverage(sorter1 *srt, string type, int mini, int maxi,int Size,int sets_num)
{
    int data[Size];
    double res=0.0 ;
    for (int i=0; i<sets_num ; i++)   //*********************
    {
        if (type=="random")
        {
            generateRandomlist(data,mini,maxi,Size);
            res += runOnce(srt,data,Size) ;  //***********************
        }
        else if (type=="reversed")
        {
            generateReverseorderedlist(data,mini,maxi,Size);
            res += runOnce(srt,data,Size) ;  //***********************
        }
    }
    return res/(double)sets_num ;   //**********************
}

void testbed::runExperient (sorter1 *srt, string type,int mini,int maxi,int  min_val,int max_val,int sets_num,int step)
{
    for (int i=mini ; i<=maxi ; i+=step)
    {
        cout << fixed << setprecision(5) ;
        cout << i << "         " <<  runAndAverage(srt,type,min_val,max_val,i,sets_num) << endl ;
    }
}





testbed :: ~testbed()
{


}
