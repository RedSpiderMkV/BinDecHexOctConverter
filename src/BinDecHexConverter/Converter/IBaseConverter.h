/* 
 * File:   IBaseConverter.h
 * Author: root
 *
 * Created on 15 November 2015, 18:02
 */

#ifndef IBASECONVERTER_H
#define	IBASECONVERTER_H

#include <string>

using namespace std;

namespace NumberBaseConverter
{
    class IBaseConverter
    {
        public:
            virtual string ConvertToDecimal(string number) = 0;
            virtual string ConvertToHexadecimal(string number) = 0;
            virtual string ConvertToBinary(string number) = 0;
    };
} // end namespace

#endif	/* IBASECONVERTER_H */

