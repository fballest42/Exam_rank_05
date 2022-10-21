#pragma once
#include<iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string			type;
	
	public:
		ATarget();
		ATarget(std::string const typ);
		ATarget(ATarget const &ref);
		ATarget &operator=(ATarget const &copy);
		~ATarget();

		std::string			getType() const;
		virtual ATarget		*clone() const = 0;
		void				getHitBySpell(ASpell const &hit) const;
};