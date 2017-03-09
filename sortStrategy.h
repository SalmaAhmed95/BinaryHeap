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
                                ///O(n log n) algorithms///
/* Merge Sort implementation*/
class mergeSort : public sortInterface
{

    virtual void sort(int array[])
    {
        //implementation
    }
};
/* Quick Sort implementation*/
class quickSort : public sortInterface
{

    virtual void sort(int array[])
    {
        //implementation
    }
};
                                          ///O(n2) algorithms///
/* Bubble Sort implementation*/

class bubbleSort : public sortInterface
{
public:
    virtual void sort(int array[])
    {
      for(int i=0;i<10;i++){
          array[i]=1;
      }
    }
};

/* Insertion Sort implementation*/
class insertionSort : public sortInterface
{

    virtual void sort(int array[])
    {
        //implementation
    }
};
/* selection Sort implementation*/
class selectionSort : public sortInterface
{
    virtual void sort(int array[])
    {
        //implementation
    }
};

#endif //HEAP_SORTSTRATEGY_H
