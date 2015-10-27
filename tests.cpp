#include "tinytest.h"

// Currency converter

int dollarToEuro()
{
        auto dollarToEuroConverter = std::make_shared<dollarToEuroConverter>();
        TINYTEST_EQUAL(0, dollarToEuroConverter->convert(0));
        TINYTEST_EQUAL(-0, dollarToEuroConverter->convert(-0));
        TINYTEST_EQUAL(0.88, dollarToEuroConverter->convert(1));
        TINYTEST_EQUAL(8799999999999999.12, dollarToEuroConverter->convert(9999999999999999));
        TINYTEST_EQUAL(-64.24, dollarToEuroConverter->convert(-73)); // debt
}

int euroToPound()
{
        auto euroToPoundConverter = std::make_shared<euroToPoundConverter>();
        TINYTEST_EQUAL(0, euroToPoundConverter->convert(0));
        TINYTEST_EQUAL(-0, euroToPoundConverter->convert(-0));
        TINYTEST_EQUAL(0.7211, euroToPoundConverter->convert(1));
        TINYTEST_EQUAL(7210999999999999.2789, euroToPoundConverter->convert(9999999999999999));
        TINYTEST_EQUAL(-52.6403, euroToPoundConverter->convert(-73)); // debt
}

int dollarToPeso()
{
        auto dollarToPesoConverter = std::make_shared<dollarToPesoConverter>();
        TINYTEST_EQUAL(0, dollarToPesoConverter->convert(0));
        TINYTEST_EQUAL(-0, dollarToPesoConverter->convert(-0));
        TINYTEST_EQUAL(16.5678121, dollarToPesoConverter->convert(1));
        TINYTEST_EQUAL(165678120999999983.4321879, dollarToPesoConverter->convert(9999999999999999));
        TINYTEST_EQUAL(-1209.4502833, dollarToPesoConverter->convert(-73)); // debt
}

// Length converter

int mileToKilometer()
{
        auto mileToKilometerConverter = std::make_shared<mileToKilometerConverter>();
        TINYTEST_EQUAL(0, mileToKilometerConverter->convert(0));
        TINYTEST_EQUAL(1.60934, mileToKilometerConverter->convert(1));
        TINYTEST_EQUAL(16093399999999998.39066, mileToKilometerConverter->convert(9999999999999999));
}

int meterToYard()
{
        auto meterToYardConverter = std::make_shared<meterToYardConverter>();
        TINYTEST_EQUAL(0, meterToYardConverter->convert(0));
        TINYTEST_EQUAL(1.09361, meterToYardConverter->convert(1));
        TINYTEST_EQUAL(10936099999999998.90639, meterToYardConverter->convert(9999999999999999));
}

// Temperature converters

int celsiusToFahrenheit()
{
        auto celsiusToFahrenheitConverter = std::make_shared<celsiusToFahrenheitConverter>();
        TINYTEST_EQUAL(32, celsiusToFahrenheitConverter->convert(0));
        TINYTEST_EQUAL(0, celsiusToFahrenheitConverter->convert(-17.7778));
        TINYTEST_EQUAL(451, celsiusToFahrenheitConverter->convert(232.778));
        TINYTEST_EQUAL(-10, celsiusToFahrenheitConverter->convert(-23.3333));
}

int celsiusToKelvin()
{
        auto celsiusToKelvinConverter = std::make_shared<celsiusToKelvinConverter>();
        TINYTEST_EQUAL(0, celsiusToKelvinConverter->convert(-273.15));
        TINYTEST_EQUAL(2185.15, celsiusToKelvinConverter->convert(1912));
        TINYTEST_EQUAL(2183.15, celsiusToKelvinConverter->convert(1910));
        TINYTEST_EQUAL(3184.15, celsiusToKelvinConverter->convert(2911));
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