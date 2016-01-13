cmake_minimum_required(VERSION 2.8)
project(software-engineering-ws15-tests)
set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")

add_executable(tests tests.cpp ../celsiustofahrenheitconverter.cpp ../celsiustokelvinconverter.cpp ../command.cpp ../converterfactory.cpp ../currencyconverter.cpp ../decorator.cpp ../dollartoeuroconverter.cpp ../dollartopesoconverter.cpp ../eurotopoundconverter.cpp ../inversion.cpp ../lengthConverter.cpp ../meterToYardConverter.cpp ../mileToKilometerConverter.cpp ../temperatureconverter.cpp ../unitconverter.cpp)

add_test(tests tests tinytest)