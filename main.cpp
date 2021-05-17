#include <iostream>
#include <chrono>
#include "cmake-build-debug/N2Algorithms.h"
#include "cmake-build-debug/NLogNAlgorithms.h"
#include "cmake-build-debug/Utility.h"

using namespace std;
using namespace chrono;

int main() {

    unsigned int size = 100000;
    int * unsortedArray = Utility::randomArrayGenerator(&size);

//    Utility::displayArray(unsortedArray, size);

    auto start = high_resolution_clock::now();

//    NLogNAlgorithms::mergeSort(unsortedArray, 0, size - 1);
//    NLogNAlgorithms::heapSort(unsortedArray, size - 1);
//    NLogNAlgorithms::quickSort(unsortedArray, 0, size - 1);
//
//
//    N2Algorithms::selectionSort(unsortedArray, size);
//    N2Algorithms::bubbleSort(unsortedArray, size);
      N2Algorithms::insertionSort(unsortedArray, size);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken by process: "
         << duration.count() << " nanoseconds" << endl;

//    Utility::displayArray(unsortedArray, size);

    return 0;
}