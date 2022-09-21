#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const name, std::string const effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(const ASpell &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(const ASpell &equal);
{
    this->name = equal.name;
    this->effects = equal.effects;
    return (*this);
}

ASpell::~ASpell(){}

std::string const &getName(void) const
{
    return (this->name);
}

std::string const &getEffects(void) const
{
    return (this->effects);
}

void launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}
