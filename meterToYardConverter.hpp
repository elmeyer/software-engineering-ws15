#ifndef METER_TO_YARD_CONVERTER_H
#define METER_TO_YARD_CONVERTER_H

#include "lengthConverter.hpp"

class meterToYardConverter : public lengthConverter
{
  public:
    meterToYardConverter();
    meterToYardConverter(std::shared_ptr<UnitConverter> c);
    // double convert(double inValue) const;
    // std::string toString() const;
};

#endif // METER_TO_YARD_CONVERTER_H