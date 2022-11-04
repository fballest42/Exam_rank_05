#include"ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string const &name, std::string const &effects): name(name), effects(effects) {}
ASpell::ASpell(ASpell const &copy): name(copy.name), effects(copy.effects) {}
ASpell &ASpell::operator=(ASpell const &copy)
{
	this->name = copy.getName();
	this->effects = copy.getEffects();
	return (*this);
}
ASpell::~ASpell() {}
std::string const &ASpell::getName(void) const { return (this->name); }
std::string const &ASpell::getEffects(void) const { return (this->effects); }
void ASpell::launch(ATarget const &target)
{
	target.getHitBySpell(*this);
}
