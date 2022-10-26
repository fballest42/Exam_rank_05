/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:48:20 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/26 11:38:25 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph: public ASpell
{
public:
	Polymorph();
	virtual ~Polymorph();

	virtual ASpell *clone(void) const;
};

#endif
