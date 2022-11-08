#include"Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "brunt to a crisp") {}
Fireball::~Fireball() {}
ASpell *Fireball::clone() const
{
	return (new Fireball(*this));
}
