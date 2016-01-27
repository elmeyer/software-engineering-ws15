#include "celsiustokelvinconverter.hpp"

celsiusToKelvinConverter::celsiusToKelvinConverter():
  temperatureConverter(NULL, "Celsius", "Kelvin")
{}

celsiusToKelvinConverter::celsiusToKelvinConverter(std::shared_ptr<UnitConverter> c):
  temperatureConverter(c, "Celsius", "Kelvin")
{}

double celsiusToKelvinConverter::convert(double inValue) const
{
        if (inValue < -273.15)
        {
          throw std::out_of_range("\033[5;31mERROR:\033[0m Input temperature cannot be below -273.15°C!");
          return 0.0;
        }
        else
        {
          return (Decorator::convert(inValue) + 273.15);
        }
}
/*
std::string celsiusToKelvinConverter::toString() const
{
        return Decorator::toString() + "Celsius to Kelvin converter";
}
*/