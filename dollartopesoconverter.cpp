#include "dollartopesoconverter.hpp"

#include <string>

dollarToPesoConverter::dollarToPesoConverter()
{
}

/*In: double value of dollars
 *Out: Peso value of input dollars as of 9.10.15
 */
double dollarToPesoConverter::convert(double inputDollars) const{
  return inputDollars*16.5678121;
}

std::string dollarToPesoConverter::toString() const{
  return "Dollar to Peso Converter";
}
