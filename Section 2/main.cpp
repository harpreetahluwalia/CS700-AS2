#include <iostream>
#include <iomanip>      // std::setw

#include "sin_cos.h"

using namespace std;

void test(int input,string testCase,int expectedOutput, string func){

    int actualOutput;
   // cout<<"\n Test 2 : "<<endl;
    if (func == "sin"){
        actualOutput = sin(input);
    }else if(func == "cos"){
        actualOutput = cos(input);
    }
    cout<<"\tTest Case : "<<testCase<<endl;
    cout<<"\tInput value : "<<input<<endl;
    cout<<"\tFunction : "<<func<<endl;
    cout<<"\tExpected Output : "<<expectedOutput<<endl;
    cout<<"\tActual Output : "<<actualOutput<<endl;

    if (expectedOutput == actualOutput){
        cout<<"\tTest case passed! ";
    }else{
        cout<<"\tTest case not passed! ";
    }
    cout<<"\n\n";
    cout << "----------------------------------------------------------------------------\n";



}
int main()
{


    cout<<"\n********************************* Assignment 2 - Section 2 **************************************\n";
    // Test Case 2
    int input;
    int expectedOutput;
    string func;
    string testCase;

    // Test Case 1
    input = -15;
    func = "sin";
    testCase = "input < 0";
    expectedOutput = -2588;

    cout<<" Test case 1 :\n";
    test(input,testCase,expectedOutput,func);


    input = 0;
    func = "sin";
    testCase = "input = 0";
    expectedOutput = 0;

    cout<<" Test case 2 :\n";
    test(input,testCase,expectedOutput,func);


    // Test Case 2
    input = 40;
    func = "sin";
    testCase = "input >= 0 and input <= 45";
    expectedOutput = 6428;

    cout<<" Test case 3 :\n";
    test(input,testCase,expectedOutput,func);


    // Test Case 3

    input = 45;
    func = "sin";
    testCase = "input <= 45";
    expectedOutput = 7071;

    cout<<" Test case 4 :\n";
    test(input,testCase,expectedOutput,func);



    // Test Case 4

    input = 60;
    func = "sin";
    testCase = "input >= 45 and input <= 90";
    expectedOutput = 8660;

    cout<<" Test case 5 :\n";
    test(input,testCase,expectedOutput,func);


    // Test Case 5

    input = 90;
    func = "sin";
    testCase = "input <= 90";
    expectedOutput = 1;

    cout<<" Test case 6 :\n";
    test(input,testCase,expectedOutput,func);


    // Test Case 6


    input = 145;
    func = "sin";
    testCase = "input >= 90 and input <= 180";
    expectedOutput = 5736;

    cout<<" Test case 7 :\n";
    test(input,testCase,expectedOutput,func);

    input = 180;
    func = "sin";
    testCase = "input = 180";
    expectedOutput = 0;

    cout<<" Test case 8 :\n";
    test(input,testCase,expectedOutput,func);


    input = 220;
    func = "sin";
    testCase = "input > 180";
    expectedOutput = -6428;

    cout<<" Test case 9 :\n";
    test(input,testCase,expectedOutput,func);





    // Testing cosine



    input = 45;
    func = "cos";
    testCase = "input > 180";
    expectedOutput = 7071;

    cout<<" Test case 10 :\n";
    test(input,testCase,expectedOutput,func);












}
