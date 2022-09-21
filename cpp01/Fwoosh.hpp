#pragma once

#includeº"ASpell.hpp"

class Fwoosh: public ASpell
{
    Fwoosh();
    ~Fwoosh();

    virtual ASpell clone() const;
}
