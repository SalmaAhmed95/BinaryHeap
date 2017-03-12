//
// Created by Salma.Ahmed on 09/03/2017.
//
#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "heap.h"
template <class T>
class priorityQueue{
private:
    int sizeq;
    T heapArray[10000]={0};
    heap<T> * maxHeap ;
public:
    priorityQueue();
    void push(T element);
    T pop();
    T top();
    int size();
    bool isEmpty();
    void displayQueue();

};
/*constructor*/
template <class T>
priorityQueue<T>::priorityQueue()
{
    sizeq=0;
    maxHeap=new heap<T>(0);
}
/*push inserts an element to its place in the queue according to a key*/
template <class T>
void priorityQueue<T>::push(T element) {

   maxHeap->insert(heapArray,element);
    sizeq++;
}
/*pop deletes the element with highest priority from the queue*/
template <class T>
T priorityQueue<T>::pop() {
   maxHeap.heap_extractMax(heapArray);
    sizeq--;
}
/*top returns the element with highest priority in the queue*/
template <class T>
T priorityQueue<T>::top() {
   return heapArray[1];
}
/* returns the size of the queue*/
template <class T>
int priorityQueue<T>::size() {
  return sizeq;
}
/* returns true if queue is empty*/
template <class T>
bool priorityQueue<T>::isEmpty() {
  if(sizeq==0)
      return true;
  return false;
}
template <class T>
void priorityQueue<T>::displayQueue() {
    for(int i=1;i<sizeq;i++)
        cout<<heapArray[i]<<" ";
}
#endif