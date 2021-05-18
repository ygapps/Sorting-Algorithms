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
    cout<<"\t\t\t\t\t\t****Sorting algorithms****\n";
  int option=0;

    while(option !=8)
    {
cout<<"\t\t\t\t\t    *********menu:**********\n";
    cout<<"enter:\n\t\t\t\t\t1:insertion sort          5:heap sort\n\t\t\t\t\t2:selection sort\t6:quick sort\n\t\t\t\t\t3:bubble sort          7:print sorted array\n\t\t\t\t\t4:merge sort\t8:quit\n";
    cout<<"answer:";
        cin>>option;

        switch(option)
        {
        case 1:
             {cout<<"*****************************************\n";
              auto start = high_resolution_clock::now();
             N2Algorithms::insertionSort(unsortedArray, size);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop - start);

            cout << "Time taken by insertion sort process: "
                << duration.count() << " nanoseconds \n" << endl;
            cout<<"*****************************************\n";
            break;
             }
       case 2:
            {auto start = high_resolution_clock::now();
            N2Algorithms::selectionSort(unsortedArray, size);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop - start);

            cout << "Time taken by selection  process: "
                << duration.count() << " nanoseconds \n" << endl;
                cout<<"*****************************************\n";
            break;
            }
        case 3:
            {auto start = high_resolution_clock::now();
            N2Algorithms::bubbleSort(unsortedArray, size);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop- start);

            cout << "Time taken by bubble sort process: "
                << duration.count() << " nanoseconds \n" << endl;
            cout<<"*****************************************\n";
            break;
            }
        case 4:
            {auto start = high_resolution_clock::now();
            NLogNAlgorithms::mergeSort(unsortedArray,0,size-1);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop- start);

            cout << "Time taken by merge sort process: "
                << duration.count() << " nanoseconds \n" << endl;
            cout<<"*****************************************\n";
            break;
            }
       case 5:
            {auto start = high_resolution_clock::now();
            NLogNAlgorithms::heapSort(unsortedArray, size);
            auto stop = high_resolution_clock::now();
            auto duration= duration_cast<nanoseconds>(stop- start);

            cout << "Time taken by heap sort process: "
                        << duration.count() << " nanoseconds \n" << endl;
            cout<<"*****************************************\n";
            break;
            }
        case 6:
            { auto start= high_resolution_clock::now();
            NLogNAlgorithms::quickSort(unsortedArray,0,size-1);
            auto stop= high_resolution_clock::now();
            auto duration= duration_cast<nanoseconds>(stop- start);

            cout << "Time taken by quick  sort process: "
                << duration.count() << " nanoseconds \n" << endl;
            cout<<"*****************************************\n";
            break;
            }
        case 7:
            {cout<<"sorted array\n";
            Utility::displayArray(unsortedArray, size);
            break;
            }
        case 8:
            exit(0);
        default:
            cout<<"enter from 1 to 8";
        }
    }

    return 0;
}
