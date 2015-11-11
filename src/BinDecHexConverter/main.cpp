/* 
 * File:   main.cpp
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:38
 */

#include<iostream>
#include "Converter/DecimalConverter.h"
#include "Converter/HexadecimalConverter.h"

using namespace std;
using namespace NumberBaseConverter;
/*
 * 
 */
int main(int argc, char* argv[])
{
    cout << "Hello world!" << endl;
    
    DecimalConverter newConverter;
    HexadecimalConverter hexConverter;
    
    int input = 0;
    while(input > -1)
    {
        cin >> input;
        //cout << newConverter.ConvertToBinary(input) << endl;
        //cout << newConverter.ConvertToHexadecimal(input) << endl;
        
        // chane to string to make it work
        cout << hexConverter.ConvertToBinary(input);
    }
    
    return 0;
}

