#include "eurotopoundconverter.hpp"

euroToPoundConverter::euroToPoundConverter():
  currencyConverter(NULL, "Euro", "Pound", 0.7211)
{}

euroToPoundConverter::euroToPoundConverter(std::shared_ptr<UnitConverter> c):
  currencyConverter(c, "Euro", "Pound", 0.7211)
{}

/*In: double value of dollars
 *Out: Peso value of input dollars as of 9.10.15
 */
/*
double euroToPoundConverter::convert(double inputEuro) const{
  return Decorator::convert(inputEuro)*0.7211;
}

std::string euroToPoundConverter::toString() const{
  return Decorator::toString + "Euro to Pound Converter";
}
*/