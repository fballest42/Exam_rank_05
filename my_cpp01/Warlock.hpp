#pragma once

#include<iostream>
#include<map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class ATarget;

class Warlock
{
	private:
		std::string							name;
		std::string							title;
		std::map<std::string, ATarget *> 	arr;

	public:
		Warlock();
		Warlock(std::string nam, std::string tit);
		Warlock(Warlock const &ref);
		Warlock &operator=(Warlock const &copy);
		~Warlock();

		std::string		getName() const;
		std::string		getTitle() const;
		void			setTitle(std::string const tit);
		void			introduce() const;
		void			learnSpell(ASpell *ref);
		void			forgetSpell(std::string name);
		void			launchSpell(std::string spell, ATarget const &tar);
};
