#include "person.hh"
Person::Person(const std::string& name, unsigned int age) : name_(name), age_(age)
{}
std::string Person::name_get() const
{
    return name_;
}
void Person::name_set(const std::string& name)
{
    name_ = name;
}
unsigned int Person::age_get() const
{
    return age_;
}
void Person::age_set(unsigned int age)
{
    age_ = age;
}
