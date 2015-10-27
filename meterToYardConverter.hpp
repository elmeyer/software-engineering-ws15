#ifndef METER_TO_YARD_CONVERTER_H
#define METER_TO_YARD_CONVERTER_H

#include <iostream>
#include <string>
#include "lengthConverter.hpp"

class meterToYardConverter : public lengthConverter
{
  public:
    meterToYardConverter();
    virtual double convert(double inValue);
    virtual std::string toString() const;
};

#endif // METER_TO_YARD_CONVERTER_H