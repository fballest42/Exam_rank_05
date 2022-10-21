#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const typ)
{
    this->type = typ;
}

ATarget::ATarget(ATarget const &ref)
{
    this->type = ref.type;
}

ATarget &ATarget::operator=(ATarget const &copy)
{
    *this = copy;
}

ATarget::~ATarget() {}

std::string     ATarget::getType() const
{
    return (this->type);
}

void	ATarget::getHitBySpell(ASpell const &hit) const
{
    std::cout << this->type << " has been " << hit.getEffects() << "!" << std::endl;
}
