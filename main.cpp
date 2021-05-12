#include <iostream>
#include <chrono>
#include "cmake-build-debug/N2Algorithms.h"
#include "cmake-build-debug/NLogNAlgorithms.h"
#include "cmake-build-debug/Utility.h"

using namespace std;
using namespace chrono;

int main() {
    int unsortedArray[] = {3, 6, 1, 7, 9};
    int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    auto start = high_resolution_clock::now();
    NLogNAlgorithms::heapSort(unsortedArray, size);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken by process: "
         << duration.count() << " nanoseconds" << endl;

    Utility::displayArray(unsortedArray, size);

    return 0;
}