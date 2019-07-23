#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Enemy.hpp"
#include "Hero.hpp"

using namespace std;

int main()
{
    
    int enemyDice=0, heroDice=0;
    int enemyPoint=100, heroPoint=150;
    int enemyStrength=5, heroStrength=10;
    
    Enemy Thanos(100,5);
    Hero CaptainMarvel(100,5);

    cout << "Begin match" << endl;

    while (enemyPoint !=0 || heroPoint !=0)
    {
        
        enemyDice= Thanos.attack();
        heroDice= CaptainMarvel.attack();
        

        cout << "Thanos rolled a " << enemyDice << "       ";
        cout << "Captain Marvel rolled a " << heroDice << endl;
        
        
        if (enemyDice > heroDice)
        {
            heroPoint=CaptainMarvel.updatePoints(enemyStrength);
            
            if (heroPoint ==0)
                break;
        }
        
        else if (heroDice > enemyDice)
        {
            enemyPoint=Thanos.updatePoints(heroStrength);
            
            if (enemyPoint ==0)
                break;
        }
    }
    
    if (enemyPoint > heroPoint)
    {
        cout << "Thanos wins...\n";
        cout << "Captain Marvel is defeated. Captin Marvel you tried your best. You are an amazing hero and will get Thanos next time! \n";
    }
    
    else if (enemyPoint < heroPoint)
    {
        cout << "Captain Marvel wins!\n";
        cout << "Thanos is defeated! Thanos you are not a good soul and deserve to loose. However, you tried your best! " << endl;
    }
    
    return 0;
}




