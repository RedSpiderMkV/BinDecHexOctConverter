/* 
 * File:   main.cpp
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:38
 */

#include <iostream>
#include <string>
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
    
    string input = "0";
    while(input != "-1")
    {
        cin >> input;
        //cout << newConverter.ConvertToBinary(input) << "\t";
        //cout << newConverter.ConvertToHexadecimal(input) << endl;
        
        cout << hexConverter.ConvertToBinary(input) << "\t";
        //cout << hexConverter.ConvertToDecimal(input) << endl;
    }
    
    return 0;
}

