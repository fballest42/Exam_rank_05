#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
    private:
        std::string     name;
        std::string     title;
        SpellBook       spellBook;

        Warlock();
        Warlock(Warlock const &copy);
        Warlock &operator=(Warlock const &copy);
    public:
        Warlock(std::string const &name, std::string const &title);
        virtual ~Warlock();

        std::string const &getName(void) const;
        std::string const &getTitle(void) const;
        void setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif
