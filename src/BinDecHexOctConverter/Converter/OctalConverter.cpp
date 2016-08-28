
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include "OctalConverter.h"

using namespace std;

namespace NumberBaseConverter
{   
    string OctalConverter::ConvertToDecimal(string number)
    {
        int decimalNum = parseIntFromString(number);
        
        char temp[32];
        sprintf(temp, "%d", decimalNum);
        
        return temp;
    } // end method
    
    string OctalConverter::ConvertToHexadecimal(string number)
    {
        string decimalNumber = ConvertToDecimal(number);
        return decimalConverter_m.ConvertToHexadecimal(decimalNumber);
    } // end method
    
    string OctalConverter::ConvertToBinary(string number)
    {
        string decimalNumber = ConvertToDecimal(number);
        return decimalConverter_m.ConvertToBinary(decimalNumber);
    } // end method
    
    int OctalConverter::parseIntFromString(string number)
    {
        int decimalNum;
        stringstream ss;
        ss << std::oct << number;
        ss >> decimalNum;
        
        return decimalNum;
    } // end method
    
} // end namespace