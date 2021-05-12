#include <iostream>
#include "cmake-build-debug/N2Algorithms.h"
#include "cmake-build-debug/NLogNAlgorithms.h"
#include "cmake-build-debug/Utility.h"

using namespace std;

int main() {
    int unsortedArray[] = {3, 6, 1, 7, 9};
    int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

//    N2Algorithms::insertionSort(unsortedArray, size);
//    NLogNAlgorithms::heapSort(unsortedArray, size);
    Utility::displayArray(unsortedArray, size);

    return 0;
}