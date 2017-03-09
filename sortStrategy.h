//
// Created by Salma.Ahmed on 09/03/2017.
//

#ifndef HEAP_SORTSTRATEGY_H
#define HEAP_SORTSTRATEGY_H

using namespace std;

class sortInterface
{
public:
    virtual void sort(int array []){ };

};
                                /**O(n log n) algorithms**/
/* Merge Sort implementation*/
template <class T>
class mergeSort : public sortInterface
{

    virtual void sort(T array[])
    {
        //implementation
    }
};
/* Quick Sort implementation*/
template <class T>
class quickSort : public sortInterface
{

    virtual void sort(T array[])
    {
        //implementation
    }
};
                                          /**O(n2) algorithms**/
/* Bubble Sort implementation*/
template <class T>
class bubbleSort : public sortInterface
{
public:
    virtual void sort(T array[])
    {

    }
};

/* Insertion Sort implementation*/
template <class T>
class insertionSort : public sortInterface
{

    virtual void sort(T array[])
    {
        //implementation
    }
};
/* selection Sort implementation*/
template <class T>
class selectionSort : public sortInterface
{
    virtual void sort(T array[])
    {
        int n = (sizeof array / sizeof array[0]);
        for (int i = 1 ;i < n; i++){
            /* set current element as minimum*/
            int min = i;
            /* check the element to be minimum */
           for(int j=i+1; j< n; j++){
               if(array[j]<array[min])
                   min=j;
           }
           if(min!=i){
               int temp=array[i];
               array[i]=array[min];
               array[min]=temp;
           }

        }
    }
};

#endif //HEAP_SORTSTRATEGY_H
