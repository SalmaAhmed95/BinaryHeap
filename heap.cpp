#include "heap.h"
#include "sortStrategy.h"
#include <iostream>
#include <cstdlib>
#include "priorityQueue.h"
using namespace std;

int main()
{
   // int a[12]={0,4,1,3,2,16,9,10,14,8,7};
    priorityQueue<int> q(11);
    q.push(0);
    q.push(4);
    q.push(1);
    q.push(3);
    q.push(2);
    //q.push(16);
    q.push(9);
    q.push(10);
    //q.push(14);
    q.push(8);
    q.push(7);
    q.displayQueue();
    //heap<int> maxHeap(11);
    //maxHeap.heap_sort(a);
    //cout<<maxHeap.heap_extractMax(a)<<endl;
    //maxHeap.insert(a,18);
   // mergeSort <int> sorter;
    //sortInterface <int> &interface = sorter;
   // sorter.sort(a,0,11);
    /*for(int i=0;i<12;i++){
       cout<<a[i]<<" ";
    }*/
    //TODO fix the size issue and remember that algorithm works by one indexing not zero indexing;
    system("pause");
    return 0;
}
