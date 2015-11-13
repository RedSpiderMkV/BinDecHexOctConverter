
#include <cstdio>
#include <sstream>
#include "HexadecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
    string HexadecimalConverter::ConvertToBinary(string number)
    {
        return decimalConverter_m.ConvertToBinary(number);
    } // end method
    
    string HexadecimalConverter::ConvertToDecimal(string number)
    {
        int decimalNum = parseIntFromString(number);
        
        char temp[32];
        sprintf(temp, "%d", decimalNum);
        
        return temp;
    } // end method
    
    int HexadecimalConverter::parseIntFromString(string number)
    {
        int decimalNum;
        stringstream ss;
        ss << std::hex << number;
        ss >> decimalNum;
        
        return decimalNum;
    } // end method
} // end namespace
