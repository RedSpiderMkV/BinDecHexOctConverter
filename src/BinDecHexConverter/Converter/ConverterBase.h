/* 
 * File:   ConverterBase.h
 * Author: root
 *
 * Created on 15 November 2015, 20:47
 */

#ifndef CONVERTERBASE_H
#define	CONVERTERBASE_H

#include <string>

using namespace std;

namespace NumberBaseConverter
{
    class ConverterBase
    {
        private:
        public:
            virtual string ConvertToBinary(string number);
            virtual string ConvertToDecimal(string number);
            virtual string ConvertToHexadecimal(string number);
    };
} // end namespace

#endif	/* CONVERTERBASE_H */

