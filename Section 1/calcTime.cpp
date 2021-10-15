/**
 *  @file   calcTime.cpp
 *  @author Harpreet Singh
 *  @brief  It includes implementation of calcTime method which calculates the time taken to sort the array.
 *  @date   10/10/2021
 ***********************************************/



// Including the required libraries
#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include <chrono>

using namespace std;



/**
 * Method : calcTime
  *@author Harpreet Singh
 * @brief Returns the array of results for the time taken to sort the array of given no. of elements and different initial order.
 * @param noOfElements It represents the no. of elements in the array.
 * @param noOfArr It represents no. of arrays that we need to process.
 * @param str It represents which order of array (random, inverse or ascending) we need to process.
*/
double *calcTime(long noOfElements, int noOfArr, string str){

    clock_t start, end;
    double* executionTime = new double[noOfArr];   // Creating array with dynamic memory allocation to store the execution time
        for (int j = 0; j<noOfArr; j++){
            int* arr = new int[noOfElements];       // Creating dynamic array to store the numbers that we will sort
            if (str == "random"){
            for (int i=0 ; i<noOfElements; i++){
                arr[i] = rand();                    // adding random numbers to array using rand()

            }}
            else if (str == "ascending"){
                sort(arr, arr+noOfElements);   // we will sort it incase its not already sorted.
             //   cout<<("accc");
            }
            else if (str == "inverse"){
                sort(arr, arr+noOfElements, greater<int>());   // Inverse the array
            }

            start = clock();                    // starting the time clock
            sort(arr, arr+noOfElements);            // sorting the array

            end = clock();                          // ending the time clock
            double totalTime = double(end - start) / double(CLOCKS_PER_SEC);        // calculating the time

            executionTime[j] = totalTime;   // adding the result for this particular array to executionTime array

            delete []arr;           // Deleting the array to that has been processed, thus freeing memory
    }
    return executionTime;

}
