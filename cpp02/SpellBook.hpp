#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <vector>
# include "ASpell.hpp"

class SpellBook
{
    private:
        std::vector<ASpell*>    spells;
        SpellBook(SpellBook const &copy);
        SpellBook &operator=(SpellBook const &copy);
    public:
        SpellBook();
        virtual ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        ASpell *generateSpell(std::string const &spellName);
};

#endif
