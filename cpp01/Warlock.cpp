#include "Warlock.hpp"

Warlock::Warlock(std::string const nam, std::string const tit)
{
    this->name = nam;
    this->title = tit;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

//Getters
std::string const &Warlock::getName(void) const
{
    return (this->name);
}

std::string const &Warlock::getTitle(void) const
{
    return (this->title);
}
//Setters
void Warlock::setTitle(const std::string newTitle)
{
    this->title = newTitle;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}
