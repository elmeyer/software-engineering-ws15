#include "temperatureconverter.hpp"

temperatureConverter::temperatureConverter(std::shared_ptr<UnitConverter> c,
  std::string unit1, std::string unit2):
  Decorator(c, unit1, unit2, 1.0)
{}

std::string temperatureConverter::toString() const
{
  std::string unit1, unit2;
  UnitConverter::getUnits(unit1, unit2);
  return Decorator::toString() + unit1 + " to " + unit2 + " converter";
}