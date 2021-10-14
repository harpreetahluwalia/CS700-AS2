#include <iostream>
#include <chrono>
#include <bits/stdc++.h>


//#include <algorithm>    // std::sort
//#include <stdlib.h>     /* srand, rand */

#include "calcTime.h"
using namespace std;


int resultsData[3][10];


int main(){

    double finalResult[3][10];
    double *results;
    string str;
    int noOfElements = 100000;
    int noOfArr;

    cout<<"\n************************************** Assignment 2 - Section 1**************************************"<<endl;
   // cout<<"\tSection 1 "<<endl;
    //cout<<setw(50);
    cout<<"\tArray sizes : \t"<<setw(60)<<"Orders tested\n\n";
    cout<<"\t1. 100000 Elements - 10 Arrays"<<setw(50)<<"1. Random Numbered\n";
    cout<<"\t2. 1000000 Elements - 10 Arrays"<<setw(50)<<"2. Ascending Order \n";
    cout<<"\t3. 1000000 Elements - 10 Arrays"<<setw(51)<<" 3. Descending order\n\n";

       //     cout<<"\tArray sizes : "<<setw(50)<<"Orders tested";

 //   cout<<"\tArray sizes :  \n\t1. 100000 Elements - 10 Arrays\n\t2. 1000000 Elements - 10 Arrays\n\t3. 1000000 Elements - 10 Arrays "<<endl;
 //   cout<<"\tOrders tested :  \n\t1. Random Numbered \n\t2. Ascending Order \n\t3. Descending order "<<endl;

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
            results = calcTime(noOfElements,10,str);
            for (int k = 0; k<10 ; k++ ){
                finalResult[i][k] = results[k];
            }
            delete[] results;
        }
        noOfElements = noOfElements * 10;
        for (int i = 0; i < 3; i++) {
            if (i == 0){
                cout<<setw(20)<<"Random array : \t"<<setw(5);
            }else if (i == 1){
                cout<<setw(20)<<"Ascending array : \t"<<setw(5);
            }else if (i == 2){
                cout<<setw(20)<<"Inverse array : \t"<<setw(5);
            }
            for (int k = 0; k<10 ; k++){
                cout<<finalResult[i][k]<<"\t";
            }
        cout<<"\n";
        }
    cout << "\n";
   }
    return 0;
}




