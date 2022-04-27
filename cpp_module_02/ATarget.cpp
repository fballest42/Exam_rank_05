#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const& type)
{
	this->type = type;
}


ATarget::ATarget(ATarget const &rhs)
{
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const { return this->type; }

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
