#include "eurotopoundconverter.hpp"

#include <string>

euroToPoundConverter::euroToPoundConverter()
{
}

/*In: double value of dollars
 *Out: Peso value of input dollars as of 9.10.15
 */
double euroToPoundConverter::convert(double inputEuro) const{
  return inputEuro*0.7211;
}

std::string euroToPoundConverter::toString() const{
  return "Euro to Pound Converter";
}
