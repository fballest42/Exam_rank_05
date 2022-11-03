#include"ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string const &type): type(type) {}
ATarget::ATarget(ATarget const &copy): type(copy.type) {}
ATarget &ATarget::operator=(ATarget const &copy)
{
    this->type = copy.getType();
    return (*this);
}
ATarget::~ATarget() {}
std::string const &ATarget::getType(void) const
{
    return (this->type);
}
void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
