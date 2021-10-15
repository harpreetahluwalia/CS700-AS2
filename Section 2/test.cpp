/**
 *  @file   test.h
 *  @author Harpreet Singh
 *  @brief  It includes implementation of test() method which calculates actual output and matches with expected outputs for test case and prints the results.
 *  @date   12/10/2021
 ***********************************************/

// including supporting libraries
#include <iostream>
#include <iomanip>

// including header file
#include "sin_cos.h"
using namespace std;

/**
 * Method : test()
  *@author Harpreet Singh
 * @brief It calculates actual output and matches with expected outputs for test case and prints the results.
 * @param input It represents the input number passed to the function
 * @param expectedOutput It represents the expected output from the function
 * @param func It represents whether function to use is sin or cos.
*/
void test(int input,string testCase,int expectedOutput, string func){

    int actualOutput;
    if (func == "sin"){             // checking if function is sin or cos
        actualOutput = sin(input);      // calling sin(x) function from sin_cos.h file.
    }else if(func == "cos"){
        actualOutput = cos(input);      // calling cos(x) function from sin_cos.h file.
    }


    // printing the results
    cout<<"\tTest Case : "<<testCase<<endl;
    cout<<"\tInput value : "<<input<<endl;
    cout<<"\tFunction : "<<func<<endl;
    cout<<"\tExpected Output : "<<expectedOutput<<endl;
    cout<<"\tActual Output : "<<actualOutput<<endl;

    if (expectedOutput == actualOutput){            // if expected output and actual output matches, test case is passed, else fail.
        cout<<"\tTest case passed! ";
    }else{
        cout<<"\tTest case not passed! ";
    }
    cout<<"\n\n";
    cout << "----------------------------------------------------------------------------\n";



}
