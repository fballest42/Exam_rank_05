#include"Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}
Fwoosh::ASpell *clone() const { return (new Fwoosh(*this)); }
