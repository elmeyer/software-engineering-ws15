#ifndef LENGTH_CONVERTER_H
#define LENGTH_CONVERTER_H

#include <iostream>
#include <string>
#include "unitconverter.hpp"

class lengthConverter : public UnitConverter
{
  public:
    lengthConverter();
    virtual double convert(double inValue) const = 0;
    virtual std::string toString() const = 0;
    void print() const;
};

#endif // LENGTH_CONVERTER_H