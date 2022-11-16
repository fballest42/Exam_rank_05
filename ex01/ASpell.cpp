#include"ASpell.hpp"

ASpell::ASpell(): name(), effects() {}

ASpell::ASpell(std::string const &name, std::string const &title): name(name), effects(effects) {}

ASpell::ASpell(ASpell const &copy): name(copy.name), effects(copy.effects) {}
ASpell &ASpell::operator=(ASpell const &copy);
virtual ~ASpell();
std::string const &getName() const;
std::string const &getTitle() const;

