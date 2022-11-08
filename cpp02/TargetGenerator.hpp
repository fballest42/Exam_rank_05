#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::vector<ATarget*>	types;
		TargetGenerator(std::vector<ATarget*> types);
		TargetGenerator(TargetGenerator const &targets);
		TargetGenerator &operator=(TargetGenerator const &targets);
	public:
		TargetGenerator();
		virtual ~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &type);
		ATarget *createTarget(std::string const &target);
};

#endif
