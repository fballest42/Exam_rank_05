/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:48:38 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/26 11:38:13 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball: public ASpell
{
public:
	Fireball();
	virtual ~Fireball();

	virtual ASpell *clone(void) const;
};

#endif
