/**
 *  @file   calcTime.h
 *  @author Harpreet Singh
 *  @brief  It includes declaration of calcTime method which calculates the time taken to sort the array.
 *  @date   10/10/2021
 ***********************************************/
#include <iostream>
using namespace std;


/**
 * Method : calcTime
  *@author Harpreet Singh
 * @brief Returns the array of results for the time taken to sort the array of given no. of elements and different initial order.
 * @param noOfElements It represents the no. of elements in the array.
 * @param noOfArr It represents no. of arrays that we need to process.
 * @param str It represents which order of array (random, inverse or ascending) we need to process.
*/

double *calcTime(long noOfElements, int noOfArr, string str);

