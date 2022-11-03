#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    
    public:
        ASpell();
        ASpell(ASpell const &copy);
        ASpell &operator=(ASpell const &copy);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        std::string const &getName(void) const;
        std::string const &getEffects(void) const;
        void launch(ATarget const &target);
        virtual ASpell *clone(void) const = 0;
};

#endif
