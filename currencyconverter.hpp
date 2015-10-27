#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "converter.hpp"

class currencyConverter : public converter
{
  public:
  	currencyConverter();
  	virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
  	void print() const;


};

#endif // CURRENCYCONVERTER_H
