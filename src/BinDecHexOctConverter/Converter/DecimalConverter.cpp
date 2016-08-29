
#include <cstdio>
#include <sstream>
#include "DecimalConverter.h"
using namespace std;

namespace NumberBaseConverter
{
	/* Region Public Methods */
	
    string DecimalConverter::ConvertToBinary(string decStr)
    {
        int number = parseIntFromString(decStr);
		return convertNumber(number, 2);
    } // end method
    
    string DecimalConverter::ConvertToHexadecimal(string decStr)
    {
        int number = parseIntFromString(decStr);
		return convertNumber(number, 16);
    } // end method
    
    string DecimalConverter::ConvertToOctal(string decStr)
    {
        int number = parseIntFromString(decStr);
        return convertNumber(number, 8);
    } // end method
    
	/* End Region Public Methods */
    
    /* Region Private Methods */
    
    string DecimalConverter::convertNumber(int number, int base)
    {
    	string numRep("");
    	
    	if(number / base != 0)
    	{
    		numRep.append(convertNumber(number / base, base));
    	} // end if
    	
    	char temp[2];
    	sprintf(temp, "%d", number % base);
    	numRep.append(temp);
    	
    	return numRep;
    } // end method
    
    int DecimalConverter::parseIntFromString(string number)
    {
        int decNumber;
        stringstream ss;
        ss << std::dec << number;
        ss >> decNumber;
        
        return decNumber;
    } // end method
    
    /* End Region Private Methods */
} // end namespace
