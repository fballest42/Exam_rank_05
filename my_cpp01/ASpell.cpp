#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const nam, std::string const effect)
{
    this->name = nam;
    this->effects = effect;
}

ASpell::ASpell(ASpell const& ref)
{
    this->name = ref.name;
    this->effects = ref.effects;
}

ASpell &ASpell::operator=(ASpell const &ref)
{
    *this = ref;
}

ASpell::~ASpell() {}

std::string		ASpell::getName() const
{
    return (this->name);
}

std::string		ASpell::getEffects() const
{
    return (this->effects);
}

void            ASpell::launch(ATarget const &tar) const
{
    tar.getHitBySpell(*this);
}
