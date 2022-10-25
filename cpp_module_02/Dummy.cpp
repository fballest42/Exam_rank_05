/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:16:30 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/25 11:24:59 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy():
	ATarget("Dummy Practice") {}

Dummy::~Dummy() {}

ATarget *Dummy::clone(void) const {
	return (new Dummy(*this));
}
