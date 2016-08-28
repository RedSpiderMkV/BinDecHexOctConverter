/* 
 * File:   main.cpp
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:38
 */

#include <iostream>
#include <string>
#include "Converter/ConverterBase.h"
#include "NumberBaseConverterFactory.h"

using namespace std;
using namespace NumberBaseConverter;

bool argumentCountValid(int argc)
{
    if(argc != 3)
    {
        cout << "Incorrect usage... should be:" << endl;
        cout << "BinDecHexConverter 'base' NUMBER" << endl;
        cout << "Example - converting binary 1010:" << endl;
        cout << "BinDecHexConverter bin 1010" << endl << endl;
        
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

int main(int argc, char* argv[])
{
    if(!argumentCountValid(argc) || !inputBaseValid(string(argv[1])))
    {
        cout << "Conversion failed, exiting" << endl;
        
        return -1;
    } // end if
    
    NumberBaseConverterFactory converterFactory;
    ConverterBase *converter = converterFactory.GetConverter(string(argv[1]));
    
    cout << "Dec\t" << converter->ConvertToDecimal(string(argv[2])) << endl;
    cout << "Hex\t" << converter->ConvertToHexadecimal(string(argv[2])) << endl;
    cout << "Bin\t" << converter->ConvertToBinary(string(argv[2])) << endl;
    cout << "Oct\t" << converter->ConvertToOctal(string(argv[2])) << endl;
    
    return 0;
} // end method
