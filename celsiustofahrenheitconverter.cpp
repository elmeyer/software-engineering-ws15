#include "celsiustofahrenheitconverter.hpp"

celsiusToFahrenheitConverter::celsiusToFahrenheitConverter():
  temperatureConverter(NULL, "Celsius", "Fahrenheit")
{}

celsiusToFahrenheitConverter::celsiusToFahrenheitConverter(std::shared_ptr<UnitConverter> c):
  temperatureConverter(c, "Celsius", "Fahrenheit")
{}

double celsiusToFahrenheitConverter::convert(double inValue) const
{
        return ((Decorator::convert(inValue) * 1.8) + 32);
}
/*
std::string celsiusToFahrenheitConverter::toString() const
{
        return Decorator::toString() + "Celsius to Fahrenheit converter";
}
*/