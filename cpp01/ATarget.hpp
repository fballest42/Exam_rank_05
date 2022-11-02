#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string     type;

    public:
        ATarget();
        ATarget(std::string const &type);
        ATarget(ATarget const &copy);
        ATarget &operator=(ATarget const &copy);
        virtual ~ATarget();

        std::string const &getType(void) const;
        virtual ATarget *clone(void) const = 0;
        void getHitBySpell(ASpell const &spell) const;
};

#endif
