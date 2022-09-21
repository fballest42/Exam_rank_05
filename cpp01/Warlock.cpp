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

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
    arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
}

void Warlock::forgetSpell(std::string spell)
{
    arr.erase(spell);
}

void Warlock::lanchSpell(std::string spell, ATarget &target)
{
    if (arr.find(spell) != arr.end())
        arr[spell]->launch(target);
}
