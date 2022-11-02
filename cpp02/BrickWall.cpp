#include"BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Incospicious Red-brick Wall") {}
BrickWall::~BrickWall() {}
ATarget *BrickWall::clone(void) const
{
    return (new BrickWall(*this));
}
