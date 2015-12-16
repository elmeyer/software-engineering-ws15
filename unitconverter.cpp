#include "unitconverter.hpp"

UnitConverter::UnitConverter():
  unit1(),
  unit2(),
  factor()
{}

UnitConverter::UnitConverter(std::string unit1, std::string unit2, double factor):
  unit1(unit1),
  unit2(unit2),
  factor(factor)
{}

double UnitConverter::getFactor() const
{
  return factor;
}

std::pair<std::string, std::string> UnitConverter::getUnits() const
{
  return std::make_pair(unit1, unit2);
}