
#include <cstdio>
#include <sstream>
#include "DecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
    string DecimalConverter::ConvertToBinary(string decStr)
    {
        int number;
        stringstream ss;
        ss << std::dec << decStr;
        ss >> number;
        
        return convertToBinary(number);
    } // end method
    
    string DecimalConverter::ConvertToHexadecimal(string decStr)
    {
        int number;
        stringstream ss;
        ss << std::dec << decStr;
        ss >> number;
        
        return convertToHexadecimal(number);
    } // end method    
    
    string DecimalConverter::convertToBinary(int number)
    {
        string binRep("");
        if(number / 2 != 0)
        {
            binRep.append(convertToBinary(number / 2));
        } // end if
        
        char temp[1];
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
        
        char temp[1];
        sprintf(temp, "%x", number % 16);
        hexRep.append(temp);
        
        return hexRep;
    } // end method
} // end namespace