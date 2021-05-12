//
// Created by Youssef on 5/12/21.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Utility.h"

void Utility::displayArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


int Utility:: randomArrayGenerator()
{
   unsigned int sizeArray[5]={10,100,1000,10000,100000};
    srand ( time(NULL) ); //initialize the random seed
    int RandIndex = rand() % 5; //generates a random number between 0 and 4
    int randArray[sizeArray[RandIndex]];
    for(unsigned int i=0;i<sizeArray[RandIndex];i++)
    {
        randArray[i]=rand();
    }

  return *randArray;
}
