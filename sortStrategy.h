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
    virtual void sort(T array [],int low ,int high){ };

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
public:
       virtual void sort(T arr[], int left, int right) {
            int i = left, j = right;
            int tmp;
            int pivot = arr[(left + right) / 2];

            /* partition */
            while (i <= j) {
                while (arr[i] < pivot)
                    i++;
                while (arr[j] > pivot)
                    j--;
                if (i <= j) {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                    i++;
                    j--;
                }
            };

            /* recursion */
            if (left < j)
                sort(arr, left, j);
            if (i < right)
                sort(arr, i, right);
        }
};
                                          /**O(n2) algorithms**/
/* Bubble Sort implementation*/
template <class T>
class bubbleSort : public sortInterface <T>
{
public:
    virtual void sort(T array[],int size)
    {
        bool notSorted = true;
        int j = 0;
        T temp;
        while (notSorted) {
            notSorted = false;
            for (int i = 0; i < (size - 1 - j); i++) {
                if (array[i] > array[i + 1]) {
                    notSorted = true;
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
            }

        }
    }
};

/* Insertion Sort implementation*/
template <class T>
class insertionSort : public sortInterface <T>
{
public:
    virtual void sort(T array[],int size)
    {
        T element;
        int j;
        for (int i = 2; i < size; i++) {
            element = array[i];
            j = i - 1;
            while(j >= 0 && array[j] > element) {
                array[j + 1] = array[j];
                j = j - 1;

            }
            array[j + 1] = element;
        }

    }
};
/* selection Sort implementation*/
template <class T>
class selectionSort : public sortInterface <T>
{
public:
    virtual void sort(T array[],int size)
    {
        int n=size;
        for (int i = 0 ;i < n-1; i++){
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
