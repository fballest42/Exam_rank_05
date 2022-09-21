#pragma once

#include<iostream>

class Warlock{
    private:
        std::string     name;
        std::string     title;

        Warlock(void);
        Warlock(const Warlock &war);
        Warlock &operator=(const Warlock &equal);
    public:
        Warlock(const std::string nam, const std::string tit);
        ~Warlock();
        //Getters
        std::string const &getName(void) const;
        std::string const &getTitle(void) const;
        //Setters
        void setTitle(const std::string &newTitle);
        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spell);
        void lanchSpell(std::string spell, ATarget &target);
};
