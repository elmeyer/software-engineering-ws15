#include "decorator.hpp"

Decorator::Decorator(std::shared_ptr<UnitConverter> c, std::string unit1,
  std::string unit2, double factor):
  m_wrappee(c),
  UnitConverter(unit1, unit2, factor)
{}

Decorator::Decorator(std::shared_ptr<UnitConverter> c):
  m_wrappee(c),
  UnitConverter()
{}

Decorator::~Decorator() 
{
  m_wrappee.reset();
}

double Decorator::convert(double inValue) const
{
  if(m_wrappee != NULL)
    return m_wrappee->convert(inValue);
  else
    return inValue;
}

std::string Decorator::toString() const
{
  if(m_wrappee != NULL)
    return m_wrappee->toString() + " and ";
  else
    return "";
}

void Decorator::link(std::shared_ptr<UnitConverter> c)
{
  m_wrappee = c;
}