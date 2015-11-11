/* 
 * File:   HexadecimalConverter.h
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 23:11
 */

#ifndef HEXADECIMALCONVERTER_H
#define	HEXADECIMALCONVERTER_H

#include <string>
#include "DecimalConverter.h"

using namespace std;

namespace NumberBaseConverter
{
    class HexadecimalConverter
    {
        private:
            DecimalConverter decimalConverter_m;
        public:
            string ConvertToDecimal(string number);
            string ConvertToBinary(string number);
    };
} // end namespace

#endif	/* HEXADECIMALCONVERTER_H */

