#pragma once

#include<iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
    private:
        std::string     Type;
    public:
        ATarget();
        ATarget(const std::string typ);
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &equal);
        virtual ~ATarget();

        std::string const &getType() const;
        virtual ATarget *clone() const = 0;
        
        void getHitBySpell(ASpell const &spell) const;
};
