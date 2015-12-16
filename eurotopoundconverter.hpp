#ifndef EUROTOPOUNDCONVERTER_H
#define EUROTOPOUNDCONVERTER_H

#include "currencyconverter.hpp"

class euroToPoundConverter : public currencyConverter
{
  public:
    euroToPoundConverter();
    euroToPoundConverter(std::shared_ptr<UnitConverter> c);
    // double convert(double inEuro) const;
    // std::string toString() const;
};

#endif // EUROTOPOUNDCONVERTER_H