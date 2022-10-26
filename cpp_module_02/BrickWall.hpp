/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:58:33 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/26 11:37:57 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall: public ATarget
{
public:
	BrickWall();
	virtual ~BrickWall();

	virtual ATarget *clone(void) const;
};

#endif
