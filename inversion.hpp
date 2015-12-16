#ifndef INVERSION_H
#define INVERSION_H

#include "decorator.hpp"

class Inversion: public Decorator
{
public:
  Inversion(std::shared_ptr<UnitConverter> c);
  double convert(double inValue) const;
  std::string toString() const;
};

#endif // INVERSION_H