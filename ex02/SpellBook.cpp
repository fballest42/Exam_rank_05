#include"SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook()
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
	{
		delete (*it);
	}
	this->spells.clear();
}
void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellname)
		{
			delete(*it);
			it = this->spells.erase(it);
		}
	}	
}

ASpell *SpellBook::createSpell(std::string const &spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellname)
			return (*it);
	}
	return (nullptr);
}

