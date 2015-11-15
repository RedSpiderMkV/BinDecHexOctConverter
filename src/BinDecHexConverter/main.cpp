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
    
    NumberBaseConverterFactory converterFactory;
    
    //ConverterBase *converter = getRequiredConverter(string(argv[1]));
    ConverterBase *converter = converterFactory.GetConverter(string(argv[1]));
    
    if(string(argv[2]) == "dec")
    {
        cout << converter->ConvertToDecimal(string(argv[3])) << endl;
    }
    else if(string(argv[2]) == "hex")
    {
        cout << converter->ConvertToHexadecimal(string(argv[3])) << endl;
    }
    else if(string(argv[2]) == "bin")
    {
        cout << converter->ConvertToBinary(string(argv[3])) << endl;
    } // end if
    
    return 0;
} // end method
