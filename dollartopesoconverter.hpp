#ifndef DOLLARTOPESOCONVERTER_H
#define DOLLARTOPESOCONVERTER_H

#include "currencyconverter.hpp"

class dollarToPesoConverter : public currencyConverter
{
  public:
    dollarToPesoConverter();
    dollarToPesoConverter(std::shared_ptr<UnitConverter> c);
    // double convert(double inDollars) const;
    // std::string toString() const;
};

#endif // DOLLARTOPESOCONVERTER_H