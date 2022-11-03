/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:37:13 by ncolomer          #+#    #+#             */
/*   Updated: 2022/11/03 09:57:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):
	name(name), title(title) {
	std::cout << this->name << ": What a boring day\n";
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName(void) const {
	return (this->name);
}

std::string const &Warlock::getTitle(void) const {
	return (this->title);
}

void Warlock::setTitle(std::string const &title) {
	this->title = title;
}

void Warlock::introduce(void) const {
	std::cout << this->name << ": My name is " << this->name << ", " << this->title << "!\n";
}
