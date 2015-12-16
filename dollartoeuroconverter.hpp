#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class dollarToEuroConverter : public currencyConverter
{
  public:
    dollarToEuroConverter();
    dollarToEuroConverter(std::shared_ptr<UnitConverter> c);
    // double convert(const double inDollars) const;
    // std::string toString() const;
};

#endif // DOLLARTOEUROCONVERTER_H
