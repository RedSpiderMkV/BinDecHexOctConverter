
#include <stdlib.h>
#include <iostream>
#include "NumberBaseConverterTest.h"

int main(int argc, char** argv)
{
    std::cout << "%SUITE_STARTING% NumberBaseConverterTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    testDecimalToBinaryConversion_Dec15();
    testDecimalToHexConversion_Dec15();
    testDecimalToDecimalConversion_Dec15();
    
    testHexadecimalToBinaryConversion_HexA();
    testHexadecimalToDecimalConversion_HexA();
    testHexadecimalToHexadecimalConversion_HexA();
    
    testBinaryToDecimalConversion_Bin1010();
    testBinaryToHexadecimalConversion_Bin1010();
    testBinaryToBinaryConversion_Bin1010();

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

