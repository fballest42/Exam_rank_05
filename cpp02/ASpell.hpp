#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &copy);
        ASpell &operator=(ASpell const &copy);
        virtual ~ASpell();

        std::string const &getName(void) const;
        std::string const &getEffects(void) const;

        void    launch(ATarget const &target) const;
        virtual ASpell *clone(void) const = 0;
};

#endif
