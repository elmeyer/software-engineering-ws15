#include "command.hpp"

Command::Command(std::shared_ptr<UnitConverter> object, Action method, double value):
  m_object(object),
  m_method(method),
  m_value(value)
{
  if (m_object == NULL)
  {
    throw std::invalid_argument("");
  }
}

double Command::execute() const
{
  return (m_object.get()->*m_method)(m_value);
}

double Command::getValue() const
{
  return m_value;
}