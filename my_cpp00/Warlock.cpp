#include "Warlock.hpp"

Warlock::Warlock(std::string const nam, std::string const tit)
{
    this->name = nam;
    this->title = tit;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string		Warlock::getName() const
{
    return (this->name);
}

std::string		Warlock::getTitle() const
{
    return (this->title);
}

void			Warlock::setTitle(std::string const tit)
{
    this->title = tit;
}

void			Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}
