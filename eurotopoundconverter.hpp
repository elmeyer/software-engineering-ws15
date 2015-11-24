#ifndef EUROTOPOUNDCONVERTER_H
#define EUROTOPOUNDCONVERTER_H

#include "currencyconverter.hpp"

class euroToPoundConverter : public currencyConverter
{
  public:
    euroToPoundConverter();
    double convert(double inEuro) const;
    std::string toString() const;
};

#endif // EUROTOPOUNDCONVERTER_H