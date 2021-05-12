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
