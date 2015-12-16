#ifndef LENGTH_CONVERTER_H
#define LENGTH_CONVERTER_H

#include "decorator.hpp"

class lengthConverter : public Decorator
{
  public:
    lengthConverter(std::shared_ptr<UnitConverter> c, std::string unit1,
      std::string unit2, double factor);
    double convert(double inValue) const;
    std::string toString() const;
};

#endif // LENGTH_CONVERTER_H