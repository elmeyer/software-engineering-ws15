cmake_minimum_required(VERSION 2.8)
project(software-engineering-ws15)
set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")

enable_testing()

add_library(converters celsiustofahrenheitconverter.cpp celsiustokelvinconverter.cpp command.cpp converterfactory.cpp currencyconverter.cpp decorator.cpp dollartoeuroconverter.cpp dollartopesoconverter.cpp eurotopoundconverter.cpp inversion.cpp lengthConverter.cpp meterToYardConverter.cpp mileToKilometerConverter.cpp temperatureconverter.cpp unitconverter.cpp)

add_executable(main main.cpp)
target_link_libraries(main converters)

add_subdirectory(tinytest)