#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string		name;
		std::string		effects;

	public:
		ASpell();
		ASpell(std::string const nam, std::string const effect);
		ASpell(ASpell const &ref);
		ASpell	&operator=(ASpell const &copy);
		~ASpell();

		std::string		getName() const;
		std::string		getEffects() const;
		virtual ASpell	*clone() const = 0;
		void			launch(ATarget const &tar) const;
};
