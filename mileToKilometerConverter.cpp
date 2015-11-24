#include "mileToKilometerConverter.hpp"


mileToKilometerConverter::mileToKilometerConverter()
{
}

/*In: double value of miles
 *Out: kilometer value of input miles
 */
double mileToKilometerConverter::convert(double inputMiles) const{
  return inputMiles*1.609347219;
}

std::string mileToKilometerConverter::toString() const{
  return "Mile to Kilometer Converter";
}