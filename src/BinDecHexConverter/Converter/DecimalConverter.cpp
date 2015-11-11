
#include<iostream>
#include "DecimalConverter.h"
using namespace std;

namespace testNamespace
{
    void DecimalConverter::ConvertToBinary(int number)
    {
        if(number / 2 != 0)
        {
            ConvertToBinary(number / 2);
        } // end if
        
        cout << number % 2;
    } // end method
} // end namespace