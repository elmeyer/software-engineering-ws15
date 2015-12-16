#ifndef DECORATOR_H
#define DECORATOR_H

#include "unitconverter.hpp"

class Decorator: public UnitConverter
{
public:
  Decorator(std::shared_ptr<UnitConverter> c, std::string unit1,
    std::string unit2, double factor);
  Decorator(std::shared_ptr<UnitConverter> c);
  ~Decorator();
  virtual double convert(double inValue) const;
  std::string toString() const;
  void link(std::shared_ptr<UnitConverter> c);
private:
  std::shared_ptr<UnitConverter> m_wrappee;
};

#endif // DECORATOR_H