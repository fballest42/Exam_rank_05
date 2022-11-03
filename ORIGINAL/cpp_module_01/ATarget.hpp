/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:06:18 by ncolomer          #+#    #+#             */
/*   Updated: 2022/11/03 12:23:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(std::string const &type);
	ATarget(ATarget const &other);
	virtual ~ATarget();

	ATarget &operator=(ATarget const &other);

	std::string const &getType(void) const;

	void getHitBySpell(ASpell const &spell) const;

	virtual ATarget *clone(void) const = 0;
};

# include "ASpell.hpp"

#endif
