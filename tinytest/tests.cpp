#include <memory>
#include "tinytest.h"
#include "../dollartoeuroconverter.hpp"
#include "../eurotopoundconverter.hpp"
#include "../dollartopesoconverter.hpp"
#include "../mileToKilometerConverter.hpp"
#include "../meterToYardConverter.hpp"
#include "../celsiustofahrenheitconverter.hpp"
#include "../celsiustokelvinconverter.hpp"

// TESTS
// -----

// Currency converter

int dollarToEuro()
{
        auto dollarToEuro = std::make_shared<dollarToEuroConverter>();
        TINYTEST_EQUAL_EPSILON(0.0, dollarToEuro->convert(0.0));
        TINYTEST_EQUAL_EPSILON(-0.0, dollarToEuro->convert(-0.0));
        TINYTEST_EQUAL_EPSILON(0.88, dollarToEuro->convert(1));
        TINYTEST_EQUAL_EPSILON(879999.12, dollarToEuro->convert(999999));
        TINYTEST_EQUAL_EPSILON(-64.24, dollarToEuro->convert(-73)); // debt

        return 1;
}

int euroToPound()
{
        auto euroToPound = std::make_shared<euroToPoundConverter>();
        TINYTEST_EQUAL_EPSILON(0.0, euroToPound->convert(0.0));
        TINYTEST_EQUAL_EPSILON(-0.0, euroToPound->convert(-0.0));
        TINYTEST_EQUAL_EPSILON(0.7211, euroToPound->convert(1));
        TINYTEST_EQUAL_EPSILON(721099.2789, euroToPound->convert(999999));
        TINYTEST_EQUAL_EPSILON(-52.6403, euroToPound->convert(-73)); // debt

        return 1;
}

int dollarToPeso()
{
        auto dollarToPeso = std::make_shared<dollarToPesoConverter>();
        TINYTEST_EQUAL_EPSILON(0.0, dollarToPeso->convert(0.0));
        TINYTEST_EQUAL_EPSILON(-0.0, dollarToPeso->convert(-0.0));
        TINYTEST_EQUAL_EPSILON(16.5678121, dollarToPeso->convert(1));
        TINYTEST_EQUAL_EPSILON(16567795.5321879, dollarToPeso->convert(999999));
        TINYTEST_EQUAL_EPSILON(-1209.4502833, dollarToPeso->convert(-73)); // debt

        return 1;
}

// Length converter

int mileToKilometer()
{
        auto mileToKilometer = std::make_shared<mileToKilometerConverter>();
        TINYTEST_EQUAL_EPSILON(0.0, mileToKilometer->convert(0.0));
        TINYTEST_EQUAL_EPSILON(1.609347219, mileToKilometer->convert(1));
        TINYTEST_EQUAL_EPSILON(1609345.609652781, mileToKilometer->convert(999999));

        return 1;
}

int meterToYard()
{
        auto meterToYard = std::make_shared<meterToYardConverter>();
        TINYTEST_EQUAL_EPSILON(0.0, meterToYard->convert(0.0));
        TINYTEST_EQUAL_EPSILON(1.09361, meterToYard->convert(1));
        TINYTEST_EQUAL_EPSILON(1093608.90639, meterToYard->convert(999999));

        return 1;
}

// Temperature converter

int celsiusToFahrenheit()
{
        auto celsiusToFahrenheit = std::make_shared<celsiusToFahrenheitConverter>();
        TINYTEST_EQUAL_EPSILON(32.0, celsiusToFahrenheit->convert(0));
        TINYTEST_EQUAL_EPSILON(0.0, celsiusToFahrenheit->convert(-17.7777778));
        TINYTEST_EQUAL_EPSILON(451.0, celsiusToFahrenheit->convert(232.7777778));
        TINYTEST_EQUAL_EPSILON(-10.0, celsiusToFahrenheit->convert(-23.3333333));

        return 1;
}

int celsiusToKelvin()
{
        auto celsiusToKelvin = std::make_shared<celsiusToKelvinConverter>();
        TINYTEST_ASSERT(celsiusToKelvin->convert(-273.15) == 0);
        TINYTEST_ASSERT(celsiusToKelvin->convert(1912.0) == 2185.15);
        TINYTEST_ASSERT(celsiusToKelvin->convert(1910.0) == 2183.15);
        TINYTEST_ASSERT(celsiusToKelvin->convert(2911.0) == 3184.15);

        return 1;
}

TINYTEST_START_SUITE(Convert);
        TINYTEST_ADD_TEST(dollarToEuro);
        TINYTEST_ADD_TEST(euroToPound);
        TINYTEST_ADD_TEST(dollarToPeso);
        TINYTEST_ADD_TEST(mileToKilometer);
        TINYTEST_ADD_TEST(meterToYard);
        TINYTEST_ADD_TEST(celsiusToFahrenheit);
        TINYTEST_ADD_TEST(celsiusToKelvin);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);