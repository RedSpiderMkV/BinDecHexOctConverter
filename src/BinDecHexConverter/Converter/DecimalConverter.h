/* 
 * File:   DecimalConverter.h
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:51
 */

#ifndef DECIMALCONVERTER_H
#define	DECIMALCONVERTER_H

#include<string>
using namespace std;

namespace NumberBaseConverter
{
    class DecimalConverter
    {
        private:
            string convertToBinary(int number);
            string convertToHexadecimal(int number);
        public:
            string ConvertToBinary(string decStr);
            string ConvertToHexadecimal(string decStr);
    };
}

#endif	/* DECIMALCONVERTER_H */

