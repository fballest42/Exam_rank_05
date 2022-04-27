#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This look like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name <<  ": My job here is done!\n";
}

std::string const &Warlock::getName() const { return this->name; }

std::string const &Warlock::getTitle() const { return this->title;  }

void Warlock::setTitle(std::string const &title) { this->title = title; }

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}
void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
}

void Warlock::forgetSpell(std::string name)
{
	arr.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget &target)
{
	if  (arr.find(name)!= arr.end())
		arr[name]->launch(target);
}
