#include "temperatureconverter.hpp"

temperatureConverter::temperatureConverter(std::shared_ptr<UnitConverter> c,
  std::string unit1, std::string unit2):
  Decorator(c, unit1, unit2, 1.0)
{}

std::string temperatureConverter::toString() const
{
  std::pair<std::string, std::string> units = UnitConverter::getUnits();
  return Decorator::toString() + units.first + " to " + units.second +" converter";
}