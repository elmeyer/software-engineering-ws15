#include <memory>
#include "tinytest.h"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"

// Currency converter

int dollarToEuro()
{
        auto dollarToEuro = std::make_shared<dollarToEuroConverter>();
        TINYTEST_EQUAL(0, dollarToEuro->convert(0));
        TINYTEST_EQUAL(-0, dollarToEuro->convert(-0));
        TINYTEST_EQUAL(0.88, dollarToEuro->convert(1));
        TINYTEST_EQUAL(8799999999999999.12, dollarToEuro->convert(9999999999999999));
        TINYTEST_EQUAL(-64.24, dollarToEuro->convert(-73)); // debt
}

int euroToPound()
{
        auto euroToPound = std::make_shared<euroToPoundConverter>();
        TINYTEST_EQUAL(0, euroToPound->convert(0));
        TINYTEST_EQUAL(-0, euroToPound->convert(-0));
        TINYTEST_EQUAL(0.7211, euroToPound->convert(1));
        TINYTEST_EQUAL(7210999999999999.2789, euroToPound->convert(9999999999999999));
        TINYTEST_EQUAL(-52.6403, euroToPound->convert(-73)); // debt
}

int dollarToPeso()
{
        auto dollarToPeso = std::make_shared<dollarToPesoConverter>();
        TINYTEST_EQUAL(0, dollarToPeso->convert(0));
        TINYTEST_EQUAL(-0, dollarToPeso->convert(-0));
        TINYTEST_EQUAL(16.5678121, dollarToPeso->convert(1));
        TINYTEST_EQUAL(165678120999999983.4321879, dollarToPeso->convert(9999999999999999));
        TINYTEST_EQUAL(-1209.4502833, dollarToPeso->convert(-73)); // debt
}

// Length converter

int mileToKilometer()
{
        auto mileToKilometer = std::make_shared<mileToKilometerConverter>();
        TINYTEST_EQUAL(0, mileToKilometer->convert(0));
        TINYTEST_EQUAL(1.60934, mileToKilometer->convert(1));
        TINYTEST_EQUAL(16093399999999998.39066, mileToKilometer->convert(9999999999999999));
}

int meterToYard()
{
        auto meterToYard = std::make_shared<meterToYardConverter>();
        TINYTEST_EQUAL(0, meterToYard->convert(0));
        TINYTEST_EQUAL(1.09361, meterToYard->convert(1));
        TINYTEST_EQUAL(10936099999999998.90639, meterToYard->convert(9999999999999999));
}

// Temperature converters

int celsiusToFahrenheit()
{
        auto celsiusToFahrenheit = std::make_shared<celsiusToFahrenheitConverter>();
        TINYTEST_EQUAL(32, celsiusToFahrenheit->convert(0));
        TINYTEST_EQUAL(0, celsiusToFahrenheit->convert(-17.7778));
        TINYTEST_EQUAL(451, celsiusToFahrenheit->convert(232.778));
        TINYTEST_EQUAL(-10, celsiusToFahrenheit->convert(-23.3333));
}

int celsiusToKelvin()
{
        auto celsiusToKelvin = std::make_shared<celsiusToKelvinConverter>();
        TINYTEST_EQUAL(0, celsiusToKelvin->convert(-273.15));
        TINYTEST_EQUAL(2185.15, celsiusToKelvin->convert(1912));
        TINYTEST_EQUAL(2183.15, celsiusToKelvin->convert(1910));
        TINYTEST_EQUAL(3184.15, celsiusToKelvin->convert(2911));
}

TINYTEST_START_SUITE();
        TINYTEST_ADD_TEST(dollarToEuro);
        TINYTEST_ADD_TEST(euroToPound);
        TINYTEST_ADD_TEST(dollarToPeso);
        TINYTEST_ADD_TEST(mileToKilometer);
        TINYTEST_ADD_TEST(meterToYard);
        TINYTEST_ADD_TEST(celsiusToFahrenheit);
        TINYTEST_ADD_TEST(celsiusToKelvin);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);