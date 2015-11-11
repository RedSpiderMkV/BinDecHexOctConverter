
#include <sstream>
#include "HexadecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
    string HexadecimalConverter::ConvertToBinary(string number)
    {
        int decimalNum;
        stringstream ss;
        ss << std::hex << number;
        ss >> decimalNum;
        
        return decimalConverter_m.ConvertToBinary(decimalNum);
    } // end method
} // end namespace
