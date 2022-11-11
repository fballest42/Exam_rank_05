#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string				name;
		std::string 			title;
		std::vector<ASpell*> 	spells;
		Warlock();
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);
	public:
		virtual ~Warlock();
		Warlock(std::string const &name, std::string const &title);
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		void launchSpell(std::string const &spellname, ATarget const &target);
};

#endif

