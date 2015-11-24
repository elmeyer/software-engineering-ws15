#ifndef CELSIUSTOKELVINCONVERTER
#define CELSIUSTOKELVINCONVERTER

#include "temperatureconverter.hpp"

class celsiusToKelvinConverter: public temperatureConverter
{
public:
        celsiusToKelvinConverter();
        double convert(double inValue) const;
        std::string toString() const;
};

#endif