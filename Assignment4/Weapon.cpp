/*
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#include "Weapon.h"


Weapon::Weapon(int damage, int dist):
    _Damage(damage),
    _Distance(dist) {}

Weapon::Weapon():
    _Damage(100),
    _Distance(10) {}


Weapon::~Weapon() {};

int Weapon::getDamage()
{
    return _Damage;
}
int Weapon::getDistance()
{
    return _Distance;
}
void Weapon::setDamage(int dmg)
{
    _Damage = dmg;
}
void Weapon::setDistance(int dist)
{
    _Distance = dist;
}
std::ostream & operator<<(std::ostream & os, Weapon& n)
{
    return os <<"Weapon"<<std::endl<< "Damage: "<<n.getDamage()<<std::endl<< "Distance: "<<n.getDistance()<<std::endl;
}