//
// Created by Youssef on 5/12/21.
//

#include <iostream>
#include <algorithm>

#ifndef DS2_SORTING_ALGORITHMS_NLOGNALGORITHMS_H
#define DS2_SORTING_ALGORITHMS_NLOGNALGORITHMS_H


class NLogNAlgorithms {
private:
    static void mergeArray(int arr[],unsigned int low,unsigned int mid, unsigned int high);
    static int partition(int *arr, int low, int high);
    static void heapify(int *arr, int n, int i);
public:
    static void mergeSort(int *arr,unsigned int low,unsigned int high);
    static void heapSort(int *arr, int n);
    static void quickSort(int *arr, int low, int high);
};


#endif //DS2_SORTING_ALGORITHMS_NLOGNALGORITHMS_H
