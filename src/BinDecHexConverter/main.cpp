/* 
 * File:   main.cpp
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:38
 */

#include<iostream>
#include "Converter/DecimalConverter.h"

using namespace std;
/*
 * 
 */
int main(int argc, char* argv[])
{
    cout << "Hello world!" << endl;
    
    testNamespace::DecimalConverter newConverter;
    
    int input = 0;
    while(input > -1)
    {
        cin >> input;
        cout << newConverter.ConvertToBinary(input) << endl;
        cout << newConverter.ConvertToHexadecimal(input) << endl;
    }
    
    return 0;
}

