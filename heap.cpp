#include "cmake-build-debug/heap.h"
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    int a[12]={0,4,1,3,2,16,9,10,14,8,7};

    heap<int> maxHeap(a,11);
    //maxHeap.heap_sort(a);
    //cout<<maxHeap.heap_extractMax(a)<<endl;
    maxHeap.insert(a,18);
    for(int i=1;i<=11;i++){
       cout<<a[i]<<" ";
    }
    //TODO fix the size issue and remember that algorithm works by one indexing not zero indexing;
    system("pause");
    return 0;
}
