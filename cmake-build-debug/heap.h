//
// Created by Salma.Ahmed on 04/03/2017.
//

#ifndef HEAP_HEAP_H
#define HEAP_HEAP_H

#include <iostream>

using namespace std;
template <class T>
class heap
{
private:
    int  heap_size;
    void max_heapify(T array[],int index);
    void build_maxHeap(T array[]);
    void bubbleUp(T array [],int index);

public:

    heap(T array[],int heap_size);
    void heap_sort(T array[]);
    T heap_extractMax(T array[]);
    void insert(T array[],T element);
};
/* fills the given array into a vector in order to construct the heap*/
template <class T>
heap<T>::heap(T array[],int size)
{
   heap_size=size-1;
    build_maxHeap(array);
}
/*keeps the heap property of MAX_HEAP*/
template <class T>
void heap<T>::max_heapify(T array[],int index)
{
    int largest;
    int left=2*index;
    int right=2*index+1;
    if(left<=heap_size&&array[left]>array[index])
        largest=left;
    else
        largest=index;
    if(right<=heap_size&&array[right]>array[largest])
        largest=right;
    if(largest!=index){
        int temp=array[index];
        array[index]=array[largest];
        array[largest]=temp;
        max_heapify(array,largest);
    }
}
//builds a max heap out of an unordered array using max heapify function;
template <class T>
void heap<T>::build_maxHeap(T array[])
{
    for(int i=heap_size/2; i>0; i--)
    {
        max_heapify(array,i);
    }
}
/* sorts the array in ascending order using the heap data structure*/
template <class T>
void heap<T>::heap_sort(T array[]) {
    build_maxHeap(array);
    for(int i=heap_size;i>=2;i--){
        int temp=array[1];
        array[1]=array[i];
        array[i]=temp;
        heap_size--;
        max_heapify(array,1);
    }
}
/* extracts the maximum element in array which is the root of max heap*/
template <class T>
T heap<T>::heap_extractMax(T array[]){
    T max=array[1];
    array[1]=array[heap_size];
    heap_size--;
    max_heapify(array,1);
    return max;
}

/* bubbles up a newly inserted element till it gets in place in the heap tree*/
template <class T>
void heap<T>::bubbleUp(T array[],int index)
{
    if(index == 1)
        return;

    int parentIndex = (index)/2;

    if(array[parentIndex] < array[index])
    {
        T temp = array[parentIndex];
        array[parentIndex] = array[index];
        array[index] = temp;
        bubbleUp(array,parentIndex);
    }
}
/*inserts a new element in the heap tree*/
template <class T>
void heap<T>::insert(T array [],T element)
{
    array[heap_size+1] = element;
    bubbleUp(array,heap_size+1);
}
#endif //HEAP_HEAP_H