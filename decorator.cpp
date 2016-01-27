#include "decorator.hpp"

Decorator::Decorator(std::shared_ptr<UnitConverter> c, std::string unit1,
  std::string unit2, double factor):
  UnitConverter(unit1, unit2, factor),
  m_wrappee(c)
{}

Decorator::Decorator(std::shared_ptr<UnitConverter> c):
  UnitConverter(),
  m_wrappee(c)
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
  if (c != NULL)
  {
    m_wrappee = c;
  }
  else
  {
    throw std::invalid_argument("");
  }
}