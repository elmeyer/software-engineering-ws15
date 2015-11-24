#include "dollartoeuroconverter.hpp"

#include <string>

DollarToEuroConverter::DollarToEuroConverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double DollarToEuroConverter::convert(const double inputDollars) const{
  return inputDollars*0.88;
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout << toString();
}