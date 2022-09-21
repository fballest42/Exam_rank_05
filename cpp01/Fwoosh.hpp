#pragma once

#include<ASpell>

class Fwoosh: public ASpell
{
    Fwoosh();
    ~Fwoosh();

    virtual ASpell clone() const;
}
