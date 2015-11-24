#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"

class celsiusToFahrenheitConverter: public temperatureConverter
{
public:
        celsiusToFahrenheitConverter();
        double convert(double inValue) const;
        std::string toString() const;
};

#endif