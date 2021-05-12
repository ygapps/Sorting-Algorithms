#include <iostream>
#include <stdlib.h>
#include <time.h>
#include"randomgenerator.h"

using namespace std;
int randomArrayGenerator()
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
