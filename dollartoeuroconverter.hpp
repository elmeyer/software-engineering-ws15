#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyConverter.hpp"

class dollarToEuroConverter : public currencyConverter
{
  public:
    dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
};

#endif // DOLLARTOEUROCONVERTER_H
