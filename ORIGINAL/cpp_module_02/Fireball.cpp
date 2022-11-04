/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:49:03 by ncolomer          #+#    #+#             */
/*   Updated: 2022/11/04 09:06:20 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball():
	ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

ASpell *Fireball::clone(void) const {
	return (new Fireball(*this));
}
