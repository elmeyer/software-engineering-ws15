#include "celsiustofahrenheitconverter.hpp"

celsiusToFahrenheitConverter::celsiusToFahrenheitConverter():
  temperatureConverter(NULL, "Celsius", "Fahrenheit")
{}

celsiusToFahrenheitConverter::celsiusToFahrenheitConverter(std::shared_ptr<UnitConverter> c):
  temperatureConverter(c, "Celsius", "Fahrenheit")
{}

double celsiusToFahrenheitConverter::convert(double inValue) const
{
        if (inValue < -273.15)
        {
          throw std::out_of_range("\033[5;31mERROR:\033[0m Input temperature cannot be below -273.15°C!");
          return 0.0;
        }
        else
        {
          return ((Decorator::convert(inValue) * 1.8) + 32);
        }
}
/*
std::string celsiusToFahrenheitConverter::toString() const
{
        return Decorator::toString() + "Celsius to Fahrenheit converter";
}
*/