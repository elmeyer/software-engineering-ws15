#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "decorator.hpp"

class currencyConverter : public Decorator
{
  public:
  	currencyConverter(std::shared_ptr<UnitConverter> c, std::string unit1,
      std::string unit2, double factor);
  	double convert(double inValue) const;
    std::string toString() const;
};

#endif // CURRENCYCONVERTER_H

