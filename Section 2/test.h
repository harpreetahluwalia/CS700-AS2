/**
 *  @file   test.h
 *  @author Harpreet Singh
 *  @brief  It includes declaration of test() method which calculates actual output and matches with expected outputs for test case and prints the results.
 *  @date   12/10/2021
 ***********************************************/

// including supporting libraries
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Method : test()
  *@author Harpreet Singh
 * @brief It calculates actual output and matches with expected outputs for test case and prints the results.
 * @param input It represents the input number passed to the function
 * @param expectedOutput It represents the expected output from the function
 * @param func It represents whether function to use is sin or cos.
*/
void test(int input,string testCase,int expectedOutput, string func);
