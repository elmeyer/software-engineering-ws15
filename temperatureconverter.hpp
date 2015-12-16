#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "decorator.hpp"

class temperatureConverter: public Decorator
{
  public:
    temperatureConverter(std::shared_ptr<UnitConverter> c, std::string unit1,
      std::string unit2);
    virtual double convert(double inValue) const = 0;
    std::string toString() const;
};

#endif // TEMPERATURECONVERTER_H