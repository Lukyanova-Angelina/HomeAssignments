/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#ifndef WEAPON
#define WEAPON
#include <iostream>
#include <string>

class Weapon
{
private:
    int _Damage, _Distance;
public:
    Weapon(int damage, int dist);
    ~Weapon();

    // Gets
    int getDamage();
    int getDistance();

    // Sets
    void setDamage(int dmg);
    void setDistance(int dist);
};

#endif