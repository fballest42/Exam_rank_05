#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
}

void SpellBook::forgetSpell(std::string const &name)
{
	arr.erase(name);
}

ASpell *SpellBook::createSpell(std::string const &name)
{
	if  (arr.find(name)!= arr.end())
		return arr[name];
	return NULL;
}
