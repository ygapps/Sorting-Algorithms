//
// Created by Youssef on 5/12/21.
//

#include "Utility.h"

void Utility::displayArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}