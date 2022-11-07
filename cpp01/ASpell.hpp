#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(ASpell const &copy);
		ASpell &operator(ASpell const &copy);
		virtual ~ASpell();
		std::string const &getName() const;
		std::string const &getEffects() const;
		virtual Aspell *clone() const = 0;
};

#endif
