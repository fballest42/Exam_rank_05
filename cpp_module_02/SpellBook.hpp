#pragma once

#include <map>
#include <iostream>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell *> arr;
		
		SpellBook(SpellBook const &rhs);
		SpellBook &operator=(SpellBook const &rhs);
	public:
		SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &name);
		ASpell *createSpell(std::string const &name);
};
