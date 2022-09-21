#pragma once

#include<iostream>
#include"ATarget.hpp"

class ATarget;

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const name, std::string const effects);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &equal);
        ~ASpell();
        std::string const &getName(void) const;
        std::string const &getEffects(void) const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &target) const;
};
