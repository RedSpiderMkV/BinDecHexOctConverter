
#include "NumberBaseConverterFactory.h"

using namespace std;

namespace NumberBaseConverter
{
    ConverterBase *NumberBaseConverterFactory::GetConverter(string converterType)
    {
        ConverterBase *converter;
    
    if(converterType == "bin")
    {
        converter = &binConverter_m;
    }
    else if(converterType == "dec")
    {
        converter = &decConverter_m;
    }
    else if(converterType == "hex")
    {
        converter = &hexConverter_m;
    } // end if
    
    return converter;
    } // end method
} // end namespace
