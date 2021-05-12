//
// Created by Youssef on 5/12/21.
//

#include "N2Algorithms.h"
#include <algorithm>

void N2Algorithms::selectionSort(int *arr, int n) {
    // TODO: AHMED OSSAMA TASK
    int min_index;
    for(int i = 0; i<n-1; i++)
    {
        min_index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        swap(arr[i],arr[min_index])
    }
}

void N2Algorithms:: bubbleSort(int *arr,unsigned int n)
{
   unsigned int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
}
 

void N2Algorithms::insertionSort(int *arr, int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
