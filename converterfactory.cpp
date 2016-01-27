#include "converterfactory.hpp"

std::shared_ptr<UnitConverter> ConverterFactory::create(std::string const& c)
{
        
        if (converters_.count(c) != 0)
        {
                return converters_[c];
        }
        else
        {
                throw std::invalid_argument("\033[5;31mERROR:\033[0m Converter not found!");
                return NULL;
        }
} 

std::shared_ptr<ConverterFactory> ConverterFactory::instance()
{
        if(!s_instance)
        {
                s_instance = std::make_shared<ConverterFactory>();
        }
        return s_instance;
}