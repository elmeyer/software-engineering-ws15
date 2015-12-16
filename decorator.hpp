#ifndef DECORATOR_H
#define DECORATOR_H

#include "unitconverter.hpp"

class Decorator: public UnitConverter
{
public:
  Decorator();
  ~Decorator();
  double convert(double inValue) const;
  std::string toString() const;
  void link(std::shared_ptr<UnitConverter> c);
private:
  std::shared_ptr<UnitConverter> m_wrappee;
};

#endif // DECORATOR_H