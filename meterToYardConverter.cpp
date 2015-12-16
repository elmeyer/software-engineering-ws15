#include "meterToYardConverter.hpp"

meterToYardConverter::meterToYardConverter():
  lengthConverter(NULL, "Meter", "Yard", 1.09361)
{}

meterToYardConverter::meterToYardConverter(std::shared_ptr<UnitConverter> c):
  lengthConverter(c, "Meter", "Yard", 1.09361)
{}

/*In: double value of meters
 *Out: yard value of input meters
 */
/*
double meterToYardConverter::convert(double inputMeters) const{
  return Decorator::convert(inputMeters)*1.09361;
}

std::string meterToYardConverter::toString() const{
  return Decorator::toString() + "Meter to Yard Converter";
}
*/