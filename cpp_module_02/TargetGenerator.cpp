#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		arr.insert(std::pair<std::string, ATarget *>(target->getType(), target));
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	arr.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
	if  (arr.find(type) != arr.end())
		return arr[type];
	return NULL;
}
