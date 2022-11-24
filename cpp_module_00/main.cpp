/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:33:40 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/24 14:29:22 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"


int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}
// int main(void)
// {    
	// //std::cout << "--- Constructors:\n";
	// //Warlock warlock; // Doesn't compile
	// Warlock richard("Richard", "Master of the Universe");
	// //Warlock warlock(richard); // Doesn't compile
	// //Warlock warlock = richard; // Doesn't compile

	// //std::cout << "--- Introduce:\n";
	// richard.introduce();

	// //std::cout << "--- New Title:\n";
	// richard.setTitle("Master of the Earth");
	// richard.introduce();

	// //std::cout << "--- Destructors:\n";
	// return (0);
// }
