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

class ConverterFactory
{
public:
        std::shared_ptr<UnitConverter> create(std::string const& c);
        static std::shared_ptr<ConverterFactory> instance();
private:
        std::map<std::string, std::shared_ptr<UnitConverter>> converters_ = {
                {"dollarToEuro", std::make_shared<dollarToEuroConverter>()},
                {"euroToPound", std::make_shared<euroToPoundConverter>()},
                {"dollarToPeso", std::make_shared<dollarToPesoConverter>()},
                {"mileToKilometer", std::make_shared<mileToKilometerConverter>()},
                {"meterToYard", std::make_shared<meterToYardConverter>()},
                {"celsiusToFahrenheit", std::make_shared<celsiusToFahrenheitConverter>()},
                {"celsiusToKelvin", std::make_shared<celsiusToKelvinConverter>()}};
        static std::shared_ptr<ConverterFactory> s_instance;
}; 

#endif // CONVERTERFACTORY_H