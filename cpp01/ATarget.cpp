#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const std::string typ)
{
    this->Type = typ;
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &equal)
{
    this->Type = equal.Type;
    return (*this);
}

virtual ATarget::~ATarget(){}

std::string const &getType() const
{
    return (this->Type);
}        

void getHitBySpell(ASpell const &spell) const
{
    std::cout << thiis->Type << " has been " << spell.getEffects() << "!" << std::ednl;
}