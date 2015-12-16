#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class UnitConverter
{
  public:
    UnitConverter();
    UnitConverter(std::string unit1, std::string unit2, double factor);
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void link(std::shared_ptr<UnitConverter> c) = 0;
    double getFactor() const;
    void getUnits(std::string & unitA, std::string & unitB) const;
  private:
    std::string unit1;
    std::string unit2;
    double factor;
};

#endif // CONVERTER_H
