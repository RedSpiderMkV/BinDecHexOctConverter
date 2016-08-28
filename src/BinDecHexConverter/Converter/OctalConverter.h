/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OctalConverter.h
 * Author: RedSpiderMkV
 *
 * Created on 29 August 2016, 00:06
 */

#ifndef OCTALCONVERTER_H
#define OCTALCONVERTER_H

#include<string>
#include "DecimalConverter.h"
#include "ConverterBase.h"

using namespace std;

namespace NumberBaseConverter
{
    class OctalConverter : public ConverterBase
    {
        private:
            DecimalConverter decimalConverter_m;
            
            int parseIntFromString(string number);
        public:
            string ConvertToDecimal(string number);
            string ConvertToBinary(string number);
            string ConvertToHexadecimal(string number);
    };
} // end namespace

#endif /* OCTALCONVERTER_H */

