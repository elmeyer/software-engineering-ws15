#include <memory>
#include <iostream>
#include <stack>
#include "converterfactory.hpp"
#include "inversion.hpp"

std::shared_ptr<ConverterFactory> ConverterFactory::s_instance = 0;

void help()
{
  std::cout << std::endl;
  std::cout << "Software Engineering Exercise Class WS15/16" << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "Exercise 4: Unit Converters (topic: Design Patterns (Part 1))" 
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

  std::string input1 = argv[1];

  if(input1 == "-h")
  {
    help();
    return 0;
  }

  if(argc >= 3)
  {
    std::stack<std::string> converters;
    std::shared_ptr<ConverterFactory> factory = ConverterFactory::instance();
    std::shared_ptr<UnitConverter> converter;
    std::string value = argv[argc-1];

    for(int i = argc-2; i > 0; --i)
    {
      converters.push(argv[i]);
    }

    if(converters.top() == "invert")
    {
      converters.pop();
      converter = std::make_shared<Inversion>(factory->create(converters.top()));
    }
    else
    {
      converter = factory->create(converters.top());
    }

    converters.pop();

    if(converters.size() > 0)
    {
      for(int j = 0; j < converters.size(); ++j)
      {
        std::shared_ptr<UnitConverter> temp;
        if(converters.top() == "invert")
        {
          converters.pop();
          temp = std::make_shared<Inversion>(factory->create(converters.top()));
        }
        else
        {
          temp = factory->create(converters.top());
        }
        temp->link(converter);
        converter = temp;
        converters.pop();
      }
    }

    if (converter != NULL)
    {
      std::cout<<converter->toString()<<" converted "<<value
      <<" to "<<converter->convert(std::stod(value))<<"!"
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
