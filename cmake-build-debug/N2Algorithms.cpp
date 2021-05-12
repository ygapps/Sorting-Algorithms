//
// Created by Youssef on 5/12/21.
//

#include "N2Algorithms.h"

void N2Algorithms::selectionSort(int *arr, int n) {
    // TODO: AHMED OSSAMA TASK
}

void N2Algorithms::bubbleSort(int *arr, int n) {
    // TODO: REWAN SOBHY TASK

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