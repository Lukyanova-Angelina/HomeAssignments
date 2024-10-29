/*128743*/

#include "ClassWeapon.h"


Weapon::Weapon(int damage, int dist): 
   _Damage(damage),
   _Distance(dist){}

Weapon::~Weapon(){};

int Weapon::getDamage(){
	return _Damage;
}
int Weapon::getDistance(){
	return _Distance;
}
void Weapon::setDamage(int dmg){
	_Damage = dmg;
}
void Weapon::setDistance(int dist){
	_Distance = dist;
}