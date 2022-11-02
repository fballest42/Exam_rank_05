/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:37:27 by ncolomer          #+#    #+#             */
/*   Updated: 2022/11/02 11:58:10 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const &other);

	Warlock &operator=(Warlock const &other);
public:
	Warlock(std::string const &name, std::string const &title);
	virtual ~Warlock();

	std::string const &getName(void) const;
	std::string const &getTitle(void) const;

	void setTitle(std::string const &title);

	void introduce(void) const;
};

#endif
