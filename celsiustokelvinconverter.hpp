#ifndef CELSIUSTOKELVINCONVERTER
#define CELSIUSTOKELVINCONVERTER

#include "temperatureconverter.hpp"

class celsiusToKelvinConverter: public temperatureConverter
{
public:
        celsiusToKelvinConverter();
        celsiusToKelvinConverter(std::shared_ptr<UnitConverter> c);
        double convert(double inValue) const;
        // std::string toString() const;
};

#endif