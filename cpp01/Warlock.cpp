#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const title): name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName(void) const {return this->name;}
std::string const &Warlock::getTitle(void) const {return this->title;}

void Warlock::setTitle(std::string const &title) {this->title = title;}

void Warlock::introduce(void) const
{
    std::cout << this->name << ": My name is " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if(spell)
    {
        std::vector<ASpell*>::iterator ite = this->spells.end();
        for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
        {
            if ((*it)->getName() == spell->getName())
                return ;
        }
        this->spells.push_back(spell->clone());
    }
}

void Warlock::forgetSpell(std::string const &spellName)
{
    std::vector<ASpell*>::iterator ite = this->spells.end();
    for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
    {
        if ((*it)->getName() == spellName)
        {
            delete *it;
            it = this->spells.erase(it);
        }
    }
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
    std::vector<ASpell*>::iterator ite = this->spells.end();
    for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
    {
        if ((*it)->getName() == spellName)
        {
            (*it)->launch(target);
            return ;
        }
    }
}
