#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "converter.hpp"

class temperatureConverter: public converter
{
public:
        temperatureConverter();
        virtual double convert(double inValue) = 0;
        virtual std::string toString() const = 0;
        void print() const;
};

#endif // TEMPERATURECONVERTER_H