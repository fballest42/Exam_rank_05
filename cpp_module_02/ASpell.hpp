#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{
	private:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell(std::string const& name, std::string const &effects);
		ASpell(ASpell const& rhs);
		ASpell &operator=(ASpell const &rhs);
		~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(ATarget const &target) const;
};
