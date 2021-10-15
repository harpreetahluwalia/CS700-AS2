/**
 *  @file   main.cpp
 *  @brief  It is the main program file
 *  @author Harpreet Singh
 *  @date   12/10/2021
 ***********************************************/


/**

Functionality : \n

 @mainpage Section 2
 @author Harpreet Singh
 @date   12/10/2021

Program will perform white-box test for a program that computes the sine and cosine
functions in a specialized manner. It will test the function sin(int x) and cos(int x) functions from sin_cos.cpp file through various test cases.
In sin(int x) function we have multiple conditional statements thus we perform test cases accordingly and test all the branches and statements of these function

*/



// including supporting liberaries
#include <iostream>
#include <iomanip>


// including header files
#include "sin_cos.h"
#include "test.h"

using namespace std;


/**
 * Module : main
 * @author : Harpreet Singh
 * @date : 12/10/2021
*/
int main()
{
    cout<<"\n********************************* Assignment 2 - Section 2 **************************************\n\n";
    cout<<"Here we will test sin(x) and cos(x) function from sin_cos.cpp through various test cases below. \n\n";
    cout<<"-----------------------------------------------------------------------------------------------------\n";
    cout<<"\nSin function test cases\n\n";

    // declaring variables
    int input;
    int expectedOutput;
    string func;
    string testCase;

    // Test Case 1

    input = -15;                        // giving input angle for 1st test case.
    func = "sin";                          // function to be tested is sin
    testCase = "input < 0";                // test case scenario
    expectedOutput = -2588;             // expected output for this function

    cout<<" Test case 1 :\n";
    test(input,testCase,expectedOutput,func);       // calling test() function from test.h with all given parameters.

    /*******************************/
    // Test Case 2

    input = 0;
    func = "sin";
    testCase = "input = 0";
    expectedOutput = 0;

    cout<<" Test case 2 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 3

    input = 40;
    func = "sin";
    testCase = "input >= 0 and input <= 45";
    expectedOutput = 6428;

    cout<<" Test case 3 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 4

    input = 45;
    func = "sin";
    testCase = "input <= 45";
    expectedOutput = 7071;

    cout<<" Test case 4 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 5

    input = 60;
    func = "sin";
    testCase = "input >= 45 and input <= 90";
    expectedOutput = 8660;

    cout<<" Test case 5 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 6

    input = 90;
    func = "sin";
    testCase = "input <= 90";
    expectedOutput = 1;

    cout<<" Test case 6 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 7


    input = 145;
    func = "sin";
    testCase = "input >= 90 and input <= 180";
    expectedOutput = 5736;

    cout<<" Test case 7 :\n";
    test(input,testCase,expectedOutput,func);


    /*******************************/
    // Test Case 8

    input = 180;
    func = "sin";
    testCase = "input = 180";
    expectedOutput = 0;

    cout<<" Test case 8 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 9

    input = 220;
    func = "sin";
    testCase = "input > 180";
    expectedOutput = -6428;

    cout<<" Test case 9 :\n";
    test(input,testCase,expectedOutput,func);

    /***********************************************/

    // Testing cosine function

    cout<<"***************************************************************************\n";
    cout<<"\nCosine Function test cases\n\n";

    /*******************************/
    // Test Case 10

    input = -30;
    func = "cos";
    testCase = "input < 0";
    expectedOutput = 8660;

    cout<<" Test case 10 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 11

    input = 0;
    func = "cos";
    testCase = "input = 0";
    expectedOutput = 10000;

    cout<<" Test case 11 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 12

    input = 30;
    func = "cos";
    testCase = "input >= 0 and input <= 45";
    expectedOutput = 8660;

    cout<<" Test case 12 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 13

    input = 45;
    func = "cos";
    testCase = "input = 45";
    expectedOutput = 7071;

    cout<<" Test case 13 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 14

    input = 80;
    func = "cos";
    testCase = "input >= 45 and input <= 90";
    expectedOutput = 1736;

    cout<<" Test case 14 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 15

    input = 90;
    func = "cos";
    testCase = "input = 90";
    expectedOutput = 0;

    cout<<" Test case 15 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 16

    input = 130;
    func = "cos";
    testCase = "input >= 90 and input <= 180";
    expectedOutput = -6428;

    cout<<" Test case 16 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 17

    input = 180;
    func = "cos";
    testCase = "input = 180";
    expectedOutput = -10000;

    cout<<" Test case 17 :\n";
    test(input,testCase,expectedOutput,func);

    /*******************************/
    // Test Case 18

    input = 230;
    func = "cos";
    testCase = "input >= 180";
    expectedOutput = -6428;

    cout<<" Test case 18 :\n";
    test(input,testCase,expectedOutput,func);

    cout<<"Press enter to exit. ";
    getchar();

}




