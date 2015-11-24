#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class dollarToEuroConverter : public currencyConverter
{
  public:
    DollarToEuroConverter();
    double convert(const double inDollars) const;
    std::string toString() const;
};

#endif // DOLLARTOEUROCONVERTER_H
