
#include <cstdio>
#include "DecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
    string DecimalConverter::ConvertToBinary(int number)
    {
        string binRep("");
        if(number / 2 != 0)
        {
            binRep.append(ConvertToBinary(number / 2));
        } // end if
        
        char temp[1];
        sprintf(temp, "%d", number % 2);
        binRep.append(temp);
        
        return binRep;
    } // end method
    
    string DecimalConverter::ConvertToHexadecimal(int number)
    {
        string hexRep("");
        if(number / 16 != 0)
        {
            hexRep.append(ConvertToHexadecimal(number / 16));
        } // end if
        
        char temp[1];
        sprintf(temp, "%x", number % 16);
        hexRep.append(temp);
        
        return hexRep;
    } // end method
    
} // end namespace