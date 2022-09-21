#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const std::string typ)
{
    this->type = typ;
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &equal)
{
    this->type = equal.type;
    return (*this);
}

virtual ATarget::~ATarget(){}

std::string const &getType() const
{
    return (this->type);
}        

void getHitBySpell(ASpell const &spell) const
{
    std::cout << thiis->type << " has been " << spell.getEffects() << "!" << std::ednl;
}