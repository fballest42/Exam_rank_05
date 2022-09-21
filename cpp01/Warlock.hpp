#pragma once

#include<iostream>
#include<map>
#include"ATarget.hpp"
#include"ASpell.hpp"

class Warlock{
    private:
        std::string     name;
        std::string     title;

        Warlock(void);
        Warlock(const Warlock &war);
        Warlock &operator=(const Warlock &equal);

        std::map<std::string, ASpell *> arr;
    public:
        Warlock(const std::string nam, const std::string tit);
        ~Warlock();
        //Getters
        std::string const &getName(void) const;
        std::string const &getTitle(void) const;
        //Setters
        void setTitle(const std::string &newTitle);
        void introduce() const;

        //NEW ON CPP01

};
