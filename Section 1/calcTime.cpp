#include <bits/stdc++.h>
#include <algorithm>    // std::sort
#include <stdlib.h>     /* srand, rand */
#include <iostream>
#include <chrono>

using namespace std;

double *calcTime(long noOfElements, int noOfArr, string str){

    clock_t start, end;
    double* executionTime = new double[noOfArr];
        for (int j = 0; j<noOfArr; j++){
            int* arr = new int[noOfElements];
            if (str == "random"){
            for (int i=0 ; i<noOfElements; i++){
                arr[i] = rand();

            }}
            else if (str == "ascending"){
                sort(arr, arr+noOfElements); // we will sort it incase its not already sorted.
             //   cout<<("accc");
            }
            else if (str == "inverse"){
                sort(arr, arr+noOfElements, greater<int>());
            }

            start = clock();
            sort(arr, arr+noOfElements);

            end = clock();
            double totalTime = double(end - start) / double(CLOCKS_PER_SEC);

            executionTime[j] = totalTime;

            delete []arr;
         //   cout<<executionTime[j];
    }
   // cout<<executionTime[9];
    return executionTime;

}
