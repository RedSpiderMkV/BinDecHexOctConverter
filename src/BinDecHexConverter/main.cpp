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

bool argumentCountValid(int argc)
{
    if(argc != 4)
    {
        cout << "Incorrect usage.  Usage:" << endl;
        cout << "bindechexconverter dec hex 10" << endl << endl;
        
        return false;
    } // end if
    
    return true;
} // end method

bool inputBaseValid(string inputBase)
{
    if(inputBase != "dec" && inputBase != "hex" && inputBase != "bin")
    {
        cout << "Specified input base is unrecognised: " << inputBase << endl;
        cout << "Can be dec, hex or bin" << endl << endl;
        
        return false;
    } // end if
    
    return true;
} // end method

bool outputBaseValid(string outputBase)
{
    if(outputBase != "dec" && outputBase != "hex" && outputBase != "bin")
    {
        cout << "Specified output base is unrecognised: " << outputBase << endl;
        cout << "Can be dec, hex or bin" << endl << endl;
        
        return false;
    } // end if
    
    return true;
} // end method

int main(int argc, char* argv[])
{
    if(!argumentCountValid(argc)
            || !inputBaseValid(string(argv[1]))
            || !outputBaseValid(string(argv[2])))
    {
        cout << "Conversion failed, exiting" << endl;
        
        return -1;
    } // end if
    
    DecimalConverter newConverter;
    HexadecimalConverter hexConverter;
    BinaryConverter binConverter;
    
    
    
    return 0;
} // end method

