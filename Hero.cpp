#include "Hero.hpp"

Hero::Hero(int heroPoint, int heroStrength)
{
    seed = time(0);
    srand(seed);
    hit_point=heroPoint;
    weapon_strength= heroStrength;
}

Hero::~Hero()
{
    
}

int Hero::attack()
{
    return (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}

int Hero::updatePoints(int weapon)
{
    hit_point -= weapon;
    return hit_point;
}


int Hero::hitPoint(int point)
{
    return point;
}

int Hero::weaponStrength(int weaponStrength)
{
    return weaponStrength;
}
