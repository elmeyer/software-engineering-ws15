#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class dollarToEuroConverter : public currencyConverter
{
  public:
    dollarToEuroConverter();
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
