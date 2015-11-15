/* 
 * File:   NumberBaseConverterTest.cpp
 * Author: RedSpiderMkV
 *
 * Created on 15-Nov-2015, 00:53:00
 */

#include <stdlib.h>
#include <iostream>
#include <string>
#include "Converter/ConverterBase.h"
#include "Converter/DecimalConverter.h"
#include "Converter/HexadecimalConverter.h"
#include "Converter/BinaryConverter.h"

using namespace std;
using namespace NumberBaseConverter;

/*
 * Simple C++ Test Suite
 */

void printTestResults(string testState, string name, string message)
{
    cout << testState + " time=0 testname=" + name + " (NumberBaseConverterTest) message=" + message << endl;
} // end method

void testDecimalToBinaryConversion_Dec15()
{
    cout << "%TEST_STARTED% testDecimalToBinaryConversion_Dec15 (NumberBaseConverterTest)" << endl;
    
    string decimalNum = "15";
    string expectedOutput = "1111";
    DecimalConverter decimalConverter;
    
    if(expectedOutput != decimalConverter.ConvertToBinary(decimalNum))
    {
        printTestResults("%TEST_FAILED%", "testDecimalToBinaryConversion_Dec15", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testDecimalToBinaryConversion_Dec15 (NumberBaseConverterTest)" << endl;
}

void testDecimalToHexConversion_Dec15()
{
    cout << "%TEST_STARTED% testDecimalToHexConversion_Dec15 (NumberBaseConverterTest)" << endl;
    
    string decimalNum = "15";
    string expectedOutput = "f";
    DecimalConverter decimalConverter;
    
    if(expectedOutput != decimalConverter.ConvertToHexadecimal(decimalNum))
    {
        printTestResults("%TEST_FAILED%", "testDecimalToHexConversion_Dec15", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testDecimalToHexConversion_Dec15 (NumberBaseConverterTest)" << endl;
}

void testDecimalToDecimalConversion_Dec15()
{
    cout << "%TEST_STARTED% testDecimalToDecimalConversion_Dec15 (NumberBaseConverterTest)" << endl;
    
    string decimalNum = "15";
    string expectedOutput = "15";
    DecimalConverter decimalConverter;
    
    if(expectedOutput != decimalConverter.ConvertToDecimal(decimalNum))
    {
        printTestResults("%TEST_FAILED%", "testDecimalToDecimalConversion_Dec15", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testDecimalToDecimalConversion_Dec15 (NumberBaseConverterTest)" << endl;
}

void testHexadecimalToDecimalConversion_HexA()
{
    cout << "%TEST_STARTED% testHexadecimalToDecimalConversion_HexA (NumberBaseConverterTest)" << endl;
    
    string hexNum = "a";
    string expectedOutput = "10";
    HexadecimalConverter hexConverter;
    
    if(expectedOutput != hexConverter.ConvertToDecimal(hexNum))
    {
        printTestResults("%TEST_FAILED%", "testHexadecimalToDecimalConversion_HexA", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testHexadecimalToDecimalConversion_HexA (NumberBaseConverterTest)" << endl;
}

void testHexadecimalToBinaryConversion_HexA()
{
    cout << "%TEST_STARTED% testHexadecimalToBinaryConversion_HexA (NumberBaseConverterTest)" << endl;
    
    string hexNum = "a";
    string expectedOutput = "1010";
    HexadecimalConverter hexConverter;
    
    if(expectedOutput != hexConverter.ConvertToBinary(hexNum))
    {
        printTestResults("%TEST_FAILED%", "testHexadecimalToBinaryConversion_HexA", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testHexadecimalToBinaryConversion_HexA (NumberBaseConverterTest)" << endl;
}

void testHexadecimalToHexadecimalConversion_HexA()
{
    cout << "%TEST_STARTED% testHexadecimalToHexadecimalConversion_HexA (NumberBaseConverterTest)" << endl;
    
    string hexNum = "a";
    string expectedOutput = "a";
    HexadecimalConverter hexConverter;
    
    if(expectedOutput != hexConverter.ConvertToHexadecimal(hexNum))
    {
        printTestResults("%TEST_FAILED%", "testHexadecimalToHexadecimalConversion_HexA", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testHexadecimalToHexadecimalConversion_HexA (NumberBaseConverterTest)" << endl;
} // end method

void testBinaryToDecimalConversion_Bin1010()
{
    cout << "%TEST_STARTED% testBinaryToDecimalConversion_Bin1010 (NumberBaseConverterTest)" << endl;
    
    string binNum = "1010";
    string expectedOutput = "10";
    BinaryConverter binConverter;
    
    if(expectedOutput != binConverter.ConvertToDecimal(binNum))
    {
        printTestResults("%TEST_FAILED%", "testBinaryToDecimalConversion_Bin1010", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testBinaryToDecimalConversion_Bin1010 (NumberBaseConverterTest)" << endl;
} // end method

void testBinaryToHexadecimalConversion_Bin1010()
{
    cout << "%TEST_STARTED% testBinaryToHexadecimalConversion_Bin1010 (NumberBaseConverterTest)" << endl;
    
    string binNum = "1010";
    string expectedOutput = "a";
    BinaryConverter binConverter;
    
    if(expectedOutput != binConverter.ConvertToHexadecimal(binNum))
    {
        printTestResults("%TEST_FAILED%", "testBinaryToHexadecimalConversion_Bin1010", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testBinaryToHexadecimalConversion_Bin1010 (NumberBaseConverterTest)" << endl;
} // end method

void testBinaryToBinaryConversion_Bin1010()
{
    cout << "%TEST_STARTED% testBinaryToBinaryConversion_Bin1010 (NumberBaseConverterTest)" << endl;
    
    string binNum = "1010";
    string expectedOutput = "1010";
    BinaryConverter binConverter;
    
    if(expectedOutput != binConverter.ConvertToBinary(binNum))
    {
        printTestResults("%TEST_FAILED%", "testBinaryToBinaryConversion_Bin1010", "test error message");
    } // end if
    
    cout << "%TEST_FINISHED% time=0 testBinaryToBinaryConversion_Bin1010 (NumberBaseConverterTest)" << endl;
} // end method

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
