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

namespace testNamespace
{
    class DecimalConverter
    {
        private:
            
        public:
            string ConvertToBinary(int number);
            string ConvertToHexadecimal(int number);
    };
}

#endif	/* DECIMALCONVERTER_H */

