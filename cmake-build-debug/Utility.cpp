//
// Created by Youssef on 5/12/21.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Utility.h"

void Utility::displayArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

double Utility:: generateRandomSize()
{
     srand ( time(NULL) ); //initialize the random seed
    double exponent= (rand()% 5)+1.0; //generates a random number between 1 and 5
    cout<<exponent<<"\n"<<pow(10.0,exponent)<<"\n";
   double arr_size=pow(10.0,exponent);
   return arr_size;
}

int Utility:: * randomArrayGenerator(unsigned int *arr_size)
{
    
     int *randArray=new int [*arr_size];
    srand((unsigned) time (NULL));
    for(unsigned int i=0;i<(*arr_size);i++)
    {
        randArray[i]=rand();
    }
    return randArray;
   
}
