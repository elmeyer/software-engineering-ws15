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

void UnitConverter::getUnits(std::string & unitA, std::string & unitB) const
{
  unitA = unit1;
  unitB = unit2;
}