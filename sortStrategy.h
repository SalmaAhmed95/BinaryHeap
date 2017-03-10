//
// Created by Salma.Ahmed on 09/03/2017.
//

#ifndef HEAP_SORTSTRATEGY_H
#define HEAP_SORTSTRATEGY_H

using namespace std;
template <class T>
class sortInterface
{

public:
    virtual void sort(T array []){ };

};

                            /**O(n log n) algorithms**/
/*merging utility function for merge sort*/
template <class T>
void merging(T a[],int low, int mid, int high) {
 int l1, l2, i;
 T b[10000];
  for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
  }
  while(l1 <= mid)
     b[i++] = a[l1++];
  while(l2 <= high)
     b[i++] = a[l2++];
  for(i = low; i <= high; i++)
     a[i] = b[i];
}
/* Merge Sort implementation*/
template <class T>
class mergeSort : public sortInterface <T>
{
public:
    virtual void sort(T array[],int low , int high)
    {
        int mid;
        if(low < high) {
            mid = (low + high) / 2;
            sort(array,low, mid);
            sort(array,mid+1, high);
            merging(array,low, mid, high);
        } else {
            return;
        }
    }
};
/* Quick Sort implementation*/
template <class T>
class quickSort : public sortInterface <T>
{

    virtual void sort(T array[])
    {
        //implementation
    }
};
                                          /**O(n2) algorithms**/
/* Bubble Sort implementation*/
template <class T>
class bubbleSort : public sortInterface <T>
{
public:
    virtual void sort(T array[])
    {

    }
};

/* Insertion Sort implementation*/
template <class T>
class insertionSort : public sortInterface <T>
{

    virtual void sort(T array[])
    {
        //implementation
    }
};
/* selection Sort implementation*/
template <class T>
class selectionSort : public sortInterface <T>
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
               T temp=array[i];
               array[i]=array[min];
               array[min]=temp;
           }

        }
    }
};

#endif //HEAP_SORTSTRATEGY_H
