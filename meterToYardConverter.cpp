#include "meterToYardConverter.hpp"


meterToYardConverter::meterToYardConverter()
{
}

/*In: double value of meters
 *Out: yard value of input meters
 */
double meterToYardConverter::convert(double inputMeters) const{
  return inputMeters*1.09361;
}

std::string meterToYardConverter::toString() const{
  return "Meter to Yard Converter";
}