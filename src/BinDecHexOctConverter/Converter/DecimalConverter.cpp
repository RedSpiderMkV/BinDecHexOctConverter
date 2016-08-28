
#include <cstdio>
#include <sstream>
#include "DecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
    string DecimalConverter::ConvertToBinary(string decStr)
    {
        int number = parseIntFromString(decStr);
        return convertToBinary(number);
    } // end method
    
    string DecimalConverter::ConvertToHexadecimal(string decStr)
    {
        int number = parseIntFromString(decStr);
        return convertToHexadecimal(number);
    } // end method   
    
    string DecimalConverter::ConvertToOctal(string decStr)
    {
        int number = parseIntFromString(decStr);
        return convertToOctal(number);
    } // end method
    
    string DecimalConverter::convertToOctal(int number)
    {
        string octRep("");
        if(number / 8 != 0)
        {
            octRep.append(convertToOctal(number / 8));
        } // end if
        
        char temp[2];
        sprintf(temp, "%d", number % 8);
        octRep.append(temp);
        
        return octRep;
    } // end method
    
    string DecimalConverter::convertToBinary(int number)
    {
        string binRep("");
        if(number / 2 != 0)
        {
            binRep.append(convertToBinary(number / 2));
        } // end if
        
        char temp[2];
        sprintf(temp, "%d", number % 2);
        binRep.append(temp);
        
        return binRep;
    } // end method
    
    string DecimalConverter::convertToHexadecimal(int number)
    {
        string hexRep("");
        if(number / 16 != 0)
        {
            hexRep.append(convertToHexadecimal(number / 16));
        } // end if
        
        char temp[2];
        sprintf(temp, "%x", number % 16);
        hexRep.append(temp);
        
        return hexRep;
    } // end method
    
    int DecimalConverter::parseIntFromString(string number)
    {
        int decNumber;
        stringstream ss;
        ss << std::dec << number;
        ss >> decNumber;
        
        return decNumber;
    } // end method
} // end namespace