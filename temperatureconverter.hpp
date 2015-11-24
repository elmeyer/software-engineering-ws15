#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "unitconverter.hpp"

class temperatureConverter: public UnitConverter
{
public:
        temperatureConverter();
        virtual double convert(double inValue) const = 0;
        virtual std::string toString() const = 0;
        void print() const;
};

#endif // TEMPERATURECONVERTER_H