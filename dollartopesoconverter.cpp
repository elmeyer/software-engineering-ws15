#include "dollartopesoconverter.hpp"

dollarToPesoConverter::dollarToPesoConverter():
  currencyConverter(NULL, "Dollar", "Peso", 16.5678121)
{}

dollarToPesoConverter::dollarToPesoConverter(std::shared_ptr<UnitConverter> c):
  currencyConverter(c, "Dollar", "Peso", 16.5678121)
{}

/*In: double value of dollars
 *Out: Peso value of input dollars as of 9.10.15
 */
/*
double dollarToPesoConverter::convert(double inputDollars) const{
  return Decorator::convert(inputDollars)*16.5678121;
}

std::string dollarToPesoConverter::toString() const{
  return Decorator::toString() + "Dollar to Peso converter";
}
*/