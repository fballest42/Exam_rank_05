#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class SpellBook
{
	private:
		std::vector<ASpell*>	spells;
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &copy);
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		ASpell *createSpell(std::string const &spellname);
};

#endif

