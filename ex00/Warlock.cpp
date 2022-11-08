#include"Warlock.hpp"

Warlock::Warlock(): name(), title() {}
Warlock::Warlock(Warlock const &copy): name(copy.name), title(copy.title) {}
Warlock &Warlock::operator=(Warlock const &copy)
{
	this->name = copy.name;
	this->title = copy.name;
	return (*this);
}
Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title) 
{
	std::cout << this->name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}
std::string const &Warlock::getName() const { return (this->name); }
std::string const &Warlock::getTitle() const { return (this->title); }
void Warlock::setTitle(std::string const &title) const { this->title = title; }
void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

