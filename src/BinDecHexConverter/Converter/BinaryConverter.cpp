
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include "BinaryConverter.h"

using namespace std;

namespace NumberBaseConverter
{
    string BinaryConverter::ConvertToDecimal(string number)
    {
        char *end;
        int temp = strtol(number.c_str(), &end, 2);
        
        char temp2[32];
        sprintf(temp2, "%d", temp);
        
        return temp2;
    } // end method
} // end namespace