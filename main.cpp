#include <memory>
#include <iostream>
#include <stack>
#include <sstream>
#include <deque>
#include <vector>
#include <exception>
#include "converterfactory.hpp"
#include "inversion.hpp"
#include "command.hpp"

std::shared_ptr<ConverterFactory> ConverterFactory::s_instance = 0;

void help()
{
  std::cout << std::endl;
  std::cout << "Software Engineering Exercise Class WS15/16" << std::endl;
  std::cout << "===========================================" << std::endl;
  std::cout << "Exercise 5: Unit Converters (topic: Design Patterns (Part 2))" 
  << std::endl; 
  std::cout << "by theelstner, AIpeter and elmeyer" << std::endl << std::endl;


  std::cout << "Usage: ./main" << std::endl;
  std::cout << "Possible conversions are the following:" << std::endl;
  std::cout << "        dollarToEuro\n        dollarToPeso\n";
  std::cout << "        euroToPound\n        mileToKilometer\n";
  std::cout << "        meterToYard\n        celsiusToFahrenheit\n";
  std::cout << "        celsiusToKelvin\n";
  std::cout << "Conversions can be capsuled and inverted (by prefixing the ";
  std::cout << "desired converter with invert)." << std::endl;
  std::cout << std::endl;
}

int main(int argc, char* argv[])
{
  if(argc >= 2)
  {
    std::string input1 = argv[1];

    if(input1 == "-h")
    {
      help();
      return 0;
    }
    else
    {
      std::cout << "Invalid argument(s)!" << std::endl;
      std::cout << "For help on how to use this program, use ./main -h." 
      << std::endl;

      return 1;
    }
  }

  std::deque<std::shared_ptr<Command>> commands;

  std::cout << "Please enter the desired conversions line by line, separated ";
  std::cout << "by pressing Enter.\n";

  for (std::string line; std::getline(std::cin, line);)
  {
    std::deque<std::string> converters;
    std::shared_ptr<ConverterFactory> factory = ConverterFactory::instance();
    std::shared_ptr<UnitConverter> converter;

    std::istringstream stream{line};
    std::string word;
    int c = 0;
    while(stream.good())
    {
      stream >> word;
      converters.push_back(word);
      ++c;
    }
    if (c < 2)
    {
      std::cout << "\033[5;31mERROR:\033[0m Insufficient number of arguments!\n";
      continue;
    }

    std::string value = converters.back();
    converters.pop_back();

    if(converters.front() == "invert")
    {
      converters.pop_front();
      try
      {
        converter = std::make_shared<Inversion>(factory->create(converters.front()));
      }
      catch (std::exception const& e)
      {
        std::cout << e.what() << std::endl;
        converter = NULL;
      }
    }
    else
    {
      try
      {
        converter = factory->create(converters.front());
      }
      catch (std::exception const& e)
      {
        std::cout << e.what() << std::endl;
        converter = NULL;
      }
    }

    converters.pop_front();

    if(converters.size() > 0)
    {
      for(int j = 0; j < converters.size(); ++j)
      {
        std::shared_ptr<UnitConverter> temp;
        if(converters.front() == "invert")
        {
          converters.pop_front();
          try
          {
            temp = std::make_shared<Inversion>(factory->create(converters.front()));
          }
          catch (std::exception const& e)
          {
            std::cout << e.what() << std::endl;
            continue;
          }
        }
        else
        {
          try
          {
            temp = factory->create(converters.front());
          }
          catch (std::exception const& e)
          {
            std::cout << e.what() << std::endl;
            continue;
          }
        }
        try
        {
          temp->link(converter);
        }
        catch (std::exception const& e)
        {}
        converter = temp;
        converters.pop_front();
      }
    }
    try
    {
      std::shared_ptr<Command> command = std::make_shared<Command>(converter,
        &UnitConverter::convert, std::stod(value));
      commands.push_back(command);
    }
    catch (std::exception const& e)
    {}
  }

  int size = commands.size();

  for(int i = 0; i < size; ++i)
  {
    try
    {
      double result = commands.front()->execute();
      std::cout<<"Converted "<<commands.front()->getValue()
        <<" to "<<result<<"!"
        <<std::endl;
    }
    catch (std::exception const& e)
    {
      std::cout << e.what() << std::endl;
    }
    commands.pop_front();
  }

  /*
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
  */

  /*
  auto myConverter = std::make_shared<dollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);

  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars 
  << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;

  */
  return 0;
}
