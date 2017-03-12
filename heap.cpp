#include "heap.h"
#include "sortStrategy.h"
#include <iostream>
#include <cstdlib>
#include "priorityQueue.h"
#include <time.h>
#include <cstdio>

using namespace std;

int main()
{
    int a[10]={1,7,8,3,4,6,5,7,8,9};
    //freopen("D:\\heap\\random2.txt", "r", stdin);
    /*priorityQueue<int> q;
    q.push(0);
    q.push(4);
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(16);
    q.push(9);
    q.push(10);
    q.push(14);
    q.push(8);
    q.push(7);
    q.displayQueue();*/
    /*clock_t tStart = clock();
   heap<double> maxHeap(3000);
    maxHeap.heap_sort(a);
    cout<<maxHeap.heap_extractMax(a)<<endl;
    maxHeap.insert(a,18);*/
    bubbleSort <int> sorter;
   sortInterface <int> &interface = sorter;
    sorter.sort(a,10);
    //printf("Time taken: %.16fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    for(int i=0;i<10;i++){
       cout<<a[i]<<" ";
   }
    system("pause");
    return 0;
}
