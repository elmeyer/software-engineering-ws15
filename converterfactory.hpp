#ifndef CONVERTERFACTORY_H
#define CONVERTERFACTORY_H

#include <memory>
#include <map>
#include <string>
#include "dollartoeuroconverter.hpp"
#include "eurotopoundconverter.hpp"
#include "dollartopesoconverter.hpp"
#include "mileToKilometerConverter.hpp"
#include "meterToYardConverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"

using namespace std;

class ConverterFactory
{
public:
        shared_ptr<UnitConverter> create(string const& c);
        static shared_ptr<ConverterFactory> instance();
private:
        map<string, shared_ptr<UnitConverter>> converters_ = {
                {"dollarToEuro", make_shared<dollarToEuroConverter>()},
                {"euroToPound", make_shared<euroToPoundConverter>()},
                {"dollarToPeso", make_shared<dollarToPesoConverter>()},
                {"mileToKilometer", make_shared<mileToKilometerConverter>()},
                {"meterToYard", make_shared<meterToYardConverter>()},
                {"celsiusToFahrenheit", make_shared<celsiusToFahrenheitConverter>()},
                {"celsiusToKelvin", make_shared<celsiusToKelvinConverter>()}};
        static shared_ptr<ConverterFactory> s_instance;
}; 

#endif // CONVERTERFACTORY_H