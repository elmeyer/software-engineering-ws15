#include "dollartoeuroconverter.hpp"

#include <string>

dollarToEuroConverter::dollarToEuroConverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double dollarToEuroConverter::convert(double inputDollars){
  return inputDollars*0.88;
}

std::string dollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

