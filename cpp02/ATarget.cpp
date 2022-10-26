#include "ATarget.hpp"

ATarget::ATarget(): type() {}
ATarget::ATarget(std::string const &type): type(type) {}
ATarget::ATarget(ATarget const &copy): type(copy.type) {}
ATarget &ATarget::operator=(ATarget const &copy)
{
    this->type = copy.type;
    return *this;
}
ATarget::~ATarget() {}

std::string const &ATarget::getType(void) const { return this->type; }
void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->type << " has benn " << spell.getEffects() << "!" << std::endl;
}
