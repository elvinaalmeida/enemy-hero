#pragma one
#include <cstdlib>
#include <ctime>

class Hero
{
public:
    Hero(int heroPoint, int heroStrength);
    ~Hero();
    int attack();
    int hitPoint(int point);
    int updatePoints(int weapon);
    int weaponStrength(int);
    
private:
    unsigned seed;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;
    int hit_point;
    int weapon_strength;
};

