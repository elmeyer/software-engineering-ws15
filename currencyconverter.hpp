#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "unitconverter.hpp"

class currencyConverter : public UnitConverter
{
  public:
  	currencyConverter();
  	virtual double convert(double inValue) const = 0;
        virtual std::string toString() const = 0;
  	void print() const;


};

#endif // CURRENCYCONVERTER_H

