#pragma once

#include<iostream>


class Warlock
{
	private:
		std::string		name;
		std::string		title;
	
		Warlock();
		Warlock(Warlock const &ref);
		Warlock &operator=(Warlock const &copy);
        
	public:
		Warlock(std::string nam, std::string tit);
		~Warlock();

		std::string		getName() const;
		std::string		getTitle() const;
		void			setTitle(std::string const tit);
		void			introduce() const;
};