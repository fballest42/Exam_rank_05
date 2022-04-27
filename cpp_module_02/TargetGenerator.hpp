#pragma once

#include <map>
#include <iostream>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget *> arr;
		
		TargetGenerator(TargetGenerator const &rhs);
		TargetGenerator &operator=(TargetGenerator const &rhs);
	public:
		TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &type);
		ATarget *createTarget(std::string const &type);
};
