/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:49:28 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/26 11:38:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph():
	ASpell("Polymorph", "turned to a sheep") {}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone(void) const {
	return (new Polymorph(*this));
}
