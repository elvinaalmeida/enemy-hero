#include "Enemy.hpp"



Enemy::Enemy(int enemyPoint, int enemyStrength)
{
    seed = time(0);
    srand(seed);
    hit_point=enemyPoint;
    weapon_strength= enemyStrength;
}

Enemy::~Enemy()
{
    
}

int Enemy::attack()
{
    return (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
}

int Enemy::updatePoints(int weapon)
{
    
    hit_point -= weapon;
    return hit_point;
}

int Enemy::hitPoint(int point)
{
    return point;
}

int Enemy::weaponStrength(int weaponStrength)
{
    return weaponStrength;
}
