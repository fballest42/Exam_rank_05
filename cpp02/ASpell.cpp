#include"ASpell.hpp"

ASpell::ASpell(): name(), effects() {}
ASpell::ASpell(std::string const &name, std::string const &effects): name(name), effects(effects) {}
ASpell::ASpell(ASpell const &copy): name(copy.name), effects(copy.effects) {}
ASpell &ASpell::operator=(ASpell const &copy)
{
	this->name = copy.getName();
	this->effects = copy.getEffects();
	return (*this);
}
ASpell::~ASpell() {}
std::string const &ASpell::getName() const { return (this->name); }
std::string const &ASpell::getEffects() const { return (this->effects); }
void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
