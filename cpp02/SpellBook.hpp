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
		SpellBook(std::vector<ASpell*>);
		SpellBook(SpellBook const &spellbook);
		SpellBook &operator=(SpellBook const &spellbook);
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		ASpell *createSpell(std::string const &spell);
};

#endif
