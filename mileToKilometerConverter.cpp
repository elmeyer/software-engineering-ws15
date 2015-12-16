#include "mileToKilometerConverter.hpp"

mileToKilometerConverter::mileToKilometerConverter():
  lengthConverter(NULL, "Mile", "Kilometer", 1.609347219)
{}

mileToKilometerConverter::mileToKilometerConverter(std::shared_ptr<UnitConverter> c):
  lengthConverter(c, "Mile", "Kilometer", 1.609347219)
{}

/*In: double value of miles
 *Out: kilometer value of input miles
 */
/*
double mileToKilometerConverter::convert(double inputMiles) const{
  return Decorator::convert(inputMiles)*1.609347219;
}

std::string mileToKilometerConverter::toString() const{
  return Decorator::toString() + "Mile to Kilometer Converter";
}
*/