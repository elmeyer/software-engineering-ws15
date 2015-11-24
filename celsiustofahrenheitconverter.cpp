#include "celsiustofahrenheitconverter.hpp"

celsiusToFahrenheitConverter::celsiusToFahrenheitConverter() {}

double celsiusToFahrenheitConverter::convert(double inValue) const
{
        return ((inValue * 1.8) + 32);
}

std::string celsiusToFahrenheitConverter::toString() const
{
        return "Celsius to Fahrenheit converter";
}