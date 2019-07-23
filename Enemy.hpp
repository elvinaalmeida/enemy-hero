//#pragma one
#include <cstdlib>
#include <ctime>



class Enemy
{
public:
    Enemy(int enemhPoint, int enemyStrength);
    ~Enemy();
    int attack();
    int updatePoints(int weapon);
    int hitPoint(int point);
    int weaponStrength(int);
    
private:
    unsigned seed;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;
    int hit_point;
    int weapon_strength;
    
};


