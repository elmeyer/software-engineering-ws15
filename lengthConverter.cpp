#include "lengthConverter.hpp"

lengthConverter::lengthConverter(std::shared_ptr<UnitConverter> c,
  std::string unit1, std::string unit2, double factor):
  Decorator(c, unit1, unit2, factor)
{}

double lengthConverter::convert(double inValue) const
{
  return Decorator::convert(inValue)*UnitConverter::getFactor();
}

std::string lengthConverter::toString() const
{
  std::string unit1, unit2;
  UnitConverter::getUnits(unit1, unit2);
  return Decorator::toString() + unit1 + " to " + unit2 + " converter";
}