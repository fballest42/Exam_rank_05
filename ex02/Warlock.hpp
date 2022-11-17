#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include "SpellBook.hpp"
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook  spellbook;
		Warlock();
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);
	public:
		Warlock(std::string const &name, std::string const &title);
		virtual ~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		void launchSpell(std::string const &spellname, ATarget const &target);
};

#endif
