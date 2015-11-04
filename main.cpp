#include <memory>
#include <iostream>
#include "dollartoeuroconverter.hpp"
#include "eurotopoundconverter.hpp"
#include "dollartopesoconverter.hpp"
#include "mileToKilometerConverter.hpp"
#include "meterToYardConverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"

void help()
{
  std::cout << std::endl;
  std::cout << "Software Engineering Exercise Class WS15/16" << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "Exercise 2: Unit Converters (topic: Best Practices)" 
  << std::endl; 
  std::cout << "by theelstner, AIpeter and elmeyer" << std::endl << std::endl;


  std::cout << "Usage: ./main [converter] [number]" << std::endl;
  std::cout << "where [converter] is one of the following:" << std::endl;
  std::cout << "        dollarToEuro\n        dollarToPeso\n";
  std::cout << "        euroToPound\n        mileToKilometer\n";
  std::cout << "        meterToYard\n        celsiusToFahrenheit\n";
  std::cout << "        celsiusToKelvin" << std::endl;
  std::cout << std::endl;
}

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Invalid number of arguments!" << std::endl;
    std::cout << "For help on how to use this program, use ./main -h." 
    << std::endl;

    return 1;
  }

  std::string conversion = argv[1];

  if(conversion == "-h")
  {
    help();
    return 0;
  }

  if(argc == 3)
  {
    std::string value = argv[2];

    if(conversion == "dollarToEuro")
    {
      auto converter = std::make_shared<dollarToEuroConverter>();

      std::cout<<converter->toString()<<" has converted "<<value<<" Dollar to "
      <<converter->convert(std::stod(value))<<" Euro(s)!"<<std::endl;
    }

    else if(conversion == "euroToPound")
    {
      auto converter = std::make_shared<euroToPoundConverter>();

      std::cout<<converter->toString()<<" has converted "<<value<<" Euro to "
      <<converter->convert(std::stod(value))<<" Pound(s)!"<<std::endl;
    }

    else if(conversion == "dollarToPeso")
    {
      auto converter = std::make_shared<dollarToPesoConverter>();

      std::cout<<converter->toString()<<" has converted "<<value<<" Dollar to "
      <<converter->convert(std::stod(value))<<" Peso(s)!"<<std::endl;
    }

    else if(conversion == "mileToKilometer")
    {
      auto converter = std::make_shared<mileToKilometerConverter>();

      std::cout<<converter->toString()<<" has converted "<<value
      <<" Mile(s) to "<<converter->convert(std::stod(value))<<" Kilometer(s)!"
      <<std::endl;
    }

    else if(conversion == "meterToYard")
    {
      auto converter = std::make_shared<meterToYardConverter>();

      std::cout<<converter->toString()<<" has converted "<<value
      <<" Meter(s) to "<<converter->convert(std::stod(value))<<" Yard(s)!"
      <<std::endl;
    }

    else if(conversion == "celsiusToFahrenheit")
    {
      auto converter = std::make_shared<celsiusToFahrenheitConverter>();

      std::cout<<converter->toString()<<" has converted "<<value
      <<" Celsius to "<<converter->convert(std::stod(value))<<" Fahrenheit!"
      <<std::endl;
    }

    else if(conversion == "celsiusToKelvin")
    {
      auto converter = std::make_shared<celsiusToKelvinConverter>();

      std::cout<<converter->toString()<<" has converted "<<value
      <<" Celsius to "<<converter->convert(std::stod(value))<<" Kelvin!"
      <<std::endl;
    }

    else
    {
      std::cout << "Invalid converter: " << argv[1] << "!" << std::endl;
      std::cout << "For a list of valid converters, use ./main -h." 
      << std::endl;

      return 1;
    }
  }
  else
  {
    std::cout << "Invalid number of arguments!" << std::endl;
    std::cout << "For help on how to use this program, use ./main -h." 
    << std::endl;

    return 1;
  }

  /*
  auto myConverter = std::make_shared<dollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);

  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars 
  << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;

  */
  return 0;
}
