
/**
 *  @file   main.cpp
 *  @brief  It is the main program file
 *  @author Harpreet Singh
 *  @date   10/10/2021
 ***********************************************/

/**


Program that allows you to examine the effects of array size and initial data order
by measuring the time of the program when your favorite sort operates on an array of integers.

We will tests 10 arrays each time with three different array sizes (n =100,000, n =1,000,000, and n
=10,000,000) and three different array orderings (random order, ascending order, and inverse
order). Three test results (random time, ordered time, reverse time) will be produced for
each array in a well-formatted fashion. A table will be used for each array size where columns
represent the 10 arrays and rows represent the three tests.

Ultimately, tables are printed one after another separated by a line indicating the size of the arrays.


*/



// Including the supporting libraries

#include <iostream>
#include <chrono>
#include <bits/stdc++.h>


//#include <algorithm>    // std::sort
//#include <stdlib.h>     /* srand, rand */


// Including the header files
#include "calcTime.h"

using namespace std;


/**
 * Module : main\n
 * Author : Harpreet Singh\n
 * Date of creation : 26/09/2021
*/
int main(){


// Creating array to store the result data.
  //  int resultsData[3][10];
    double finalResult[3][10];
    double *results;
    string str;
    int noOfElements = 100000;    // initially giving no. of elements as 100000.
    int noOfArr = 10;           // No. of arrays for each ordering is 10.

    cout<<"\n************************************** Assignment 2 - Section 1**************************************"<<endl;

    cout<<"\tArray sizes : \t"<<setw(60)<<"Orders tested\n\n";
    cout<<"\t1. 100000 Elements - 10 Arrays"<<setw(50)<<"1. Random Numbered\n";
    cout<<"\t2. 1000000 Elements - 10 Arrays"<<setw(50)<<"2. Ascending Order \n";
    cout<<"\t3. 1000000 Elements - 10 Arrays"<<setw(51)<<" 3. Descending order\n\n";

    cout<<"******************************************************************************************"<<endl;

    for (int j = 0; j < 3; j++) {
        cout<<"\nResults (in seconds) for Array of size "<<noOfElements<<" is being printed, please wait ..."<<endl;
        if (noOfElements == 10000000){
            cout<<"This might take upto 2-3 minutes...\n";
        }

        for (int i = 0; i < 3; i++) {
            if (i == 0){
                str = "random";
            }else if(i == 1){
                str = "ascending";
            }else if (i == 2){
                str = "inverse";
            }
            results = calcTime(noOfElements,noOfArr,str);        // Calling calcTime() function with no. of elements, no of arrays, and str representing order
            for (int k = 0; k<10 ; k++ ){
                finalResult[i][k] = results[k];             // adding results to finalResult array
            }
            delete[] results;       // Deleting the array to that has been processed, thus freeing memory
        }
        noOfElements = noOfElements * 10;          // incrementing array size by 10 times
        for (int i = 0; i < 3; i++) {
            if (i == 0){
                cout<<setw(20)<<"Random array : \t"<<setw(5);
            }else if (i == 1){
                cout<<setw(20)<<"Ascending array : \t"<<setw(5);
            }else if (i == 2){
                cout<<setw(20)<<"Inverse array : \t"<<setw(5);
            }
            for (int k = 0; k<10 ; k++){
                cout<<finalResult[i][k]<<"\t";              // printing the final results
            }
        cout<<"\n";
        }
    cout << "\n";
   }

   getchar();
    return 0;
}




