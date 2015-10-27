#include <memory>
#include "tinytest.h"
#include "dollartoeuroconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"

// TESTS
// -----
/*
// Currency converter

int dollarToEuro()
{
        auto dollarToEuro = std::make_shared<dollarToEuroConverter>();
        TINYTEST_EQUAL_EPSILON(0, dollarToEuro->convert(0));
        TINYTEST_EQUAL_EPSILON(-0, dollarToEuro->convert(-0));
        TINYTEST_EQUAL_EPSILON(0.88, dollarToEuro->convert(1));
        TINYTEST_EQUAL_EPSILON(8799999999999999.12, dollarToEuro->convert(9999999999999999));
        TINYTEST_EQUAL_EPSILON(-64.24, dollarToEuro->convert(-73)); // debt
}

int euroToPound()
{
        auto euroToPound = std::make_shared<euroToPoundConverter>();
        TINYTEST_EQUAL_EPSILON(0, euroToPound->convert(0));
        TINYTEST_EQUAL_EPSILON(-0, euroToPound->convert(-0));
        TINYTEST_EQUAL_EPSILON(0.7211, euroToPound->convert(1));
        TINYTEST_EQUAL_EPSILON(7210999999999999.2789, euroToPound->convert(9999999999999999));
        TINYTEST_EQUAL_EPSILON(-52.6403, euroToPound->convert(-73)); // debt
}

int dollarToPeso()
{
        auto dollarToPeso = std::make_shared<dollarToPesoConverter>();
        TINYTEST_EQUAL_EPSILON(0, dollarToPeso->convert(0));
        TINYTEST_EQUAL_EPSILON(-0, dollarToPeso->convert(-0));
        TINYTEST_EQUAL_EPSILON(16.5678121, dollarToPeso->convert(1));
        TINYTEST_EQUAL_EPSILON(165678120999999983.4321879, dollarToPeso->convert(9999999999999999));
        TINYTEST_EQUAL_EPSILON(-1209.4502833, dollarToPeso->convert(-73)); // debt
}

// Length converter

int mileToKilometer()
{
        auto mileToKilometer = std::make_shared<mileToKilometerConverter>();
        TINYTEST_EQUAL_EPSILON(0, mileToKilometer->convert(0));
        TINYTEST_EQUAL_EPSILON(1.60934, mileToKilometer->convert(1));
        TINYTEST_EQUAL_EPSILON(16093399999999998.39066, mileToKilometer->convert(9999999999999999));
}

int meterToYard()
{
        auto meterToYard = std::make_shared<meterToYardConverter>();
        TINYTEST_EQUAL_EPSILON(0, meterToYard->convert(0));
        TINYTEST_EQUAL_EPSILON(1.09361, meterToYard->convert(1));
        TINYTEST_EQUAL_EPSILON(10936099999999998.90639, meterToYard->convert(9999999999999999));
}
*/
// Temperature converter

int celsiusToFahrenheit()
{
        auto celsiusToFahrenheit = std::make_shared<celsiusToFahrenheitConverter>();
        TINYTEST_EQUAL_EPSILON(32.0, celsiusToFahrenheit->convert(0));
        TINYTEST_EQUAL_EPSILON(0.0, celsiusToFahrenheit->convert(-17.7777778));
        TINYTEST_EQUAL_EPSILON(451.0, celsiusToFahrenheit->convert(232.7777778));
        TINYTEST_EQUAL_EPSILON(-10.0, celsiusToFahrenheit->convert(-23.3333333));
}

int celsiusToKelvin()
{
        auto celsiusToKelvin = std::make_shared<celsiusToKelvinConverter>();
        TINYTEST_ASSERT(0 == celsiusToKelvin->convert(-273.15));
        TINYTEST_ASSERT(2185.15 == celsiusToKelvin->convert(1912.0));
        TINYTEST_ASSERT(2183.15 == celsiusToKelvin->convert(1910.0));
        TINYTEST_ASSERT(3184.15 == celsiusToKelvin->convert(2911.0));
}

TINYTEST_START_SUITE(Convert);
        /*
        TINYTEST_ADD_TEST(dollarToEuro);
        TINYTEST_ADD_TEST(euroToPound);
        TINYTEST_ADD_TEST(dollarToPeso);
        TINYTEST_ADD_TEST(mileToKilometer);
        TINYTEST_ADD_TEST(meterToYard);
        */
        TINYTEST_ADD_TEST(celsiusToFahrenheit);
        TINYTEST_ADD_TEST(celsiusToKelvin);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);

/*
int main(int argc, char* argv[])
{
  std::string conversion = argv[0];
  std::string value = argv[1];

  //TODO

  auto myConverter = std::make_shared<dollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  return 0;
}
*/