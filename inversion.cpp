#include "inversion.hpp"

Inversion::Inversion(std::shared_ptr<UnitConverter> c):
  Decorator(c, c->getUnits().first, c->getUnits().second, c->getFactor())
{}

double Inversion::convert(double inValue) const
{
  return inValue*(1.0/getFactor());
}

std::string Inversion::toString() const
{
  return getUnits().second + " to " + getUnits().first + " converter";
}