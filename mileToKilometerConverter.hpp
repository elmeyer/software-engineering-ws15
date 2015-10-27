#ifndef MILE_TO_KILOMETER_CONVERTER_H
#define MILE_TO_KILOMETER_CONVERTER_H

#include <iostream>
#include <string>
#include "lengthConverter.hpp"

class mileToKilometerConverter : public lengthConverter
{
  public:
    mileToKilometerConverter();
    virtual double convert(double inValue);
    virtual std::string toString() const;
};

#endif // MILE_TO_KILOMETER_CONVERTER_H