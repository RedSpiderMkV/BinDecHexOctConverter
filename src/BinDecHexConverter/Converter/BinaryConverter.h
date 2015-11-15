/* 
 * File:   BinaryConverter.h
 * Author: root
 *
 * Created on 13 November 2015, 23:09
 */

#ifndef BINARYCONVERTER_H
#define	BINARYCONVERTER_H

#include <string>
#include "DecimalConverter.h"
#include "ConverterBase.h"

using namespace std;

namespace NumberBaseConverter
{
    class BinaryConverter : public ConverterBase
    {
        private:
            DecimalConverter decimalConverter_m;
        public:
            string ConvertToDecimal(string number);
            string ConvertToHexadecimal(string number);
    };
} // end namespace

#endif	/* BINARYCONVERTER_H */

