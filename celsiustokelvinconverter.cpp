#include "celsiustokelvinconverter.hpp"

celsiusToKelvinConverter::celsiusToKelvinConverter() {}

double celsiusToKelvinConverter::convert(double inValue)
{
        return (inValue + 273.15);
}

std::string celsiusToKelvinConverter::toString() const
{
        return "Celsius to Kelvin converter";
}