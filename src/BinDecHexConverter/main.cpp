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
#include "Converter/BinaryConverter.h"

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
    BinaryConverter binConverter;
    
    string input = "0";
    while(input != "-1")
    {
        cin >> input;
        //cout << newConverter.ConvertToBinary(input) << "\t";
        //cout << newConverter.ConvertToHexadecimal(input) << endl;
        
        //cout << hexConverter.ConvertToBinary(input) << "\t";
        //cout << hexConverter.ConvertToDecimal(input) << endl;
        
        cout << binConverter.ConvertToDecimal(input) << "\t";
        cout << binConverter.ConvertToHexadecimal(input) << endl;
    }
    
    return 0;
}

