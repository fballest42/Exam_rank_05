/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:59:50 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/27 12:40:43 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>
# include "ATarget.hpp"

class TargetGenerator
{
private:
	std::vector<ATarget*> types;
public:
	TargetGenerator();
	virtual ~TargetGenerator();

	void learnTargetType(ATarget *type);
	void forgetTargetType(std::string const &name);
	ATarget *createTarget(std::string const &name);
};

#endif
