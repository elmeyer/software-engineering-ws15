#include "celsiustokelvinconverter.hpp"

celsiusToKelvinConverter::celsiusToKelvinConverter():
  temperatureConverter(NULL, "Celsius", "Kelvin")
{}

celsiusToKelvinConverter::celsiusToKelvinConverter(std::shared_ptr<UnitConverter> c):
  temperatureConverter(c, "Celsius", "Kelvin")
{}

double celsiusToKelvinConverter::convert(double inValue) const
{
        return (Decorator::convert(inValue) + 273.15);
}
/*
std::string celsiusToKelvinConverter::toString() const
{
        return Decorator::toString() + "Celsius to Kelvin converter";
}
*/