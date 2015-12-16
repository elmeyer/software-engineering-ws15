#ifndef MILE_TO_KILOMETER_CONVERTER_H
#define MILE_TO_KILOMETER_CONVERTER_H

#include "lengthConverter.hpp"

class mileToKilometerConverter : public lengthConverter
{
  public:
    mileToKilometerConverter();
    mileToKilometerConverter(std::shared_ptr<UnitConverter> c);
    // double convert(double inValue) const;
    // std::string toString() const;
};

#endif // MILE_TO_KILOMETER_CONVERTER_H