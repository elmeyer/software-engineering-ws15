#include "decorator.hpp"

Decorator::Decorator() {}

Decorator::~Decorator() 
{
  m_wrappee.reset();
}

double Decorator::convert(double inValue) const
{
  return m_wrappee->convert();
}

std::string Decorator::toString() const
{
  return m_wrappee->toString() + " and ";
}

void Decorator::link(std::shared_ptr<UnitConverter> c)
{
  m_wrappee = c;
}