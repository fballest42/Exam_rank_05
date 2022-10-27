/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:51:10 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/27 14:12:26 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <vector>
# include "ASpell.hpp"

class SpellBook
{
private:
	std::vector<ASpell*> spells;

	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);
public:
	SpellBook();
	virtual ~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	ASpell *generateSpell(std::string const &spellName);
};

#endif
