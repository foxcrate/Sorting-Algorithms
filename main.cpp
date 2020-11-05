#include <iostream>
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


using namespace std;

int main()
{
//    void runExperient (sorter1 *srt, string type,int mini,int maxi,int  min_val,int max_val,int sets_num,int step)
    quicksort q;
    selectionsort s;
    testbed t;
    t.runExperient(&s,"random",100,2000,10,1000,1000,100);
 //t.runExperient(&s,"reverse",100,2000,10,1000,1000,100);
  //t.runExperient(&q,"random",100,2000,10,1000,1000,100);
  //t.runExperient(&q,"reverse",100,2000,10,1000,1000,100);


    return 0;
}
