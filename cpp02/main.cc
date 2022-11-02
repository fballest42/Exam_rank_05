/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:35:12 by ncolomer          #+#    #+#             */
/*   Updated: 2022/11/02 13:10:51 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	std::cout << "--- Constructors:\n";
	Warlock richard("Aang", "The Avatar");

	std::cout << "--- Spells:\n";
	Polymorph *water = new Polymorph();
	Fireball *fire = new Fireball();
	Fwoosh *air = new Fwoosh();
	richard.learnSpell(water);
	richard.learnSpell(fire);
	richard.forgetSpell("Fwoosh");
	richard.learnSpell(air);
	richard.forgetSpell("Fwoosh");
	richard.forgetSpell("Fwoosh");
	richard.learnSpell(air);

	std::cout << "--- Targets:\n";
	Dummy *hay = new Dummy();
	BrickWall *earth = new BrickWall();

	TargetGenerator tarGen;
	tarGen.learnTargetType(hay);
	tarGen.learnTargetType(earth);

	std::cout << "--- Spells (all):\n";
    std::cout << "0\n";
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Dummy Practice"));
    std::cout << "1\n";
	richard.launchSpell("Fireball", *tarGen.createTarget("BrickWall Practice"));
    std::cout << "2\n";
	richard.launchSpell("Polymorph", *tarGen.createTarget("Dummy Practice"));
    std::cout << "3\n";
        
	std::cout << "--- Forgotten \"Fwoosh\":\n";

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *tarGen.createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *tarGen.createTarget("Dummy Practice"));

	std::cout << "--- Spells (all):\n";


	richard.learnSpell(air);

	richard.launchSpell("Fwoosh", *tarGen.createTarget("Dummy Practice"));
    richard.launchSpell("Fireball", *tarGen.createTarget("BrickWall Practice"));
    richard.launchSpell("Polymorph", *tarGen.createTarget("Dummy Practice"));
	
    std::cout << "--- Non-existant spell:\n";

	richard.launchSpell("ACID", *tarGen.createTarget("BrickWall Practice"));
	richard.forgetSpell("ACID");
	richard.launchSpell("ACID", *tarGen.createTarget("Dummy Practice"));

	std::cout << "--- Destructors:\n";
	return (0);
}
