//
// Created by Youssef on 5/12/21.
//

#include "NLogNAlgorithms.h"
#include <algorithm>

void NLogNAlgorithms::heapify(int *arr, int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void NLogNAlgorithms::mergeSort(int *arr,unsigned int low,unsigned int high)
{
    if(low<high)
    {
       unsigned int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,(mid+1),high);
        mergeArray(arr,low,mid,high);
    }
    else
        return;
}
void NLogNAlgorithms::void mergeArray(int arr[],unsigned int low,unsigned int mid, unsigned int high)
{
    unsigned int sz1=mid-low+1;
    unsigned int sz2=high-mid;
    //create sub arrays
    int left[sz1] , right[sz2];
    // copy data of original array into sub arrays
    for(unsigned int i =0;i<sz1;i++)
    {
        left[i]=arr[low + i];
    }
    for (unsigned int j = 0; j <sz2; j++)
    {
        right[j] = arr[mid + 1 + j];

    }
    unsigned int i=0,j=0,k=0;
    while(i < sz1 && j < sz2)
    {
         if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
         k++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (i < sz1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < sz2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

void NLogNAlgorithms::heapSort(int *arr, int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


void NLogNAlgorithms::quickSort(int *arr, int low, int high) {
    // TODO: AHMED OSSAMA TASK
    if(low<high)
    {
        int pivot_index = partition(arr,low,high);
        quickSort(arr,low,pivot_index-1);
        quickSort(arr,pivot_index+1,high);
    }
    
}
int partition(int *arr, int low, int high){
    int pivot_index = arr[high];
    int j = low-1;
    for(int i=0; i<high; i++)
    {
        if(arr[i]<arr[pivot_index])
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    j++;
    swap(arr[j],arr[pivot_index]);
    return j;
}
