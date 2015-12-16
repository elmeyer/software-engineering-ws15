#ifndef COMMAND_H
#define COMMAND_H

#include "unitconverter.hpp"

class Command
{
public:
  typedef double (UnitConverter::*Action)(const double) const;
  Command(std::shared_ptr<UnitConverter> object, Action method, double value);
  double execute() const;
  double getValue() const;
private:
  std::shared_ptr<UnitConverter> m_object;
  Action m_method;
  double m_value;
};

#endif