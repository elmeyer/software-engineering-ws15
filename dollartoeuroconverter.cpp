#include "dollartoeuroconverter.hpp"

dollarToEuroConverter::dollarToEuroConverter():
  currencyConverter(NULL, "Dollar", "Euro", 0.88)
{}

dollarToEuroConverter::dollarToEuroConverter(std::shared_ptr<UnitConverter> c):
  currencyConverter(c, "Dollar", "Euro", 0.88)
{}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
/*
double dollarToEuroConverter::convert(const double inputDollars) const{
  return Decorator::convert(inputDollars)*0.88;
}

std::string dollarToEuroConverter::toString() const{
  return Decorator::toString() + "Dollar to Euro Converter";
}
*/